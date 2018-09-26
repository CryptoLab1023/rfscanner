DROP DATABASE IF EXISTS ibm_hack_db;

DROP USER IF EXISTS admin;
CREATE USER admin IDENTIFIED BY 'admin'; -- CREATEDB;

CREATE DATABASE ibm_hack_db;
  -- WITH OWNER = admin
-- ENCODING = 'UTF8';
-- \c sampibm_hack_dbledb admin

USE ibm_hack_db;

DROP TABLE IF EXISTS danger_map;

CREATE TABLE danger_map (id character(8) NOT NULL)
/* (
    id character(8) NOT NULL,
    name character varying(100),
    lon character(1),
    lat character(1),
    -- updatedate timestamp
    -- without time zone,
  -- CONSTRAINT person_pkey PRIMARY KEY
  --   (id)
); */
  --   ALTER TABLE person
  -- OWNER TO admin;

  --   INSERT INTO person
  --       (
  --       id, name, sex, updatedate)
  --   VALUES
  --       ('X0000000', 'admin', 'm', Now()),
  --       ('X0000001', 'Mike', 'm', Now()),
  --       ('X0000002', 'Tom', 'm', Now());
