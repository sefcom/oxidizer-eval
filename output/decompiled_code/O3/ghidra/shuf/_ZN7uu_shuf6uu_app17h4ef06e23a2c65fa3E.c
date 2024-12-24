undefined8 __rustcall uu_shuf::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [592];
  undefined local_7f8 [700];
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_7f8,uVar1);
  clap_builder::builder::command::Command::about
            (local_530,local_7f8,
             "Shuffle the input by outputting a random permutation of input lines.\nEach output permutation is equally likely.\nWith no FILE, or when FILE is -, read standard input."
             ,0xa5);
  clap_builder::builder::command::Command::version(local_7f8,local_530,"0.0.28",6);
                    /* try { // try from 001c0b93 to 001c0ba7 has its CatchHandler @ 001c115a */
  uucore::format_usage
            (auStack_a48,
             "{} [OPTION]... [FILE]\n{} -e [OPTION]... [ARG]...\n{} -i LO-HI [OPTION]...",0x48);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_0023bd38)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8000000080;
  local_534 = local_26c;
                    /* try { // try from 001c0c01 to 001c0cb4 has its CatchHandler @ 001c11ed */
  clap_builder::builder::arg::Arg::new
            (local_530,"echoERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG",4)
  ;
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x65);
  clap_builder::builder::arg::Arg::long
            (local_530,auStack_a48,
             "echoERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG",4);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"treat each ARG as an input line",0x1f);
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48,2);
  clap_builder::builder::arg::Arg::overrides_with
            (auStack_a48,local_530,
             "echoERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG",4);
  clap_builder::builder::arg::Arg::conflicts_with(local_268,auStack_a48,"input-range",0xb);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001c0cd2 to 001c0d72 has its CatchHandler @ 001c11db */
  clap_builder::builder::arg::Arg::new(local_7f8,"input-range",0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x69);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"input-range",0xb);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_7f8,"LO-HI",5);
  clap_builder::builder::arg::Arg::help
            (local_7f8,auStack_a48,"treat each number LO through HI as an input line",0x30);
  clap_builder::builder::arg::Arg::conflicts_with(auStack_a48,local_7f8,"file-or-args",0xc);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 001c0d8b to 001c0e22 has its CatchHandler @ 001c11a5 */
  clap_builder::builder::arg::Arg::new(local_530,"head-count",10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x6e);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"head-count",10);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_530,"COUNT",5);
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48,1);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,"output at most COUNT lines",0x1a);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 001c0e3b to 001c0ed4 has its CatchHandler @ 001c11c9 */
  clap_builder::builder::arg::Arg::new(local_7f8,"output",6);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x6f);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"output",6);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_7f8,&DAT_00115e8c,4);
  clap_builder::builder::arg::Arg::help
            (local_7f8,auStack_a48,"write result to FILE instead of standard output",0x2f);
  clap_builder::builder::arg::Arg::value_hint(auStack_a48,local_7f8,3);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 001c0eed to 001c0f6e has its CatchHandler @ 001c11b7 */
  clap_builder::builder::arg::Arg::new(local_530,"random-source",0xd);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"random-source",0xd);
  clap_builder::builder::arg::Arg::value_name(local_530,auStack_a48,&DAT_00115e8c,4);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,"get random bytes from FILE",0x1a);
  clap_builder::builder::arg::Arg::value_hint(local_268,auStack_a48,3);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001c0f8c to 001c1023 has its CatchHandler @ 001c1193 */
  clap_builder::builder::arg::Arg::new(local_7f8,"repeat",6);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x72);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"repeat",6);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,"output lines can be repeated",0x1c);
  clap_builder::builder::arg::Arg::action(local_7f8,auStack_a48,2);
  clap_builder::builder::arg::Arg::overrides_with(auStack_a48,local_7f8,"repeat",6);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 001c103c to 001c10d3 has its CatchHandler @ 001c1181 */
  clap_builder::builder::arg::Arg::new(local_530,"zero-terminated",0xf);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x7a);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"zero-terminated",0xf);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"line delimiter is NUL, not newline",0x22);
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48,2);
  clap_builder::builder::arg::Arg::overrides_with(auStack_a48,local_530,"zero-terminated",0xf);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 001c10ec to 001c1131 has its CatchHandler @ 001c116f */
  clap_builder::builder::arg::Arg::new(local_7f8,"file-or-args",0xc);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,1);
  clap_builder::builder::arg::Arg::value_hint(local_7f8,auStack_a48,3);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_7f8);
  return param_1;
}