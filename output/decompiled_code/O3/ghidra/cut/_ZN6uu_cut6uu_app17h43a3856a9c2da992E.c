undefined8 __rustcall uu_cut::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined8 local_a50;
  undefined local_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  undefined local_7f8 [584];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [584];
  uint local_2e8;
  undefined4 local_2e4;
  ulong local_274;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_7f8,uVar1);
  clap_builder::builder::command::Command::version(local_530,local_7f8,&DAT_0011ddc9,6);
                    /* try { // try from 001b7984 to 001b799a has its CatchHandler @ 001b81a6 */
  uucore::format_usage(local_a48,&DAT_0011ddcf,0x16);
  clap_builder::builder::command::Command::override_usage(local_7f8,local_530,local_a48);
  clap_builder::builder::command::Command::about(local_530,local_7f8,&DAT_0011dde5,0x51);
  clap_builder::builder::command::Command::after_help(local_7f8,local_530,&DAT_0011de36,0xc0b);
  (*(code *)PTR_memcpy_0022dcf8)(local_530,local_7f8,700);
  local_274 = local_53c | 0x8800000088;
  local_26c = local_534;
                    /* try { // try from 001b7a34 to 001b7aa0 has its CatchHandler @ 001b823f */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0011ea41,5);
  clap_builder::builder::arg::Arg::short(local_a48,local_7f8,0x62);
  clap_builder::builder::arg::Arg::long(local_7f8,local_a48,&DAT_0011ea41,5);
  clap_builder::builder::arg::Arg::help(local_a48,local_7f8,&DAT_0011ea46,0x29);
  (*(code *)PTR_memcpy_0022dcf8)(local_7f8,local_a48,0x248);
  local_5b0 = local_800 | 0x20;
  local_5ac = local_7fc;
                    /* try { // try from 001b7adb to 001b7af3 has its CatchHandler @ 001b823f */
  clap_builder::builder::arg::Arg::value_name(local_a48,local_7f8,&DAT_00114ae0,4);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48,1);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001b7b26 to 001b7b92 has its CatchHandler @ 001b822d */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0011ea6f,10);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,99);
  clap_builder::builder::arg::Arg::long(local_530,local_a48,&DAT_0011ea6f,10);
  clap_builder::builder::arg::Arg::help(local_a48,local_530,&DAT_0011ea79,0x18);
  (*(code *)PTR_memcpy_0022dcf8)(local_530,local_a48,0x248);
  local_2e8 = local_800 | 0x20;
  local_2e4 = local_7fc;
                    /* try { // try from 001b7bcd to 001b7be5 has its CatchHandler @ 001b822d */
  clap_builder::builder::arg::Arg::value_name(local_a48,local_530,&DAT_00114ae0,4);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48,1);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001b7c18 to 001b7cec has its CatchHandler @ 001b8263 */
  clap_builder::builder::arg::Arg::new(local_7f8,"delimiter",9);
  clap_builder::builder::arg::Arg::short(local_a48,local_7f8,100);
  clap_builder::builder::arg::Arg::long(local_7f8,local_a48,"delimiter",9);
  local_a60 = 2;
  local_258 = local_a50;
  local_268 = 2;
  local_260 = local_a58;
  clap_builder::builder::arg::Arg::value_parser(local_a48,local_7f8,&local_268);
  clap_builder::builder::arg::Arg::help(local_7f8,local_a48,&DAT_0011ea91,0x5b);
  clap_builder::builder::arg::Arg::value_name(local_a48,local_7f8,&DAT_0011eaec,5);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_a48);
                    /* try { // try from 001b7d07 to 001b7d73 has its CatchHandler @ 001b8209 */
  clap_builder::builder::arg::Arg::new(local_530,"whitespace-delimited",0x14);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,0x77);
  clap_builder::builder::arg::Arg::help(local_530,local_a48,&DAT_0011eaf1,0x65);
  clap_builder::builder::arg::Arg::value_name(local_a48,local_530,&DAT_0011eb56,10);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001b7da6 to 001b7e12 has its CatchHandler @ 001b821b */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0011eb60,6);
  clap_builder::builder::arg::Arg::short(local_a48,local_7f8,0x66);
  clap_builder::builder::arg::Arg::long(local_7f8,local_a48,&DAT_0011eb60,6);
  clap_builder::builder::arg::Arg::help(local_a48,local_7f8,&DAT_0011eb66,0x2a);
  (*(code *)PTR_memcpy_0022dcf8)(local_7f8,local_a48,0x248);
  local_5b0 = local_800 | 0x20;
  local_5ac = local_7fc;
                    /* try { // try from 001b7e4d to 001b7e65 has its CatchHandler @ 001b821b */
  clap_builder::builder::arg::Arg::value_name(local_a48,local_7f8,&DAT_00114ae0,4);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48,1);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001b7e98 to 001b7eec has its CatchHandler @ 001b81f7 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0011eb90,10);
  clap_builder::builder::arg::Arg::long(local_a48,local_530,&DAT_0011eb90,10);
  clap_builder::builder::arg::Arg::help(local_530,local_a48,&DAT_0011eb9a,0x62);
  clap_builder::builder::arg::Arg::action(local_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_a48);
                    /* try { // try from 001b7f1f to 001b7f8b has its CatchHandler @ 001b81e5 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0011ebfc,0xe);
  clap_builder::builder::arg::Arg::short(local_a48,local_7f8,0x73);
  clap_builder::builder::arg::Arg::long(local_7f8,local_a48,&DAT_0011ebfc,0xe);
  clap_builder::builder::arg::Arg::help(local_a48,local_7f8,&DAT_0011ec0a,0x3b);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001b7fbe to 001b802a has its CatchHandler @ 001b81d0 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0011ec45,0xf);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,0x7a);
  clap_builder::builder::arg::Arg::long(local_530,local_a48,&DAT_0011ec45,0xf);
  clap_builder::builder::arg::Arg::help(local_a48,local_530,&DAT_0011ec54,0x57);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001b805d to 001b80e6 has its CatchHandler @ 001b8251 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00115560,0x10);
  clap_builder::builder::arg::Arg::long(local_a48,local_7f8,&DAT_00115560,0x10);
  clap_builder::builder::arg::Arg::value_parser(local_7f8,local_a48,&local_a60);
  clap_builder::builder::arg::Arg::help(local_a48,local_7f8,&DAT_0011ecab,0x50);
  clap_builder::builder::arg::Arg::value_name(&local_268,local_a48,&DAT_0011ecfb,9);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001b8104 to 001b811c has its CatchHandler @ 001b81bb */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00114b54,4);
  (*(code *)PTR_memcpy_0022dcf8)(local_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
  clap_builder::builder::arg::Arg::action(local_530,local_a48,1);
                    /* try { // try from 001b816f to 001b8180 has its CatchHandler @ 001b81bb */
  clap_builder::builder::arg::Arg::value_hint(local_a48,local_530,3);
  clap_builder::builder::command::Command::arg(param_1,local_7f8,local_a48);
  return param_1;
}