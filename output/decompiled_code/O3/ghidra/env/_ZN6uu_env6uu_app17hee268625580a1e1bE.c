undefined8 __rustcall uu_env::uu_app(undefined8 param_1)

{
  undefined8 local_a68;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  undefined8 local_a58;
  undefined local_a50 [592];
  undefined local_800 [700];
  uint local_544;
  ulong local_540;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined8 local_528;
  uint local_27c;
  ulong local_278;
  undefined8 local_268 [2];
  undefined8 local_258;
  
  clap_builder::builder::command::Command::new(&local_538,&DAT_001244c5,6);
  clap_builder::builder::command::Command::version(local_800,&local_538,&DAT_001244cb,6);
  clap_builder::builder::command::Command::about(&local_538,local_800,&DAT_001244d1,0x39);
                    /* try { // try from 001ccb16 to 001ccb2c has its CatchHandler @ 001cd3d2 */
  uucore::format_usage(local_a50,&DAT_0012450a,0x35);
  clap_builder::builder::command::Command::override_usage(local_800,&local_538,local_a50);
  clap_builder::builder::command::Command::after_help(&local_538,local_800,&DAT_0012453f,0x44);
  (*(code *)PTR_memcpy_0024d1c8)(local_800,&local_538,700);
  local_540 = local_278 | 0x80;
  local_544 = local_27c | 0xa0;
                    /* try { // try from 001ccba7 to 001ccc13 has its CatchHandler @ 001cd423 */
  clap_builder::builder::arg::Arg::new(&local_538,&DAT_00124583,0x12);
  clap_builder::builder::arg::Arg::short(local_a50,&local_538,0x69);
  clap_builder::builder::arg::Arg::long(&local_538,local_a50,&DAT_00124583,0x12);
  clap_builder::builder::arg::Arg::help(local_a50,&local_538,&DAT_00124595,0x1f);
  clap_builder::builder::arg::Arg::action(local_268,local_a50,2);
  clap_builder::builder::command::Command::arg(&local_538,local_800,local_268);
                    /* try { // try from 001ccc46 to 001ccd47 has its CatchHandler @ 001cd48f */
  clap_builder::builder::arg::Arg::new(local_800,&DAT_001245b4,5);
  clap_builder::builder::arg::Arg::short(local_a50,local_800,0x43);
  clap_builder::builder::arg::Arg::long(local_800,local_a50,&DAT_001245b4,5);
  clap_builder::builder::arg::Arg::number_of_values(local_a50,local_800,1);
  clap_builder::builder::arg::Arg::value_name(local_800,local_a50,&DAT_001245b9,3);
  local_a68 = 2;
  local_258 = local_a58;
  local_268[0] = 2;
  clap_builder::builder::arg::Arg::value_parser(local_a50,local_800,local_268);
  clap_builder::builder::arg::Arg::value_hint(local_800,local_a50,4);
  clap_builder::builder::arg::Arg::help(local_a50,local_800,&DAT_001245bc,0x1f);
  clap_builder::builder::command::Command::arg(local_800,&local_538,local_a50);
                    /* try { // try from 001ccd62 to 001ccdce has its CatchHandler @ 001cd411 */
  clap_builder::builder::arg::Arg::new(&local_538,"nullXCPU",4);
  clap_builder::builder::arg::Arg::short(local_a50,&local_538,0x30);
  clap_builder::builder::arg::Arg::long(&local_538,local_a50,"nullXCPU",4);
  clap_builder::builder::arg::Arg::help(local_a50,&local_538,&DAT_001245db,99);
  clap_builder::builder::arg::Arg::action(local_268,local_a50,2);
  clap_builder::builder::command::Command::arg(&local_538,local_800,local_268);
                    /* try { // try from 001cce01 to 001cceea has its CatchHandler @ 001cd47d */
  clap_builder::builder::arg::Arg::new(local_800,&DAT_00117680,4);
  clap_builder::builder::arg::Arg::short(local_a50,local_800,0x66);
  clap_builder::builder::arg::Arg::long(local_800,local_a50,&DAT_00117680,4);
  clap_builder::builder::arg::Arg::value_name(local_a50,local_800,&DAT_001175fc,4);
  clap_builder::builder::arg::Arg::value_hint(local_800,local_a50,3);
  local_258 = local_a58;
  local_268[0] = local_a68;
  clap_builder::builder::arg::Arg::value_parser(local_a50,local_800,local_268);
  clap_builder::builder::arg::Arg::action(local_800,local_a50,1);
  clap_builder::builder::arg::Arg::help(local_a50,local_800,&DAT_0012463e,0x5d);
  clap_builder::builder::command::Command::arg(local_800,&local_538,local_a50);
                    /* try { // try from 001ccf05 to 001ccfd7 has its CatchHandler @ 001cd459 */
  clap_builder::builder::arg::Arg::new(&local_538,&DAT_0012469b,5);
  clap_builder::builder::arg::Arg::short(local_a50,&local_538,0x75);
  clap_builder::builder::arg::Arg::long(&local_538,local_a50,&DAT_0012469b,5);
  clap_builder::builder::arg::Arg::value_name(local_a50,&local_538,&DAT_00117624,4);
  clap_builder::builder::arg::Arg::action(&local_538,local_a50,1);
  local_258 = local_a58;
  local_268[0] = local_a68;
  clap_builder::builder::arg::Arg::value_parser(local_a50,&local_538,local_268);
  clap_builder::builder::arg::Arg::help(local_268,local_a50,&DAT_001246a0,0x24);
  clap_builder::builder::command::Command::arg(&local_538,local_800,local_268);
                    /* try { // try from 001ccff5 to 001cd079 has its CatchHandler @ 001cd3fc */
  clap_builder::builder::arg::Arg::new(local_800,&DAT_001246c4,5);
  clap_builder::builder::arg::Arg::short(local_a50,local_800,0x76);
  clap_builder::builder::arg::Arg::long(local_800,local_a50,&DAT_001246c4,5);
  clap_builder::builder::arg::Arg::action(local_a50,local_800,4);
  clap_builder::builder::arg::Arg::help(local_268,local_a50,&DAT_001246c9,0x32);
  clap_builder::builder::command::Command::arg(local_800,&local_538,local_268);
                    /* try { // try from 001cd097 to 001cd166 has its CatchHandler @ 001cd447 */
  clap_builder::builder::arg::Arg::new(&local_538,&DAT_001246fb,0xc);
  clap_builder::builder::arg::Arg::short(local_a50,&local_538,0x53);
  clap_builder::builder::arg::Arg::long(&local_538,local_a50,&DAT_001246fb,0xc);
  clap_builder::builder::arg::Arg::value_name(local_a50,&local_538,&DAT_00124707,1);
  clap_builder::builder::arg::Arg::action(&local_538,local_a50,0);
  local_258 = local_a58;
  local_268[0] = local_a68;
  clap_builder::builder::arg::Arg::value_parser(local_a50,&local_538,local_268);
  clap_builder::builder::arg::Arg::help(local_268,local_a50,&DAT_00124708,0x5d);
  clap_builder::builder::command::Command::arg(&local_538,local_800,local_268);
                    /* try { // try from 001cd184 to 001cd271 has its CatchHandler @ 001cd46b */
  clap_builder::builder::arg::Arg::new(local_800,&DAT_00124765,5);
  clap_builder::builder::arg::Arg::overrides_with(local_a50,local_800,&DAT_00124765,5);
  clap_builder::builder::arg::Arg::short(local_800,local_a50,0x61);
  clap_builder::builder::arg::Arg::long(local_a50,local_800,&DAT_00124765,5);
  clap_builder::builder::arg::Arg::value_name(local_800,local_a50,&DAT_0012476a,1);
  clap_builder::builder::arg::Arg::action(local_a50,local_800,0);
  local_258 = local_a58;
  local_268[0] = local_a68;
  clap_builder::builder::arg::Arg::value_parser(local_800,local_a50,local_268);
  clap_builder::builder::arg::Arg::help(local_a50,local_800,&DAT_0012476b,0x7c);
  clap_builder::builder::command::Command::arg(local_800,&local_538,local_a50);
                    /* try { // try from 001cd28c to 001cd2ef has its CatchHandler @ 001cd3e7 */
  clap_builder::builder::arg::Arg::new(&local_538,&DAT_00117600,4);
  clap_builder::builder::arg::Arg::action(local_a50,&local_538,1);
  local_528 = local_a58;
  local_538 = (undefined4)local_a68;
  uStack_534 = local_a68._4_4_;
  uStack_530 = uStack_a60;
  uStack_52c = uStack_a5c;
  clap_builder::builder::arg::Arg::value_parser(local_268,local_a50,&local_538);
  clap_builder::builder::command::Command::arg(&local_538,local_800,local_268);
                    /* try { // try from 001cd30d to 001cd3ac has its CatchHandler @ 001cd435 */
  clap_builder::builder::arg::Arg::new(local_800,&DAT_001247e7,0xd);
  clap_builder::builder::arg::Arg::long(local_a50,local_800,&DAT_001247e7,0xd);
  clap_builder::builder::arg::Arg::value_name(local_800,local_a50,&DAT_001247f4,3);
  clap_builder::builder::arg::Arg::action(local_a50,local_800,1);
  clap_builder::builder::arg::Arg::value_parser(local_800,local_a50,&local_a68);
  clap_builder::builder::arg::Arg::help(local_a50,local_800,&DAT_001247f7,0x2b);
  clap_builder::builder::command::Command::arg(param_1,&local_538,local_a50);
  return param_1;
}