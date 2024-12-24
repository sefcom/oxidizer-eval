undefined8 __rustcall uu_dirname::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_a50 [584];
  uint local_808;
  undefined4 local_804;
  ulong local_794;
  undefined4 local_78c;
  undefined local_788 [584];
  uint local_540;
  undefined4 local_53c;
  undefined local_538 [700];
  ulong local_27c;
  undefined4 local_274;
  undefined local_270 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_a50,uVar1);
  clap_builder::builder::command::Command::about(local_538,local_a50);
  clap_builder::builder::command::Command::version(local_a50,local_538);
                    /* try { // try from 001a6a97 to 001a6ab0 has its CatchHandler @ 001a6c38 */
  uucore::format_usage(local_788,"{} [OPTION] NAME...",0x13);
  clap_builder::builder::command::Command::override_usage(local_538,local_a50,local_788);
  (*(code *)PTR_memcpy_0020bfb0)(local_a50,local_538,700);
  local_794 = local_27c | 0x8800000088;
  local_78c = local_274;
  clap_builder::builder::arg::Arg::new(local_538,&DAT_0010a4c4,4);
  clap_builder::builder::arg::Arg::long(local_788,local_538);
  clap_builder::builder::arg::Arg::short(local_538,local_788);
                    /* try { // try from 001a6b4b to 001a6b5a has its CatchHandler @ 001a6c29 */
  clap_builder::builder::arg::Arg::help(local_788,local_538);
  clap_builder::builder::arg::Arg::action(local_270,local_788,2);
  clap_builder::builder::command::Command::arg(local_538,local_a50,local_270);
  clap_builder::builder::arg::Arg::new(local_a50,"dir",3);
  (*(code *)PTR_memcpy_0020bfb0)(local_788,local_a50,0x248);
  local_540 = local_808 | 4;
  local_53c = local_804;
  clap_builder::builder::arg::Arg::action(local_a50,local_788,1);
  clap_builder::builder::arg::Arg::value_hint(local_788,local_a50);
  clap_builder::builder::command::Command::arg(param_1,local_538,local_788);
  return param_1;
}