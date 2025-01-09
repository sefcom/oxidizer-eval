undefined8 __rustcall uu_truncate::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  undefined local_7f8 [584];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_530,uVar1);
  clap_builder::builder::command::Command::version(local_7f8,local_530,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_530,local_7f8,"Shrink or extend the size of each file to the specified size.",
             0x3d);
                    /* try { // try from 001ad403 to 001ad417 has its CatchHandler @ 001ad7ec */
  uucore::format_usage(auStack_a48,"{} [OPTION]... [FILE]...",0x18);
  clap_builder::builder::command::Command::override_usage(local_7f8,local_530,auStack_a48);
  (*(code *)PTR_memcpy_00219b68)(local_530,local_7f8,700);
  local_274 = local_53c | 0x8000000080;
  local_26c = local_534;
                    /* try { // try from 001ad471 to 001ad4d9 has its CatchHandler @ 001ad822 */
  clap_builder::builder::arg::Arg::new(local_7f8,"io-blocks",9);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x6f);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"io-blocks",9);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,
             "treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)"
             ,0x56);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 001ad50a to 001ad572 has its CatchHandler @ 001ad810 */
  clap_builder::builder::arg::Arg::new(local_530,"no-create",9);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,99);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"no-create",9);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"do not create files that do not exist",0x25);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001ad5a3 to 001ad658 has its CatchHandler @ 001ad846 */
  clap_builder::builder::arg::Arg::new(local_7f8,"reference",9);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x72);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"reference",9);
  clap_builder::builder::arg::Arg::required_unless_present
            (auStack_a48,local_7f8,
             &anon_e7564acb652dbde43394d696a024ead1_21_llvm_5275832360742018685,4);
  clap_builder::builder::arg::Arg::help
            (local_7f8,auStack_a48,"base the size of each file on the size of RFILE",0x2f);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_7f8,"RFILE",5);
  clap_builder::builder::arg::Arg::value_hint(local_268,auStack_a48,3);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 001ad676 to 001ad716 has its CatchHandler @ 001ad834 */
  clap_builder::builder::arg::Arg::new
            (local_530,&anon_e7564acb652dbde43394d696a024ead1_21_llvm_5275832360742018685,4);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x73);
  clap_builder::builder::arg::Arg::long
            (local_530,auStack_a48,
             &anon_e7564acb652dbde43394d696a024ead1_21_llvm_5275832360742018685,4);
  clap_builder::builder::arg::Arg::required_unless_present(auStack_a48,local_530,"reference",9);
  clap_builder::builder::arg::Arg::help
            (local_530,auStack_a48,
             "set or adjust the size of each file according to SIZE, which is in bytes unless --io-blocks is specified"
             ,0x68);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_530,&DAT_00114024,4);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 001ad72f to 001ad763 has its CatchHandler @ 001ad7fe */
  clap_builder::builder::arg::Arg::new(local_7f8,"files",5);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_7f8,&DAT_00114088,4);
  clap_builder::builder::arg::Arg::action(local_7f8,auStack_a48,1);
  (*(code *)PTR_memcpy_00219b68)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 | 1;
  local_7fc = local_5ac;
                    /* try { // try from 001ad7af to 001ad7c3 has its CatchHandler @ 001ad7fe */
  clap_builder::builder::arg::Arg::value_hint(local_7f8,auStack_a48,3);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_7f8);
  return param_1;
}