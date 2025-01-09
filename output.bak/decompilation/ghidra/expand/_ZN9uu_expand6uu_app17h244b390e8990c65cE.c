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
  clap_builder::builder::command::Command::version(local_7f8,local_530,&DAT_0011d0b3,6);
  clap_builder::builder::command::Command::about(local_530,local_7f8,&DAT_0011d0b9,0x7e);
  clap_builder::builder::command::Command::after_help(local_7f8,local_530,1,0);
                    /* try { // try from 001b254d to 001b2561 has its CatchHandler @ 001b281e */
  uucore::format_usage(auStack_a48,&DAT_0011d137,0x18);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_00220ac0)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8800000088;
  local_534 = local_26c;
                    /* try { // try from 001b25bb to 001b261e has its CatchHandler @ 001b2854 */
  clap_builder::builder::arg::Arg::new(local_530,"initial",7);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"initial",7);
  clap_builder::builder::arg::Arg::short(local_530,auStack_a48,0x69);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0011d14f,0x24);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001b264f to 001b26d5 has its CatchHandler @ 001b2866 */
  clap_builder::builder::arg::Arg::new
            (local_7f8,&anon_b3080d5aab7317ae3a539a511968743d_32_llvm_17726817573235010998,4);
  clap_builder::builder::arg::Arg::long
            (auStack_a48,local_7f8,
             &anon_b3080d5aab7317ae3a539a511968743d_32_llvm_17726817573235010998,4);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,0x74);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_7f8);
  clap_builder::builder::arg::Arg::action(local_7f8,auStack_a48,1);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0011d17a,0x59);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 001b26ee to 001b2751 has its CatchHandler @ 001b2842 */
  clap_builder::builder::arg::Arg::new(local_530,"no-utf8",7);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"no-utf8",7);
  clap_builder::builder::arg::Arg::short(local_530,auStack_a48,0x55);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0011d1d3,0x35);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001b2782 to 001b279a has its CatchHandler @ 001b2830 */
  clap_builder::builder::arg::Arg::new(local_7f8,"FILES",5);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,1);
  (*(code *)PTR_memcpy_00220ac0)(local_7f8,auStack_a48,0x248);
  local_5b0 = local_800 | 4;
  local_5ac = local_7fc;
                    /* try { // try from 001b27eb to 001b27fa has its CatchHandler @ 001b2830 */
  clap_builder::builder::arg::Arg::value_hint(auStack_a48,local_7f8,3);
  clap_builder::builder::command::Command::arg(param_1,local_530,auStack_a48);
  return param_1;
}