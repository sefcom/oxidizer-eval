undefined8 _ZN11uu_basename6uu_app17h0b657963404f564aE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_800 [584];
  uint local_5b8;
  undefined4 local_5b4;
  undefined local_5b0 [584];
  uint local_368;
  undefined4 local_364;
  ulong local_2f4;
  undefined4 local_2ec;
  undefined local_2e8 [700];
  ulong local_2c;
  undefined4 local_24;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17ha7e74aad005b9b58E(local_5b0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h2ab79dc99314c352E(local_2e8,local_5b0);
  _ZN12clap_builder7builder7command7Command5about17hab620b7e1058a585E(local_5b0,local_2e8);
                    /* try { // try from 001aaf0d to 001aaf23 has its CatchHandler @ 001ab239 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_800,&DAT_0011c00c,0x2a);
  _ZN12clap_builder7builder7command7Command14override_usage17h60cd123b01a36509E
            (local_2e8,local_5b0,local_800);
  (*(code *)PTR_memcpy_002121a8)(local_5b0,local_2e8,700);
  local_2f4 = local_2c | 0x8000000080;
  local_2ec = local_24;
  _ZN12clap_builder7builder3arg3Arg3new17h9173340fd6ca48a3E(local_2e8,&DAT_00113ab0,8);
  _ZN12clap_builder7builder3arg3Arg5short17h23215daa9b5f01edE(local_800,local_2e8,0x61);
  _ZN12clap_builder7builder3arg3Arg4long17hd5c2448c17e12a8aE(local_2e8,local_800,&DAT_00113ab0,8);
                    /* try { // try from 001aafce to 001ab019 has its CatchHandler @ 001ab25d */
  _ZN12clap_builder7builder3arg3Arg4help17h5fbe82945b5278beE(local_800,local_2e8,&DAT_0011c036,0x33)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h9ee68bbc1d73bf6bE(local_2e8,local_800,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hec87f0bde11a11d7E
            (local_800,local_2e8,&DAT_00113ab0,8);
  _ZN12clap_builder7builder7command7Command3arg17h97601c6d21b557bfE(local_2e8,local_5b0,local_800);
  _ZN12clap_builder7builder3arg3Arg3new17h9173340fd6ca48a3E(local_5b0,&DAT_00112f30,4);
  _ZN12clap_builder7builder3arg3Arg6action17h9ee68bbc1d73bf6bE(local_800,local_5b0,1);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hd37af2c9a3a8ca5fE(local_5b0,local_800);
  (*(code *)PTR_memcpy_002121a8)(local_800,local_5b0,0x248);
  local_5b8 = local_368 | 0x204;
  local_5b4 = local_364;
  _ZN12clap_builder7builder7command7Command3arg17h97601c6d21b557bfE(local_5b0,local_2e8,local_800);
  _ZN12clap_builder7builder3arg3Arg3new17h9173340fd6ca48a3E(local_2e8,&DAT_0011c000,6);
  _ZN12clap_builder7builder3arg3Arg5short17h23215daa9b5f01edE(local_800,local_2e8,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17hd5c2448c17e12a8aE(local_2e8,local_800,&DAT_0011c000,6);
                    /* try { // try from 001ab114 to 001ab15c has its CatchHandler @ 001ab26f */
  _ZN12clap_builder7builder3arg3Arg10value_name17h2d3314c9c3f2d083E(local_800,local_2e8);
  _ZN12clap_builder7builder3arg3Arg4help17h5fbe82945b5278beE(local_2e8,local_800,&DAT_0011c06f,0x24)
  ;
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hec87f0bde11a11d7E
            (local_800,local_2e8,&DAT_0011c000,6);
  _ZN12clap_builder7builder7command7Command3arg17h97601c6d21b557bfE(local_2e8,local_5b0,local_800);
  _ZN12clap_builder7builder3arg3Arg3new17h9173340fd6ca48a3E(local_5b0,&DAT_00112f14,4);
  _ZN12clap_builder7builder3arg3Arg5short17h23215daa9b5f01edE(local_800,local_5b0,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17hd5c2448c17e12a8aE(local_5b0,local_800,&DAT_00112f14,4);
                    /* try { // try from 001ab1c6 to 001ab211 has its CatchHandler @ 001ab24b */
  _ZN12clap_builder7builder3arg3Arg4help17h5fbe82945b5278beE(local_800,local_5b0,&DAT_0011c093,0x2a)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h9ee68bbc1d73bf6bE(local_5b0,local_800,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hec87f0bde11a11d7E
            (local_800,local_5b0,&DAT_00112f14,4);
  _ZN12clap_builder7builder7command7Command3arg17h97601c6d21b557bfE(param_1,local_2e8,local_800);
  return param_1;
}