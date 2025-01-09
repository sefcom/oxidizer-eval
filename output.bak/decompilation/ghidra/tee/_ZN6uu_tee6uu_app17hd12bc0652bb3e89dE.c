undefined8 __rustcall uu_tee::uu_app(undefined8 param_1)

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
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_530,uVar1);
  clap_builder::builder::command::Command::version(&local_b28,local_530,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_530,&local_b28,"Copy standard input to each FILE, and also to standard output.",
             0x3e);
                    /* try { // try from 001b2a20 to 001b2a39 has its CatchHandler @ 001b31a0 */
  uucore::format_usage(local_780,"{} [OPTION]... [FILE]...",0x18);
  clap_builder::builder::command::Command::override_usage(&local_b28,local_530,local_780);
  clap_builder::builder::command::Command::after_help
            (local_530,&local_b28,"If a FILE is -, it refers to a file named - .",0x2d);
  (*(code *)PTR_memcpy_00223628)(&local_b28,local_530,700);
  local_86c = local_274 | 0x4008000040080;
  local_864 = local_26c;
                    /* try { // try from 001b2ab1 to 001b2b23 has its CatchHandler @ 001b3206 */
  clap_builder::builder::arg::Arg::new(local_530,"--help",6);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x68);
  clap_builder::builder::arg::Arg::long(local_530,local_780,&DAT_0010ab80,4);
  clap_builder::builder::arg::Arg::help(local_780,local_530,"Print help",10);
  clap_builder::builder::arg::Arg::action(&local_268,local_780,7);
  clap_builder::builder::command::Command::arg(local_530,&local_b28,&local_268);
                    /* try { // try from 001b2b56 to 001b2bbf has its CatchHandler @ 001b31f4 */
  clap_builder::builder::arg::Arg::new(&local_b28,"append",6);
  clap_builder::builder::arg::Arg::long(local_780,&local_b28,"append",6);
  clap_builder::builder::arg::Arg::short(&local_b28,local_780,0x61);
  clap_builder::builder::arg::Arg::help
            (local_780,&local_b28,"append to the given FILEs, do not overwrite",0x2b);
  clap_builder::builder::arg::Arg::action(&local_268,local_780,2);
  clap_builder::builder::command::Command::arg(&local_b28,local_530,&local_268);
                    /* try { // try from 001b2bf2 to 001b2c64 has its CatchHandler @ 001b31e5 */
  clap_builder::builder::arg::Arg::new(local_530,"ignore-interrupts",0x11);
  clap_builder::builder::arg::Arg::long(local_780,local_530,"ignore-interrupts",0x11);
  clap_builder::builder::arg::Arg::short(local_530,local_780,0x69);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,"ignore interrupt signals (ignored on non-Unix platforms)",0x38);
  clap_builder::builder::arg::Arg::action(&local_268,local_780,2);
  clap_builder::builder::command::Command::arg(local_530,&local_b28,&local_268);
                    /* try { // try from 001b2c97 to 001b2cdb has its CatchHandler @ 001b31d3 */
  clap_builder::builder::arg::Arg::new(&local_b28,"file",4);
  clap_builder::builder::arg::Arg::action(local_780,&local_b28,1);
  clap_builder::builder::arg::Arg::value_hint(&local_268,local_780,3);
  clap_builder::builder::command::Command::arg(&local_b28,local_530,&local_268);
                    /* try { // try from 001b2cf6 to 001b2d47 has its CatchHandler @ 001b31c4 */
  clap_builder::builder::arg::Arg::new(local_530,"ignore-pipe-errors",0x12);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x70);
  clap_builder::builder::arg::Arg::help
            (local_530,local_780,"set write error behavior (ignored on non-Unix platforms)",0x38);
  clap_builder::builder::arg::Arg::action(local_780,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,&local_b28,local_780);
                    /* try { // try from 001b2d7a to 001b2dad has its CatchHandler @ 001b3215 */
  clap_builder::builder::arg::Arg::new(&local_b28,"output-error",0xc);
  clap_builder::builder::arg::Arg::long(local_780,&local_b28,"output-error",0xc);
  (*(code *)PTR_memcpy_00223628)(&local_b28,local_780,0x248);
  local_8e0 = local_538 | 0x80;
  local_8dc = local_534;
  local_268 = 0;
  uStack_260 = 1;
  local_258 = local_258 & 0xffffff00;
                    /* try { // try from 001b2e0a to 001b2e21 has its CatchHandler @ 001b3215 */
  clap_builder::builder::arg::Arg::num_args(local_780,&local_b28,&local_268);
  local_af8 = "warnZero\x1b[7m";
  uStack_af0 = 4;
  uStack_b10 = 0x8000000000000000;
  local_b28 = 0;
  uStack_b20 = 8;
  local_b18 = 0;
  local_ae8 = local_ae8 & 0xffffffffffffff00;
                    /* try { // try from 001b2e6f to 001b2e8c has its CatchHandler @ 001b31b2 */
  clap_builder::builder::possible_value::PossibleValue::help
            (&local_858,&local_b28,"produce warnings for errors writing to any output",0x31);
  local_af8 = "warn-nopipe";
  uStack_af0 = 0xb;
  uStack_b10 = 0x8000000000000000;
  local_b28 = 0;
  uStack_b20 = 8;
  local_b18 = 0;
  local_ae8 = local_ae8 & 0xffffffffffffff00;
                    /* try { // try from 001b2ed0 to 001b2eed has its CatchHandler @ 001b318e */
  clap_builder::builder::possible_value::PossibleValue::help
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
  clap_builder::builder::possible_value::PossibleValue::help
            (&local_7c8,&local_b28,"exit on write errors to any output",0x22);
  local_af8 = "exit-nopipe";
  uStack_af0 = 0xb;
  uStack_b10 = 0x8000000000000000;
  local_b28 = 0;
  uStack_b20 = 8;
  local_b18 = 0;
  local_ae8 = local_ae8 & 0xffffffffffffff00;
                    /* try { // try from 001b2f92 to 001b2faf has its CatchHandler @ 001b316a */
  clap_builder::builder::possible_value::PossibleValue::help
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
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_268,&local_b28);
                    /* try { // try from 001b30ea to 001b3103 has its CatchHandler @ 001b3165 */
  clap_builder::builder::arg::Arg::value_parser(&local_b28,local_780,&local_268);
                    /* try { // try from 001b3104 to 001b313f has its CatchHandler @ 001b3215 */
  clap_builder::builder::arg::Arg::help(local_780,&local_b28,"set write error behavior",0x18);
  clap_builder::builder::arg::Arg::conflicts_with(&local_b28,local_780,"ignore-pipe-errors",0x12);
  clap_builder::builder::command::Command::arg(param_1,local_530,&local_b28);
  return param_1;
}