undefined8 _ZN6uu_tee6uu_app17hd12bc0652bb3e89dE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  char *local_af8;
  undefined8 uStack_af0;
  ulong local_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined8 local_ac0;
  undefined8 uStack_ab8;
  undefined8 local_ab0;
  undefined8 uStack_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined4 local_a50;
  undefined4 uStack_a4c;
  undefined4 uStack_a48;
  undefined4 uStack_a44;
  uint local_a40;
  undefined4 uStack_a3c;
  undefined4 uStack_a38;
  undefined4 uStack_a34;
  undefined4 local_a30;
  undefined4 uStack_a2c;
  undefined4 uStack_a28;
  undefined4 uStack_a24;
  undefined4 local_a20;
  undefined4 uStack_a1c;
  undefined4 uStack_a18;
  undefined4 uStack_a14;
  undefined8 local_a10;
  uint local_8e0;
  undefined4 local_8dc;
  ulong local_86c;
  undefined4 local_864;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined local_780 [584];
  uint local_538;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  uint local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h37e801e86ae6f4b5E(local_530,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hf6a8e7432674da97E
            (&local_b28,local_530,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17hdbd90eced67467b6E
            (local_530,&local_b28,"Copy standard input to each FILE, and also to standard output.",
             0x3e);
                    /* try { // try from 001b2a20 to 001b2a39 has its CatchHandler @ 001b31a0 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_780,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17h35692a8f92f3f067E
            (&local_b28,local_530,local_780);
  _ZN12clap_builder7builder7command7Command10after_help17h9f91a2bed818f84bE
            (local_530,&local_b28,"If a FILE is -, it refers to a file named - .",0x2d);
  (*(code *)PTR_memcpy_00223628)(&local_b28,local_530,700);
  local_86c = local_274 | 0x4008000040080;
  local_864 = local_26c;
                    /* try { // try from 001b2ab1 to 001b2b23 has its CatchHandler @ 001b3206 */
  _ZN12clap_builder7builder3arg3Arg3new17h31b39a87c99808d3E(local_530,"--help",6);
  _ZN12clap_builder7builder3arg3Arg5short17h0480673c359743c3E(local_780,local_530,0x68);
  _ZN12clap_builder7builder3arg3Arg4long17h742b401d5f468487E(local_530,local_780,&DAT_0010ab80,4);
  _ZN12clap_builder7builder3arg3Arg4help17hd1a3830b00bc2eb6E(local_780,local_530,"Print help",10);
  _ZN12clap_builder7builder3arg3Arg6action17ha3621f600631173dE(&local_268,local_780,7);
  _ZN12clap_builder7builder7command7Command3arg17h38425ec51d54d5d7E(local_530,&local_b28,&local_268)
  ;
                    /* try { // try from 001b2b56 to 001b2bbf has its CatchHandler @ 001b31f4 */
  _ZN12clap_builder7builder3arg3Arg3new17h31b39a87c99808d3E(&local_b28,"append",6);
  _ZN12clap_builder7builder3arg3Arg4long17h742b401d5f468487E(local_780,&local_b28,"append",6);
  _ZN12clap_builder7builder3arg3Arg5short17h0480673c359743c3E(&local_b28,local_780,0x61);
  _ZN12clap_builder7builder3arg3Arg4help17hd1a3830b00bc2eb6E
            (local_780,&local_b28,"append to the given FILEs, do not overwrite",0x2b);
  _ZN12clap_builder7builder3arg3Arg6action17ha3621f600631173dE(&local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h38425ec51d54d5d7E(&local_b28,local_530,&local_268)
  ;
                    /* try { // try from 001b2bf2 to 001b2c64 has its CatchHandler @ 001b31e5 */
  _ZN12clap_builder7builder3arg3Arg3new17h31b39a87c99808d3E(local_530,"ignore-interrupts",0x11);
  _ZN12clap_builder7builder3arg3Arg4long17h742b401d5f468487E
            (local_780,local_530,"ignore-interrupts",0x11);
  _ZN12clap_builder7builder3arg3Arg5short17h0480673c359743c3E(local_530,local_780,0x69);
  _ZN12clap_builder7builder3arg3Arg4help17hd1a3830b00bc2eb6E
            (local_780,local_530,"ignore interrupt signals (ignored on non-Unix platforms)",0x38);
  _ZN12clap_builder7builder3arg3Arg6action17ha3621f600631173dE(&local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h38425ec51d54d5d7E(local_530,&local_b28,&local_268)
  ;
                    /* try { // try from 001b2c97 to 001b2cdb has its CatchHandler @ 001b31d3 */
  _ZN12clap_builder7builder3arg3Arg3new17h31b39a87c99808d3E(&local_b28,"file",4);
  _ZN12clap_builder7builder3arg3Arg6action17ha3621f600631173dE(local_780,&local_b28,1);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h15745e9b43c0da80E(&local_268,local_780,3);
  _ZN12clap_builder7builder7command7Command3arg17h38425ec51d54d5d7E(&local_b28,local_530,&local_268)
  ;
                    /* try { // try from 001b2cf6 to 001b2d47 has its CatchHandler @ 001b31c4 */
  _ZN12clap_builder7builder3arg3Arg3new17h31b39a87c99808d3E(local_530,"ignore-pipe-errors",0x12);
  _ZN12clap_builder7builder3arg3Arg5short17h0480673c359743c3E(local_780,local_530,0x70);
  _ZN12clap_builder7builder3arg3Arg4help17hd1a3830b00bc2eb6E
            (local_530,local_780,"set write error behavior (ignored on non-Unix platforms)",0x38);
  _ZN12clap_builder7builder3arg3Arg6action17ha3621f600631173dE(local_780,local_530,2);
  _ZN12clap_builder7builder7command7Command3arg17h38425ec51d54d5d7E(local_530,&local_b28,local_780);
                    /* try { // try from 001b2d7a to 001b2dad has its CatchHandler @ 001b3215 */
  _ZN12clap_builder7builder3arg3Arg3new17h31b39a87c99808d3E(&local_b28,"output-error",0xc);
  _ZN12clap_builder7builder3arg3Arg4long17h742b401d5f468487E
            (local_780,&local_b28,"output-error",0xc);
  (*(code *)PTR_memcpy_00223628)(&local_b28,local_780,0x248);
  local_8e0 = local_538 | 0x80;
  local_8dc = local_534;
  local_268 = 0;
  uStack_260 = 1;
  local_258 = local_258 & 0xffffff00;
                    /* try { // try from 001b2e0a to 001b2e21 has its CatchHandler @ 001b3215 */
  _ZN12clap_builder7builder3arg3Arg8num_args17h2858c75c9c41de16E(local_780,&local_b28,&local_268);
  local_af8 = "warnZero\x1b[7m";
  uStack_af0 = 4;
  uStack_b10 = 0x8000000000000000;
  local_b28 = 0;
  uStack_b20 = 8;
  local_b18 = 0;
  local_ae8 = local_ae8 & 0xffffffffffffff00;
                    /* try { // try from 001b2e6f to 001b2e8c has its CatchHandler @ 001b31b2 */
  _ZN12clap_builder7builder14possible_value13PossibleValue4help17h5e832121e462e853E
            (&local_858,&local_b28,"produce warnings for errors writing to any output",0x31);
  local_af8 = "warn-nopipe";
  uStack_af0 = 0xb;
  uStack_b10 = 0x8000000000000000;
  local_b28 = 0;
  uStack_b20 = 8;
  local_b18 = 0;
  local_ae8 = local_ae8 & 0xffffffffffffff00;
                    /* try { // try from 001b2ed0 to 001b2eed has its CatchHandler @ 001b318e */
  _ZN12clap_builder7builder14possible_value13PossibleValue4help17h5e832121e462e853E
            (&local_810,&local_b28,
             "produce warnings for errors that are not pipe errors (ignored on non-unix platforms)",
             0x54);
  local_af8 = "exitERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG";
  uStack_af0 = 4;
  uStack_b10 = 0x8000000000000000;
  local_b28 = 0;
  uStack_b20 = 8;
  local_b18 = 0;
  local_ae8 = local_ae8 & 0xffffffffffffff00;
                    /* try { // try from 001b2f31 to 001b2f4e has its CatchHandler @ 001b317c */
  _ZN12clap_builder7builder14possible_value13PossibleValue4help17h5e832121e462e853E
            (&local_7c8,&local_b28,"exit on write errors to any output",0x22);
  local_af8 = "exit-nopipe";
  uStack_af0 = 0xb;
  uStack_b10 = 0x8000000000000000;
  local_b28 = 0;
  uStack_b20 = 8;
  local_b18 = 0;
  local_ae8 = local_ae8 & 0xffffffffffffff00;
                    /* try { // try from 001b2f92 to 001b2faf has its CatchHandler @ 001b316a */
  _ZN12clap_builder7builder14possible_value13PossibleValue4help17h5e832121e462e853E
            (&local_268,&local_b28,
             "exit on write errors to any output that are not pipe errors (equivalent to exit on non-unix platforms)"
             ,0x66);
  local_b28 = local_858;
  uStack_b20 = uStack_850;
  local_b18 = local_848;
  uStack_b10 = uStack_840;
  local_b08 = local_838;
  uStack_b00 = uStack_830;
  local_af8 = (char *)local_828;
  uStack_af0 = uStack_820;
  local_ae8 = local_818;
  local_ae0 = local_810;
  uStack_ad8 = uStack_808;
  local_ad0 = local_800;
  uStack_ac8 = uStack_7f8;
  local_ac0 = local_7f0;
  uStack_ab8 = uStack_7e8;
  local_ab0 = local_7e0;
  uStack_aa8 = uStack_7d8;
  local_aa0 = local_7d0;
  local_a58 = local_788;
  local_a68 = local_798;
  uStack_a60 = uStack_790;
  local_a78 = local_7a8;
  uStack_a70 = uStack_7a0;
  local_a88 = local_7b8;
  uStack_a80 = uStack_7b0;
  local_a98 = local_7c8;
  uStack_a90 = uStack_7c0;
  local_a10 = local_228;
  local_a20 = local_238;
  uStack_a1c = uStack_234;
  uStack_a18 = uStack_230;
  uStack_a14 = uStack_22c;
  local_a30 = local_248;
  uStack_a2c = uStack_244;
  uStack_a28 = uStack_240;
  uStack_a24 = uStack_23c;
  local_a40 = local_258;
  uStack_a3c = uStack_254;
  uStack_a38 = uStack_250;
  uStack_a34 = uStack_24c;
  local_a50 = (undefined4)local_268;
  uStack_a4c = local_268._4_4_;
  uStack_a48 = (undefined4)uStack_260;
  uStack_a44 = uStack_260._4_4_;
                    /* try { // try from 001b30d8 to 001b30e9 has its CatchHandler @ 001b31b2 */
  _ZN107__LT_uucore__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h5be438b1e962fcafE
            (&local_268,&local_b28);
                    /* try { // try from 001b30ea to 001b3103 has its CatchHandler @ 001b3165 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hbc60523bad46077bE
            (&local_b28,local_780,&local_268);
                    /* try { // try from 001b3104 to 001b313f has its CatchHandler @ 001b3215 */
  _ZN12clap_builder7builder3arg3Arg4help17hd1a3830b00bc2eb6E
            (local_780,&local_b28,"set write error behavior",0x18);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h13d1ca2bd04a2232E
            (&local_b28,local_780,"ignore-pipe-errors",0x12);
  _ZN12clap_builder7builder7command7Command3arg17h38425ec51d54d5d7E(param_1,local_530,&local_b28);
  return param_1;
}