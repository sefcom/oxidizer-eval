undefined8 _ZN7uu_comm6uu_app17heda42fe78558df76E(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined local_ab0 [632];
  uint local_838;
  undefined4 local_834;
  ulong local_7f4;
  undefined4 local_7ec;
  undefined local_7e8 [632];
  uint local_570;
  undefined4 local_56c;
  undefined local_568 [632];
  uint local_2f0;
  undefined4 local_2ec;
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar2 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e72b0)();
  _ZN12clap_builder7builder7command7Command3new17h4210ff5d8f5f28b9E(local_ab0,uVar2);
  _ZN12clap_builder7builder7command7Command7version17h4832842cf40b391fE(local_568,local_ab0);
  _ZN12clap_builder7builder7command7Command5about17h72620cd2763a2e9dE(local_ab0,local_568);
                    /* try { // try from 001584b7 to 001584d0 has its CatchHandler @ 00158b87 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001e7460)
            (local_7e8,"{} [OPTION]... FILE1 FILE2",0x1a);
  _ZN12clap_builder7builder7command7Command14override_usage17h627e0a2b66124069E
            (local_568,local_ab0,local_7e8);
  (*(code *)PTR_memcpy_001e7268)(local_ab0,local_568,700);
  local_7f4 = local_2ac | 0x8800000088;
  local_7ec = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17h217197ba6903a0c6E(local_568,"1",1);
  _ZN12clap_builder7builder3arg3Arg5short17hda8279a74549ac40E(local_7e8,local_568,0x31);
                    /* try { // try from 0015855d to 00158578 has its CatchHandler @ 00158b78 */
  _ZN12clap_builder7builder3arg3Arg4help17h67f22269efeb3973E
            (local_568,local_7e8,"suppress column 1 (lines unique to FILE1)",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17hf13d64e6744a9d86E(local_7e8,local_568,2);
  _ZN12clap_builder7builder7command7Command3arg17h33a7727cc5bc9e7aE(local_568,local_ab0,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17h217197ba6903a0c6E(local_ab0,"2",1);
  _ZN12clap_builder7builder3arg3Arg5short17hda8279a74549ac40E(local_7e8,local_ab0,0x32);
                    /* try { // try from 001585dc to 001585f4 has its CatchHandler @ 00158b66 */
  _ZN12clap_builder7builder3arg3Arg4help17h67f22269efeb3973E
            (local_ab0,local_7e8,"suppress column 2 (lines unique to FILE2)",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17hf13d64e6744a9d86E(local_7e8,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h33a7727cc5bc9e7aE(local_ab0,local_568,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17h217197ba6903a0c6E(local_568,"3",1);
  _ZN12clap_builder7builder3arg3Arg5short17hda8279a74549ac40E(local_7e8,local_568,0x33);
                    /* try { // try from 00158658 to 00158673 has its CatchHandler @ 00158b57 */
  _ZN12clap_builder7builder3arg3Arg4help17h67f22269efeb3973E
            (local_568,local_7e8,"suppress column 3 (lines that appear in both files)",0x33);
  _ZN12clap_builder7builder3arg3Arg6action17hf13d64e6744a9d86E(local_7e8,local_568,2);
  _ZN12clap_builder7builder7command7Command3arg17h33a7727cc5bc9e7aE(local_568,local_ab0,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17h217197ba6903a0c6E(local_ab0,&DAT_00117f20,0x10);
  _ZN12clap_builder7builder3arg3Arg4long17ha0f94180dcddc4d2E(local_7e8,local_ab0,&DAT_00117f20,0x10)
  ;
                    /* try { // try from 001586dd to 00158719 has its CatchHandler @ 00158bb7 */
  _ZN12clap_builder7builder3arg3Arg4help17h67f22269efeb3973E
            (local_ab0,local_7e8,"separate columns with STR",0x19);
  _ZN12clap_builder7builder3arg3Arg10value_name17hd09883c5175817cbE(local_7e8,local_ab0);
  _ZN12clap_builder7builder3arg3Arg13default_value17ha3f9b13ff246a678E(local_ab0,local_7e8);
  puVar1 = PTR_memcpy_001e7268;
  (*(code *)PTR_memcpy_001e7268)(local_7e8,local_ab0,0x278);
  local_570 = local_838 | 0x20;
  local_56c = local_834;
  _ZN12clap_builder7builder3arg3Arg6action17hf13d64e6744a9d86E(local_ab0,local_7e8,1);
  (*(code *)puVar1)(local_7e8,local_ab0,0x278);
  local_570 = local_838 | 0x400;
  local_56c = local_834;
  _ZN12clap_builder7builder7command7Command3arg17h33a7727cc5bc9e7aE(local_ab0,local_568,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17h217197ba6903a0c6E(local_568,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg4long17ha0f94180dcddc4d2E
            (local_7e8,local_568,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17hda8279a74549ac40E(local_568,local_7e8,0x7a);
                    /* try { // try from 0015880b to 0015883b has its CatchHandler @ 00158ba8 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hf55d6441c269c186E(local_7e8,local_568);
  _ZN12clap_builder7builder3arg3Arg4help17h67f22269efeb3973E
            (local_568,local_7e8,"line delimiter is NUL, not newline",0x22);
  _ZN12clap_builder7builder3arg3Arg6action17hf13d64e6744a9d86E(local_7e8,local_568,2);
  _ZN12clap_builder7builder7command7Command3arg17h33a7727cc5bc9e7aE(local_568,local_ab0,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17h217197ba6903a0c6E(local_ab0,"FILE1",5);
  (*(code *)PTR_memcpy_001e7268)(local_7e8,local_ab0,0x278);
  local_570 = local_838 | 1;
  local_56c = local_834;
                    /* try { // try from 001588bf to 001588ce has its CatchHandler @ 00158b45 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h4100dd16c0a1551dE(local_2a0,local_7e8);
  _ZN12clap_builder7builder7command7Command3arg17h33a7727cc5bc9e7aE(local_ab0,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h217197ba6903a0c6E(local_568,"FILE2",5);
  (*(code *)PTR_memcpy_001e7268)(local_7e8,local_568,0x278);
  local_570 = local_2f0 | 1;
  local_56c = local_2ec;
                    /* try { // try from 0015893d to 0015894c has its CatchHandler @ 00158b33 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h4100dd16c0a1551dE(local_2a0,local_7e8);
  _ZN12clap_builder7builder7command7Command3arg17h33a7727cc5bc9e7aE(local_568,local_ab0,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h217197ba6903a0c6E(local_ab0,"total",5);
  _ZN12clap_builder7builder3arg3Arg4long17ha0f94180dcddc4d2E(local_7e8,local_ab0,"total",5);
                    /* try { // try from 0015899e to 001589b6 has its CatchHandler @ 00158b1e */
  _ZN12clap_builder7builder3arg3Arg4help17h67f22269efeb3973E
            (local_ab0,local_7e8,"output a summary",0x10);
  _ZN12clap_builder7builder3arg3Arg6action17hf13d64e6744a9d86E(local_7e8,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h33a7727cc5bc9e7aE(local_ab0,local_568,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17h217197ba6903a0c6E(local_568,"check-order",0xb);
  _ZN12clap_builder7builder3arg3Arg4long17ha0f94180dcddc4d2E(local_7e8,local_568,"check-order",0xb);
                    /* try { // try from 00158a20 to 00158a3b has its CatchHandler @ 00158b0c */
  _ZN12clap_builder7builder3arg3Arg4help17h67f22269efeb3973E(local_568,local_7e8,"check t",0x4e);
  _ZN12clap_builder7builder3arg3Arg6action17hf13d64e6744a9d86E(local_7e8,local_568,2);
  _ZN12clap_builder7builder7command7Command3arg17h33a7727cc5bc9e7aE(local_568,local_ab0,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17h217197ba6903a0c6E(local_ab0,"nocheck-order",0xd);
  _ZN12clap_builder7builder3arg3Arg4long17ha0f94180dcddc4d2E
            (local_7e8,local_ab0,"nocheck-order",0xd);
                    /* try { // try from 00158aa5 to 00158ae4 has its CatchHandler @ 00158b96 */
  _ZN12clap_builder7builder3arg3Arg4help17h67f22269efeb3973E
            (local_ab0,local_7e8,"do not check that the input is correctly sorted",0x2f);
  _ZN12clap_builder7builder3arg3Arg6action17hf13d64e6744a9d86E(local_7e8,local_ab0,2);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h5ad15656d721968dE(local_ab0,local_7e8);
  _ZN12clap_builder7builder7command7Command3arg17h33a7727cc5bc9e7aE(param_1,local_568,local_ab0);
  return param_1;
}