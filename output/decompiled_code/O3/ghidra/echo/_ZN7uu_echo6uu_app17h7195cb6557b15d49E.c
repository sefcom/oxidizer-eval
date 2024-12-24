undefined8 __rustcall uu_echo::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [700];
  uint local_78c;
  undefined8 local_788;
  undefined local_780 [700];
  uint local_4c4;
  undefined8 local_4c0;
  undefined local_4b8 [592];
  undefined8 local_268 [74];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(auStack_a48,uVar1);
  (*(code *)PTR_memcpy_0020a490)(local_780,auStack_a48,700);
  local_4c4 = local_78c | 0x22;
  local_4c0 = local_788;
  clap_builder::builder::command::Command::version(auStack_a48,local_780);
  clap_builder::builder::command::Command::about(local_780,auStack_a48);
  clap_builder::builder::command::Command::after_help(auStack_a48,local_780);
                    /* try { // try from 001a4ef9 to 001a4f12 has its CatchHandler @ 001a5169 */
  uucore::format_usage(local_4b8,"{} [OPTIONS]... [STRING]...",0x1b);
  clap_builder::builder::command::Command::override_usage(local_780,auStack_a48,local_4b8);
  clap_builder::builder::arg::Arg::new(auStack_a48,"no_newline",10);
  clap_builder::builder::arg::Arg::short(local_4b8,auStack_a48,0x6e);
                    /* try { // try from 001a4f5a to 001a4f70 has its CatchHandler @ 001a5157 */
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_4b8,"do not output the trailing newline",0x22);
  clap_builder::builder::arg::Arg::action(local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_4b8);
  clap_builder::builder::arg::Arg::new(local_780,"enable_backslash_escape",0x17);
  clap_builder::builder::arg::Arg::short(local_4b8,local_780,0x65);
                    /* try { // try from 001a4fd0 to 001a5024 has its CatchHandler @ 001a5188 */
  clap_builder::builder::arg::Arg::help
            (local_780,local_4b8,"enable interpretation of backslash escapes",0x2a);
  clap_builder::builder::arg::Arg::action(local_4b8,local_780,2);
  clap_builder::builder::arg::Arg::overrides_with
            (local_268,local_4b8,"disable_backslash_escape",0x18);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,local_268);
  clap_builder::builder::arg::Arg::new(auStack_a48,"disable_backslash_escape",0x18);
  clap_builder::builder::arg::Arg::short(local_4b8,auStack_a48,0x45);
                    /* try { // try from 001a506c to 001a50b6 has its CatchHandler @ 001a5176 */
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_4b8,"disable interpretation of backslash escapes (default)",0x35);
  clap_builder::builder::arg::Arg::action(local_4b8,auStack_a48,2);
  clap_builder::builder::arg::Arg::overrides_with
            (local_268,local_4b8,"enable_backslash_escape",0x17);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_268);
  clap_builder::builder::arg::Arg::new(local_780,"STRING",6);
  clap_builder::builder::arg::Arg::action(local_4b8,local_780,1);
  local_268[0] = 2;
                    /* try { // try from 001a510f to 001a5126 has its CatchHandler @ 001a514a */
  clap_builder::builder::arg::Arg::value_parser(local_780,local_4b8,local_268);
  clap_builder::builder::command::Command::arg(param_1,auStack_a48,local_780);
  return param_1;
}