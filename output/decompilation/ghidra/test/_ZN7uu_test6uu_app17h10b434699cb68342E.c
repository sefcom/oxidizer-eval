undefined8 _ZN7uu_test6uu_app17h10b434699cb68342E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_5c0 [24];
  undefined local_5a8 [712];
  undefined local_2e0 [712];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h86888fb9719c6febE(local_5a8,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h11223c262ea6b3baE
            (local_2e0,local_5a8,&DAT_0011c462,6);
  _ZN12clap_builder7builder7command7Command5about17h3fae39b5d41a86a0E
            (local_5a8,local_2e0,&DAT_0011c468,0x24);
                    /* try { // try from 001abf5d to 001abf73 has its CatchHandler @ 001abfb5 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_5c0,&DAT_0011c48c,0x2f);
  _ZN12clap_builder7builder7command7Command14override_usage17h5fcf5729777e988cE
            (local_2e0,local_5a8,local_5c0);
  _ZN12clap_builder7builder7command7Command10after_help17ha5016ec00ea585edE
            (param_1,local_2e0,&DAT_0011c4bb,0xbef);
  return param_1;
}