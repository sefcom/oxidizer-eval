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
  (*(code *)PTR_memcpy_00209138)(local_780,auStack_a48,700);
  local_4c4 = local_78c | 0x22;
  local_4c0 = local_788;
  clap_builder::builder::command::Command::version(auStack_a48,local_780);
  clap_builder::builder::command::Command::about(local_780,auStack_a48);
  clap_builder::builder::command::Command::after_help(auStack_a48,local_780);
                    /* try { // try from 001a4999 to 001a49b2 has its CatchHandler @ 001a4c09 */
  uucore::format_usage(local_4b8,&DAT_0011b5f8,0x1b);
  clap_builder::builder::command::Command::override_usage(local_780,auStack_a48,local_4b8);
  clap_builder::builder::arg::Arg::new(auStack_a48,&DAT_0011b613,10);
  clap_builder::builder::arg::Arg::short(local_4b8,auStack_a48,0x6e);
                    /* try { // try from 001a49fa to 001a4a10 has its CatchHandler @ 001a4bf7 */
  clap_builder::builder::arg::Arg::help(auStack_a48,local_4b8,&DAT_0011b61d,0x22);
  clap_builder::builder::arg::Arg::action(local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_4b8);
  clap_builder::builder::arg::Arg::new(local_780,&DAT_0011b63f,0x17);
  clap_builder::builder::arg::Arg::short(local_4b8,local_780,0x65);
                    /* try { // try from 001a4a70 to 001a4ac4 has its CatchHandler @ 001a4c28 */
  clap_builder::builder::arg::Arg::help(local_780,local_4b8,&DAT_0011b656,0x2a);
  clap_builder::builder::arg::Arg::action(local_4b8,local_780,2);
  clap_builder::builder::arg::Arg::overrides_with(local_268,local_4b8,&DAT_0011b680,0x18);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,local_268);
  clap_builder::builder::arg::Arg::new(auStack_a48,&DAT_0011b680,0x18);
  clap_builder::builder::arg::Arg::short(local_4b8,auStack_a48,0x45);
                    /* try { // try from 001a4b0c to 001a4b56 has its CatchHandler @ 001a4c16 */
  clap_builder::builder::arg::Arg::help(auStack_a48,local_4b8,&DAT_0011b698,0x35);
  clap_builder::builder::arg::Arg::action(local_4b8,auStack_a48,2);
  clap_builder::builder::arg::Arg::overrides_with(local_268,local_4b8,&DAT_0011b63f,0x17);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_268);
  clap_builder::builder::arg::Arg::new(local_780,&DAT_0011b6cd,6);
  clap_builder::builder::arg::Arg::action(local_4b8,local_780,1);
  local_268[0] = 2;
                    /* try { // try from 001a4baf to 001a4bc6 has its CatchHandler @ 001a4bea */
  clap_builder::builder::arg::Arg::value_parser(local_780,local_4b8,local_268);
  clap_builder::builder::command::Command::arg(param_1,auStack_a48,local_780);
  return param_1;
}