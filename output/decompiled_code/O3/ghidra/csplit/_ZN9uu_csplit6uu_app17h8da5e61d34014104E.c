undefined8 __rustcall uu_csplit::uu_app(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined local_a50 [584];
  uint local_808;
  undefined4 local_804;
  ulong local_794;
  undefined4 local_78c;
  undefined local_788 [584];
  uint local_540;
  undefined4 local_53c;
  undefined local_538 [584];
  uint local_2f0;
  undefined4 local_2ec;
  ulong local_27c;
  undefined4 local_274;
  undefined local_270 [592];
  
  uVar2 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_538,uVar2);
  clap_builder::builder::command::Command::version(local_a50,local_538,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_538,local_a50,"Split a file into sections determined by context lines",0x36);
                    /* try { // try from 002bf542 to 002bf55b has its CatchHandler @ 002bfb98 */
  uucore::format_usage(local_788,"{} [OPTION]... FILE PATTERN...",0x1e);
  clap_builder::builder::command::Command::override_usage(local_a50,local_538,local_788);
  (*(code *)PTR_memcpy_00420660)(local_538,local_a50,700);
  local_27c = local_794 | 0x8800000088;
  local_274 = local_78c;
                    /* try { // try from 002bf5b7 to 002bf639 has its CatchHandler @ 002bfc1f */
  clap_builder::builder::arg::Arg::new(local_a50,"suffix-format",0xd);
  clap_builder::builder::arg::Arg::short(local_788,local_a50,0x62);
  clap_builder::builder::arg::Arg::long(local_a50,local_788,"suffix-format",0xd);
  clap_builder::builder::arg::Arg::value_name(local_788,local_a50,"FORMAT");
  clap_builder::builder::arg::Arg::help
            (local_270,local_788,"use sprintf FORMAT instead of %02d",0x22);
  clap_builder::builder::command::Command::arg(local_a50,local_538,local_270);
                    /* try { // try from 002bf654 to 002bf6e2 has its CatchHandler @ 002bfc10 */
  clap_builder::builder::arg::Arg::new(local_538,"prefix",6);
  clap_builder::builder::arg::Arg::short(local_788,local_538,0x66);
  clap_builder::builder::arg::Arg::long(local_538,local_788,"prefix",6);
  clap_builder::builder::arg::Arg::value_name(local_788,local_538,"PREFIX");
  clap_builder::builder::arg::Arg::help(local_270,local_788,"use PREFIX instead of \'xx\'",0x1a);
  clap_builder::builder::command::Command::arg(local_538,local_a50,local_270);
                    /* try { // try from 002bf6fd to 002bf763 has its CatchHandler @ 002bfbdd */
  clap_builder::builder::arg::Arg::new(local_a50,"keep-files",10);
  clap_builder::builder::arg::Arg::short(local_788,local_a50,0x6b);
  clap_builder::builder::arg::Arg::long(local_a50,local_788,"keep-files",10);
  clap_builder::builder::arg::Arg::help
            (local_788,local_a50,"do not remove output files on errors",0x24);
  clap_builder::builder::arg::Arg::action(local_270,local_788,2);
  clap_builder::builder::command::Command::arg(local_a50,local_538,local_270);
                    /* try { // try from 002bf796 to 002bf7f0 has its CatchHandler @ 002bfbce */
  clap_builder::builder::arg::Arg::new(local_538,&DAT_00165e60,0x10);
  clap_builder::builder::arg::Arg::long(local_788,local_538,&DAT_00165e60,0x10);
  clap_builder::builder::arg::Arg::help
            (local_538,local_788,"suppress the lines matching PATTERN",0x23);
  clap_builder::builder::arg::Arg::action(local_788,local_538,2);
  clap_builder::builder::command::Command::arg(local_538,local_a50,local_788);
                    /* try { // try from 002bf823 to 002bf8a5 has its CatchHandler @ 002bfbfe */
  clap_builder::builder::arg::Arg::new(local_a50,"digits: ",6);
  clap_builder::builder::arg::Arg::short(local_788,local_a50,0x6e);
  clap_builder::builder::arg::Arg::long(local_a50,local_788,"digits: ",6);
  clap_builder::builder::arg::Arg::value_name(local_788,local_a50,"DIGITS");
  clap_builder::builder::arg::Arg::help
            (local_270,local_788,"use specified number of digits instead of 2",0x2b);
  clap_builder::builder::command::Command::arg(local_a50,local_538,local_270);
                    /* try { // try from 002bf8c0 to 002bf953 has its CatchHandler @ 002bfbef */
  clap_builder::builder::arg::Arg::new(local_538,"quiet",5);
  clap_builder::builder::arg::Arg::short(local_788,local_538,0x73);
  clap_builder::builder::arg::Arg::long(local_538,local_788,"quiet",5);
  clap_builder::builder::arg::Arg::visible_alias(local_788,local_538,"silent",6);
  clap_builder::builder::arg::Arg::help
            (local_538,local_788,"do not print counts of output file sizes",0x28);
  clap_builder::builder::arg::Arg::action(local_788,local_538,2);
  clap_builder::builder::command::Command::arg(local_538,local_a50,local_788);
                    /* try { // try from 002bf986 to 002bf9ec has its CatchHandler @ 002bfbbc */
  clap_builder::builder::arg::Arg::new(local_a50,"elide-empty-files",0x11);
  clap_builder::builder::arg::Arg::short(local_788,local_a50,0x7a);
  clap_builder::builder::arg::Arg::long(local_a50,local_788,"elide-empty-files",0x11);
  clap_builder::builder::arg::Arg::help(local_788,local_a50,"remove empty output files",0x19);
  clap_builder::builder::arg::Arg::action(local_270,local_788,2);
  clap_builder::builder::command::Command::arg(local_a50,local_538,local_270);
                    /* try { // try from 002bfa1f to 002bfa37 has its CatchHandler @ 002bfbad */
  clap_builder::builder::arg::Arg::new(local_538,"filemode",4);
  (*(code *)PTR_memcpy_00420660)(local_788,local_538,0x248);
  local_540 = local_2f0 | 5;
  local_53c = local_2ec;
                    /* try { // try from 002bfa75 to 002bfa89 has its CatchHandler @ 002bfbad */
  clap_builder::builder::arg::Arg::value_hint(local_270,local_788,3);
  clap_builder::builder::command::Command::arg(local_538,local_a50,local_270);
                    /* try { // try from 002bfaa4 to 002bfab9 has its CatchHandler @ 002bfb83 */
  clap_builder::builder::arg::Arg::new(local_a50,"pattern",7);
  puVar1 = PTR_memcpy_00420660;
  (*(code *)PTR_memcpy_00420660)(local_788,local_a50,0x248);
  local_540 = local_808 | 4;
  local_53c = local_804;
  clap_builder::builder::arg::Arg::action(local_a50,local_788,1);
  (*(code *)puVar1)(local_788,local_a50,0x248);
  local_540 = local_808 | 1;
  local_53c = local_804;
  clap_builder::builder::command::Command::arg(local_a50,local_538,local_788);
  clap_builder::builder::command::Command::after_help
            (param_1,local_a50,
             "Output pieces of FILE separated by PATTERN(s) to files \'xx00\', \'xx01\', ..., and output byte counts of each piece to standard output."
             ,0x84);
  return param_1;
}