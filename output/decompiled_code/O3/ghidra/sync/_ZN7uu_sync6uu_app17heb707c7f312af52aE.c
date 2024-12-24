undefined8 __rustcall uu_sync::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_800 [700];
  ulong local_544;
  undefined4 local_53c;
  undefined local_538 [592];
  undefined local_2e8 [700];
  ulong local_2c;
  undefined4 local_24;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_800,uVar1);
  clap_builder::builder::command::Command::version(local_2e8,local_800);
  clap_builder::builder::command::Command::about(local_800,local_2e8);
                    /* try { // try from 001ab227 to 001ab240 has its CatchHandler @ 001ab479 */
  uucore::format_usage(local_538,"{} [OPTION]... FILE...",0x16);
  clap_builder::builder::command::Command::override_usage(local_2e8,local_800,local_538);
  (*(code *)PTR_memcpy_00213ae8)(local_800,local_2e8,700);
  local_544 = local_2c | 0x8000000080;
  local_53c = local_24;
  clap_builder::builder::arg::Arg::new(local_2e8,"file-system",0xb);
  clap_builder::builder::arg::Arg::short(local_538,local_2e8,0x66);
  clap_builder::builder::arg::Arg::long(local_2e8,local_538,"file-system",0xb);
                    /* try { // try from 001ab2eb to 001ab327 has its CatchHandler @ 001ab49a */
  clap_builder::builder::arg::Arg::conflicts_with(local_538,local_2e8,&DAT_00113428,4);
  clap_builder::builder::arg::Arg::help
            (local_2e8,local_538,
             "sync the file systems that contain the files (Linux and Windows only)",0x45);
  clap_builder::builder::arg::Arg::action(local_538,local_2e8,2);
  clap_builder::builder::command::Command::arg(local_2e8,local_800,local_538);
  clap_builder::builder::arg::Arg::new(local_800,&DAT_00113428,4);
  clap_builder::builder::arg::Arg::short(local_538,local_800,100);
  clap_builder::builder::arg::Arg::long(local_800,local_538,&DAT_00113428,4);
                    /* try { // try from 001ab3a6 to 001ab3df has its CatchHandler @ 001ab488 */
  clap_builder::builder::arg::Arg::conflicts_with(local_538,local_800,"file-system",0xb);
  clap_builder::builder::arg::Arg::help
            (local_800,local_538,"sync only file data, no unneeded metadata (Linux only)",0x36);
  clap_builder::builder::arg::Arg::action(local_538,local_800,2);
  clap_builder::builder::command::Command::arg(local_800,local_2e8,local_538);
  clap_builder::builder::arg::Arg::new(local_2e8,"files",5);
  clap_builder::builder::arg::Arg::action(local_538,local_2e8,1);
  clap_builder::builder::arg::Arg::value_hint(local_2e8,local_538);
  clap_builder::builder::command::Command::arg(param_1,local_800,local_2e8);
  return param_1;
}