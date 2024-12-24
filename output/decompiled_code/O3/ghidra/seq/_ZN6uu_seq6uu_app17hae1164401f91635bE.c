undefined8 __rustcall uu_seq::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [700];
  uint local_78c;
  ulong local_788;
  undefined local_780 [700];
  uint local_4c4;
  ulong local_4c0;
  undefined local_4b8 [592];
  undefined8 local_268;
  undefined8 local_260;
  undefined local_258;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_780,uVar1);
  (*(code *)PTR_memcpy_0024b2e0)(auStack_a48,local_780,700);
  local_78c = local_4c4 | 0xa4;
  local_788 = local_4c0 | 0x80;
  clap_builder::builder::command::Command::version(local_780,auStack_a48,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (auStack_a48,local_780,"Display numbers from FIRST to LAST, in steps of INCREMENT.",0x3a
            );
                    /* try { // try from 001c88fa to 001c8913 has its CatchHandler @ 001c8bca */
  uucore::format_usage
            (local_4b8,
             "{} [OPTION]... LAST\n{} [OPTION]... FIRST LAST\n{} [OPTION]... FIRST INCREMENT LAST",
             0x51);
  clap_builder::builder::command::Command::override_usage(local_780,auStack_a48,local_4b8);
                    /* try { // try from 001c892c to 001c898a has its CatchHandler @ 001c8c15 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"separator",9);
  clap_builder::builder::arg::Arg::short(local_4b8,auStack_a48,0x73);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_4b8,"separator",9);
  clap_builder::builder::arg::Arg::help
            (local_4b8,auStack_a48,"Separator character (defaults to \\n)",0x24);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_4b8);
                    /* try { // try from 001c89a3 to 001c8a15 has its CatchHandler @ 001c8c08 */
  clap_builder::builder::arg::Arg::new(local_780,"terminator",10);
  clap_builder::builder::arg::Arg::short(local_4b8,local_780,0x74);
  clap_builder::builder::arg::Arg::long(local_780,local_4b8,"terminator",10);
  clap_builder::builder::arg::Arg::help
            (local_4b8,local_780,"Terminator character (defaults to \\n)",0x25);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,local_4b8);
                    /* try { // try from 001c8a2e to 001c8a8c has its CatchHandler @ 001c8bf6 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"equal-width",0xb);
  clap_builder::builder::arg::Arg::short(local_4b8,auStack_a48,0x77);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_4b8,"equal-width",0xb);
  clap_builder::builder::arg::Arg::help
            (local_4b8,auStack_a48,"Equalize widths of all numbers by padding with zeros",0x34);
  clap_builder::builder::arg::Arg::action(&local_268,local_4b8,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_268);
                    /* try { // try from 001c8abd to 001c8b2f has its CatchHandler @ 001c8be9 */
  clap_builder::builder::arg::Arg::new(local_780,"format",6);
  clap_builder::builder::arg::Arg::short(local_4b8,local_780,0x66);
  clap_builder::builder::arg::Arg::long(local_780,local_4b8,"format",6);
  clap_builder::builder::arg::Arg::help
            (local_4b8,local_780,"use printf style floating-point FORMAT",0x26);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,local_4b8);
                    /* try { // try from 001c8b48 to 001c8ba6 has its CatchHandler @ 001c8bd7 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"numbers",7);
  clap_builder::builder::arg::Arg::action(local_4b8,auStack_a48,1);
  local_268 = 1;
  local_260 = 3;
  local_258 = 0;
  clap_builder::builder::arg::Arg::num_args(auStack_a48,local_4b8,&local_268);
  clap_builder::builder::command::Command::arg(param_1,local_780,auStack_a48);
  return param_1;
}