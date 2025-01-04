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
  clap_builder::builder::command::Command::version(local_530,local_7f8,&DAT_00165d7e,6);
  clap_builder::builder::command::Command::about(local_7f8,local_530,&DAT_00155680,0x20);
                    /* try { // try from 002e2693 to 002e26a7 has its CatchHandler @ 002e316c */
  uucore::format_usage(auStack_a48,&DAT_00165d84,0x16);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_004960a0)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8800000088;
  local_534 = local_26c;
                    /* try { // try from 002e2701 to 002e2719 has its CatchHandler @ 002e324d */
  clap_builder::builder::arg::Arg::new(local_530,"filemode",4);
  (*(code *)PTR_memcpy_004960a0)(auStack_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48,1);
  local_268 = 2;
                    /* try { // try from 002e2776 to 002e279d has its CatchHandler @ 002e324d */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_530,&local_268);
  clap_builder::builder::arg::Arg::value_hint(&local_268,auStack_a48,3);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 002e27bb to 002e282e has its CatchHandler @ 002e32a7 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00165d9a,9);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,&DAT_00165d9a,9);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,0x61);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_00165da3,0x2f);
  clap_builder::builder::arg::Arg::value_name(local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_004960a0)(&local_268,&PTR_s_sysv_00455678,0xf0);
                    /* try { // try from 002e284c to 002e285e has its CatchHandler @ 002e32a7 */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_7f8,&local_268);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002e2877 to 002e28fb has its CatchHandler @ 002e3295 */
  clap_builder::builder::arg::Arg::new(local_530,"untagged",8);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"untagged",8);
  clap_builder::builder::arg::Arg::help(local_530,auStack_a48,&DAT_00165e0c,0x35);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::arg::Arg::overrides_with(&local_268,auStack_a48,&DAT_00165d75,3);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 002e2919 to 002e299d has its CatchHandler @ 002e3283 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00165d75,3);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,&DAT_00165d75,3);
  clap_builder::builder::arg::Arg::help(local_7f8,auStack_a48,&DAT_00165e41,0x36);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,2);
  clap_builder::builder::arg::Arg::overrides_with(&local_268,auStack_a48,"untagged",8);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 002e29bb to 002e29ef has its CatchHandler @ 002e323b */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00165e77,6);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_00165e77,6);
                    /* try { // try from 002e29f0 to 002e29f4 has its CatchHandler @ 002e315c */
  local_260 = ::alloc::boxed::Box<T>::new();
  local_268 = 4;
  local_258 = &DAT_00455768;
                    /* try { // try from 002e2a18 to 002e2a2f has its CatchHandler @ 002e3157 */
  clap_builder::builder::arg::Arg::value_parser(local_530,auStack_a48,&local_268);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x6c);
                    /* try { // try from 002e2a48 to 002e2a63 has its CatchHandler @ 002e323b */
  clap_builder::builder::arg::Arg::help(local_530,auStack_a48,&DAT_00165e7d,99);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,0);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002e2a91 to 002e2ae1 has its CatchHandler @ 002e3229 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00165ee0,3);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,&DAT_00165ee0,3);
  clap_builder::builder::arg::Arg::help(local_7f8,auStack_a48,&DAT_00165ee3,0x29);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002e2b12 to 002e2b62 has its CatchHandler @ 002e3214 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00165f0c,6);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_00165f0c,6);
  clap_builder::builder::arg::Arg::help(local_530,auStack_a48,&DAT_00165f12,0x35);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002e2b93 to 002e2c2a has its CatchHandler @ 002e3271 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00165f47,5);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,99);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,&DAT_00165f47,5);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_00165f4c,0x2b);
  clap_builder::builder::arg::Arg::action(local_7f8,auStack_a48,2);
  clap_builder::builder::arg::Arg::conflicts_with(auStack_a48,local_7f8,&DAT_00165d75,3);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002e2c43 to 002e2cc7 has its CatchHandler @ 002e325f */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00165f77,6);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_00165f77,6);
  clap_builder::builder::arg::Arg::help(local_530,auStack_a48,&DAT_00165f7d,0x25);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::arg::Arg::conflicts_with(&local_268,auStack_a48,&DAT_00165ee0,3);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 002e2ce5 to 002e2d19 has its CatchHandler @ 002e31ff */
  clap_builder::builder::arg::Arg::new(local_7f8,"text",4);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,"text",4);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,0x74);
  (*(code *)PTR_memcpy_004960a0)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 | 4;
  local_7fc = local_5ac;
                    /* try { // try from 002e2d65 to 002e2d80 has its CatchHandler @ 002e31ff */
  clap_builder::builder::arg::Arg::overrides_with(local_7f8,auStack_a48,&DAT_00165d78,6);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002e2db1 to 002e2de5 has its CatchHandler @ 002e31ea */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00165d78,6);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_00165d78,6);
  clap_builder::builder::arg::Arg::short(local_530,auStack_a48,0x62);
  (*(code *)PTR_memcpy_004960a0)(auStack_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
                    /* try { // try from 002e2e31 to 002e2e4c has its CatchHandler @ 002e31ea */
  clap_builder::builder::arg::Arg::overrides_with(local_530,auStack_a48,"text",4);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002e2e7d to 002e2ee5 has its CatchHandler @ 002e31d5 */
  clap_builder::builder::arg::Arg::new(local_7f8,"warnZeroV",4);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x77);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"warnZeroV",4);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_00165fa2,0x2e);
  clap_builder::builder::arg::Arg::action(&local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 002e2f16 to 002e2f66 has its CatchHandler @ 002e31c0 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00165fd0,6);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_00165fd0,6);
  clap_builder::builder::arg::Arg::help(local_530,auStack_a48,&DAT_00165fd6,0x30);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002e2f97 to 002e2fe7 has its CatchHandler @ 002e31ab */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00166006,5);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,&DAT_00166006,5);
  clap_builder::builder::arg::Arg::help(local_7f8,auStack_a48,&DAT_0016600b,0x32);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002e3018 to 002e3068 has its CatchHandler @ 002e3196 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0016603d,0xe);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_0016603d,0xe);
  clap_builder::builder::arg::Arg::help(local_530,auStack_a48,&DAT_0016604b,0x2d);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002e3099 to 002e30fc has its CatchHandler @ 002e3181 */
  clap_builder::builder::arg::Arg::new(local_7f8,"zero",4);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,"zero",4);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,0x7a);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_00166078,0x4b);
  clap_builder::builder::arg::Arg::action(&local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
  clap_builder::builder::command::Command::after_help(param_1,local_7f8,&DAT_001660c3,0x1cb);
  return param_1;
}