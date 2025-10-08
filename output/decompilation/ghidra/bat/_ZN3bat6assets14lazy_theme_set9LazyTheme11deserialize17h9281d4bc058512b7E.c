void _ZN3bat6assets14lazy_theme_set9LazyTheme11deserialize17h9281d4bc058512b7E(undefined8 param_1)

{
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined auStack_150 [72];
  undefined auStack_108 [248];
  
  _ZN6flate24zlib4read20ZlibDecoder_LT_R_GT_3new17hf93ee7f8713fc540E(auStack_150);
  uStack_168 = 0;
  uStack_160 = 1;
  uStack_158 = 0;
  _ZN7bincode8internal28deserialize_from_custom_seed17h9db39926b029fecdE(auStack_108,&uStack_168);
  (*(code *)PTR_memcpy_008074c0)(param_1,auStack_108,0xf8);
  return;
}