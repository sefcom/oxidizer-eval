undefined8 _ZN6uu_sum6uu_app17hbdfcd560e86e61faE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_7f8 [584];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [584];
  uint local_2e8;
  undefined4 local_2e4;
  undefined local_2e0 [700];
  ulong local_24;
  undefined4 local_1c;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h145afba2524775e3E(local_2e0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h5aa5f16b54449e9bE
            (auStack_7f8,local_2e0,"0.0.28",6);
                    /* try { // try from 001ad27f to 001ad298 has its CatchHandler @ 001ad4a8 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_530,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17hbab238ce668db690E
            (local_2e0,auStack_7f8,local_530);
  _ZN12clap_builder7builder7command7Command5about17h0dd67728983a96e6E
            (auStack_7f8,local_2e0,
             "Checksum and count the blocks in a file.\n\nWith no FILE, or when FILE is -, read standard input."
             ,0x5f);
  (*(code *)PTR_memcpy_00215d10)(local_2e0,auStack_7f8,700);
  local_24 = local_53c | 0x8000000080;
  local_1c = local_534;
                    /* try { // try from 001ad30c to 001ad31f has its CatchHandler @ 001ad4c2 */
  _ZN12clap_builder7builder3arg3Arg3new17hff157f15b11d8e5fE(auStack_7f8,"file",4);
  _ZN12clap_builder7builder3arg3Arg6action17h138a3d481854f0e9E(local_530,auStack_7f8,1);
  (*(code *)PTR_memcpy_00215d10)(auStack_7f8,local_530,0x248);
  local_5b0 = local_2e8 | 4;
  local_5ac = local_2e4;
                    /* try { // try from 001ad36b to 001ad37f has its CatchHandler @ 001ad4c2 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17hd181bcc601839ad2E(local_530,auStack_7f8,3);
  _ZN12clap_builder7builder7command7Command3arg17h09f67cd4a8d99462E(auStack_7f8,local_2e0,local_530)
  ;
                    /* try { // try from 001ad398 to 001ad3e9 has its CatchHandler @ 001ad4b5 */
  _ZN12clap_builder7builder3arg3Arg3new17hff157f15b11d8e5fE(local_2e0,"r",1);
  _ZN12clap_builder7builder3arg3Arg5short17h5bff8bc39b41d2d2E(local_530,local_2e0,0x72);
  _ZN12clap_builder7builder3arg3Arg4help17h1386c016a01bc406E
            (local_2e0,local_530,"use the BSD sum algorithm, use 1K blocks (default)",0x32);
  _ZN12clap_builder7builder3arg3Arg6action17h138a3d481854f0e9E(local_530,local_2e0,2);
  _ZN12clap_builder7builder7command7Command3arg17h09f67cd4a8d99462E(local_2e0,auStack_7f8,local_530)
  ;
                    /* try { // try from 001ad41a to 001ad46c has its CatchHandler @ 001ad4d4 */
  _ZN12clap_builder7builder3arg3Arg3new17hff157f15b11d8e5fE
            (auStack_7f8,&anon_b1652e42acb5298d6255d984603c6a54_2_llvm_2130229470187885326,4);
  _ZN12clap_builder7builder3arg3Arg5short17h5bff8bc39b41d2d2E(local_530,auStack_7f8,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17ha4bc876d2ea83518E(auStack_7f8,local_530);
  _ZN12clap_builder7builder3arg3Arg4help17h1386c016a01bc406E
            (local_530,auStack_7f8,"use System V sum algorithm, use 512 bytes blocks",0x30);
  _ZN12clap_builder7builder3arg3Arg6action17h138a3d481854f0e9E(auStack_7f8,local_530,2);
  _ZN12clap_builder7builder7command7Command3arg17h09f67cd4a8d99462E(param_1,local_2e0,auStack_7f8);
  return param_1;
}