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
  clap_builder::builder::command::Command::version(local_530,local_7f8,&DAT_0011dcc1,6);
                    /* try { // try from 001b75c4 to 001b75da has its CatchHandler @ 001b7de6 */
  uucore::format_usage(local_a48,&DAT_0011dcc7,0x16);
  clap_builder::builder::command::Command::override_usage(local_7f8,local_530,local_a48);
  clap_builder::builder::command::Command::about(local_530,local_7f8,&DAT_0011dcdd,0x51);
  clap_builder::builder::command::Command::after_help(local_7f8,local_530,&DAT_0011dd2e,0xc0b);
  (*(code *)PTR_memcpy_0022cc88)(local_530,local_7f8,700);
  local_274 = local_53c | 0x8800000088;
  local_26c = local_534;
                    /* try { // try from 001b7674 to 001b76e0 has its CatchHandler @ 001b7e7f */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0011e939,5);
  clap_builder::builder::arg::Arg::short(local_a48,local_7f8,0x62);
  clap_builder::builder::arg::Arg::long(local_7f8,local_a48,&DAT_0011e939,5);
  clap_builder::builder::arg::Arg::help(local_a48,local_7f8,&DAT_0011e93e,0x29);
  (*(code *)PTR_memcpy_0022cc88)(local_7f8,local_a48,0x248);
  local_5b0 = local_800 | 0x20;
  local_5ac = local_7fc;
                    /* try { // try from 001b771b to 001b7733 has its CatchHandler @ 001b7e7f */
  clap_builder::builder::arg::Arg::value_name(local_a48,local_7f8,&DAT_0011486c,4);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48,1);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001b7766 to 001b77d2 has its CatchHandler @ 001b7e6d */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0011e967,10);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,99);
  clap_builder::builder::arg::Arg::long(local_530,local_a48,&DAT_0011e967,10);
  clap_builder::builder::arg::Arg::help(local_a48,local_530,&DAT_0011e971,0x18);
  (*(code *)PTR_memcpy_0022cc88)(local_530,local_a48,0x248);
  local_2e8 = local_800 | 0x20;
  local_2e4 = local_7fc;
                    /* try { // try from 001b780d to 001b7825 has its CatchHandler @ 001b7e6d */
  clap_builder::builder::arg::Arg::value_name(local_a48,local_530,&DAT_0011486c,4);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48,1);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001b7858 to 001b792c has its CatchHandler @ 001b7ea3 */
  clap_builder::builder::arg::Arg::new(local_7f8,"delimiter",9);
  clap_builder::builder::arg::Arg::short(local_a48,local_7f8,100);
  clap_builder::builder::arg::Arg::long(local_7f8,local_a48,"delimiter",9);
  local_a60 = 2;
  local_258 = local_a50;
  local_268 = 2;
  local_260 = local_a58;
  clap_builder::builder::arg::Arg::value_parser(local_a48,local_7f8,&local_268);
  clap_builder::builder::arg::Arg::help(local_7f8,local_a48,&DAT_0011e989,0x5b);
  clap_builder::builder::arg::Arg::value_name(local_a48,local_7f8,&DAT_0011e9e4,5);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_a48);
                    /* try { // try from 001b7947 to 001b79b3 has its CatchHandler @ 001b7e49 */
  clap_builder::builder::arg::Arg::new(local_530,"whitespace-delimited",0x14);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,0x77);
  clap_builder::builder::arg::Arg::help(local_530,local_a48,&DAT_0011e9e9,0x65);
  clap_builder::builder::arg::Arg::value_name(local_a48,local_530,&DAT_0011ea4e,10);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001b79e6 to 001b7a52 has its CatchHandler @ 001b7e5b */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0011ea58,6);
  clap_builder::builder::arg::Arg::short(local_a48,local_7f8,0x66);
  clap_builder::builder::arg::Arg::long(local_7f8,local_a48,&DAT_0011ea58,6);
  clap_builder::builder::arg::Arg::help(local_a48,local_7f8,&DAT_0011ea5e,0x2a);
  (*(code *)PTR_memcpy_0022cc88)(local_7f8,local_a48,0x248);
  local_5b0 = local_800 | 0x20;
  local_5ac = local_7fc;
                    /* try { // try from 001b7a8d to 001b7aa5 has its CatchHandler @ 001b7e5b */
  clap_builder::builder::arg::Arg::value_name(local_a48,local_7f8,&DAT_0011486c,4);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48,1);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001b7ad8 to 001b7b2c has its CatchHandler @ 001b7e37 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0011ea88,10);
  clap_builder::builder::arg::Arg::long(local_a48,local_530,&DAT_0011ea88,10);
  clap_builder::builder::arg::Arg::help(local_530,local_a48,&DAT_0011ea92,0x62);
  clap_builder::builder::arg::Arg::action(local_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_a48);
                    /* try { // try from 001b7b5f to 001b7bcb has its CatchHandler @ 001b7e25 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0011eaf4,0xe);
  clap_builder::builder::arg::Arg::short(local_a48,local_7f8,0x73);
  clap_builder::builder::arg::Arg::long(local_7f8,local_a48,&DAT_0011eaf4,0xe);
  clap_builder::builder::arg::Arg::help(local_a48,local_7f8,&DAT_0011eb02,0x3b);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001b7bfe to 001b7c6a has its CatchHandler @ 001b7e10 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0011eb3d,0xf);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,0x7a);
  clap_builder::builder::arg::Arg::long(local_530,local_a48,&DAT_0011eb3d,0xf);
  clap_builder::builder::arg::Arg::help(local_a48,local_530,&DAT_0011eb4c,0x57);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001b7c9d to 001b7d26 has its CatchHandler @ 001b7e91 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_001153e0,0x10);
  clap_builder::builder::arg::Arg::long(local_a48,local_7f8,&DAT_001153e0,0x10);
  clap_builder::builder::arg::Arg::value_parser(local_7f8,local_a48,&local_a60);
  clap_builder::builder::arg::Arg::help(local_a48,local_7f8,&DAT_0011eba3,0x50);
  clap_builder::builder::arg::Arg::value_name(&local_268,local_a48,&DAT_0011ebf3,9);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001b7d44 to 001b7d5c has its CatchHandler @ 001b7dfb */
  clap_builder::builder::arg::Arg::new(local_530,"file",4);
  (*(code *)PTR_memcpy_0022cc88)(local_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
  clap_builder::builder::arg::Arg::action(local_530,local_a48,1);
                    /* try { // try from 001b7daf to 001b7dc0 has its CatchHandler @ 001b7dfb */
  clap_builder::builder::arg::Arg::value_hint(local_a48,local_530,3);
  clap_builder::builder::command::Command::arg(param_1,local_7f8,local_a48);
  return param_1;
}