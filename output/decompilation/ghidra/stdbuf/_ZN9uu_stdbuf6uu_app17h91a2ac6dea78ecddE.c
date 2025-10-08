undefined8 _ZN9uu_stdbuf6uu_app17h91a2ac6dea78ecddE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *local_860;
  undefined8 local_858;
  undefined *local_850;
  undefined8 local_848;
  undefined local_840 [632];
  uint local_5c8;
  undefined4 local_5c4;
  undefined local_5c0 [632];
  uint local_348;
  undefined4 local_344;
  ulong local_304;
  undefined4 local_2fc;
  undefined local_2f8 [700];
  ulong local_3c;
  undefined4 local_34;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_005af648)();
  _ZN12clap_builder7builder7command7Command3new17h9ca623c83efd3946E(local_2f8,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h21b85f57db025e92E(local_5c0,local_2f8);
  _ZN12clap_builder7builder7command7Command5about17hfde95826b8fb4cbbE(local_2f8,local_5c0);
  _ZN12clap_builder7builder7command7Command10after_help17hdf8ea01d2986567bE(local_5c0,local_2f8);
                    /* try { // try from 00510673 to 00510689 has its CatchHandler @ 005109f5 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_005af760)
            (local_840,"{} [OPTION]... COMMAND",0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17he89037e8ae7760d0E
            (local_2f8,local_5c0,local_840);
  (*(code *)PTR_memcpy_005af5f8)(local_5c0,local_2f8,700);
  local_304 = local_3c | 0x80000000a0;
  local_2fc = local_34;
  _ZN12clap_builder7builder3arg3Arg3new17he8a42768ed42fec0E(local_2f8,&DAT_0011b75b,5);
  _ZN12clap_builder7builder3arg3Arg4long17h0bcea7f669722248E(local_840,local_2f8,&DAT_0011b75b,5);
  _ZN12clap_builder7builder3arg3Arg5short17h1937515580318e98E(local_2f8,local_840,0x69);
                    /* try { // try from 00510734 to 0051079f has its CatchHandler @ 00510a2b */
  _ZN12clap_builder7builder3arg3Arg4help17hc8a3ffc0e36a85f4E
            (local_840,local_2f8,"adjust standard input stream buffering",0x26);
  _ZN12clap_builder7builder3arg3Arg10value_name17h83ab5c665de65a2bE(local_2f8,local_840);
  local_860 = &DAT_0011b760;
  local_858 = 6;
  local_850 = &DAT_0011b766;
  local_848 = 5;
  _ZN12clap_builder7builder3arg3Arg27required_unless_present_any17h46711816c503c090E
            (local_840,local_2f8,&local_860);
  _ZN12clap_builder7builder7command7Command3arg17ha666ab677c1246e0E(local_2f8,local_5c0,local_840);
  _ZN12clap_builder7builder3arg3Arg3new17he8a42768ed42fec0E(local_5c0,&DAT_0011b760,6);
  _ZN12clap_builder7builder3arg3Arg4long17h0bcea7f669722248E(local_840,local_5c0,&DAT_0011b760,6);
  _ZN12clap_builder7builder3arg3Arg5short17h1937515580318e98E(local_5c0,local_840,0x6f);
                    /* try { // try from 00510809 to 00510866 has its CatchHandler @ 00510a19 */
  _ZN12clap_builder7builder3arg3Arg4help17hc8a3ffc0e36a85f4E(local_840,local_5c0,"adjust stan",0x27)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17h83ab5c665de65a2bE(local_5c0,local_840);
  local_860 = &DAT_0011b75b;
  local_858 = 5;
  local_850 = &DAT_0011b766;
  local_848 = 5;
  _ZN12clap_builder7builder3arg3Arg27required_unless_present_any17h46711816c503c090E
            (local_840,local_5c0,&local_860);
  _ZN12clap_builder7builder7command7Command3arg17ha666ab677c1246e0E(local_5c0,local_2f8,local_840);
  _ZN12clap_builder7builder3arg3Arg3new17he8a42768ed42fec0E(local_2f8,&DAT_0011b766,5);
  _ZN12clap_builder7builder3arg3Arg4long17h0bcea7f669722248E(local_840,local_2f8,&DAT_0011b766,5);
  _ZN12clap_builder7builder3arg3Arg5short17h1937515580318e98E(local_2f8,local_840,0x65);
                    /* try { // try from 005108d0 to 0051092d has its CatchHandler @ 00510a07 */
  _ZN12clap_builder7builder3arg3Arg4help17hc8a3ffc0e36a85f4E(local_840,local_2f8,"a",0x26);
  _ZN12clap_builder7builder3arg3Arg10value_name17h83ab5c665de65a2bE(local_2f8,local_840);
  local_860 = &DAT_0011b75b;
  local_858 = 5;
  local_850 = &DAT_0011b760;
  local_848 = 6;
  _ZN12clap_builder7builder3arg3Arg27required_unless_present_any17h46711816c503c090E
            (local_840,local_2f8,&local_860);
  _ZN12clap_builder7builder7command7Command3arg17ha666ab677c1246e0E(local_2f8,local_5c0,local_840);
  _ZN12clap_builder7builder3arg3Arg3new17he8a42768ed42fec0E(local_5c0,"command",7);
  _ZN12clap_builder7builder3arg3Arg6action17h550de8a59619d235E(local_840,local_5c0);
  (*(code *)PTR_memcpy_005af5f8)(local_5c0,local_840,0x278);
  local_348 = local_5c8 | 5;
  local_344 = local_5c4;
                    /* try { // try from 005109ac to 005109b8 has its CatchHandler @ 005109e3 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h6b2dc8dbe8ff6fd0E(local_840,local_5c0);
  _ZN12clap_builder7builder7command7Command3arg17ha666ab677c1246e0E(param_1,local_2f8,local_840);
  return param_1;
}