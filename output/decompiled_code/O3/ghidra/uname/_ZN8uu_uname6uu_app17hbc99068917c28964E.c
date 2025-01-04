undefined8 __rustcall uu_uname::uu_app(undefined8 param_1)

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
  undefined local_530 [584];
  uint local_2e8;
  undefined4 local_2e4;
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_7f8,uVar1);
  clap_builder::builder::command::Command::version(local_530,local_7f8,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_7f8,local_530,"Print certain system information. \nWith no OPTION, same as -s.",
             0x3e);
                    /* try { // try from 001a8cf3 to 001a8d07 has its CatchHandler @ 001a933e */
  uucore::format_usage(auStack_a48,"{} [OPTION]...",0xe);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_0020e7d0)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8000000080;
  local_534 = local_26c;
                    /* try { // try from 001a8d61 to 001a8dc9 has its CatchHandler @ 001a93c2 */
  clap_builder::builder::arg::Arg::new(local_530,"all",3);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x61);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"all",3);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"Behave as though all of the options -mnrsvo were specified.",
             0x3b);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001a8df5 to 001a8e79 has its CatchHandler @ 001a93e6 */
  clap_builder::builder::arg::Arg::new(local_7f8,"kernel-name",0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x73);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"kernel-name",0xb);
  clap_builder::builder::arg::Arg::alias(auStack_a48,local_7f8,"sysname",7);
  clap_builder::builder::arg::Arg::help(local_7f8,auStack_a48,"print the kernel name.",0x16);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 001a8ea5 to 001a8f0d has its CatchHandler @ 001a93b0 */
  clap_builder::builder::arg::Arg::new(local_530,"nodenameDeadlock",8);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x6e);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"nodenameDeadlock",8);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,
             "print the nodename (the nodename may be a name that the system is known by to a communications network)."
             ,0x68);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001a8f39 to 001a8fbd has its CatchHandler @ 001a93d4 */
  clap_builder::builder::arg::Arg::new(local_7f8,"kernel-release",0xe);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x72);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"kernel-release",0xe);
  clap_builder::builder::arg::Arg::alias(auStack_a48,local_7f8,"release",7);
  clap_builder::builder::arg::Arg::help
            (local_7f8,auStack_a48,"print the operating system release.",0x23);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 001a8fe9 to 001a9051 has its CatchHandler @ 001a939e */
  clap_builder::builder::arg::Arg::new(local_530,"kernel-version",0xe);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x76);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"kernel-version",0xe);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"print the operating system version.",0x23);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001a907d to 001a90e5 has its CatchHandler @ 001a938c */
  clap_builder::builder::arg::Arg::new(local_7f8,"machine",7);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x6d);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"machine",7);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"print the machine hardware name.",0x20);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 001a9111 to 001a9179 has its CatchHandler @ 001a937a */
  clap_builder::builder::arg::Arg::new
            (local_530,anon_fa20d908ae531394d995a480a5191403_8_llvm_9354271668978287964,0x10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x6f);
  clap_builder::builder::arg::Arg::long
            (local_530,auStack_a48,anon_fa20d908ae531394d995a480a5191403_8_llvm_9354271668978287964,
             0x10);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"print the operating system name.",0x20);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001a91a5 to 001a920d has its CatchHandler @ 001a9368 */
  clap_builder::builder::arg::Arg::new(local_7f8,"processor",9);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x70);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"processor",9);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"print the processor type (non-portable)",0x27);
  clap_builder::builder::arg::Arg::action(local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_0020e7d0)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 | 4;
  local_7fc = local_5ac;
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 001a926c to 001a92d4 has its CatchHandler @ 001a9353 */
  clap_builder::builder::arg::Arg::new(local_530,"hardware-platform",0x11);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x69);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"hardware-platform",0x11);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"print the hardware platform (non-portable)",0x2a);
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48);
  (*(code *)PTR_memcpy_0020e7d0)(auStack_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
  clap_builder::builder::command::Command::arg(param_1,local_7f8,auStack_a48);
  return param_1;
}