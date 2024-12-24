undefined8 __rustcall uu_expand::uu_app(undefined8 param_1)

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
  clap_builder::builder::command::Command::new(local_530,uVar1);
  clap_builder::builder::command::Command::version(local_7f8,local_530,&DAT_0011d333,6);
  clap_builder::builder::command::Command::about(local_530,local_7f8,&DAT_0011d339,0x7e);
  clap_builder::builder::command::Command::after_help(local_7f8,local_530,1,0);
                    /* try { // try from 001b305d to 001b3071 has its CatchHandler @ 001b332e */
  uucore::format_usage(auStack_a48,&DAT_0011d3b7,0x18);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_002229c0)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8800000088;
  local_534 = local_26c;
                    /* try { // try from 001b30cb to 001b312e has its CatchHandler @ 001b3364 */
  clap_builder::builder::arg::Arg::new(local_530,"initial",7);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"initial",7);
  clap_builder::builder::arg::Arg::short(local_530,auStack_a48,0x69);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0011d3cf,0x24);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001b315f to 001b31e5 has its CatchHandler @ 001b3376 */
  clap_builder::builder::arg::Arg::new
            (local_7f8,&anon_8ef6a1ea3e01f53eba5d37c90f199d8a_7_llvm_14401858094204479963,4);
  clap_builder::builder::arg::Arg::long
            (auStack_a48,local_7f8,
             &anon_8ef6a1ea3e01f53eba5d37c90f199d8a_7_llvm_14401858094204479963,4);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,0x74);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_7f8);
  clap_builder::builder::arg::Arg::action(local_7f8,auStack_a48,1);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0011d3fa,0x59);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 001b31fe to 001b3261 has its CatchHandler @ 001b3352 */
  clap_builder::builder::arg::Arg::new(local_530,"no-utf8",7);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"no-utf8",7);
  clap_builder::builder::arg::Arg::short(local_530,auStack_a48,0x55);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0011d453,0x35);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001b3292 to 001b32aa has its CatchHandler @ 001b3340 */
  clap_builder::builder::arg::Arg::new(local_7f8,"FILES",5);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,1);
  (*(code *)PTR_memcpy_002229c0)(local_7f8,auStack_a48,0x248);
  local_5b0 = local_800 | 4;
  local_5ac = local_7fc;
                    /* try { // try from 001b32fb to 001b330a has its CatchHandler @ 001b3340 */
  clap_builder::builder::arg::Arg::value_hint(auStack_a48,local_7f8,3);
  clap_builder::builder::command::Command::arg(param_1,local_530,auStack_a48);
  return param_1;
}