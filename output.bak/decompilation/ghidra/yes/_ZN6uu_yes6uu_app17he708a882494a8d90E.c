long __rustcall uu_yes::uu_app(long param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [700];
  ulong local_78c;
  undefined4 local_784;
  undefined local_780 [592];
  undefined local_530 [712];
  undefined8 local_268 [74];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(auStack_a48,uVar1);
  clap_builder::builder::command::Command::version(local_530,auStack_a48,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (auStack_a48,local_530,"Repeatedly display a line with STRING (or \'y\')",0x2e);
                    /* try { // try from 001a6869 to 001a6882 has its CatchHandler @ 001a6948 */
  uucore::format_usage(local_780,"{} [STRING]...",0xe);
  clap_builder::builder::command::Command::override_usage(local_530,auStack_a48,local_780);
                    /* try { // try from 001a689b to 001a68d2 has its CatchHandler @ 001a6955 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"STRING",6);
  local_268[0] = 2;
  clap_builder::builder::arg::Arg::value_parser(local_780,auStack_a48,local_268);
  clap_builder::builder::arg::Arg::action(local_268,local_780);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_268);
  (*(code *)PTR_memcpy_0020d0b0)(param_1,auStack_a48,700);
  *(ulong *)(param_1 + 700) = local_78c | 0x8000000080;
  *(undefined4 *)(param_1 + 0x2c4) = local_784;
  return param_1;
}