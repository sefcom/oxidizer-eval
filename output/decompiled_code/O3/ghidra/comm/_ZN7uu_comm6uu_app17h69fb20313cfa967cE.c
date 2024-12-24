undefined8 __rustcall uu_comm::uu_app(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined local_a50 [584];
  uint local_808;
  undefined4 local_804;
  ulong local_794;
  undefined4 local_78c;
  undefined local_788 [584];
  uint local_540;
  undefined4 local_53c;
  undefined local_538 [584];
  uint local_2f0;
  undefined4 local_2ec;
  ulong local_27c;
  undefined4 local_274;
  undefined local_270 [592];
  
  uVar2 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_a50,uVar2);
  clap_builder::builder::command::Command::version(local_538,local_a50,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_a50,local_538,
             "Compare two sorted files line by line.\n\nWhen FILE1 or FILE2 (not both) is -, read standard input.\n\nWith no options, produce three-column output. Column one contains\nlines unique to FILE1, column two contains lines unique to FILE2,\nand column three contains lines common to both files."
             ,0x11c);
                    /* try { // try from 001ab8ff to 001ab918 has its CatchHandler @ 001abe61 */
  uucore::format_usage(local_788,"{} [OPTION]... FILE1 FILE2",0x1a);
  clap_builder::builder::command::Command::override_usage(local_538,local_a50,local_788);
  (*(code *)PTR_memcpy_00215cf8)(local_a50,local_538,700);
  local_794 = local_27c | 0x8800000088;
  local_78c = local_274;
                    /* try { // try from 001ab971 to 001ab9c2 has its CatchHandler @ 001abeb5 */
  clap_builder::builder::arg::Arg::new(local_538,"1",1);
  clap_builder::builder::arg::Arg::short(local_788,local_538,0x31);
  clap_builder::builder::arg::Arg::help
            (local_538,local_788,"suppress column 1 (lines unique to FILE1)",0x29);
  clap_builder::builder::arg::Arg::action(local_788,local_538,2);
  clap_builder::builder::command::Command::arg(local_538,local_a50,local_788);
                    /* try { // try from 001ab9f5 to 001aba3d has its CatchHandler @ 001abea3 */
  clap_builder::builder::arg::Arg::new(local_a50,"2",1);
  clap_builder::builder::arg::Arg::short(local_788,local_a50,0x32);
  clap_builder::builder::arg::Arg::help
            (local_a50,local_788,"suppress column 2 (lines unique to FILE2)",0x29);
  clap_builder::builder::arg::Arg::action(local_788,local_a50,2);
  clap_builder::builder::command::Command::arg(local_a50,local_538,local_788);
                    /* try { // try from 001aba6d to 001ababe has its CatchHandler @ 001abe94 */
  clap_builder::builder::arg::Arg::new(local_538,"3",1);
  clap_builder::builder::arg::Arg::short(local_788,local_538,0x33);
  clap_builder::builder::arg::Arg::help
            (local_538,local_788,"suppress column 3 (lines that appear in both files)",0x33);
  clap_builder::builder::arg::Arg::action(local_788,local_538,2);
  clap_builder::builder::command::Command::arg(local_538,local_a50,local_788);
                    /* try { // try from 001abaf1 to 001abb66 has its CatchHandler @ 001abee5 */
  clap_builder::builder::arg::Arg::new(local_a50,&DAT_001141e0,0x10);
  clap_builder::builder::arg::Arg::long(local_788,local_a50,&DAT_001141e0,0x10);
  clap_builder::builder::arg::Arg::help(local_a50,local_788,"separate columns with STR",0x19);
  clap_builder::builder::arg::Arg::value_name(local_788,local_a50);
  clap_builder::builder::arg::Arg::default_value(local_a50,local_788);
  puVar1 = PTR_memcpy_00215cf8;
  (*(code *)PTR_memcpy_00215cf8)(local_788,local_a50,0x248);
  local_540 = local_808 | 0x20;
  local_53c = local_804;
  clap_builder::builder::arg::Arg::action(local_a50,local_788,1);
  (*(code *)puVar1)(local_788,local_a50,0x248);
  local_540 = local_808 | 0x400;
  local_53c = local_804;
  clap_builder::builder::command::Command::arg(local_a50,local_538,local_788);
                    /* try { // try from 001abc06 to 001abc99 has its CatchHandler @ 001abed6 */
  clap_builder::builder::arg::Arg::new(local_538,"zero-terminated",0xf);
  clap_builder::builder::arg::Arg::long(local_788,local_538,"zero-terminated",0xf);
  clap_builder::builder::arg::Arg::short(local_538,local_788,0x7a);
  clap_builder::builder::arg::Arg::overrides_with(local_788,local_538,"zero-terminated",0xf);
  clap_builder::builder::arg::Arg::help
            (local_538,local_788,"line delimiter is NUL, not newline",0x22);
  clap_builder::builder::arg::Arg::action(local_788,local_538,2);
  clap_builder::builder::command::Command::arg(local_538,local_a50,local_788);
                    /* try { // try from 001abccc to 001abce1 has its CatchHandler @ 001abe82 */
  clap_builder::builder::arg::Arg::new(local_a50,"FILE1",5);
  (*(code *)PTR_memcpy_00215cf8)(local_788,local_a50,0x248);
  local_540 = local_808 | 1;
  local_53c = local_804;
                    /* try { // try from 001abd1c to 001abd30 has its CatchHandler @ 001abe82 */
  clap_builder::builder::arg::Arg::value_hint(local_270,local_788,3);
  clap_builder::builder::command::Command::arg(local_a50,local_538,local_270);
                    /* try { // try from 001abd4b to 001abd63 has its CatchHandler @ 001abe73 */
  clap_builder::builder::arg::Arg::new(local_538,"FILE2",5);
  (*(code *)PTR_memcpy_00215cf8)(local_788,local_538,0x248);
  local_540 = local_2f0 | 1;
  local_53c = local_2ec;
                    /* try { // try from 001abda1 to 001abdb5 has its CatchHandler @ 001abe73 */
  clap_builder::builder::arg::Arg::value_hint(local_270,local_788,3);
  clap_builder::builder::command::Command::arg(local_538,local_a50,local_270);
                    /* try { // try from 001abdd0 to 001abe21 has its CatchHandler @ 001abec4 */
  clap_builder::builder::arg::Arg::new(local_a50,"total",5);
  clap_builder::builder::arg::Arg::long(local_788,local_a50,"total",5);
  clap_builder::builder::arg::Arg::help(local_a50,local_788,"output a summary",0x10);
  clap_builder::builder::arg::Arg::action(local_788,local_a50,2);
  clap_builder::builder::command::Command::arg(param_1,local_538,local_788);
  return param_1;
}