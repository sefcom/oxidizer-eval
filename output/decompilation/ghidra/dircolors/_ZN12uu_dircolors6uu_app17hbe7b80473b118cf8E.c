undefined8 __rustcall uu_dircolors::uu_app(undefined8 param_1)

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
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_7f8,uVar1);
  clap_builder::builder::command::Command::version(local_530,local_7f8,&DAT_00123343,6);
  clap_builder::builder::command::Command::about(local_7f8,local_530,&DAT_00123349,0x3a);
  clap_builder::builder::command::Command::after_help(local_530,local_7f8,&DAT_00123383,0xda);
                    /* try { // try from 001bc4e2 to 001bc4f6 has its CatchHandler @ 001bc89e */
  uucore::format_usage(auStack_a48,&DAT_0012345d,0x15);
  clap_builder::builder::command::Command::override_usage(local_7f8,local_530,auStack_a48);
  (*(code *)PTR_memcpy_0022c600)(local_530,local_7f8,700);
  local_274 = local_53c | 0x8800000088;
  local_26c = local_534;
                    /* try { // try from 001bc550 to 001bc5eb has its CatchHandler @ 001bc8f8 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00123472,0xc);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,&DAT_0012347e,2);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,0x62);
  clap_builder::builder::arg::Arg::visible_alias(auStack_a48,local_7f8,&DAT_00123472,0xc);
  clap_builder::builder::arg::Arg::overrides_with(local_7f8,auStack_a48,&DAT_00123480,7);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_00123487,0x29);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 001bc61c to 001bc6b7 has its CatchHandler @ 001bc8e6 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00123480,7);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_001232be,3);
  clap_builder::builder::arg::Arg::short(local_530,auStack_a48,99);
  clap_builder::builder::arg::Arg::visible_alias(auStack_a48,local_530,&DAT_00123480,7);
  clap_builder::builder::arg::Arg::overrides_with(local_530,auStack_a48,&DAT_00123472,0xc);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_001234b0,0x24);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001bc6e8 to 001bc74b has its CatchHandler @ 001bc8d4 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_001234d4,0xe);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,&DAT_001234d4,0xe);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,0x70);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_001234e2,0x15);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 001bc77c to 001bc7cc has its CatchHandler @ 001bc8c2 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_001234f7,0xf);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_001234f7,0xf);
  clap_builder::builder::arg::Arg::help(local_530,auStack_a48,&DAT_00123506,0x27);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 001bc7fd to 001bc815 has its CatchHandler @ 001bc8b0 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00116cac,4);
  (*(code *)PTR_memcpy_0022c600)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 | 4;
  local_7fc = local_5ac;
                    /* try { // try from 001bc84e to 001bc862 has its CatchHandler @ 001bc8b0 */
  clap_builder::builder::arg::Arg::value_hint(local_7f8,auStack_a48,3);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,1);
  clap_builder::builder::command::Command::arg(param_1,local_530,auStack_a48);
  return param_1;
}