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
  clap_builder::builder::command::Command::version(local_540,auStack_a58,&DAT_0011e28e,6);
  clap_builder::builder::command::Command::about(auStack_a58,local_540,&DAT_0011e294,0x1b);
                    /* try { // try from 001b650d to 001b6526 has its CatchHandler @ 001b6d95 */
  uucore::format_usage(local_790,&DAT_0011e2af,0x16);
  clap_builder::builder::command::Command::override_usage(local_540,auStack_a58,local_790);
  (*(code *)PTR_memcpy_0022ba60)(auStack_a58,local_540,700);
  local_79c = local_284 | 0x8800000088;
  local_794 = local_27c;
                    /* try { // try from 001b657b to 001b65ed has its CatchHandler @ 001b6e25 */
  clap_builder::builder::arg::Arg::new(local_540,&DAT_0011e235,5);
  clap_builder::builder::arg::Arg::short(local_790,local_540,0x66);
  clap_builder::builder::arg::Arg::long(local_540,local_790,&DAT_0011e235,5);
  clap_builder::builder::arg::Arg::help(local_790,local_540,&DAT_0011e2c5,0x34);
  clap_builder::builder::arg::Arg::action(&local_278,local_790,2);
  clap_builder::builder::command::Command::arg(local_540,auStack_a58,&local_278);
                    /* try { // try from 001b661e to 001b66b1 has its CatchHandler @ 001b6e13 */
  clap_builder::builder::arg::Arg::new(auStack_a58,&DAT_0011e256,6);
  clap_builder::builder::arg::Arg::short(local_790,auStack_a58,0x69);
  clap_builder::builder::arg::Arg::help(auStack_a58,local_790,&DAT_0011e2f9,0x1b);
  local_278 = &DAT_0011e25c;
  local_270 = 0xb;
  local_268 = &DAT_0011e22a;
  local_260 = 0xb;
  clap_builder::builder::arg::Arg::overrides_with_all(local_790,auStack_a58,&local_278);
  clap_builder::builder::arg::Arg::action(&local_278,local_790,2);
  clap_builder::builder::command::Command::arg(auStack_a58,local_540,&local_278);
                    /* try { // try from 001b66e2 to 001b677b has its CatchHandler @ 001b6e06 */
  clap_builder::builder::arg::Arg::new(local_540,&DAT_0011e25c,0xb);
  clap_builder::builder::arg::Arg::short(local_790,local_540,0x49);
  clap_builder::builder::arg::Arg::help(local_540,local_790,&DAT_0011e314,0xa1);
  local_278 = &DAT_0011e256;
  local_270 = 6;
  local_268 = &DAT_0011e22a;
  local_260 = 0xb;
  clap_builder::builder::arg::Arg::overrides_with_all(local_790,local_540,&local_278);
  clap_builder::builder::arg::Arg::action(&local_278,local_790,2);
  clap_builder::builder::command::Command::arg(local_540,auStack_a58,&local_278);
                    /* try { // try from 001b67ac to 001b683f has its CatchHandler @ 001b6e56 */
  clap_builder::builder::arg::Arg::new(auStack_a58,&DAT_0011e22a,0xb);
  clap_builder::builder::arg::Arg::long(local_790,auStack_a58,&DAT_0011e22a,0xb);
  clap_builder::builder::arg::Arg::help(auStack_a58,local_790,&DAT_0011e3b5,0x58);
  clap_builder::builder::arg::Arg::value_name(local_790,auStack_a58);
  local_278 = (undefined *)0x0;
  local_270 = 1;
  local_268 = (undefined *)((ulong)local_268 & 0xffffffffffffff00);
  clap_builder::builder::arg::Arg::num_args(auStack_a58,local_790,&local_278);
  (*(code *)PTR_memcpy_0022ba60)(local_790,auStack_a58,0x248);
  local_548 = local_810 | 0x80;
  local_544 = local_80c;
                    /* try { // try from 001b687a to 001b68c4 has its CatchHandler @ 001b6e56 */
  clap_builder::builder::arg::Arg::default_missing_value(auStack_a58,local_790);
  local_278 = &DAT_0011e256;
  local_270 = 6;
  local_268 = &DAT_0011e25c;
  local_260 = 0xb;
  clap_builder::builder::arg::Arg::overrides_with_all(local_790,auStack_a58,&local_278);
  clap_builder::builder::command::Command::arg(auStack_a58,local_540,local_790);
                    /* try { // try from 001b68dd to 001b6937 has its CatchHandler @ 001b6df9 */
  clap_builder::builder::arg::Arg::new(local_540,&DAT_0011e23a,0xf);
  clap_builder::builder::arg::Arg::long(local_790,local_540,&DAT_0011e23a,0xf);
  clap_builder::builder::arg::Arg::help(local_540,local_790,&DAT_0011e413,0xa3);
  clap_builder::builder::arg::Arg::action(local_790,local_540,2);
  clap_builder::builder::command::Command::arg(local_540,auStack_a58,local_790);
                    /* try { // try from 001b6968 to 001b69b3 has its CatchHandler @ 001b6de7 */
  clap_builder::builder::arg::Arg::new(auStack_a58,&DAT_001150a0,0x10);
  clap_builder::builder::arg::Arg::long(local_790,auStack_a58,&DAT_001150a0,0x10);
  clap_builder::builder::arg::Arg::help(auStack_a58,local_790,&DAT_0011e4b6,0x1a);
  clap_builder::builder::arg::Arg::action(local_790,auStack_a58,2);
  clap_builder::builder::command::Command::arg(auStack_a58,local_540,local_790);
                    /* try { // try from 001b69df to 001b6a39 has its CatchHandler @ 001b6dda */
  clap_builder::builder::arg::Arg::new(local_540,&DAT_0011e249,0xd);
  clap_builder::builder::arg::Arg::long(local_790,local_540,&DAT_0011e249,0xd);
  clap_builder::builder::arg::Arg::help(local_540,local_790,&DAT_0011e4d0,0x1b);
  clap_builder::builder::arg::Arg::action(local_790,local_540,2);
  clap_builder::builder::command::Command::arg(local_540,auStack_a58,local_790);
                    /* try { // try from 001b6a6a to 001b6add has its CatchHandler @ 001b6e44 */
  clap_builder::builder::arg::Arg::new(auStack_a58,&DAT_0011e267,9);
  clap_builder::builder::arg::Arg::short(local_790,auStack_a58,0x72);
  clap_builder::builder::arg::Arg::visible_short_alias(auStack_a58,local_790,0x52);
  clap_builder::builder::arg::Arg::long(local_790,auStack_a58,&DAT_0011e267,9);
  clap_builder::builder::arg::Arg::help(auStack_a58,local_790,&DAT_0011e4eb,0x31);
  clap_builder::builder::arg::Arg::action(local_790,auStack_a58,2);
  clap_builder::builder::command::Command::arg(auStack_a58,local_540,local_790);
                    /* try { // try from 001b6b09 to 001b6b7b has its CatchHandler @ 001b6dca */
  clap_builder::builder::arg::Arg::new(local_540,&DAT_0011e227,3);
  clap_builder::builder::arg::Arg::short(local_790,local_540,100);
  clap_builder::builder::arg::Arg::long(local_540,local_790,&DAT_0011e227,3);
  clap_builder::builder::arg::Arg::help(local_790,local_540,&DAT_0011e51c,0x18);
  clap_builder::builder::arg::Arg::action(&local_278,local_790,2);
  clap_builder::builder::command::Command::arg(local_540,auStack_a58,&local_278);
                    /* try { // try from 001b6bac to 001b6c0a has its CatchHandler @ 001b6db5 */
  clap_builder::builder::arg::Arg::new(auStack_a58,&DAT_0011e270,7);
  clap_builder::builder::arg::Arg::short(local_790,auStack_a58,0x76);
  clap_builder::builder::arg::Arg::long(auStack_a58,local_790,&DAT_0011e270,7);
  clap_builder::builder::arg::Arg::help(local_790,auStack_a58,&DAT_0011e534,0x1a);
  clap_builder::builder::arg::Arg::action(&local_278,local_790,2);
  clap_builder::builder::command::Command::arg(auStack_a58,local_540,&local_278);
                    /* try { // try from 001b6c3b to 001b6c95 has its CatchHandler @ 001b6da5 */
  clap_builder::builder::arg::Arg::new(local_540,&DAT_0011e277,0x12);
  clap_builder::builder::arg::Arg::long(local_790,local_540,&DAT_0011e54e,0x11);
  clap_builder::builder::arg::Arg::alias(local_540,local_790,&DAT_0011e277,0x12);
  (*(code *)PTR_memcpy_0022ba60)(local_790,local_540,0x248);
  local_548 = local_2f8 | 4;
  local_544 = local_2f4;
  clap_builder::builder::arg::Arg::action(&local_278,local_790,2);
  clap_builder::builder::command::Command::arg(local_540,auStack_a58,&local_278);
                    /* try { // try from 001b6cfe to 001b6d6d has its CatchHandler @ 001b6e32 */
  clap_builder::builder::arg::Arg::new(auStack_a58,&DAT_0011e289,5);
  clap_builder::builder::arg::Arg::action(local_790,auStack_a58,1);
  local_278 = (undefined *)0x2;
  clap_builder::builder::arg::Arg::value_parser(auStack_a58,local_790,&local_278);
  clap_builder::builder::arg::Arg::num_args(local_790,auStack_a58);
  clap_builder::builder::arg::Arg::value_hint(auStack_a58,local_790,2);
  clap_builder::builder::command::Command::arg(param_1,local_540,auStack_a58);
  return param_1;
}