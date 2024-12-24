undefined8 __rustcall uu_expr::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
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
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_800,uVar1);
  clap_builder::builder::command::Command::version(local_538,local_800);
  clap_builder::builder::command::Command::about(local_800,local_538);
                    /* try { // try from 00233327 to 00233340 has its CatchHandler @ 0023355d */
  uucore::format_usage(local_270,&DAT_001692ad,0x1c);
  clap_builder::builder::command::Command::override_usage(local_538,local_800,local_270);
  clap_builder::builder::command::Command::after_help(local_800,local_538);
  (*(code *)PTR_memcpy_002a7570)(local_538,local_800,700);
  local_27c = local_544 | 0x14008000140080;
  local_274 = local_53c;
  clap_builder::builder::arg::Arg::new(local_800,&DAT_00169a48,7);
  clap_builder::builder::arg::Arg::long(local_270,local_800,&DAT_00169a48,7);
                    /* try { // try from 002333e3 to 002333fb has its CatchHandler @ 0023354b */
  clap_builder::builder::arg::Arg::help(local_800,local_270,&DAT_00169a4f,0x23);
  clap_builder::builder::arg::Arg::action(local_270,local_800,8);
  clap_builder::builder::command::Command::arg(local_800,local_538,local_270);
  clap_builder::builder::arg::Arg::new(local_538,&DAT_001199a0,4);
  clap_builder::builder::arg::Arg::long(local_270,local_538,&DAT_001199a0,4);
                    /* try { // try from 00233465 to 00233480 has its CatchHandler @ 0023353c */
  clap_builder::builder::arg::Arg::help(local_538,local_270,&DAT_00169a72,0x1a);
  clap_builder::builder::arg::Arg::action(local_270,local_538,5);
  clap_builder::builder::command::Command::arg(local_538,local_800,local_270);
  clap_builder::builder::arg::Arg::new(local_800,&DAT_00169a8c,10);
  clap_builder::builder::arg::Arg::action(local_270,local_800,1);
  (*(code *)PTR_memcpy_002a7570)(local_800,local_270,0x248);
  local_5b8 = local_28 | 0x20;
  local_5b4 = local_24;
  clap_builder::builder::command::Command::arg(param_1,local_538,local_800);
  return param_1;
}