undefined8 __rustcall uu_basename::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_800 [584];
  uint local_5b8;
  undefined4 local_5b4;
  undefined local_5b0 [584];
  uint local_368;
  undefined4 local_364;
  ulong local_2f4;
  undefined4 local_2ec;
  undefined local_2e8 [700];
  ulong local_2c;
  undefined4 local_24;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_5b0,uVar1);
  clap_builder::builder::command::Command::version(local_2e8,local_5b0);
  clap_builder::builder::command::Command::about(local_5b0,local_2e8);
                    /* try { // try from 001aaf0d to 001aaf23 has its CatchHandler @ 001ab239 */
  uucore::format_usage(local_800,&DAT_0011c00c,0x2a);
  clap_builder::builder::command::Command::override_usage(local_2e8,local_5b0,local_800);
  (*(code *)PTR_memcpy_002121a8)(local_5b0,local_2e8,700);
  local_2f4 = local_2c | 0x8000000080;
  local_2ec = local_24;
  clap_builder::builder::arg::Arg::new(local_2e8,&DAT_00113ab0,8);
  clap_builder::builder::arg::Arg::short(local_800,local_2e8,0x61);
  clap_builder::builder::arg::Arg::long(local_2e8,local_800,&DAT_00113ab0,8);
                    /* try { // try from 001aafce to 001ab019 has its CatchHandler @ 001ab25d */
  clap_builder::builder::arg::Arg::help(local_800,local_2e8,&DAT_0011c036,0x33);
  clap_builder::builder::arg::Arg::action(local_2e8,local_800,2);
  clap_builder::builder::arg::Arg::overrides_with(local_800,local_2e8,&DAT_00113ab0,8);
  clap_builder::builder::command::Command::arg(local_2e8,local_5b0,local_800);
  clap_builder::builder::arg::Arg::new(local_5b0,&DAT_00112f30,4);
  clap_builder::builder::arg::Arg::action(local_800,local_5b0,1);
  clap_builder::builder::arg::Arg::value_hint(local_5b0,local_800);
  (*(code *)PTR_memcpy_002121a8)(local_800,local_5b0,0x248);
  local_5b8 = local_368 | 0x204;
  local_5b4 = local_364;
  clap_builder::builder::command::Command::arg(local_5b0,local_2e8,local_800);
  clap_builder::builder::arg::Arg::new(local_2e8,&DAT_0011c000,6);
  clap_builder::builder::arg::Arg::short(local_800,local_2e8,0x73);
  clap_builder::builder::arg::Arg::long(local_2e8,local_800,&DAT_0011c000,6);
                    /* try { // try from 001ab114 to 001ab15c has its CatchHandler @ 001ab26f */
  clap_builder::builder::arg::Arg::value_name(local_800,local_2e8);
  clap_builder::builder::arg::Arg::help(local_2e8,local_800,&DAT_0011c06f,0x24);
  clap_builder::builder::arg::Arg::overrides_with(local_800,local_2e8,&DAT_0011c000,6);
  clap_builder::builder::command::Command::arg(local_2e8,local_5b0,local_800);
  clap_builder::builder::arg::Arg::new(local_5b0,&DAT_00112f14,4);
  clap_builder::builder::arg::Arg::short(local_800,local_5b0,0x7a);
  clap_builder::builder::arg::Arg::long(local_5b0,local_800,&DAT_00112f14,4);
                    /* try { // try from 001ab1c6 to 001ab211 has its CatchHandler @ 001ab24b */
  clap_builder::builder::arg::Arg::help(local_800,local_5b0,&DAT_0011c093,0x2a);
  clap_builder::builder::arg::Arg::action(local_5b0,local_800,2);
  clap_builder::builder::arg::Arg::overrides_with(local_800,local_5b0,&DAT_00112f14,4);
  clap_builder::builder::command::Command::arg(param_1,local_2e8,local_800);
  return param_1;
}