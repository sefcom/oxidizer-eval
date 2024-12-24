undefined8 __rustcall uu_tr::uu_app(undefined8 param_1)

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
  clap_builder::builder::command::Command::new(local_530,uVar1);
  clap_builder::builder::command::Command::version(local_7f8,local_530);
  clap_builder::builder::command::Command::about(local_530,local_7f8);
                    /* try { // try from 001c823b to 001c824f has its CatchHandler @ 001c85e4 */
  uucore::format_usage(auStack_a48,"{} [OPTION]... SET1 [SET2]",0x1a);
  clap_builder::builder::command::Command::override_usage(local_7f8,local_530,auStack_a48);
  (*(code *)PTR_memcpy_00233540)(local_530,local_7f8,700);
  local_274 = local_53c | 0x80000000a0;
  local_26c = local_534;
                    /* try { // try from 001c82a9 to 001c8353 has its CatchHandler @ 001c863e */
  clap_builder::builder::arg::Arg::new(local_7f8,"complement",10);
  clap_builder::builder::arg::Arg::visible_short_alias(auStack_a48,local_7f8,0x43);
  clap_builder::builder::arg::Arg::short(local_7f8,auStack_a48,99);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,"complement",10);
  clap_builder::builder::arg::Arg::help(local_7f8,auStack_a48,"use the complement of SET1",0x1a);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8);
  clap_builder::builder::arg::Arg::overrides_with(local_268,auStack_a48,"complement",10);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 001c8371 to 001c8401 has its CatchHandler @ 001c862c */
  clap_builder::builder::arg::Arg::new(local_530,"delete",6);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,100);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"delete",6);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"delete characters in SET1, do not translate",0x2b);
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48);
  clap_builder::builder::arg::Arg::overrides_with(auStack_a48,local_530,"delete",6);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 001c841a to 001c84aa has its CatchHandler @ 001c861a */
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
                    /* try { // try from 001c84c3 to 001c8553 has its CatchHandler @ 001c8608 */
  clap_builder::builder::arg::Arg::new(local_530,"truncate-set1",0xd);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"truncate-set1",0xd);
  clap_builder::builder::arg::Arg::short(local_530,auStack_a48,0x74);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"first truncate SET1 to length of SET2",0x25);
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48);
  clap_builder::builder::arg::Arg::overrides_with(auStack_a48,local_530,"truncate-set1",0xd);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 001c856c to 001c85bb has its CatchHandler @ 001c85f6 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0010b8d0,4);
  clap_builder::builder::arg::Arg::num_args(auStack_a48,local_7f8);
  local_268[0] = 2;
  clap_builder::builder::arg::Arg::value_parser(local_7f8,auStack_a48,local_268);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_7f8);
  return param_1;
}