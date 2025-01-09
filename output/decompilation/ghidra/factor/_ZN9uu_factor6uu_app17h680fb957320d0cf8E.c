undefined8 __rustcall uu_factor::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_a50 [700];
  ulong local_794;
  undefined4 local_78c;
  undefined local_788 [700];
  ulong local_4cc;
  undefined4 local_4c4;
  undefined local_4c0 [592];
  undefined local_270 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_a50,uVar1);
  clap_builder::builder::command::Command::version(local_788,local_a50);
  clap_builder::builder::command::Command::about(local_a50,local_788);
                    /* try { // try from 001fa257 to 001fa270 has its CatchHandler @ 001fa45e */
  uucore::format_usage(local_4c0,&DAT_00123411,0x1a);
  clap_builder::builder::command::Command::override_usage(local_788,local_a50,local_4c0);
  (*(code *)PTR_memcpy_00293338)(local_a50,local_788,700);
  local_794 = local_4cc | 0x4008800040088;
  local_78c = local_4c4;
  clap_builder::builder::arg::Arg::new(local_788,&DAT_001233a5,6);
  clap_builder::builder::arg::Arg::action(local_4c0,local_788,1);
  clap_builder::builder::command::Command::arg(local_788,local_a50,local_4c0);
  clap_builder::builder::arg::Arg::new(local_a50,&DAT_0012339c,9);
  clap_builder::builder::arg::Arg::short(local_4c0,local_a50);
  clap_builder::builder::arg::Arg::long(local_a50,local_4c0,&DAT_0012339c,9);
                    /* try { // try from 001fa35a to 001fa375 has its CatchHandler @ 001fa44c */
  clap_builder::builder::arg::Arg::help(local_4c0,local_a50,&DAT_0012342b,0x1d);
  clap_builder::builder::arg::Arg::action(local_270,local_4c0,2);
  clap_builder::builder::command::Command::arg(local_a50,local_788,local_270);
  clap_builder::builder::arg::Arg::new(local_788,&DAT_00119678,4);
  clap_builder::builder::arg::Arg::long(local_4c0,local_788,&DAT_00119678,4);
                    /* try { // try from 001fa3e2 to 001fa3fd has its CatchHandler @ 001fa43d */
  clap_builder::builder::arg::Arg::help(local_788,local_4c0,&DAT_00123448,0x17);
  clap_builder::builder::arg::Arg::action(local_4c0,local_788,5);
  clap_builder::builder::command::Command::arg(param_1,local_a50,local_4c0);
  return param_1;
}