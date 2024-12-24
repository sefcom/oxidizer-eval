undefined8 __rustcall uu_nproc::uu_app(undefined8 param_1)

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
                    /* try { // try from 001ad777 to 001ad790 has its CatchHandler @ 001ad907 */
  uucore::format_usage(local_270,"{} [OPTIONS]...",0xf);
  clap_builder::builder::command::Command::override_usage(local_538,local_800,local_270);
  (*(code *)PTR_memcpy_00214a30)(local_800,local_538,700);
  local_544 = local_27c | 0x8000000080;
  local_53c = local_274;
  clap_builder::builder::arg::Arg::new(local_538,"all",3);
  clap_builder::builder::arg::Arg::long(local_270,local_538,"all",3);
                    /* try { // try from 001ad823 to 001ad83e has its CatchHandler @ 001ad8f8 */
  clap_builder::builder::arg::Arg::help
            (local_538,local_270,"print the number of cores available to the system",0x31);
  clap_builder::builder::arg::Arg::action(local_270,local_538);
  clap_builder::builder::command::Command::arg(local_538,local_800,local_270);
  clap_builder::builder::arg::Arg::new(local_800,"ignore",6);
  clap_builder::builder::arg::Arg::long(local_270,local_800,"ignore",6);
                    /* try { // try from 001ad8a3 to 001ad8cd has its CatchHandler @ 001ad916 */
  clap_builder::builder::arg::Arg::value_name(local_800,local_270);
  clap_builder::builder::arg::Arg::help(local_270,local_800,"ignore up to N cores",0x14);
  clap_builder::builder::command::Command::arg(param_1,local_538,local_270);
  return param_1;
}