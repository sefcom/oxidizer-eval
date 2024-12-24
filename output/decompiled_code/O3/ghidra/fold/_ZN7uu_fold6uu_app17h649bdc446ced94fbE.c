undefined8 __rustcall uu_fold::uu_app(undefined8 param_1)

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
  clap_builder::builder::command::Command::new(local_530,uVar1);
  clap_builder::builder::command::Command::version(local_7f8,local_530,"0.0.28",6);
                    /* try { // try from 001b1674 to 001b1688 has its CatchHandler @ 001b1989 */
  uucore::format_usage(auStack_a48,"{} [OPTION]... [FILE]...",0x18);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,auStack_a48);
  clap_builder::builder::command::Command::about
            (local_7f8,local_530,
             "Writes each file (or standard input if no files are given)\nto standard output whilst breaking long lines"
             ,0x68);
  (*(code *)PTR_memcpy_0021f788)(local_530,local_7f8,700);
  local_274 = local_53c | 0x8000000080;
  local_26c = local_534;
                    /* try { // try from 001b1701 to 001b1764 has its CatchHandler @ 001b19bf */
  clap_builder::builder::arg::Arg::new(local_7f8,"bytes",5);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,"bytes",5);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,0x62);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,
             "count using bytes rather than columns (meaning control characters such as newline are not treated specially)"
             ,0x6c);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 001b1795 to 001b17f8 has its CatchHandler @ 001b19ad */
  clap_builder::builder::arg::Arg::new(local_530,"spaces",6);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"spaces",6);
  clap_builder::builder::arg::Arg::short(local_530,auStack_a48,0x73);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"break lines at word boundaries rather than a hard cut-off",0x39)
  ;
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001b1829 to 001b189c has its CatchHandler @ 001b19d1 */
  clap_builder::builder::arg::Arg::new(local_7f8,"width",5);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,"width",5);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,0x77);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"set WIDTH as the maximum line width rather than 80",0x32);
  clap_builder::builder::arg::Arg::value_name(local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_0021f788)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 | 0x20;
  local_7fc = local_5ac;
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 001b18ed to 001b1905 has its CatchHandler @ 001b199b */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00114214,4);
  (*(code *)PTR_memcpy_0021f788)(auStack_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48,1);
                    /* try { // try from 001b1956 to 001b1965 has its CatchHandler @ 001b199b */
  clap_builder::builder::arg::Arg::value_hint(auStack_a48,local_530,3);
  clap_builder::builder::command::Command::arg(param_1,local_7f8,auStack_a48);
  return param_1;
}