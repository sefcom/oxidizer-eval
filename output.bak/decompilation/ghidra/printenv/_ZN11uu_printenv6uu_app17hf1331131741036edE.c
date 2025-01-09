undefined8 __rustcall uu_printenv::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_a50 [700];
  ulong local_794;
  undefined4 local_78c;
  undefined local_788 [592];
  undefined local_538 [700];
  ulong local_27c;
  undefined4 local_274;
  undefined local_270 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_a50,uVar1);
  clap_builder::builder::command::Command::version(local_538,local_a50);
  clap_builder::builder::command::Command::about(local_a50,local_538);
                    /* try { // try from 001a3887 to 001a38a0 has its CatchHandler @ 001a39f0 */
  uucore::format_usage(local_788,"{} [OPTION]... [VARIABLE]...",0x1c);
  clap_builder::builder::command::Command::override_usage(local_538,local_a50,local_788);
  (*(code *)PTR_memcpy_002064e0)(local_a50,local_538,700);
  local_794 = local_27c | 0x8000000080;
  local_78c = local_274;
  clap_builder::builder::arg::Arg::new(local_538,&DAT_001124a8,4);
  clap_builder::builder::arg::Arg::short(local_788,local_538);
  clap_builder::builder::arg::Arg::long(local_538,local_788);
                    /* try { // try from 001a393b to 001a394a has its CatchHandler @ 001a39e1 */
  clap_builder::builder::arg::Arg::help(local_788,local_538);
  clap_builder::builder::arg::Arg::action(local_270,local_788,2);
  clap_builder::builder::command::Command::arg(local_538,local_a50,local_270);
  clap_builder::builder::arg::Arg::new(local_a50,"variables",9);
  clap_builder::builder::arg::Arg::action(local_788,local_a50,1);
  clap_builder::builder::arg::Arg::num_args(local_a50,local_788);
  clap_builder::builder::command::Command::arg(param_1,local_538,local_a50);
  return param_1;
}