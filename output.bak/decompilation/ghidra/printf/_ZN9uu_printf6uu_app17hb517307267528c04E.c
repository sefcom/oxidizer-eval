undefined8 __rustcall uu_printf::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined local_800 [700];
  uint local_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined local_538 [700];
  uint local_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined local_270 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_800,uVar1);
  (*(code *)PTR_memcpy_00224620)(local_538,local_800,700);
  local_27c = local_544 | 2;
  uStack_278 = uStack_540;
  uStack_274 = uStack_53c;
  clap_builder::builder::command::Command::version(local_800,local_538);
  clap_builder::builder::command::Command::about(local_538,local_800);
  clap_builder::builder::command::Command::after_help(local_800,local_538);
                    /* try { // try from 001b92e1 to 001b92fa has its CatchHandler @ 001b9501 */
  uucore::format_usage(local_270,&DAT_00116e9c,0x21);
  clap_builder::builder::command::Command::override_usage(local_538,local_800,local_270);
  (*(code *)PTR_memcpy_00224620)(local_800,local_538,700);
  uVar2 = CONCAT44(uStack_278,local_27c) | 0x14000000140000;
  local_544 = (uint)uVar2;
  uStack_540 = (undefined4)(uVar2 >> 0x20);
  uStack_53c = uStack_274;
  clap_builder::builder::arg::Arg::new(local_538,&DAT_0010ab58,4);
  clap_builder::builder::arg::Arg::long(local_270,local_538,&DAT_0010ab58,4);
                    /* try { // try from 001b938d to 001b93a8 has its CatchHandler @ 001b94f2 */
  clap_builder::builder::arg::Arg::help(local_538,local_270,&DAT_00116ebd,0x16);
  clap_builder::builder::arg::Arg::action(local_270,local_538,5);
  clap_builder::builder::command::Command::arg(local_538,local_800,local_270);
  clap_builder::builder::arg::Arg::new(local_800,&DAT_00116ed3,7);
  clap_builder::builder::arg::Arg::long(local_270,local_800,&DAT_00116ed3,7);
                    /* try { // try from 001b9412 to 001b942a has its CatchHandler @ 001b94e0 */
  clap_builder::builder::arg::Arg::help(local_800,local_270,&DAT_00116eda,0x19);
  clap_builder::builder::arg::Arg::action(local_270,local_800,8);
  clap_builder::builder::command::Command::arg(local_800,local_538,local_270);
  clap_builder::builder::arg::Arg::new(local_270,&DAT_00116ef3,6);
  clap_builder::builder::command::Command::arg(local_538,local_800,local_270);
  clap_builder::builder::arg::Arg::new(local_800,&DAT_0010b358,8);
  clap_builder::builder::arg::Arg::action(local_270,local_800,1);
  clap_builder::builder::command::Command::arg(param_1,local_538,local_270);
  return param_1;
}