undefined8 __rustcall uu_cksum::uu_app(undefined8 param_1)

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
  undefined local_530 [584];
  uint local_2e8;
  undefined4 local_2e4;
  ulong local_274;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined *local_258;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_7f8,uVar1);
  clap_builder::builder::command::Command::version(local_530,local_7f8,&DAT_00165f88,6);
  clap_builder::builder::command::Command::about(local_7f8,local_530,&DAT_00155a00,0x20);
                    /* try { // try from 002e2ea3 to 002e2eb7 has its CatchHandler @ 002e3983 */
  uucore::format_usage(auStack_a48,&DAT_00165f8e,0x16);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_00496ea8)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8800000088;
  local_534 = local_26c;
                    /* try { // try from 002e2f11 to 002e2f29 has its CatchHandler @ 002e3a64 */
  clap_builder::builder::arg::Arg::new(local_530,"filemode",4);
  (*(code *)PTR_memcpy_00496ea8)(auStack_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48,1);
  local_268 = 2;
                    /* try { // try from 002e2f86 to 002e2fad has its CatchHandler @ 002e3a64 */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_530,&local_268);
  clap_builder::builder::arg::Arg::value_hint(&local_268,auStack_a48,3);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 002e2fcb to 002e303e has its CatchHandler @ 002e3abe */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00165fa4,9);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,&DAT_00165fa4,9);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,0x61);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_00165fad,0x2f);
  clap_builder::builder::arg::Arg::value_name(local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_00496ea8)(&local_268,&PTR_s_sysv_00456430,0xf0);
                    /* try { // try from 002e305c to 002e306e has its CatchHandler @ 002e3abe */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_7f8,&local_268);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002e3087 to 002e310b has its CatchHandler @ 002e3aac */
  clap_builder::builder::arg::Arg::new(local_530,"untagged",8);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"untagged",8);
  clap_builder::builder::arg::Arg::help(local_530,auStack_a48,&DAT_00166016,0x35);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::arg::Arg::overrides_with(&local_268,auStack_a48,&DAT_00165f7f,3);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 002e3129 to 002e31ad has its CatchHandler @ 002e3a9a */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00165f7f,3);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,&DAT_00165f7f,3);
  clap_builder::builder::arg::Arg::help(local_7f8,auStack_a48,&DAT_0016604b,0x36);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,2);
  clap_builder::builder::arg::Arg::overrides_with(&local_268,auStack_a48,"untagged",8);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 002e31cb to 002e31ff has its CatchHandler @ 002e3a52 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00166081,6);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_00166081,6);
                    /* try { // try from 002e3200 to 002e320b has its CatchHandler @ 002e3973 */
  local_260 = ::alloc::boxed::Box<T>::new
                        (core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str);
  local_268 = 4;
  local_258 = &DAT_004563e0;
                    /* try { // try from 002e322f to 002e3246 has its CatchHandler @ 002e396e */
  clap_builder::builder::arg::Arg::value_parser(local_530,auStack_a48,&local_268);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x6c);
                    /* try { // try from 002e325f to 002e327a has its CatchHandler @ 002e3a52 */
  clap_builder::builder::arg::Arg::help(local_530,auStack_a48,&DAT_00166087,99);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,0);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002e32a8 to 002e32f8 has its CatchHandler @ 002e3a40 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_001660ea,3);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,&DAT_001660ea,3);
  clap_builder::builder::arg::Arg::help(local_7f8,auStack_a48,&DAT_001660ed,0x29);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002e3329 to 002e3379 has its CatchHandler @ 002e3a2b */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00166116,6);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_00166116,6);
  clap_builder::builder::arg::Arg::help(local_530,auStack_a48,&DAT_0016611c,0x35);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002e33aa to 002e3441 has its CatchHandler @ 002e3a88 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00166151,5);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,99);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,&DAT_00166151,5);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_00166156,0x2b);
  clap_builder::builder::arg::Arg::action(local_7f8,auStack_a48,2);
  clap_builder::builder::arg::Arg::conflicts_with(auStack_a48,local_7f8,&DAT_00165f7f,3);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002e345a to 002e34de has its CatchHandler @ 002e3a76 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00166181,6);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_00166181,6);
  clap_builder::builder::arg::Arg::help(local_530,auStack_a48,&DAT_00166187,0x25);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::arg::Arg::conflicts_with(&local_268,auStack_a48,&DAT_001660ea,3);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 002e34fc to 002e3530 has its CatchHandler @ 002e3a16 */
  clap_builder::builder::arg::Arg::new(local_7f8,"text",4);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,"text",4);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,0x74);
  (*(code *)PTR_memcpy_00496ea8)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 | 4;
  local_7fc = local_5ac;
                    /* try { // try from 002e357c to 002e3597 has its CatchHandler @ 002e3a16 */
  clap_builder::builder::arg::Arg::overrides_with(local_7f8,auStack_a48,&DAT_00165f82,6);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002e35c8 to 002e35fc has its CatchHandler @ 002e3a01 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00165f82,6);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_00165f82,6);
  clap_builder::builder::arg::Arg::short(local_530,auStack_a48,0x62);
  (*(code *)PTR_memcpy_00496ea8)(auStack_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
                    /* try { // try from 002e3648 to 002e3663 has its CatchHandler @ 002e3a01 */
  clap_builder::builder::arg::Arg::overrides_with(local_530,auStack_a48,"text",4);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002e3694 to 002e36fc has its CatchHandler @ 002e39ec */
  clap_builder::builder::arg::Arg::new(local_7f8,"warnZeroV",4);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x77);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"warnZeroV",4);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_001661ac,0x2e);
  clap_builder::builder::arg::Arg::action(&local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 002e372d to 002e377d has its CatchHandler @ 002e39d7 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_001661da,6);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_001661da,6);
  clap_builder::builder::arg::Arg::help(local_530,auStack_a48,&DAT_001661e0,0x30);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002e37ae to 002e37fe has its CatchHandler @ 002e39c2 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00166210,5);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,&DAT_00166210,5);
  clap_builder::builder::arg::Arg::help(local_7f8,auStack_a48,&DAT_00166215,0x32);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002e382f to 002e387f has its CatchHandler @ 002e39ad */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00166247,0xe);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_00166247,0xe);
  clap_builder::builder::arg::Arg::help(local_530,auStack_a48,&DAT_00166255,0x2d);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002e38b0 to 002e3913 has its CatchHandler @ 002e3998 */
  clap_builder::builder::arg::Arg::new(local_7f8,"zero",4);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,"zero",4);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,0x7a);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_00166282,0x4b);
  clap_builder::builder::arg::Arg::action(&local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
  clap_builder::builder::command::Command::after_help(param_1,local_7f8,&DAT_001662cd,0x1cb);
  return param_1;
}