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
  clap_builder::builder::command::Command::about(local_530,local_7f8,&DAT_00118c18,0x23);
                    /* try { // try from 001dc2e4 to 001dc2f8 has its CatchHandler @ 001dcacb */
  uucore::format_usage(auStack_a48,&DAT_00118c3b,0x14);
  clap_builder::builder::command::Command::override_usage(local_7f8,local_530,auStack_a48);
  clap_builder::builder::command::Command::version(local_530,local_7f8,&DAT_00118c4f,6);
  (*(code *)PTR_memcpy_00267aa8)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8000000080;
  local_534 = local_26c;
                    /* try { // try from 001dc371 to 001dc3d9 has its CatchHandler @ 001dcb6a */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00118c01,10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,99);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,&DAT_00118c01,10);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_00118c55,0x2f);
  clap_builder::builder::arg::Arg::action(&local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001dc40a to 001dc472 has its CatchHandler @ 001dcb58 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00118c0b,6);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,100);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,&DAT_00118c0b,6);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_00118c84,0x24);
  clap_builder::builder::arg::Arg::action(&local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001dc4a3 to 001dc50b has its CatchHandler @ 001dcb46 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00118bf6,0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x70);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,&DAT_00118bf6,0xb);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_00118ca8,0x2c);
  clap_builder::builder::arg::Arg::action(&local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001dc53c to 001dc5a4 has its CatchHandler @ 001dcb34 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00118c11,7);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x73);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,&DAT_00118c11,7);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_00118cd4,0x25);
  clap_builder::builder::arg::Arg::action(&local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001dc5d5 to 001dc621 has its CatchHandler @ 001dcb0a */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00118cf9,5);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x75);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,&DAT_00118cf9,5);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  (*(code *)PTR_memcpy_00267aa8)(&local_268,auStack_a48,0x248);
  local_20 = local_800 | 4;
  local_1c = local_7fc;
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001dc68a to 001dc6d6 has its CatchHandler @ 001dcb8e */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00118bef,7);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x50);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,&DAT_00118bef,7);
  (*(code *)PTR_memcpy_00267aa8)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 & 0xffffffde | 0x20;
  local_7fc = local_5ac;
                    /* try { // try from 001dc712 to 001dc749 has its CatchHandler @ 001dcb8e */
  clap_builder::builder::arg::Arg::value_name(local_7f8,auStack_a48,&DAT_00118bef,7);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_00118cfe,0x29);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 001dc762 to 001dc7da has its CatchHandler @ 001dcbb2 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00118be6,9);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x46);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,&DAT_00118be6,9);
  clap_builder::builder::arg::Arg::num_args(auStack_a48,local_530);
  clap_builder::builder::arg::Arg::value_name(local_530,auStack_a48,&DAT_00118be0,6);
                    /* try { // try from 001dc7db to 001dc7df has its CatchHandler @ 001dcab6 */
  local_260 = ::alloc::boxed::Box<T>::new();
  local_268 = 4;
  local_258 = &DAT_002628d0;
                    /* try { // try from 001dc803 to 001dc81a has its CatchHandler @ 001dcab1 */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_530,&local_268);
                    /* try { // try from 001dc81b to 001dc836 has its CatchHandler @ 001dcbb2 */
  clap_builder::builder::arg::Arg::help(&local_268,auStack_a48,&DAT_00118d27,0x27);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001dc854 to 001dc8cc has its CatchHandler @ 001dcba0 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00118bdb,5);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x6e);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,&DAT_00118bdb,5);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_7f8,&DAT_00118be0,6);
  clap_builder::builder::arg::Arg::num_args(local_7f8,auStack_a48);
                    /* try { // try from 001dc8cd to 001dc8e7 has its CatchHandler @ 001dcaf5 */
  _<u16_as_clap_builder::builder::value_parser::ValueParserFactory>::value_parser(auStack_a48);
  clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(&local_268,auStack_a48,0);
                    /* try { // try from 001dc8e8 to 001dc8ff has its CatchHandler @ 001dcaac */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_7f8,&local_268);
                    /* try { // try from 001dc900 to 001dc91b has its CatchHandler @ 001dcba0 */
  clap_builder::builder::arg::Arg::help(&local_268,auStack_a48,&DAT_00118d4e,0x23);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001dc939 to 001dc97d has its CatchHandler @ 001dcb7c */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00118be0,6);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,&DAT_00118be0,6);
  clap_builder::builder::arg::Arg::num_args(local_530,auStack_a48);
                    /* try { // try from 001dc97e to 001dc998 has its CatchHandler @ 001dcae0 */
  _<u16_as_clap_builder::builder::value_parser::ValueParserFactory>::value_parser(auStack_a48);
  clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(&local_268,auStack_a48,0);
                    /* try { // try from 001dc999 to 001dc9b0 has its CatchHandler @ 001dcaa7 */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_530,&local_268);
                    /* try { // try from 001dc9b1 to 001dc9cc has its CatchHandler @ 001dcb7c */
  clap_builder::builder::arg::Arg::help(&local_268,auStack_a48,&DAT_00118d71,0xf);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001dc9ea to 001dca02 has its CatchHandler @ 001dcb1f */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00118d80,5);
  (*(code *)PTR_memcpy_00267aa8)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 & 0xfffffffe;
  local_7fc = local_5ac;
  clap_builder::builder::arg::Arg::action(local_7f8,auStack_a48,1);
                    /* try { // try from 001dca53 to 001dca7e has its CatchHandler @ 001dcb1f */
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_00118d85,0x1c);
  clap_builder::builder::arg::Arg::value_hint(local_7f8,auStack_a48,3);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_7f8);
  return param_1;
}