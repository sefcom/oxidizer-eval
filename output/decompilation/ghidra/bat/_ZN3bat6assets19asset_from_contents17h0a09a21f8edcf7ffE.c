void _ZN3bat6assets19asset_from_contents17h0a09a21f8edcf7ffE(undefined8 param_1)

{
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined local_150 [72];
  undefined local_108 [248];
  
  _ZN6flate24zlib4read20ZlibDecoder_LT_R_GT_3new17hf93ee7f8713fc540E(local_150);
  local_168 = 0;
  local_160 = 1;
  local_158 = 0;
  _ZN7bincode8internal28deserialize_from_custom_seed17h9db39926b029fecdE(local_108,&local_168);
  (*(code *)PTR_memcpy_008074c0)(param_1,local_108,0xf8);
  return;
}