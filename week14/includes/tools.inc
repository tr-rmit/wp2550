<?php

  session_start();

  function preshow($var) {
    $ret = empty($var) ? 'No Data or 0' : htmlentities($var);
    return "<pre>\n$ret\n</pre>";
  }
?>
