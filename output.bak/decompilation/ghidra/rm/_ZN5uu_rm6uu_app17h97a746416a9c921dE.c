undefined8 __rustcall uu_rm::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a58 [584];
  uint local_810;
  undefined4 local_80c;
  ulong local_79c;
  undefined4 local_794;
  undefined local_790 [584];
  uint local_548;
  undefined4 local_544;
  undefined local_540 [584];
  uint local_2f8;
  undefined4 local_2f4;
  ulong local_284;
  undefined4 local_27c;
  undefined *local_278;
  undefined8 local_270;
  undefined *local_268;
  undefined8 local_260;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(auStack_a58,uVar1);
  clap_builder::builder::command::Command::version(local_540,auStack_a58,&DAT_0011e266,6);
  clap_builder::builder::command::Command::about(auStack_a58,local_540,&DAT_0011e26c,0x1b);
                    /* try { // try from 001b659d to 001b65b6 has its CatchHandler @ 001b6e25 */
  uucore::format_usage(local_790,&DAT_0011e287,0x16);
  clap_builder::builder::command::Command::override_usage(local_540,auStack_a58,local_790);
  (*(code *)PTR_memcpy_0022b6a0)(auStack_a58,local_540,700);
  local_79c = local_284 | 0x8800000088;
  local_794 = local_27c;
                    /* try { // try from 001b660b to 001b667d has its CatchHandler @ 001b6eb5 */
  clap_builder::builder::arg::Arg::new(local_540,&DAT_0011e20d,5);
  clap_builder::builder::arg::Arg::short(local_790,local_540,0x66);
  clap_builder::builder::arg::Arg::long(local_540,local_790,&DAT_0011e20d,5);
  clap_builder::builder::arg::Arg::help(local_790,local_540,&DAT_0011e29d,0x34);
  clap_builder::builder::arg::Arg::action(&local_278,local_790,2);
  clap_builder::builder::command::Command::arg(local_540,auStack_a58,&local_278);
                    /* try { // try from 001b66ae to 001b6741 has its CatchHandler @ 001b6ea3 */
  clap_builder::builder::arg::Arg::new(auStack_a58,&DAT_0011e22e,6);
  clap_builder::builder::arg::Arg::short(local_790,auStack_a58,0x69);
  clap_builder::builder::arg::Arg::help(auStack_a58,local_790,&DAT_0011e2d1,0x1b);
  local_278 = &DAT_0011e234;
  local_270 = 0xb;
  local_268 = &DAT_0011e202;
  local_260 = 0xb;
  clap_builder::builder::arg::Arg::overrides_with_all(local_790,auStack_a58,&local_278);
  clap_builder::builder::arg::Arg::action(&local_278,local_790,2);
  clap_builder::builder::command::Command::arg(auStack_a58,local_540,&local_278);
                    /* try { // try from 001b6772 to 001b680b has its CatchHandler @ 001b6e96 */
  clap_builder::builder::arg::Arg::new(local_540,&DAT_0011e234,0xb);
  clap_builder::builder::arg::Arg::short(local_790,local_540,0x49);
  clap_builder::builder::arg::Arg::help(local_540,local_790,&DAT_0011e2ec,0xa1);
  local_278 = &DAT_0011e22e;
  local_270 = 6;
  local_268 = &DAT_0011e202;
  local_260 = 0xb;
  clap_builder::builder::arg::Arg::overrides_with_all(local_790,local_540,&local_278);
  clap_builder::builder::arg::Arg::action(&local_278,local_790,2);
  clap_builder::builder::command::Command::arg(local_540,auStack_a58,&local_278);
                    /* try { // try from 001b683c to 001b68cf has its CatchHandler @ 001b6ee6 */
  clap_builder::builder::arg::Arg::new(auStack_a58,&DAT_0011e202,0xb);
  clap_builder::builder::arg::Arg::long(local_790,auStack_a58,&DAT_0011e202,0xb);
  clap_builder::builder::arg::Arg::help(auStack_a58,local_790,&DAT_0011e38d,0x58);
  clap_builder::builder::arg::Arg::value_name(local_790,auStack_a58);
  local_278 = (undefined *)0x0;
  local_270 = 1;
  local_268 = (undefined *)((ulong)local_268 & 0xffffffffffffff00);
  clap_builder::builder::arg::Arg::num_args(auStack_a58,local_790,&local_278);
  (*(code *)PTR_memcpy_0022b6a0)(local_790,auStack_a58,0x248);
  local_548 = local_810 | 0x80;
  local_544 = local_80c;
                    /* try { // try from 001b690a to 001b6954 has its CatchHandler @ 001b6ee6 */
  clap_builder::builder::arg::Arg::default_missing_value(auStack_a58,local_790);
  local_278 = &DAT_0011e22e;
  local_270 = 6;
  local_268 = &DAT_0011e234;
  local_260 = 0xb;
  clap_builder::builder::arg::Arg::overrides_with_all(local_790,auStack_a58,&local_278);
  clap_builder::builder::command::Command::arg(auStack_a58,local_540,local_790);
                    /* try { // try from 001b696d to 001b69c7 has its CatchHandler @ 001b6e89 */
  clap_builder::builder::arg::Arg::new(local_540,&DAT_0011e212,0xf);
  clap_builder::builder::arg::Arg::long(local_790,local_540,&DAT_0011e212,0xf);
  clap_builder::builder::arg::Arg::help(local_540,local_790,&DAT_0011e3eb,0xa3);
  clap_builder::builder::arg::Arg::action(local_790,local_540,2);
  clap_builder::builder::command::Command::arg(local_540,auStack_a58,local_790);
                    /* try { // try from 001b69f8 to 001b6a43 has its CatchHandler @ 001b6e77 */
  clap_builder::builder::arg::Arg::new(auStack_a58,&DAT_00115040,0x10);
  clap_builder::builder::arg::Arg::long(local_790,auStack_a58,&DAT_00115040,0x10);
  clap_builder::builder::arg::Arg::help(auStack_a58,local_790,&DAT_0011e48e,0x1a);
  clap_builder::builder::arg::Arg::action(local_790,auStack_a58,2);
  clap_builder::builder::command::Command::arg(auStack_a58,local_540,local_790);
                    /* try { // try from 001b6a6f to 001b6ac9 has its CatchHandler @ 001b6e6a */
  clap_builder::builder::arg::Arg::new(local_540,&DAT_0011e221,0xd);
  clap_builder::builder::arg::Arg::long(local_790,local_540,&DAT_0011e221,0xd);
  clap_builder::builder::arg::Arg::help(local_540,local_790,&DAT_0011e4a8,0x1b);
  clap_builder::builder::arg::Arg::action(local_790,local_540,2);
  clap_builder::builder::command::Command::arg(local_540,auStack_a58,local_790);
                    /* try { // try from 001b6afa to 001b6b6d has its CatchHandler @ 001b6ed4 */
  clap_builder::builder::arg::Arg::new(auStack_a58,&DAT_0011e23f,9);
  clap_builder::builder::arg::Arg::short(local_790,auStack_a58,0x72);
  clap_builder::builder::arg::Arg::visible_short_alias(auStack_a58,local_790,0x52);
  clap_builder::builder::arg::Arg::long(local_790,auStack_a58,&DAT_0011e23f,9);
  clap_builder::builder::arg::Arg::help(auStack_a58,local_790,&DAT_0011e4c3,0x31);
  clap_builder::builder::arg::Arg::action(local_790,auStack_a58,2);
  clap_builder::builder::command::Command::arg(auStack_a58,local_540,local_790);
                    /* try { // try from 001b6b99 to 001b6c0b has its CatchHandler @ 001b6e5a */
  clap_builder::builder::arg::Arg::new(local_540,&DAT_0011e1ff,3);
  clap_builder::builder::arg::Arg::short(local_790,local_540,100);
  clap_builder::builder::arg::Arg::long(local_540,local_790,&DAT_0011e1ff,3);
  clap_builder::builder::arg::Arg::help(local_790,local_540,&DAT_0011e4f4,0x18);
  clap_builder::builder::arg::Arg::action(&local_278,local_790,2);
  clap_builder::builder::command::Command::arg(local_540,auStack_a58,&local_278);
                    /* try { // try from 001b6c3c to 001b6c9a has its CatchHandler @ 001b6e45 */
  clap_builder::builder::arg::Arg::new(auStack_a58,&DAT_0011e248,7);
  clap_builder::builder::arg::Arg::short(local_790,auStack_a58,0x76);
  clap_builder::builder::arg::Arg::long(auStack_a58,local_790,&DAT_0011e248,7);
  clap_builder::builder::arg::Arg::help(local_790,auStack_a58,&DAT_0011e50c,0x1a);
  clap_builder::builder::arg::Arg::action(&local_278,local_790,2);
  clap_builder::builder::command::Command::arg(auStack_a58,local_540,&local_278);
                    /* try { // try from 001b6ccb to 001b6d25 has its CatchHandler @ 001b6e35 */
  clap_builder::builder::arg::Arg::new(local_540,&DAT_0011e24f,0x12);
  clap_builder::builder::arg::Arg::long(local_790,local_540,&DAT_0011e526,0x11);
  clap_builder::builder::arg::Arg::alias(local_540,local_790,&DAT_0011e24f,0x12);
  (*(code *)PTR_memcpy_0022b6a0)(local_790,local_540,0x248);
  local_548 = local_2f8 | 4;
  local_544 = local_2f4;
  clap_builder::builder::arg::Arg::action(&local_278,local_790,2);
  clap_builder::builder::command::Command::arg(local_540,auStack_a58,&local_278);
                    /* try { // try from 001b6d8e to 001b6dfd has its CatchHandler @ 001b6ec2 */
  clap_builder::builder::arg::Arg::new(auStack_a58,&DAT_0011e261,5);
  clap_builder::builder::arg::Arg::action(local_790,auStack_a58,1);
  local_278 = (undefined *)0x2;
  clap_builder::builder::arg::Arg::value_parser(auStack_a58,local_790,&local_278);
  clap_builder::builder::arg::Arg::num_args(local_790,auStack_a58);
  clap_builder::builder::arg::Arg::value_hint(auStack_a58,local_790,2);
  clap_builder::builder::command::Command::arg(param_1,local_540,auStack_a58);
  return param_1;
}