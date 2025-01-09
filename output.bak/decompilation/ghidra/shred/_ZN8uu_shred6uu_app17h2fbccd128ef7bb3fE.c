undefined8 __rustcall uu_shred::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *local_a48;
  undefined8 local_a40;
  undefined *local_a38;
  undefined8 local_a30;
  char *local_a28;
  undefined8 local_a20;
  uint local_800;
  undefined4 local_7fc;
  undefined local_7f8 [584];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined local_258;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_7f8,uVar1);
  clap_builder::builder::command::Command::version(local_530,local_7f8,&DAT_0011e77d,6);
  clap_builder::builder::command::Command::about(local_7f8,local_530,&DAT_0011e783,0x84);
  clap_builder::builder::command::Command::after_help(local_530,local_7f8,&DAT_0011e807,0x65c);
                    /* try { // try from 001bc342 to 001bc356 has its CatchHandler @ 001bc9cc */
  uucore::format_usage(&local_a48,&DAT_0011ee63,0x16);
  clap_builder::builder::command::Command::override_usage(local_7f8,local_530,&local_a48);
  (*(code *)PTR_memcpy_0023cbc8)(local_530,local_7f8,700);
  local_274 = local_53c | 0x8000000080;
  local_26c = local_534;
                    /* try { // try from 001bc3b0 to 001bc413 has its CatchHandler @ 001bca3e */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0011ee79,5);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,&DAT_0011ee79,5);
  clap_builder::builder::arg::Arg::short(local_7f8,&local_a48,0x66);
  clap_builder::builder::arg::Arg::help(&local_a48,local_7f8,&DAT_0011ee7e,0x30);
  clap_builder::builder::arg::Arg::action(&local_268,&local_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001bc444 to 001bc4d3 has its CatchHandler @ 001bca62 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0011eeae,10);
  clap_builder::builder::arg::Arg::long(&local_a48,local_530,&DAT_0011eeae,10);
  clap_builder::builder::arg::Arg::short(local_530,&local_a48,0x6e);
  clap_builder::builder::arg::Arg::help(&local_a48,local_530,&DAT_0011eeb8,0x2c);
  clap_builder::builder::arg::Arg::value_name(local_530,&local_a48,&DAT_0011eee4,6);
  clap_builder::builder::arg::Arg::default_value(&local_a48,local_530);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_a48);
                    /* try { // try from 001bc4ec to 001bc56b has its CatchHandler @ 001bca50 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00115860,4);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,&DAT_00115860,4);
  clap_builder::builder::arg::Arg::short(local_7f8,&local_a48,0x73);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_7f8,&DAT_0011eeeb,1);
  clap_builder::builder::arg::Arg::help(&local_268,&local_a48,&DAT_0011eeec,0x36);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001bc589 to 001bc5d5 has its CatchHandler @ 001bc9f6 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0011ef22,1);
  clap_builder::builder::arg::Arg::short(&local_a48,local_530,0x75);
  clap_builder::builder::arg::Arg::help(local_530,&local_a48,&DAT_0011ef23,0x2c);
  clap_builder::builder::arg::Arg::action(&local_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_a48);
                    /* try { // try from 001bc606 to 001bc656 has its CatchHandler @ 001bca74 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0011ef4f,6);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,&DAT_0011ef4f,6);
  clap_builder::builder::arg::Arg::value_name(local_7f8,&local_a48,&DAT_0011ef55,3);
  local_a48 = &DAT_0011ef58;
  local_a40 = 6;
  local_a38 = &DAT_00115818;
  local_a30 = 4;
  local_a28 = "wipesync";
  local_a20 = 8;
                    /* try { // try from 001bc695 to 001bc6a4 has its CatchHandler @ 001bc9b7 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_268,&local_a48);
                    /* try { // try from 001bc6a5 to 001bc6bc has its CatchHandler @ 001bc9b2 */
  clap_builder::builder::arg::Arg::value_parser(&local_a48,local_7f8,&local_268);
  local_268 = 0;
  local_260 = 1;
  local_258 = 0;
                    /* try { // try from 001bc6dd to 001bc6f4 has its CatchHandler @ 001bca74 */
  clap_builder::builder::arg::Arg::num_args(local_7f8,&local_a48,&local_268);
  (*(code *)PTR_memcpy_0023cbc8)(&local_a48,local_7f8,0x248);
  local_800 = local_5b0 | 0x80;
  local_7fc = local_5ac;
                    /* try { // try from 001bc72f to 001bc75a has its CatchHandler @ 001bca74 */
  clap_builder::builder::arg::Arg::default_missing_value(local_7f8,&local_a48);
  clap_builder::builder::arg::Arg::help(&local_a48,local_7f8,&DAT_0011ef5e,0x35);
  clap_builder::builder::arg::Arg::action(&local_268,&local_a48,0);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001bc788 to 001bc7eb has its CatchHandler @ 001bca2c */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0011ef93,7);
  clap_builder::builder::arg::Arg::long(&local_a48,local_530,&DAT_0011ef93,7);
  clap_builder::builder::arg::Arg::short(local_530,&local_a48,0x76);
  clap_builder::builder::arg::Arg::help(&local_a48,local_530,&DAT_0011ef9a,0xd);
  clap_builder::builder::arg::Arg::action(&local_268,&local_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001bc81c to 001bc87f has its CatchHandler @ 001bca1a */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0011efa7,5);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,&DAT_0011efa7,5);
  clap_builder::builder::arg::Arg::short(local_7f8,&local_a48,0x78);
  clap_builder::builder::arg::Arg::help(&local_a48,local_7f8,&DAT_0011efac,0x5c);
  clap_builder::builder::arg::Arg::action(&local_268,&local_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001bc8b0 to 001bc913 has its CatchHandler @ 001bca08 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00115824,4);
  clap_builder::builder::arg::Arg::long(&local_a48,local_530,&DAT_00115824,4);
  clap_builder::builder::arg::Arg::short(local_530,&local_a48,0x7a);
  clap_builder::builder::arg::Arg::help(&local_a48,local_530,&DAT_0011f008,0x32);
  clap_builder::builder::arg::Arg::action(&local_268,&local_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001bc944 to 001bc989 has its CatchHandler @ 001bc9e1 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00115864,4);
  clap_builder::builder::arg::Arg::action(&local_a48,local_7f8,1);
  clap_builder::builder::arg::Arg::value_hint(local_7f8,&local_a48,3);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_7f8);
  return param_1;
}