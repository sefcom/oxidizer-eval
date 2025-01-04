undefined8 __rustcall uu_link::uu_app(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_818 [3];
  undefined local_800 [584];
  uint local_5b8;
  undefined4 local_5b4;
  ulong local_544;
  undefined4 local_53c;
  undefined local_538 [700];
  ulong local_27c;
  undefined4 local_274;
  undefined local_270 [584];
  uint local_28;
  undefined4 local_24;
  
  uVar2 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_538,uVar2);
  clap_builder::builder::command::Command::version(local_800,local_538);
  clap_builder::builder::command::Command::about(local_538,local_800);
                    /* try { // try from 001a8eda to 001a8ef3 has its CatchHandler @ 001a9009 */
  uucore::format_usage(local_270,"{} FILE1 FILE2",0xe);
  clap_builder::builder::command::Command::override_usage(local_800,local_538,local_270);
  puVar1 = PTR_memcpy_0020f940;
  (*(code *)PTR_memcpy_0020f940)(local_538,local_800,700);
  local_27c = local_544 | 0x8000000080;
  local_274 = local_53c;
  clap_builder::builder::arg::Arg::new(local_800);
  (*(code *)puVar1)(local_270,local_800,0x248);
  local_28 = local_5b8 | 5;
  local_24 = local_5b4;
  clap_builder::builder::arg::Arg::num_args(local_800,local_270);
  clap_builder::builder::arg::Arg::value_hint(local_270,local_800);
  local_818[0] = 2;
                    /* try { // try from 001a8fc0 to 001a8fcf has its CatchHandler @ 001a8ff7 */
  clap_builder::builder::arg::Arg::value_parser(local_800,local_270,local_818);
  clap_builder::builder::command::Command::arg(param_1,local_538,local_800);
  return param_1;
}