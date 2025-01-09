undefined8 __rustcall uu_hostname::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_878;
  undefined8 uStack_870;
  char *local_868;
  undefined8 uStack_860;
  undefined *local_858;
  undefined8 uStack_850;
  char *local_848;
  undefined8 uStack_840;
  char *local_838;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  char *local_828;
  undefined8 uStack_820;
  undefined *local_818;
  undefined8 uStack_810;
  char *local_808;
  undefined8 uStack_800;
  undefined local_7f8 [700];
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_7f8,uVar1);
  clap_builder::builder::command::Command::version(local_530,local_7f8,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_7f8,local_530,"Display or set the system\'s host name.",0x26);
                    /* try { // try from 001af793 to 001af7ac has its CatchHandler @ 001afc5d */
  uucore::format_usage(local_268,"{} [OPTION]... [HOSTNAME]",0x19);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,local_268);
  (*(code *)PTR_memcpy_0021bb28)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8000000080;
  local_534 = local_26c;
                    /* try { // try from 001af80b to 001af92b has its CatchHandler @ 001afcb7 */
  clap_builder::builder::arg::Arg::new(local_530,"domain",6);
  clap_builder::builder::arg::Arg::short(local_268,local_530,100);
  clap_builder::builder::arg::Arg::long(local_530,local_268,"domain",6);
  local_878 = "domain";
  uStack_870 = 6;
  local_868 = "ip-address";
  uStack_860 = 10;
  local_858 = &DAT_001143e8;
  uStack_850 = 4;
  local_848 = "short";
  uStack_840 = 5;
  local_808 = "short";
  uStack_800 = 5;
  local_818 = &DAT_001143e8;
  uStack_810 = 4;
  local_828 = "ip-address";
  uStack_820 = 10;
  local_838 = "domain";
  uStack_830 = 6;
  uStack_82c = 0;
  clap_builder::builder::arg::Arg::overrides_with_all(local_268,local_530,&local_838);
  clap_builder::builder::arg::Arg::help
            (local_530,local_268,"Display the name of the DNS domain if possible",0x2e);
  clap_builder::builder::arg::Arg::action(local_268,local_530);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001af95c to 001afa0f has its CatchHandler @ 001afca5 */
  clap_builder::builder::arg::Arg::new(local_7f8,"ip-address",10);
  clap_builder::builder::arg::Arg::short(local_268,local_7f8,0x69);
  clap_builder::builder::arg::Arg::long(local_7f8,local_268,"ip-address",10);
  local_808 = local_848;
  uStack_800 = uStack_840;
  local_818 = local_858;
  uStack_810 = uStack_850;
  local_828 = local_868;
  uStack_820 = uStack_860;
  local_838 = local_878;
  uStack_830 = (undefined4)uStack_870;
  uStack_82c = uStack_870._4_4_;
  clap_builder::builder::arg::Arg::overrides_with_all(local_268,local_7f8,&local_838);
  clap_builder::builder::arg::Arg::help
            (local_7f8,local_268,"Display the network address(es) of the host",0x2b);
  clap_builder::builder::arg::Arg::action(local_268,local_7f8);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 001afa40 to 001afaf3 has its CatchHandler @ 001afc93 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_001143e8,4);
  clap_builder::builder::arg::Arg::short(local_268,local_530,0x66);
  clap_builder::builder::arg::Arg::long(local_530,local_268,&DAT_001143e8,4);
  local_808 = local_848;
  uStack_800 = uStack_840;
  local_818 = local_858;
  uStack_810 = uStack_850;
  local_828 = local_868;
  uStack_820 = uStack_860;
  local_838 = local_878;
  uStack_830 = (undefined4)uStack_870;
  uStack_82c = uStack_870._4_4_;
  clap_builder::builder::arg::Arg::overrides_with_all(local_268,local_530,&local_838);
  clap_builder::builder::arg::Arg::help
            (local_530,local_268,"Display the FQDN (Fully Qualified Domain Name) (default)",0x38);
  clap_builder::builder::arg::Arg::action(local_268,local_530);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001afb24 to 001afbae has its CatchHandler @ 001afc81 */
  clap_builder::builder::arg::Arg::new(local_7f8,"short",5);
  clap_builder::builder::arg::Arg::short(local_268,local_7f8,0x73);
  clap_builder::builder::arg::Arg::long(local_7f8,local_268,"short",5);
  clap_builder::builder::arg::Arg::overrides_with_all(local_268,local_7f8,&local_878);
  clap_builder::builder::arg::Arg::help
            (local_7f8,local_268,
             "Display the short hostname (the portion before the first dot) if possible",0x49);
  clap_builder::builder::arg::Arg::action(local_268,local_7f8);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 001afbdf to 001afc34 has its CatchHandler @ 001afc6f */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0011440c,4);
  local_838 = (char *)0x2;
  clap_builder::builder::arg::Arg::value_parser(local_268,local_530,&local_838);
  clap_builder::builder::arg::Arg::value_hint(local_530,local_268,10);
  clap_builder::builder::command::Command::arg(param_1,local_7f8,local_530);
  return param_1;
}