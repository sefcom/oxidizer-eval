undefined8 __rustcall uu_sum::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_7f8 [584];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [584];
  uint local_2e8;
  undefined4 local_2e4;
  undefined local_2e0 [700];
  ulong local_24;
  undefined4 local_1c;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_2e0,uVar1);
  clap_builder::builder::command::Command::version(auStack_7f8,local_2e0,"0.0.28",6);
                    /* try { // try from 001ad27f to 001ad298 has its CatchHandler @ 001ad4a8 */
  uucore::format_usage(local_530,"{} [OPTION]... [FILE]...",0x18);
  clap_builder::builder::command::Command::override_usage(local_2e0,auStack_7f8,local_530);
  clap_builder::builder::command::Command::about
            (auStack_7f8,local_2e0,
             "Checksum and count the blocks in a file.\n\nWith no FILE, or when FILE is -, read standard input."
             ,0x5f);
  (*(code *)PTR_memcpy_00215d10)(local_2e0,auStack_7f8,700);
  local_24 = local_53c | 0x8000000080;
  local_1c = local_534;
                    /* try { // try from 001ad30c to 001ad31f has its CatchHandler @ 001ad4c2 */
  clap_builder::builder::arg::Arg::new(auStack_7f8,"file",4);
  clap_builder::builder::arg::Arg::action(local_530,auStack_7f8,1);
  (*(code *)PTR_memcpy_00215d10)(auStack_7f8,local_530,0x248);
  local_5b0 = local_2e8 | 4;
  local_5ac = local_2e4;
                    /* try { // try from 001ad36b to 001ad37f has its CatchHandler @ 001ad4c2 */
  clap_builder::builder::arg::Arg::value_hint(local_530,auStack_7f8,3);
  clap_builder::builder::command::Command::arg(auStack_7f8,local_2e0,local_530);
                    /* try { // try from 001ad398 to 001ad3e9 has its CatchHandler @ 001ad4b5 */
  clap_builder::builder::arg::Arg::new(local_2e0,"r",1);
  clap_builder::builder::arg::Arg::short(local_530,local_2e0,0x72);
  clap_builder::builder::arg::Arg::help
            (local_2e0,local_530,"use the BSD sum algorithm, use 1K blocks (default)",0x32);
  clap_builder::builder::arg::Arg::action(local_530,local_2e0,2);
  clap_builder::builder::command::Command::arg(local_2e0,auStack_7f8,local_530);
                    /* try { // try from 001ad41a to 001ad46c has its CatchHandler @ 001ad4d4 */
  clap_builder::builder::arg::Arg::new
            (auStack_7f8,&anon_b1652e42acb5298d6255d984603c6a54_2_llvm_2130229470187885326,4);
  clap_builder::builder::arg::Arg::short(local_530,auStack_7f8,0x73);
  clap_builder::builder::arg::Arg::long(auStack_7f8,local_530);
  clap_builder::builder::arg::Arg::help
            (local_530,auStack_7f8,"use System V sum algorithm, use 512 bytes blocks",0x30);
  clap_builder::builder::arg::Arg::action(auStack_7f8,local_530,2);
  clap_builder::builder::command::Command::arg(param_1,local_2e0,auStack_7f8);
  return param_1;
}