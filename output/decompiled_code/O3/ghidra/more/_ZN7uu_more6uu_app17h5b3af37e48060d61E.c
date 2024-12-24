undefined8 __rustcall uu_more::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
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
  undefined *local_258;
  uint local_20;
  undefined4 local_1c;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_7f8,uVar1);
  clap_builder::builder::command::Command::about(local_530,local_7f8,&DAT_00118c9e,0x23);
                    /* try { // try from 001dc6b4 to 001dc6c8 has its CatchHandler @ 001dce9b */
  uucore::format_usage(auStack_a48,&DAT_00118cc1,0x14);
  clap_builder::builder::command::Command::override_usage(local_7f8,local_530,auStack_a48);
  clap_builder::builder::command::Command::version(local_530,local_7f8,&DAT_00118cd5,6);
  (*(code *)PTR_memcpy_00268a78)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8000000080;
  local_534 = local_26c;
                    /* try { // try from 001dc741 to 001dc7a9 has its CatchHandler @ 001dcf3a */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00118c87,10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,99);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,&DAT_00118c87,10);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_00118cdb,0x2f);
  clap_builder::builder::arg::Arg::action(&local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001dc7da to 001dc842 has its CatchHandler @ 001dcf28 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00118c91,6);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,100);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,&DAT_00118c91,6);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_00118d0a,0x24);
  clap_builder::builder::arg::Arg::action(&local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001dc873 to 001dc8db has its CatchHandler @ 001dcf16 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00118c7c,0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x70);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,&DAT_00118c7c,0xb);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_00118d2e,0x2c);
  clap_builder::builder::arg::Arg::action(&local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001dc90c to 001dc974 has its CatchHandler @ 001dcf04 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00118c97,7);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x73);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,&DAT_00118c97,7);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_00118d5a,0x25);
  clap_builder::builder::arg::Arg::action(&local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001dc9a5 to 001dc9f1 has its CatchHandler @ 001dceda */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00118d7f,5);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x75);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,&DAT_00118d7f,5);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  (*(code *)PTR_memcpy_00268a78)(&local_268,auStack_a48,0x248);
  local_20 = local_800 | 4;
  local_1c = local_7fc;
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001dca5a to 001dcaa6 has its CatchHandler @ 001dcf5e */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00118c75,7);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x50);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,&DAT_00118c75,7);
  (*(code *)PTR_memcpy_00268a78)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 & 0xffffffde | 0x20;
  local_7fc = local_5ac;
                    /* try { // try from 001dcae2 to 001dcb19 has its CatchHandler @ 001dcf5e */
  clap_builder::builder::arg::Arg::value_name(local_7f8,auStack_a48,&DAT_00118c75,7);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_00118d84,0x29);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 001dcb32 to 001dcbaa has its CatchHandler @ 001dcf82 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00118c6c,9);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x46);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,&DAT_00118c6c,9);
  clap_builder::builder::arg::Arg::num_args(auStack_a48,local_530);
  clap_builder::builder::arg::Arg::value_name(local_530,auStack_a48,&DAT_00118c66,6);
                    /* try { // try from 001dcbab to 001dcbaf has its CatchHandler @ 001dce86 */
  local_260 = ::alloc::boxed::Box<T>::new();
  local_268 = 4;
  local_258 = &DAT_00263820;
                    /* try { // try from 001dcbd3 to 001dcbea has its CatchHandler @ 001dce81 */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_530,&local_268);
                    /* try { // try from 001dcbeb to 001dcc06 has its CatchHandler @ 001dcf82 */
  clap_builder::builder::arg::Arg::help(&local_268,auStack_a48,&DAT_00118dad,0x27);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001dcc24 to 001dcc9c has its CatchHandler @ 001dcf70 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00118c61,5);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x6e);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,&DAT_00118c61,5);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_7f8,&DAT_00118c66,6);
  clap_builder::builder::arg::Arg::num_args(local_7f8,auStack_a48);
                    /* try { // try from 001dcc9d to 001dccb7 has its CatchHandler @ 001dcec5 */
  _<u16_as_clap_builder::builder::value_parser::ValueParserFactory>::value_parser(auStack_a48);
  clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(&local_268,auStack_a48,0);
                    /* try { // try from 001dccb8 to 001dcccf has its CatchHandler @ 001dce7c */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_7f8,&local_268);
                    /* try { // try from 001dccd0 to 001dcceb has its CatchHandler @ 001dcf70 */
  clap_builder::builder::arg::Arg::help(&local_268,auStack_a48,&DAT_00118dd4,0x23);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001dcd09 to 001dcd4d has its CatchHandler @ 001dcf4c */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00118c66,6);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_00118c66,6);
  clap_builder::builder::arg::Arg::num_args(local_530,auStack_a48);
                    /* try { // try from 001dcd4e to 001dcd68 has its CatchHandler @ 001dceb0 */
  _<u16_as_clap_builder::builder::value_parser::ValueParserFactory>::value_parser(auStack_a48);
  clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(&local_268,auStack_a48,0);
                    /* try { // try from 001dcd69 to 001dcd80 has its CatchHandler @ 001dce77 */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_530,&local_268);
                    /* try { // try from 001dcd81 to 001dcd9c has its CatchHandler @ 001dcf4c */
  clap_builder::builder::arg::Arg::help(&local_268,auStack_a48,&DAT_00118df7,0xf);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001dcdba to 001dcdd2 has its CatchHandler @ 001dceef */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00118e06,5);
  (*(code *)PTR_memcpy_00268a78)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 & 0xfffffffe;
  local_7fc = local_5ac;
  clap_builder::builder::arg::Arg::action(local_7f8,auStack_a48,1);
                    /* try { // try from 001dce23 to 001dce4e has its CatchHandler @ 001dceef */
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_00118e0b,0x1c);
  clap_builder::builder::arg::Arg::value_hint(local_7f8,auStack_a48,3);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_7f8);
  return param_1;
}