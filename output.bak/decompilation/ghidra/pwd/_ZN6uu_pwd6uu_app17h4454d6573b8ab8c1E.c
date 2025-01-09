undefined8 __rustcall uu_pwd::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [700];
  ulong local_78c;
  undefined4 local_784;
  undefined local_780 [700];
  ulong local_4c4;
  undefined4 local_4bc;
  undefined local_4b8 [592];
  undefined local_268 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(auStack_a48,uVar1);
  clap_builder::builder::command::Command::version(local_780,auStack_a48,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (auStack_a48,local_780,"Display the full filename of the current working directory.",
             0x3b);
                    /* try { // try from 001a5e69 to 001a5e82 has its CatchHandler @ 001a6026 */
  uucore::format_usage(local_4b8,"{} [OPTION]... [FILE]...",0x18);
  clap_builder::builder::command::Command::override_usage(local_780,auStack_a48,local_4b8);
  (*(code *)PTR_memcpy_0020d458)(auStack_a48,local_780,700);
  local_78c = local_4c4 | 0x8000000080;
  local_784 = local_4bc;
                    /* try { // try from 001a5ed7 to 001a5f49 has its CatchHandler @ 001a6033 */
  clap_builder::builder::arg::Arg::new(local_780,"logical",7);
  clap_builder::builder::arg::Arg::short(local_4b8,local_780,0x4c);
  clap_builder::builder::arg::Arg::long(local_780,local_4b8,"logical",7);
  clap_builder::builder::arg::Arg::help
            (local_4b8,local_780,"use PWD from environment, even if it contains symlinks",0x36);
  clap_builder::builder::arg::Arg::action(local_268,local_4b8);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,local_268);
                    /* try { // try from 001a5f75 to 001a5fef has its CatchHandler @ 001a6040 */
  clap_builder::builder::arg::Arg::new(auStack_a48,&DAT_00112990,8);
  clap_builder::builder::arg::Arg::short(local_4b8,auStack_a48,0x50);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_4b8,&DAT_00112990,8);
  clap_builder::builder::arg::Arg::overrides_with(local_4b8,auStack_a48,"logical",7);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_4b8,"avoid all symlinks",0x12);
  clap_builder::builder::arg::Arg::action(local_4b8,auStack_a48);
  clap_builder::builder::command::Command::arg(param_1,local_780,local_4b8);
  return param_1;
}