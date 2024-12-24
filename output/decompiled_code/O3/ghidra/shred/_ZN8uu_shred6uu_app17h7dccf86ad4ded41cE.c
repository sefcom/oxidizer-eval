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
  clap_builder::builder::command::Command::version(local_530,local_7f8,&DAT_0011e5d5,6);
  clap_builder::builder::command::Command::about(local_7f8,local_530,&DAT_0011e5db,0x84);
  clap_builder::builder::command::Command::after_help(local_530,local_7f8,&DAT_0011e65f,0x65c);
                    /* try { // try from 001bba32 to 001bba46 has its CatchHandler @ 001bc0bc */
  uucore::format_usage(&local_a48,&DAT_0011ecbb,0x16);
  clap_builder::builder::command::Command::override_usage(local_7f8,local_530,&local_a48);
  (*(code *)PTR_memcpy_0023c0c8)(local_530,local_7f8,700);
  local_274 = local_53c | 0x8000000080;
  local_26c = local_534;
                    /* try { // try from 001bbaa0 to 001bbb03 has its CatchHandler @ 001bc12e */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0011ecd1,5);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,&DAT_0011ecd1,5);
  clap_builder::builder::arg::Arg::short(local_7f8,&local_a48,0x66);
  clap_builder::builder::arg::Arg::help(&local_a48,local_7f8,&DAT_0011ecd6,0x30);
  clap_builder::builder::arg::Arg::action(&local_268,&local_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001bbb34 to 001bbbc3 has its CatchHandler @ 001bc152 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0011ed06,10);
  clap_builder::builder::arg::Arg::long(&local_a48,local_530,&DAT_0011ed06,10);
  clap_builder::builder::arg::Arg::short(local_530,&local_a48,0x6e);
  clap_builder::builder::arg::Arg::help(&local_a48,local_530,&DAT_0011ed10,0x2c);
  clap_builder::builder::arg::Arg::value_name(local_530,&local_a48,&DAT_0011ed3c,6);
  clap_builder::builder::arg::Arg::default_value(&local_a48,local_530);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_a48);
                    /* try { // try from 001bbbdc to 001bbc5b has its CatchHandler @ 001bc140 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0011570c,4);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,&DAT_0011570c,4);
  clap_builder::builder::arg::Arg::short(local_7f8,&local_a48,0x73);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_7f8,&DAT_0011ed43,1);
  clap_builder::builder::arg::Arg::help(&local_268,&local_a48,&DAT_0011ed44,0x36);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001bbc79 to 001bbcc5 has its CatchHandler @ 001bc0e6 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0011ed7a,1);
  clap_builder::builder::arg::Arg::short(&local_a48,local_530,0x75);
  clap_builder::builder::arg::Arg::help(local_530,&local_a48,&DAT_0011ed7b,0x2c);
  clap_builder::builder::arg::Arg::action(&local_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_a48);
                    /* try { // try from 001bbcf6 to 001bbd46 has its CatchHandler @ 001bc164 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0011eda7,6);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,&DAT_0011eda7,6);
  clap_builder::builder::arg::Arg::value_name(local_7f8,&local_a48,&DAT_0011edad,3);
  local_a48 = &DAT_0011edb0;
  local_a40 = 6;
  local_a38 = &DAT_001156c0;
  local_a30 = 4;
  local_a28 = "wipesync";
  local_a20 = 8;
                    /* try { // try from 001bbd85 to 001bbd94 has its CatchHandler @ 001bc0a7 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_268,&local_a48);
                    /* try { // try from 001bbd95 to 001bbdac has its CatchHandler @ 001bc0a2 */
  clap_builder::builder::arg::Arg::value_parser(&local_a48,local_7f8,&local_268);
  local_268 = 0;
  local_260 = 1;
  local_258 = 0;
                    /* try { // try from 001bbdcd to 001bbde4 has its CatchHandler @ 001bc164 */
  clap_builder::builder::arg::Arg::num_args(local_7f8,&local_a48,&local_268);
  (*(code *)PTR_memcpy_0023c0c8)(&local_a48,local_7f8,0x248);
  local_800 = local_5b0 | 0x80;
  local_7fc = local_5ac;
                    /* try { // try from 001bbe1f to 001bbe4a has its CatchHandler @ 001bc164 */
  clap_builder::builder::arg::Arg::default_missing_value(local_7f8,&local_a48);
  clap_builder::builder::arg::Arg::help(&local_a48,local_7f8,&DAT_0011edb6,0x35);
  clap_builder::builder::arg::Arg::action(&local_268,&local_a48,0);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001bbe78 to 001bbedb has its CatchHandler @ 001bc11c */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_0011edeb,7);
  clap_builder::builder::arg::Arg::long(&local_a48,local_530,&DAT_0011edeb,7);
  clap_builder::builder::arg::Arg::short(local_530,&local_a48,0x76);
  clap_builder::builder::arg::Arg::help(&local_a48,local_530,&DAT_0011edf2,0xd);
  clap_builder::builder::arg::Arg::action(&local_268,&local_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001bbf0c to 001bbf6f has its CatchHandler @ 001bc10a */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_0011edff,5);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,&DAT_0011edff,5);
  clap_builder::builder::arg::Arg::short(local_7f8,&local_a48,0x78);
  clap_builder::builder::arg::Arg::help(&local_a48,local_7f8,&DAT_0011ee04,0x5c);
  clap_builder::builder::arg::Arg::action(&local_268,&local_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001bbfa0 to 001bc003 has its CatchHandler @ 001bc0f8 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_001156cc,4);
  clap_builder::builder::arg::Arg::long(&local_a48,local_530,&DAT_001156cc,4);
  clap_builder::builder::arg::Arg::short(local_530,&local_a48,0x7a);
  clap_builder::builder::arg::Arg::help(&local_a48,local_530,&DAT_0011ee60,0x32);
  clap_builder::builder::arg::Arg::action(&local_268,&local_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001bc034 to 001bc079 has its CatchHandler @ 001bc0d1 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00115708,4);
  clap_builder::builder::arg::Arg::action(&local_a48,local_7f8,1);
  clap_builder::builder::arg::Arg::value_hint(local_7f8,&local_a48,3);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_7f8);
  return param_1;
}