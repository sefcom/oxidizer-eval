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
  clap_builder::builder::command::Command::version(local_530,local_7f8,&DAT_0012343b,6);
  clap_builder::builder::command::Command::about(local_7f8,local_530,&DAT_00123441,0x3a);
  clap_builder::builder::command::Command::after_help(local_530,local_7f8,&DAT_0012347b,0xda);
                    /* try { // try from 001bc5c2 to 001bc5d6 has its CatchHandler @ 001bc97e */
  uucore::format_usage(auStack_a48,&DAT_00123555,0x15);
  clap_builder::builder::command::Command::override_usage(local_7f8,local_530,auStack_a48);
  (*(code *)PTR_memcpy_0022cba0)(local_530,local_7f8,700);
  local_274 = local_53c | 0x8800000088;
  local_26c = local_534;
                    /* try { // try from 001bc630 to 001bc6cb has its CatchHandler @ 001bc9d8 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0012356a,0xc);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,&DAT_00123576,2);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,0x62);
  clap_builder::builder::arg::Arg::visible_alias(auStack_a48,local_7f8,&DAT_0012356a,0xc);
  clap_builder::builder::arg::Arg::overrides_with(local_7f8,auStack_a48,&DAT_00123578,7);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0012357f,0x29);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 001bc6fc to 001bc797 has its CatchHandler @ 001bc9c6 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00123578,7);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_001233b6,3);
  clap_builder::builder::arg::Arg::short(local_530,auStack_a48,99);
  clap_builder::builder::arg::Arg::visible_alias(auStack_a48,local_530,&DAT_00123578,7);
  clap_builder::builder::arg::Arg::overrides_with(local_530,auStack_a48,&DAT_0012356a,0xc);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_001235a8,0x24);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001bc7c8 to 001bc82b has its CatchHandler @ 001bc9b4 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_001235cc,0xe);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,&DAT_001235cc,0xe);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,0x70);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_001235da,0x15);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 001bc85c to 001bc8ac has its CatchHandler @ 001bc9a2 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_001235ef,0xf);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_001235ef,0xf);
  clap_builder::builder::arg::Arg::help(local_530,auStack_a48,&DAT_001235fe,0x27);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 001bc8dd to 001bc8f5 has its CatchHandler @ 001bc990 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00116d6c,4);
  (*(code *)PTR_memcpy_0022cba0)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 | 4;
  local_7fc = local_5ac;
                    /* try { // try from 001bc92e to 001bc942 has its CatchHandler @ 001bc990 */
  clap_builder::builder::arg::Arg::value_hint(local_7f8,auStack_a48,3);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,1);
  clap_builder::builder::command::Command::arg(param_1,local_530,auStack_a48);
  return param_1;
}