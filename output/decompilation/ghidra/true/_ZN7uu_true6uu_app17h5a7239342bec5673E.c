undefined8 __rustcall uu_true::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_800 [700];
  ulong local_544;
  undefined4 local_53c;
  undefined local_538 [700];
  ulong local_27c;
  undefined4 local_274;
  undefined local_270 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_800,uVar1);
  clap_builder::builder::command::Command::version(local_538,local_800);
  clap_builder::builder::command::Command::about(local_800,local_538);
  (*(code *)PTR_memcpy_001fb3c0)(local_538,local_800,700);
  local_27c = local_544 | 0x14000000140000;
  local_274 = local_53c;
  clap_builder::builder::arg::Arg::new(local_800,&DAT_00111100,4);
  clap_builder::builder::arg::Arg::long(local_270,local_800,&DAT_00111100,4);
                    /* try { // try from 0019e83f to 0019e857 has its CatchHandler @ 0019e92b */
  clap_builder::builder::arg::Arg::help(local_800,local_270,"Print help information",0x16);
  clap_builder::builder::arg::Arg::action(local_270,local_800,5);
  clap_builder::builder::command::Command::arg(local_800,local_538,local_270);
  clap_builder::builder::arg::Arg::new(local_538,"version",7);
  clap_builder::builder::arg::Arg::long(local_270,local_538,"version",7);
                    /* try { // try from 0019e8c1 to 0019e8dc has its CatchHandler @ 0019e91c */
  clap_builder::builder::arg::Arg::help(local_538,local_270,"Print version information",0x19);
  clap_builder::builder::arg::Arg::action(local_270,local_538,8);
  clap_builder::builder::command::Command::arg(param_1,local_800,local_270);
  return param_1;
}