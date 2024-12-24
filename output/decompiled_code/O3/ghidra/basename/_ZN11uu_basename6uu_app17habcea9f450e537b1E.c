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
                    /* try { // try from 001aaf5d to 001aaf73 has its CatchHandler @ 001ab289 */
  uucore::format_usage(local_800,"{} [-z] NAME [SUFFIX]\n{} OPTION... NAME...",0x2a);
  clap_builder::builder::command::Command::override_usage(local_2e8,local_5b0,local_800);
  (*(code *)PTR_memcpy_00212718)(local_5b0,local_2e8,700);
  local_2f4 = local_2c | 0x8000000080;
  local_2ec = local_24;
  clap_builder::builder::arg::Arg::new(local_2e8,&DAT_00113bb0,8);
  clap_builder::builder::arg::Arg::short(local_800,local_2e8,0x61);
  clap_builder::builder::arg::Arg::long(local_2e8,local_800,&DAT_00113bb0,8);
                    /* try { // try from 001ab01e to 001ab069 has its CatchHandler @ 001ab2ad */
  clap_builder::builder::arg::Arg::help
            (local_800,local_2e8,"support multiple arguments and treat each as a NAME",0x33);
  clap_builder::builder::arg::Arg::action(local_2e8,local_800,2);
  clap_builder::builder::arg::Arg::overrides_with(local_800,local_2e8,&DAT_00113bb0,8);
  clap_builder::builder::command::Command::arg(local_2e8,local_5b0,local_800);
  clap_builder::builder::arg::Arg::new(local_5b0,&DAT_00113190,4);
  clap_builder::builder::arg::Arg::action(local_800,local_5b0,1);
  clap_builder::builder::arg::Arg::value_hint(local_5b0,local_800);
  (*(code *)PTR_memcpy_00212718)(local_800,local_5b0,0x248);
  local_5b8 = local_368 | 0x204;
  local_5b4 = local_364;
  clap_builder::builder::command::Command::arg(local_5b0,local_2e8,local_800);
  clap_builder::builder::arg::Arg::new(local_2e8,"suffix",6);
  clap_builder::builder::arg::Arg::short(local_800,local_2e8,0x73);
  clap_builder::builder::arg::Arg::long(local_2e8,local_800,"suffix",6);
                    /* try { // try from 001ab164 to 001ab1ac has its CatchHandler @ 001ab2bf */
  clap_builder::builder::arg::Arg::value_name(local_800,local_2e8);
  clap_builder::builder::arg::Arg::help
            (local_2e8,local_800,"remove a trailing SUFFIX; implies -a",0x24);
  clap_builder::builder::arg::Arg::overrides_with(local_800,local_2e8,"suffix",6);
  clap_builder::builder::command::Command::arg(local_2e8,local_5b0,local_800);
  clap_builder::builder::arg::Arg::new(local_5b0,&DAT_00113174,4);
  clap_builder::builder::arg::Arg::short(local_800,local_5b0,0x7a);
  clap_builder::builder::arg::Arg::long(local_5b0,local_800,&DAT_00113174,4);
                    /* try { // try from 001ab216 to 001ab261 has its CatchHandler @ 001ab29b */
  clap_builder::builder::arg::Arg::help
            (local_800,local_5b0,"end each output line with NUL, not newline",0x2a);
  clap_builder::builder::arg::Arg::action(local_5b0,local_800,2);
  clap_builder::builder::arg::Arg::overrides_with(local_800,local_5b0,&DAT_00113174,4);
  clap_builder::builder::command::Command::arg(param_1,local_2e8,local_800);
  return param_1;
}