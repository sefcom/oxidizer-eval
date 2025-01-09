undefined8 __rustcall uu_tac::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [700];
  ulong local_78c;
  undefined4 local_784;
  undefined local_780 [584];
  uint local_538;
  undefined4 local_534;
  undefined local_530 [584];
  uint local_2e8;
  undefined4 local_2e4;
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_530,uVar1);
  clap_builder::builder::command::Command::version(auStack_a48,local_530,"0.0.28",6);
                    /* try { // try from 0029f60f to 0029f628 has its CatchHandler @ 0029f900 */
  uucore::format_usage(local_780,"{} [OPTION]... [FILE]...",0x18);
  clap_builder::builder::command::Command::override_usage(local_530,auStack_a48,local_780);
  clap_builder::builder::command::Command::about
            (auStack_a48,local_530,"Write each file to standard output, last line first.",0x34);
  (*(code *)PTR_memcpy_004065d0)(local_530,auStack_a48,700);
  local_274 = local_78c | 0x8000000080;
  local_26c = local_784;
                    /* try { // try from 0029f69c to 0029f6fa has its CatchHandler @ 0029f927 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"before",6);
  clap_builder::builder::arg::Arg::short(local_780,auStack_a48,0x62);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_780,"before",6);
  clap_builder::builder::arg::Arg::help
            (local_780,auStack_a48,"attach the separator before instead of after",0x2c);
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_268);
                    /* try { // try from 0029f72b to 0029f79d has its CatchHandler @ 0029f91a */
  clap_builder::builder::arg::Arg::new(local_530,"regex",5);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x72);
  clap_builder::builder::arg::Arg::long(local_530,local_780,"regex",5);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,"interpret the sequence as a regular expression",0x2e);
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_268);
                    /* try { // try from 0029f7ce to 0029f841 has its CatchHandler @ 0029f939 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"separator",9);
  clap_builder::builder::arg::Arg::short(local_780,auStack_a48,0x73);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_780,"separator",9);
  clap_builder::builder::arg::Arg::help
            (local_780,auStack_a48,"use STRING as the separator instead of newline",0x2e);
  clap_builder::builder::arg::Arg::value_name(local_268,local_780);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_268);
                    /* try { // try from 0029f85a to 0029f872 has its CatchHandler @ 0029f90d */
  clap_builder::builder::arg::Arg::new(local_530,"filemode",4);
  (*(code *)PTR_memcpy_004065d0)(local_780,local_530,0x248);
  local_538 = local_2e8 | 4;
  local_534 = local_2e4;
  clap_builder::builder::arg::Arg::action(local_530,local_780,1);
                    /* try { // try from 0029f8c8 to 0029f8dc has its CatchHandler @ 0029f90d */
  clap_builder::builder::arg::Arg::value_hint(local_780,local_530,3);
  clap_builder::builder::command::Command::arg(param_1,auStack_a48,local_780);
  return param_1;
}