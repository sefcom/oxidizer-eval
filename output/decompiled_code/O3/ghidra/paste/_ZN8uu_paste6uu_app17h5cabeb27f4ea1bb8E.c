undefined8 __rustcall uu_paste::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  undefined local_7f8 [700];
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [584];
  uint local_20;
  undefined4 local_1c;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_7f8,uVar1);
  clap_builder::builder::command::Command::version(local_530,local_7f8,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_7f8,local_530,
             "Write lines consisting of the sequentially corresponding lines from each\n`FILE`, separated by `TAB`s, to standard output."
             ,0x79);
                    /* try { // try from 001aba43 to 001aba57 has its CatchHandler @ 001abd54 */
  uucore::format_usage(auStack_a48,"{} [OPTIONS] [FILE]...",0x16);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_00217e18)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8000000080;
  local_534 = local_26c;
                    /* try { // try from 001abab1 to 001abb14 has its CatchHandler @ 001abd78 */
  clap_builder::builder::arg::Arg::new(local_530,"serial",6);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"serial",6);
  clap_builder::builder::arg::Arg::short(local_530,auStack_a48,0x73);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"paste one file at a time instead of in parallel",0x2f);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001abb45 to 001abbd6 has its CatchHandler @ 001abd9c */
  clap_builder::builder::arg::Arg::new(local_7f8,"delimiters",10);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,"delimiters",10);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,100);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"reuse characters from LIST instead of TABs",0x2a);
  clap_builder::builder::arg::Arg::value_name(local_7f8,auStack_a48,&DAT_001137dc);
  clap_builder::builder::arg::Arg::default_value(auStack_a48,local_7f8,"\t");
  (*(code *)PTR_memcpy_00217e18)(local_268,auStack_a48,0x248);
  local_20 = local_800 | 0x400;
  local_1c = local_7fc;
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 001abc29 to 001abc97 has its CatchHandler @ 001abd8a */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00113850,4);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_530,&DAT_00113810);
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48,1);
  clap_builder::builder::arg::Arg::default_value(auStack_a48,local_530,"-");
  clap_builder::builder::arg::Arg::value_hint(local_268,auStack_a48,3);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 001abcb5 to 001abd18 has its CatchHandler @ 001abd66 */
  clap_builder::builder::arg::Arg::new(local_7f8,"zero-terminated",0xf);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,"zero-terminated",0xf);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,0x7a);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"line delimiter is NUL, not newline",0x22);
  clap_builder::builder::arg::Arg::action(local_7f8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_7f8);
  return param_1;
}