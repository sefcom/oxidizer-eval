undefined8 __rustcall uu_uniq::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_a70;
  undefined8 local_a68;
  undefined local_a60;
  uint7 uStack_a5f;
  undefined *local_a58;
  undefined8 local_a50;
  char *local_a48;
  undefined8 local_a40;
  char *local_a38;
  undefined8 local_a30;
  uint local_810;
  undefined4 local_80c;
  char *local_808;
  undefined8 local_800;
  char *local_7f8;
  undefined8 local_7f0;
  char *local_7e8;
  undefined8 local_7e0;
  char *local_7d8;
  undefined8 local_7d0;
  uint local_5c0;
  undefined4 local_5bc;
  ulong local_54c;
  undefined4 local_544;
  undefined local_540 [584];
  uint local_2f8;
  undefined4 local_2f4;
  ulong local_284;
  undefined4 local_27c;
  undefined8 local_278;
  undefined8 local_270;
  ulong local_268;
  uint local_30;
  undefined4 local_2c;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_540,uVar1);
  clap_builder::builder::command::Command::version(&local_808,local_540,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_540,&local_808,"Report or omit repeated lines.",0x1e);
                    /* try { // try from 001be257 to 001be26d has its CatchHandler @ 001bed00 */
  uucore::format_usage(&local_a58,"{} [OPTION]... [INPUT [OUTPUT]]",0x1f);
  clap_builder::builder::command::Command::override_usage(&local_808,local_540,&local_a58);
  (*(code *)PTR_memcpy_00234710)(local_540,&local_808,700);
  local_284 = local_54c | 0x8000000080;
  local_27c = local_544;
  clap_builder::builder::command::Command::after_help
            (&local_808,local_540,
             "Filter adjacent matching lines from INPUT (or standard input),\nwriting to OUTPUT (or standard output).\n\nNote: uniq does not detect repeated lines unless they are adjacent.\nYou may want to sort the input first, or use sort -u without uniq."
             ,0xee);
                    /* try { // try from 001be2e8 to 001be339 has its CatchHandler @ 001bedc0 */
  clap_builder::builder::arg::Arg::new(local_540,"all-repeated",0xc);
  clap_builder::builder::arg::Arg::short(&local_a58,local_540,0x44);
  clap_builder::builder::arg::Arg::long(local_540,&local_a58,"all-repeated",0xc);
  local_a58 = &DAT_00115d00;
  local_a50 = 4;
  local_a48 = "prepend";
  local_a40 = 7;
  local_a38 = "separate";
  local_a30 = 8;
                    /* try { // try from 001be379 to 001be38a has its CatchHandler @ 001beceb */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_278,&local_a58);
                    /* try { // try from 001be38b to 001be3a4 has its CatchHandler @ 001bece6 */
  clap_builder::builder::arg::Arg::value_parser(&local_a58,local_540,&local_278);
                    /* try { // try from 001be3a5 to 001be456 has its CatchHandler @ 001bedc0 */
  clap_builder::builder::arg::Arg::help
            (local_540,&local_a58,
             "print all duplicate lines. Delimiting is done with blank lines. [default: none]",0x4f)
  ;
  clap_builder::builder::arg::Arg::value_name(&local_a58,local_540,"delimit-method",0xe);
  local_a70 = 0;
  local_a68 = 1;
  local_a60 = 0;
  local_268 = (ulong)uStack_a5f << 8;
  local_278 = 0;
  local_270 = 1;
  clap_builder::builder::arg::Arg::num_args(local_540,&local_a58,&local_278);
  clap_builder::builder::arg::Arg::default_missing_value(&local_a58,local_540,&DAT_00115d00,4);
  (*(code *)PTR_memcpy_00234710)(&local_278,&local_a58,0x248);
  local_30 = local_810 | 0x80;
  local_2c = local_80c;
  clap_builder::builder::command::Command::arg(local_540,&local_808,&local_278);
                    /* try { // try from 001be4ab to 001be4e1 has its CatchHandler @ 001bedd2 */
  clap_builder::builder::arg::Arg::new(&local_808,"group",5);
  clap_builder::builder::arg::Arg::long(&local_a58,&local_808,"group",5);
  local_808 = "separate";
  local_800 = 8;
  local_7f8 = "prepend";
  local_7f0 = 7;
  local_7e8 = "append";
  local_7e0 = 6;
  local_7d8 = &DAT_00115d10;
  local_7d0 = 4;
                    /* try { // try from 001be540 to 001be554 has its CatchHandler @ 001becd4 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_278,&local_808);
                    /* try { // try from 001be555 to 001be56e has its CatchHandler @ 001beccf */
  clap_builder::builder::arg::Arg::value_parser(&local_808,&local_a58,&local_278);
                    /* try { // try from 001be56f to 001be5df has its CatchHandler @ 001bedd2 */
  clap_builder::builder::arg::Arg::help
            (&local_a58,&local_808,
             "show all items, separating groups with an empty line. [default: separate]",0x49);
  clap_builder::builder::arg::Arg::value_name(&local_808,&local_a58,"group-method",0xc);
  clap_builder::builder::arg::Arg::num_args(&local_a58,&local_808,&local_a70);
  clap_builder::builder::arg::Arg::default_missing_value(&local_808,&local_a58,"separate",8);
  (*(code *)PTR_memcpy_00234710)(&local_a58,&local_808,0x248);
  local_810 = local_5c0 | 0x80;
  local_80c = local_5bc;
  local_808 = (char *)&anon_1708af35b9ec7e9011d0766e7edd8c0d_14_llvm_2960996753993589651;
  local_800 = 8;
  local_7f8 = "all-repeated";
  local_7f0 = 0xc;
  local_7e8 = "unique";
  local_7e0 = 6;
  local_7d8 = "count";
  local_7d0 = 5;
                    /* try { // try from 001be681 to 001be698 has its CatchHandler @ 001bedd2 */
  clap_builder::builder::arg::Arg::conflicts_with_all(&local_278,&local_a58,&local_808);
  clap_builder::builder::command::Command::arg(&local_808,local_540,&local_278);
                    /* try { // try from 001be6b6 to 001be740 has its CatchHandler @ 001bedae */
  clap_builder::builder::arg::Arg::new(local_540,"check-chars",0xb);
  clap_builder::builder::arg::Arg::short(&local_a58,local_540,0x77);
  clap_builder::builder::arg::Arg::long(local_540,&local_a58,"check-chars",0xb);
  clap_builder::builder::arg::Arg::help
            (&local_a58,local_540,"compare no more than N characters in lines",0x2a);
  clap_builder::builder::arg::Arg::value_name(&local_278,&local_a58,"N",1);
  clap_builder::builder::command::Command::arg(local_540,&local_808,&local_278);
                    /* try { // try from 001be75e to 001be7ca has its CatchHandler @ 001bed66 */
  clap_builder::builder::arg::Arg::new(&local_808,"count",5);
  clap_builder::builder::arg::Arg::short(&local_a58,&local_808,99);
  clap_builder::builder::arg::Arg::long(&local_808,&local_a58,"count",5);
  clap_builder::builder::arg::Arg::help
            (&local_a58,&local_808,"prefix lines by the number of occurrences",0x29);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a58,2);
  clap_builder::builder::command::Command::arg(&local_808,local_540,&local_278);
                    /* try { // try from 001be7fd to 001be869 has its CatchHandler @ 001bed54 */
  clap_builder::builder::arg::Arg::new(local_540,"ignore-case",0xb);
  clap_builder::builder::arg::Arg::short(&local_a58,local_540,0x69);
  clap_builder::builder::arg::Arg::long(local_540,&local_a58,"ignore-case",0xb);
  clap_builder::builder::arg::Arg::help
            (&local_a58,local_540,"ignore differences in case when comparing",0x29);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a58,2);
  clap_builder::builder::command::Command::arg(local_540,&local_808,&local_278);
                    /* try { // try from 001be89c to 001be908 has its CatchHandler @ 001bed3f */
  clap_builder::builder::arg::Arg::new
            (&local_808,&anon_1708af35b9ec7e9011d0766e7edd8c0d_14_llvm_2960996753993589651,8);
  clap_builder::builder::arg::Arg::short(&local_a58,&local_808,100);
  clap_builder::builder::arg::Arg::long
            (&local_808,&local_a58,
             &anon_1708af35b9ec7e9011d0766e7edd8c0d_14_llvm_2960996753993589651,8);
  clap_builder::builder::arg::Arg::help(&local_a58,&local_808,"only print duplicate lines",0x1a);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a58,2);
  clap_builder::builder::command::Command::arg(&local_808,local_540,&local_278);
                    /* try { // try from 001be93b to 001be9c5 has its CatchHandler @ 001bed9c */
  clap_builder::builder::arg::Arg::new(local_540,"skip-chars",10);
  clap_builder::builder::arg::Arg::short(&local_a58,local_540,0x73);
  clap_builder::builder::arg::Arg::long(local_540,&local_a58,"skip-chars",10);
  clap_builder::builder::arg::Arg::help
            (&local_a58,local_540,"avoid comparing the first N characters",0x26);
  clap_builder::builder::arg::Arg::value_name(&local_278,&local_a58,"N",1);
  clap_builder::builder::command::Command::arg(local_540,&local_808,&local_278);
                    /* try { // try from 001be9e3 to 001bea6d has its CatchHandler @ 001bed8a */
  clap_builder::builder::arg::Arg::new(&local_808,"skip-fields",0xb);
  clap_builder::builder::arg::Arg::short(&local_a58,&local_808,0x66);
  clap_builder::builder::arg::Arg::long(&local_808,&local_a58,"skip-fields",0xb);
  clap_builder::builder::arg::Arg::help
            (&local_a58,&local_808,"avoid comparing the first N fields",0x22);
  clap_builder::builder::arg::Arg::value_name(&local_278,&local_a58,"N",1);
  clap_builder::builder::command::Command::arg(&local_808,local_540,&local_278);
                    /* try { // try from 001bea8b to 001beaf7 has its CatchHandler @ 001bed2a */
  clap_builder::builder::arg::Arg::new(local_540,"unique",6);
  clap_builder::builder::arg::Arg::short(&local_a58,local_540,0x75);
  clap_builder::builder::arg::Arg::long(local_540,&local_a58,"unique",6);
  clap_builder::builder::arg::Arg::help(&local_a58,local_540,"only print unique lines",0x17);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a58,2);
  clap_builder::builder::command::Command::arg(local_540,&local_808,&local_278);
                    /* try { // try from 001beb2a to 001beb96 has its CatchHandler @ 001bed15 */
  clap_builder::builder::arg::Arg::new(&local_808,"zero-terminated",0xf);
  clap_builder::builder::arg::Arg::short(&local_a58,&local_808,0x7a);
  clap_builder::builder::arg::Arg::long(&local_808,&local_a58,"zero-terminated",0xf);
  clap_builder::builder::arg::Arg::help
            (&local_a58,&local_808,"end lines with 0 byte, not newline",0x22);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a58,2);
  clap_builder::builder::command::Command::arg(&local_808,local_540,&local_278);
                    /* try { // try from 001bebc9 to 001bec59 has its CatchHandler @ 001bed78 */
  clap_builder::builder::arg::Arg::new(local_540,"files",5);
  clap_builder::builder::arg::Arg::action(&local_a58,local_540,1);
  local_278 = 2;
  clap_builder::builder::arg::Arg::value_parser(local_540,&local_a58,&local_278);
  local_278 = 0;
  local_270 = 2;
  local_268 = local_268 & 0xffffffffffffff00;
  clap_builder::builder::arg::Arg::num_args(&local_a58,local_540,&local_278);
  (*(code *)PTR_memcpy_00234710)(local_540,&local_a58,0x248);
  local_2f8 = local_810 | 4;
  local_2f4 = local_80c;
                    /* try { // try from 001bec94 to 001beca5 has its CatchHandler @ 001bed78 */
  clap_builder::builder::arg::Arg::value_hint(&local_a58,local_540,3);
  clap_builder::builder::command::Command::arg(param_1,&local_808,&local_a58);
  return param_1;
}