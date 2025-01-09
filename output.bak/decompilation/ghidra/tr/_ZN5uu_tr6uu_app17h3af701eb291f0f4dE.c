undefined8 __rustcall uu_tr::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [592];
  undefined local_7f8 [700];
  uint local_53c;
  ulong local_538;
  undefined local_530 [700];
  uint local_274;
  ulong local_270;
  undefined8 local_268 [74];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_530,uVar1);
  clap_builder::builder::command::Command::version(local_7f8,local_530);
  clap_builder::builder::command::Command::about(local_530,local_7f8);
                    /* try { // try from 001ca92b to 001ca93f has its CatchHandler @ 001cacd1 */
  uucore::format_usage(auStack_a48,"{} [OPTION]... SET1 [SET2]",0x1a);
  clap_builder::builder::command::Command::override_usage(local_7f8,local_530,auStack_a48);
  (*(code *)PTR_memcpy_00232df8)(local_530,local_7f8,700);
  local_270 = local_538 | 0x80;
  local_274 = local_53c | 0xa0;
                    /* try { // try from 001ca999 to 001caa43 has its CatchHandler @ 001cad2b */
  clap_builder::builder::arg::Arg::new(local_7f8,"complement",10);
  clap_builder::builder::arg::Arg::visible_short_alias(auStack_a48,local_7f8,0x43);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,99);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,"complement",10);
  clap_builder::builder::arg::Arg::help(local_7f8,auStack_a48,"use the complement of SET1",0x1a);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8);
  clap_builder::builder::arg::Arg::overrides_with(local_268,auStack_a48,"complement",10);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 001caa61 to 001caaf1 has its CatchHandler @ 001cad19 */
  clap_builder::builder::arg::Arg::new(local_530,"delete",6);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,100);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"delete",6);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"delete characters in SET1, do not translate",0x2b);
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48);
  clap_builder::builder::arg::Arg::overrides_with(auStack_a48,local_530,"delete",6);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 001cab0a to 001cab9a has its CatchHandler @ 001cad07 */
  clap_builder::builder::arg::Arg::new(local_7f8,"squeeze-repeats",0xf);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,"squeeze-repeats",0xf);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,0x73);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,
             "replace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that character"
             ,0x82);
  clap_builder::builder::arg::Arg::action(local_7f8,auStack_a48);
  clap_builder::builder::arg::Arg::overrides_with(auStack_a48,local_7f8,"squeeze-repeats",0xf);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 001cabb3 to 001cac43 has its CatchHandler @ 001cacf5 */
  clap_builder::builder::arg::Arg::new(local_530,"truncate-set1",0xd);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"truncate-set1",0xd);
  clap_builder::builder::arg::Arg::short(local_530,auStack_a48,0x74);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"first truncate SET1 to length of SET2",0x25);
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48);
  clap_builder::builder::arg::Arg::overrides_with(auStack_a48,local_530,"truncate-set1",0xd);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 001cac5c to 001caca8 has its CatchHandler @ 001cace3 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00115170,4);
  clap_builder::builder::arg::Arg::num_args(auStack_a48,local_7f8);
  local_268[0] = 2;
  clap_builder::builder::arg::Arg::value_parser(local_7f8,auStack_a48,local_268);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_7f8);
  return param_1;
}