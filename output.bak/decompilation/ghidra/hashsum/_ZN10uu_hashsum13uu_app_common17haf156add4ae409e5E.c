undefined8 __rustcall uu_hashsum::uu_app_common(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [592];
  undefined local_7f8 [700];
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined8 local_268 [74];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_7f8,uVar1);
  clap_builder::builder::command::Command::version(local_530,local_7f8,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_7f8,local_530,"Compute and check message digests.",0x22);
                    /* try { // try from 002dab03 to 002dab17 has its CatchHandler @ 002db229 */
  uucore::format_usage(auStack_a48,"{} [OPTIONS] [FILE]...",0x16);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_0047f5e0)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8800000088;
  local_534 = local_26c;
                    /* try { // try from 002dab71 to 002dabd9 has its CatchHandler @ 002db2b3 */
  clap_builder::builder::arg::Arg::new(local_530,"binary",6);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x62);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"binary",6);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,"read in binary mode",0x13);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002dac0a to 002daca1 has its CatchHandler @ 002db2fb */
  clap_builder::builder::arg::Arg::new(local_7f8,"check",5);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,99);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"check",5);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"read hashsums from the FILEs and check them",0x2b);
  clap_builder::builder::arg::Arg::action(local_7f8,auStack_a48,2);
  clap_builder::builder::arg::Arg::conflicts_with(auStack_a48,local_7f8,"tag",3);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002dacba to 002dad3e has its CatchHandler @ 002db2e9 */
  clap_builder::builder::arg::Arg::new(local_530,"tag",3);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"tag",3);
  clap_builder::builder::arg::Arg::help(local_530,auStack_a48,"create a BSD-style checksum",0x1b);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::arg::Arg::conflicts_with(local_268,auStack_a48,"text",4);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002dad5c to 002dade0 has its CatchHandler @ 002db2d7 */
  clap_builder::builder::arg::Arg::new(local_7f8,"text",4);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x74);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"text",4);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,"read in text mode (default)",0x1b);
  clap_builder::builder::arg::Arg::conflicts_with(local_7f8,auStack_a48,"binary",6);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002dae11 to 002dae79 has its CatchHandler @ 002db2a1 */
  clap_builder::builder::arg::Arg::new(local_530,"quiet",5);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x71);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"quiet",5);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"don\'t print OK for each successfully verified file",0x32);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002daeaa to 002daf12 has its CatchHandler @ 002db28f */
  clap_builder::builder::arg::Arg::new(local_7f8,"status",6);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x73);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"status",6);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"don\'t output anything, status code shows success",0x30);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002daf43 to 002daf93 has its CatchHandler @ 002db27d */
  clap_builder::builder::arg::Arg::new(local_530,"strict",6);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"strict",6);
  clap_builder::builder::arg::Arg::help
            (local_530,auStack_a48,"exit non-zero for improperly formatted checksum lines",0x35);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002dafc4 to 002db014 has its CatchHandler @ 002db268 */
  clap_builder::builder::arg::Arg::new(local_7f8,"ignore-missing",0xe);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,"ignore-missing",0xe);
  clap_builder::builder::arg::Arg::help
            (local_7f8,auStack_a48,"don\'t fail or report status for missing files",0x2d);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002db045 to 002db0ad has its CatchHandler @ 002db253 */
  clap_builder::builder::arg::Arg::new(local_530,"warnZeroV",4);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x77);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"warnZeroV",4);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"warn about improperly formatted checksum lines",0x2e);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002db0de to 002db146 has its CatchHandler @ 002db23e */
  clap_builder::builder::arg::Arg::new(local_7f8,"zero",4);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x7a);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"zero",4);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"end each output line with NUL, not newline",0x2a);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002db177 to 002db205 has its CatchHandler @ 002db2c5 */
  clap_builder::builder::arg::Arg::new(local_530,"fileEDOMmode",4);
  clap_builder::builder::arg::Arg::index(auStack_a48,local_530);
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48,1);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_530,"fileEDOMmode");
  clap_builder::builder::arg::Arg::value_hint(local_530,auStack_a48,3);
  local_268[0] = 2;
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_530,local_268);
  clap_builder::builder::command::Command::arg(param_1,local_7f8,auStack_a48);
  return param_1;
}