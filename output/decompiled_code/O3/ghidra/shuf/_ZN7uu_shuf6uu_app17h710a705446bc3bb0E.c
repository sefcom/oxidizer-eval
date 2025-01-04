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
  clap_builder::builder::command::Command::about(local_530,local_7f8,&DAT_0011f141,0xa5);
  clap_builder::builder::command::Command::version(local_7f8,local_530,&DAT_0011f1e6,6);
                    /* try { // try from 001c1013 to 001c1027 has its CatchHandler @ 001c15da */
  uucore::format_usage(auStack_a48,&DAT_0011f0f9,0x48);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_0023bd60)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8000000080;
  local_534 = local_26c;
                    /* try { // try from 001c1081 to 001c1134 has its CatchHandler @ 001c166d */
  clap_builder::builder::arg::Arg::new
            (local_530,"echoERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG",4)
  ;
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x65);
  clap_builder::builder::arg::Arg::long
            (local_530,auStack_a48,
             "echoERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG",4);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0011f1ec,0x1f);
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48,2);
  clap_builder::builder::arg::Arg::overrides_with
            (auStack_a48,local_530,
             "echoERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG",4);
  clap_builder::builder::arg::Arg::conflicts_with(local_268,auStack_a48,"input-range",0xb);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001c1152 to 001c11f2 has its CatchHandler @ 001c165b */
  clap_builder::builder::arg::Arg::new(local_7f8,"input-range",0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x69);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"input-range",0xb);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_7f8,&DAT_0011f20b,5);
  clap_builder::builder::arg::Arg::help(local_7f8,auStack_a48,&DAT_0011f210,0x30);
  clap_builder::builder::arg::Arg::conflicts_with(auStack_a48,local_7f8,"file-or-args",0xc);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 001c120b to 001c12a2 has its CatchHandler @ 001c1625 */
  clap_builder::builder::arg::Arg::new(local_530,"head-count",10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x6e);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"head-count",10);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_530,&DAT_0011f240,5);
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48,1);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0011f245,0x1a);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 001c12bb to 001c1354 has its CatchHandler @ 001c1649 */
  clap_builder::builder::arg::Arg::new(local_7f8,"output",6);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x6f);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"output",6);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_7f8,&DAT_00115f8c,4);
  clap_builder::builder::arg::Arg::help(local_7f8,auStack_a48,&DAT_0011f25f,0x2f);
  clap_builder::builder::arg::Arg::value_hint(auStack_a48,local_7f8,3);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 001c136d to 001c13ee has its CatchHandler @ 001c1637 */
  clap_builder::builder::arg::Arg::new(local_530,"random-source",0xd);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"random-source",0xd);
  clap_builder::builder::arg::Arg::value_name(local_530,auStack_a48,&DAT_00115f8c,4);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0011f28e,0x1a);
  clap_builder::builder::arg::Arg::value_hint(local_268,auStack_a48,3);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001c140c to 001c14a3 has its CatchHandler @ 001c1613 */
  clap_builder::builder::arg::Arg::new(local_7f8,"repeat",6);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x72);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"repeat",6);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0011f2a8,0x1c);
  clap_builder::builder::arg::Arg::action(local_7f8,auStack_a48,2);
  clap_builder::builder::arg::Arg::overrides_with(auStack_a48,local_7f8,"repeat",6);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 001c14bc to 001c1553 has its CatchHandler @ 001c1601 */
  clap_builder::builder::arg::Arg::new(local_530,"zero-terminated",0xf);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x7a);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"zero-terminated",0xf);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0011f2c4,0x22);
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48,2);
  clap_builder::builder::arg::Arg::overrides_with(auStack_a48,local_530,"zero-terminated",0xf);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 001c156c to 001c15b1 has its CatchHandler @ 001c15ef */
  clap_builder::builder::arg::Arg::new(local_7f8,"file-or-args",0xc);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,1);
  clap_builder::builder::arg::Arg::value_hint(local_7f8,auStack_a48,3);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_7f8);
  return param_1;
}