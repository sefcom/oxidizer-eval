undefined8 __rustcall uu_mktemp::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_a60;
  undefined8 local_a58;
  ulong local_a50;
  undefined local_a48 [584];
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
  undefined8 local_268;
  undefined8 local_260;
  ulong local_258;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_7f8,uVar1);
  clap_builder::builder::command::Command::version(local_530,local_7f8,&DAT_0011f18c,6);
  clap_builder::builder::command::Command::about(local_7f8,local_530,&DAT_0011f192,0x25);
                    /* try { // try from 001bef63 to 001bef79 has its CatchHandler @ 001bf549 */
  uucore::format_usage(local_a48,&DAT_0011f1b7,0x19);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,local_a48);
  (*(code *)PTR_memcpy_0023a560)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8000000080;
  local_534 = local_26c;
                    /* try { // try from 001befd5 to 001bf041 has its CatchHandler @ 001bf5a6 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0011f03e,9);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,100);
  clap_builder::builder::arg::Arg::long(local_530,local_a48,&DAT_0011f03e,9);
  clap_builder::builder::arg::Arg::help(local_a48,local_530,&DAT_0011f1d0,0x22);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001bf06f to 001bf0db has its CatchHandler @ 001bf594 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0011f047,7);
  clap_builder::builder::arg::Arg::short(local_a48,local_7f8,0x75);
  clap_builder::builder::arg::Arg::long(local_7f8,local_a48,&DAT_0011f047,7);
  clap_builder::builder::arg::Arg::help(local_a48,local_7f8,&DAT_0011f1f2,0x34);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001bf109 to 001bf175 has its CatchHandler @ 001bf582 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0011f04e,5);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,0x71);
  clap_builder::builder::arg::Arg::long(local_530,local_a48,&DAT_0011f04e,5);
  clap_builder::builder::arg::Arg::help(local_a48,local_530,&DAT_0011f226,0x21);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001bf1a3 to 001bf215 has its CatchHandler @ 001bf5b8 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0011f053,6);
  clap_builder::builder::arg::Arg::long(local_a48,local_7f8,&DAT_0011f053,6);
  clap_builder::builder::arg::Arg::help(local_7f8,local_a48,&DAT_0011f247,0x7c);
  clap_builder::builder::arg::Arg::value_name(local_a48,local_7f8,&DAT_0011f2c3,6);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_a48);
                    /* try { // try from 001bf230 to 001bf30f has its CatchHandler @ 001bf5ca */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0011f05f,1);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,0x70);
  clap_builder::builder::arg::Arg::help(local_530,local_a48,&DAT_0011f2c9,0x16);
  clap_builder::builder::arg::Arg::value_name(local_a48,local_530,&DAT_0011f2df,3);
  clap_builder::builder::arg::Arg::num_args(local_530,local_a48);
  local_a60 = 3;
  local_258 = local_a50;
  local_268 = 3;
  local_260 = local_a58;
  clap_builder::builder::arg::Arg::value_parser(local_a48,local_530,&local_268);
  clap_builder::builder::arg::Arg::value_hint(&local_268,local_a48,4);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001bf32d to 001bf3d9 has its CatchHandler @ 001bf5dc */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0011f059,6);
  clap_builder::builder::arg::Arg::long(local_a48,local_7f8,&DAT_0011f059,6);
  clap_builder::builder::arg::Arg::help(local_7f8,local_a48,&DAT_0011f2e2,0x100);
  clap_builder::builder::arg::Arg::value_name(local_a48,local_7f8,&DAT_0011f2df,3);
  local_268 = 0;
  local_260 = 1;
  local_258 = local_258 & 0xffffffffffffff00;
  clap_builder::builder::arg::Arg::num_args(local_7f8,local_a48,&local_268);
  (*(code *)PTR_memcpy_0023a560)(local_a48,local_7f8,0x248);
  local_800 = local_5b0 | 0x80;
  local_7fc = local_5ac;
                    /* try { // try from 001bf416 to 001bf45f has its CatchHandler @ 001bf5dc */
  clap_builder::builder::arg::Arg::overrides_with(local_7f8,local_a48,&DAT_0011f05f,1);
  clap_builder::builder::arg::Arg::value_parser(local_a48,local_7f8,&local_a60);
  clap_builder::builder::arg::Arg::value_hint(&local_268,local_a48,4);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001bf47d to 001bf4cb has its CatchHandler @ 001bf570 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0011f060,1);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,0x74);
  clap_builder::builder::arg::Arg::help(local_530,local_a48,&DAT_0011f3e2,0x7d);
  clap_builder::builder::arg::Arg::action(local_a48,local_530);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_a48);
                    /* try { // try from 001bf4f9 to 001bf523 has its CatchHandler @ 001bf55e */
  clap_builder::builder::arg::Arg::new(local_7f8,"templateDeadlock",8);
  clap_builder::builder::arg::Arg::num_args(local_a48,local_7f8);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_a48);
  return param_1;
}