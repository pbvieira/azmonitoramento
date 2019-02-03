/******************************************************************************/
/*                  Generated by IBExpert 3/2/2019 00:28:36                   */
/******************************************************************************/

/******************************************************************************/
/*        Following SET SQL DIALECT is just for the Database Comparer         */
/******************************************************************************/
SET SQL DIALECT 3;



/******************************************************************************/
/*                                   Tables                                   */
/******************************************************************************/


CREATE GENERATOR GEN_LOGULTIMOESTADO_ID;

CREATE TABLE LOGULTIMOESTADO (
    CDLOGULTIMOESTADO  INTEGER NOT NULL,
    CDCLIENTE          INTEGER NOT NULL,
    ULTIMOEVENTO       VARCHAR(100),
    ESTADOCENTRAL      VARCHAR(100),
    IDENTIFICACAO      VARCHAR(100),
    DATACADASTRO       DATE NOT NULL,
    DATAULTIMOEVENTO   TIMESTAMP,
    DATAESTADOCENTRAL  TIMESTAMP,
    DATAIDENTIFICACAO  TIMESTAMP
);




/******************************************************************************/
/*                                Primary keys                                */
/******************************************************************************/

ALTER TABLE LOGULTIMOESTADO ADD CONSTRAINT PK_LOGULTIMOESTADO PRIMARY KEY (CDLOGULTIMOESTADO);


/******************************************************************************/
/*                                  Indices                                   */
/******************************************************************************/

CREATE INDEX LOGULTIMOESTADO_IDX1 ON LOGULTIMOESTADO (DATACADASTRO);
CREATE INDEX LOGULTIMOESTADO_IDX2 ON LOGULTIMOESTADO (CDCLIENTE);


/******************************************************************************/
/*                                  Triggers                                  */
/******************************************************************************/



SET TERM ^ ;



/******************************************************************************/
/*                            Triggers for tables                             */
/******************************************************************************/



/* Trigger: LOGULTIMOESTADO_BI */
CREATE OR ALTER TRIGGER LOGULTIMOESTADO_BI FOR LOGULTIMOESTADO
ACTIVE BEFORE INSERT POSITION 0
AS
BEGIN
  IF (NEW.CDLOGULTIMOESTADO IS NULL) THEN
    NEW.CDLOGULTIMOESTADO = GEN_ID(GEN_LOGULTIMOESTADO_ID,1);
END
^

SET TERM ; ^

/*******************************************************************************/

SET TERM ^ ;

CREATE OR ALTER PROCEDURE SP_LOGULTIMOESTADO (
    DATACADASTRO DATE NOT NULL,
    DATAEVENTO TIMESTAMP NOT NULL,
    CDCLIENTE INTEGER NOT NULL,
    DESCRICAO VARCHAR(100) NOT NULL,
    TIPOEVENTO INTEGER NOT NULL)
AS
DECLARE VARIABLE CDLOGULTIMOESTADO INTEGER;
BEGIN
    SELECT L.CDLOGULTIMOESTADO
      FROM LOGULTIMOESTADO L
      WHERE L.CDCLIENTE=:CDCLIENTE AND L.DATACADASTRO=:DATACADASTRO INTO :CDLOGULTIMOESTADO;

    IF (CDLOGULTIMOESTADO > 0) THEN
      BEGIN
        IF (TIPOEVENTO = 1) THEN
          BEGIN
            UPDATE LOGULTIMOESTADO SET ULTIMOEVENTO=:DESCRICAO, DATAULTIMOEVENTO=:DATAEVENTO WHERE CDLOGULTIMOESTADO=:CDLOGULTIMOESTADO;
          END

        IF (TIPOEVENTO = 2) THEN
          BEGIN
            UPDATE LOGULTIMOESTADO SET ESTADOCENTRAL=:DESCRICAO, DATAESTADOCENTRAL=:DATAEVENTO WHERE CDLOGULTIMOESTADO=:CDLOGULTIMOESTADO;
          END

        IF (TIPOEVENTO = 3) THEN
          BEGIN
            UPDATE LOGULTIMOESTADO SET IDENTIFICACAO=:DESCRICAO, DATAIDENTIFICACAO=:DATAEVENTO WHERE CDLOGULTIMOESTADO=:CDLOGULTIMOESTADO;
          END

      END ELSE
      BEGIN
        IF (TIPOEVENTO = 1) THEN
          BEGIN
            INSERT INTO LOGULTIMOESTADO (CDCLIENTE, DATACADASTRO, DATAULTIMOEVENTO, ULTIMOEVENTO) VALUES(:CDCLIENTE, :DATACADASTRO, :DATAEVENTO, :DESCRICAO);
          END

        IF (TIPOEVENTO = 2) THEN
          BEGIN
            INSERT INTO LOGULTIMOESTADO (CDCLIENTE, DATACADASTRO, DATAESTADOCENTRAL, ESTADOCENTRAL) VALUES(:CDCLIENTE, :DATACADASTRO, :DATAEVENTO, :DESCRICAO);
          END

        IF (TIPOEVENTO = 3) THEN
          BEGIN
            INSERT INTO LOGULTIMOESTADO (CDCLIENTE, DATACADASTRO, DATAIDENTIFICACAO, IDENTIFICACAO) VALUES(:CDCLIENTE, :DATACADASTRO, :DATAEVENTO, :DESCRICAO);
          END
      END
END^

SET TERM ; ^

/* Following GRANT statements are generated automatically */

GRANT SELECT,INSERT,UPDATE ON LOGULTIMOESTADO TO PROCEDURE SP_LOGULTIMOESTADO;

/* Existing privileges on this procedure */

GRANT EXECUTE ON PROCEDURE SP_LOGULTIMOESTADO TO SYSDBA;

/*******************************************************************************/

SET SQL DIALECT 3;



SET TERM ^ ;



CREATE OR ALTER TRIGGER ULTIMOESTADO_BI FOR LOGEVENTO
ACTIVE BEFORE INSERT POSITION 1
AS
DECLARE VARIABLE TPULTIMOEVENTO INTEGER = 1;
DECLARE VARIABLE TPESTADOCENTRAL INTEGER = 2;
DECLARE VARIABLE TPIDENTIFICACAO INTEGER = 3;
DECLARE VARIABLE DESCRICAOEVENTO VARCHAR(100);

BEGIN
    DESCRICAOEVENTO = NEW.STATUS || '.' || REPLACE(NEW.REFERENCIA, 'F', '*') || ' ' || NEW.DESTATUS;

    -- ULTIMO EVENTO
    EXECUTE PROCEDURE SP_LOGULTIMOESTADO(NEW.DATAEVENTO, NEW.DATAEVENTO, NEW.CDCLIENTE, DESCRICAOEVENTO, TPULTIMOEVENTO);

    -- ESTADOCENTRAL
    IF (NEW.STATUS = '0' AND (NEW.REFERENCIA = '0F' OR NEW.REFERENCIA = '00' OR NEW.REFERENCIA = '8F' OR NEW.REFERENCIA = '80')) THEN
    BEGIN
       EXECUTE PROCEDURE SP_LOGULTIMOESTADO(NEW.DATAEVENTO, NEW.DATAEVENTO, NEW.CDCLIENTE, DESCRICAOEVENTO, TPESTADOCENTRAL);
    END
    -- IDENTIFICAÇÃO
    IF (NEW.STATUS = '8' AND (NEW.REFERENCIA = '4F' OR NEW.REFERENCIA = '40')) THEN
    BEGIN
       EXECUTE PROCEDURE SP_LOGULTIMOESTADO(NEW.DATAEVENTO, NEW.DATAEVENTO, NEW.CDCLIENTE, DESCRICAOEVENTO, TPIDENTIFICACAO);
    END
END
^

SET TERM ; ^
