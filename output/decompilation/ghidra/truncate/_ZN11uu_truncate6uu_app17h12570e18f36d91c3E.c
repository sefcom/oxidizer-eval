undefined8 _ZN11uu_truncate6uu_app17h12570e18f36d91c3E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  undefined local_7f8 [584];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hee03e2cdf1addeb4E(local_530,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h38e680c56345d57aE
            (local_7f8,local_530,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17hdc0b6614eee27bd9E
            (local_530,local_7f8,"Shrink or extend the size of each file to the specified size.",
             0x3d);
                    /* try { // try from 001ad403 to 001ad417 has its CatchHandler @ 001ad7ec */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(auStack_a48,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17h73764f9f4ca0f96eE
            (local_7f8,local_530,auStack_a48);
  (*(code *)PTR_memcpy_00219b68)(local_530,local_7f8,700);
  local_274 = local_53c | 0x8000000080;
  local_26c = local_534;
                    /* try { // try from 001ad471 to 001ad4d9 has its CatchHandler @ 001ad822 */
  _ZN12clap_builder7builder3arg3Arg3new17h23364287673f1608E(local_7f8,"io-blocks",9);
  _ZN12clap_builder7builder3arg3Arg5short17hf8477268ad2332ccE(auStack_a48,local_7f8,0x6f);
  _ZN12clap_builder7builder3arg3Arg4long17h97185ba2098bc5b5E(local_7f8,auStack_a48,"io-blocks",9);
  _ZN12clap_builder7builder3arg3Arg4help17hcb1068864cc17e4eE
            (auStack_a48,local_7f8,
             "treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)"
             ,0x56);
  _ZN12clap_builder7builder3arg3Arg6action17h69b6cfa60b29f402E(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hc64231f0de05e629E(local_7f8,local_530,local_268);
                    /* try { // try from 001ad50a to 001ad572 has its CatchHandler @ 001ad810 */
  _ZN12clap_builder7builder3arg3Arg3new17h23364287673f1608E(local_530,"no-create",9);
  _ZN12clap_builder7builder3arg3Arg5short17hf8477268ad2332ccE(auStack_a48,local_530,99);
  _ZN12clap_builder7builder3arg3Arg4long17h97185ba2098bc5b5E(local_530,auStack_a48,"no-create",9);
  _ZN12clap_builder7builder3arg3Arg4help17hcb1068864cc17e4eE
            (auStack_a48,local_530,"do not create files that do not exist",0x25);
  _ZN12clap_builder7builder3arg3Arg6action17h69b6cfa60b29f402E(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hc64231f0de05e629E(local_530,local_7f8,local_268);
                    /* try { // try from 001ad5a3 to 001ad658 has its CatchHandler @ 001ad846 */
  _ZN12clap_builder7builder3arg3Arg3new17h23364287673f1608E(local_7f8,"reference",9);
  _ZN12clap_builder7builder3arg3Arg5short17hf8477268ad2332ccE(auStack_a48,local_7f8,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17h97185ba2098bc5b5E(local_7f8,auStack_a48,"reference",9);
  _ZN12clap_builder7builder3arg3Arg23required_unless_present17h0c596cfcfbcaec26E
            (auStack_a48,local_7f8,
             &anon_e7564acb652dbde43394d696a024ead1_21_llvm_5275832360742018685,4);
  _ZN12clap_builder7builder3arg3Arg4help17hcb1068864cc17e4eE
            (local_7f8,auStack_a48,"base the size of each file on the size of RFILE",0x2f);
  _ZN12clap_builder7builder3arg3Arg10value_name17h17e5003e2062cbd5E(auStack_a48,local_7f8,"RFILE",5)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17h5a2f57dc25d37680E(local_268,auStack_a48,3);
  _ZN12clap_builder7builder7command7Command3arg17hc64231f0de05e629E(local_7f8,local_530,local_268);
                    /* try { // try from 001ad676 to 001ad716 has its CatchHandler @ 001ad834 */
  _ZN12clap_builder7builder3arg3Arg3new17h23364287673f1608E
            (local_530,&anon_e7564acb652dbde43394d696a024ead1_21_llvm_5275832360742018685,4);
  _ZN12clap_builder7builder3arg3Arg5short17hf8477268ad2332ccE(auStack_a48,local_530,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h97185ba2098bc5b5E
            (local_530,auStack_a48,
             &anon_e7564acb652dbde43394d696a024ead1_21_llvm_5275832360742018685,4);
  _ZN12clap_builder7builder3arg3Arg23required_unless_present17h0c596cfcfbcaec26E
            (auStack_a48,local_530,"reference",9);
  _ZN12clap_builder7builder3arg3Arg4help17hcb1068864cc17e4eE
            (local_530,auStack_a48,
             "set or adjust the size of each file according to SIZE, which is in bytes unless --io-blocks is specified"
             ,0x68);
  _ZN12clap_builder7builder3arg3Arg10value_name17h17e5003e2062cbd5E
            (auStack_a48,local_530,&DAT_00114024,4);
  _ZN12clap_builder7builder7command7Command3arg17hc64231f0de05e629E(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 001ad72f to 001ad763 has its CatchHandler @ 001ad7fe */
  _ZN12clap_builder7builder3arg3Arg3new17h23364287673f1608E(local_7f8,"files",5);
  _ZN12clap_builder7builder3arg3Arg10value_name17h17e5003e2062cbd5E
            (auStack_a48,local_7f8,&DAT_00114088,4);
  _ZN12clap_builder7builder3arg3Arg6action17h69b6cfa60b29f402E(local_7f8,auStack_a48,1);
  (*(code *)PTR_memcpy_00219b68)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 | 1;
  local_7fc = local_5ac;
                    /* try { // try from 001ad7af to 001ad7c3 has its CatchHandler @ 001ad7fe */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h5a2f57dc25d37680E(local_7f8,auStack_a48,3);
  _ZN12clap_builder7builder7command7Command3arg17hc64231f0de05e629E(param_1,local_530,local_7f8);
  return param_1;
}