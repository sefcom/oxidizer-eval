undefined8 __rustcall uu_join::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a58 [584];
  uint local_810;
  undefined4 local_80c;
  undefined local_808 [584];
  uint local_5c0;
  undefined4 local_5bc;
  ulong local_54c;
  undefined4 local_544;
  undefined local_540 [584];
  uint local_2f8;
  undefined4 local_2f4;
  ulong local_284;
  undefined4 local_27c;
  char *local_278;
  undefined8 local_270;
  char *local_268;
  undefined8 local_260;
  uint local_30;
  undefined4 local_2c;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_540,uVar1);
  clap_builder::builder::command::Command::version(local_808,local_540,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_540,local_808,
             "For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input."
             ,0xd4);
                    /* try { // try from 001c4687 to 001c469b has its CatchHandler @ 001c506c */
  uucore::format_usage(auStack_a58,"{} [OPTION]... FILE1 FILE2",0x1a);
  clap_builder::builder::command::Command::override_usage(local_808,local_540,auStack_a58);
  (*(code *)PTR_memcpy_002392b0)(local_540,local_808,700);
  local_284 = local_54c | 0x8000000080;
  local_27c = local_544;
                    /* try { // try from 001c46f5 to 001c47ce has its CatchHandler @ 001c5192 */
  clap_builder::builder::arg::Arg::new(local_808,"a",1);
  clap_builder::builder::arg::Arg::short(auStack_a58,local_808,0x61);
  clap_builder::builder::arg::Arg::action(local_808,auStack_a58,1);
  clap_builder::builder::arg::Arg::num_args(auStack_a58,local_808);
  local_278 = "1";
  local_270 = 1;
  local_268 = "2";
  local_260 = 1;
  clap_builder::builder::arg::Arg::value_parser(local_808,auStack_a58,&local_278);
  clap_builder::builder::arg::Arg::value_name(auStack_a58,local_808,"FILENUM",7);
  clap_builder::builder::arg::Arg::help
            (&local_278,auStack_a58,
             "also print unpairable lines from file FILENUM, where\nFILENUM is 1 or 2, corresponding to FILE1 or FILE2"
             ,0x67);
  clap_builder::builder::command::Command::arg(local_808,local_540,&local_278);
                    /* try { // try from 001c47ec to 001c48b7 has its CatchHandler @ 001c5180 */
  clap_builder::builder::arg::Arg::new(local_540,"v",1);
  clap_builder::builder::arg::Arg::short(auStack_a58,local_540,0x76);
  clap_builder::builder::arg::Arg::action(local_540,auStack_a58,1);
  clap_builder::builder::arg::Arg::num_args(auStack_a58,local_540);
  local_278 = "1";
  local_270 = 1;
  local_268 = "2";
  local_260 = 1;
  clap_builder::builder::arg::Arg::value_parser(local_540,auStack_a58,&local_278);
  clap_builder::builder::arg::Arg::value_name(auStack_a58,local_540,"FILENUM",7);
  clap_builder::builder::arg::Arg::help
            (&local_278,auStack_a58,"like -a FILENUM, but suppress joined output lines",0x31);
  clap_builder::builder::command::Command::arg(local_540,local_808,&local_278);
                    /* try { // try from 001c48d5 to 001c493d has its CatchHandler @ 001c515c */
  clap_builder::builder::arg::Arg::new(local_808,"e",1);
  clap_builder::builder::arg::Arg::short(auStack_a58,local_808,0x65);
  clap_builder::builder::arg::Arg::value_name(local_808,auStack_a58,"EMPTY",5);
  clap_builder::builder::arg::Arg::help
            (auStack_a58,local_808,"replace missing input fields with EMPTY",0x27);
  clap_builder::builder::command::Command::arg(local_808,local_540,auStack_a58);
                    /* try { // try from 001c4956 to 001c49be has its CatchHandler @ 001c514a */
  clap_builder::builder::arg::Arg::new(local_540,"i",1);
  clap_builder::builder::arg::Arg::short(auStack_a58,local_540,0x69);
  clap_builder::builder::arg::Arg::long(local_540,auStack_a58,"ignore-case",0xb);
  clap_builder::builder::arg::Arg::help
            (auStack_a58,local_540,"ignore differences in case when comparing fields",0x30);
  clap_builder::builder::arg::Arg::action(&local_278,auStack_a58,2);
  clap_builder::builder::command::Command::arg(local_540,local_808,&local_278);
                    /* try { // try from 001c49ef to 001c4a57 has its CatchHandler @ 001c5138 */
  clap_builder::builder::arg::Arg::new(local_808,"j",1);
  clap_builder::builder::arg::Arg::short(auStack_a58,local_808,0x6a);
  clap_builder::builder::arg::Arg::value_name(local_808,auStack_a58,"FIELD",5);
  clap_builder::builder::arg::Arg::help
            (auStack_a58,local_808,"equivalent to \'-1 FIELD -2 FIELD\'",0x21);
  clap_builder::builder::command::Command::arg(local_808,local_540,auStack_a58);
                    /* try { // try from 001c4a70 to 001c4ad8 has its CatchHandler @ 001c5126 */
  clap_builder::builder::arg::Arg::new(local_540,"o",1);
  clap_builder::builder::arg::Arg::short(auStack_a58,local_540,0x6f);
  clap_builder::builder::arg::Arg::value_name(local_540,auStack_a58,"FORMAT",6);
  clap_builder::builder::arg::Arg::help
            (auStack_a58,local_540,"obey FORMAT while constructing output line",0x2a);
  clap_builder::builder::command::Command::arg(local_540,local_808,auStack_a58);
                    /* try { // try from 001c4af1 to 001c4b7d has its CatchHandler @ 001c516e */
  clap_builder::builder::arg::Arg::new(local_808,"t",1);
  clap_builder::builder::arg::Arg::short(auStack_a58,local_808,0x74);
  clap_builder::builder::arg::Arg::value_name(local_808,auStack_a58,&DAT_0010b750,4);
  local_278 = (char *)0x2;
  clap_builder::builder::arg::Arg::value_parser(auStack_a58,local_808,&local_278);
  clap_builder::builder::arg::Arg::help
            (&local_278,auStack_a58,"use CHAR as input and output field separator",0x2c);
  clap_builder::builder::command::Command::arg(local_808,local_540,&local_278);
                    /* try { // try from 001c4b9b to 001c4c03 has its CatchHandler @ 001c5114 */
  clap_builder::builder::arg::Arg::new(local_540,"1",1);
  clap_builder::builder::arg::Arg::short(auStack_a58,local_540,0x31);
  clap_builder::builder::arg::Arg::value_name(local_540,auStack_a58,"FIELD",5);
  clap_builder::builder::arg::Arg::help(auStack_a58,local_540,"join on this FIELD of file 1",0x1c);
  clap_builder::builder::command::Command::arg(local_540,local_808,auStack_a58);
                    /* try { // try from 001c4c1c to 001c4c84 has its CatchHandler @ 001c50ff */
  clap_builder::builder::arg::Arg::new(local_808,"2",1);
  clap_builder::builder::arg::Arg::short(auStack_a58,local_808,0x32);
  clap_builder::builder::arg::Arg::value_name(local_808,auStack_a58,"FIELD",5);
  clap_builder::builder::arg::Arg::help(auStack_a58,local_808,"join on this FIELD of file 2",0x1c);
  clap_builder::builder::command::Command::arg(local_808,local_540,auStack_a58);
                    /* try { // try from 001c4c9d to 001c4ced has its CatchHandler @ 001c50ea */
  clap_builder::builder::arg::Arg::new(local_540,"check-order",0xb);
  clap_builder::builder::arg::Arg::long(auStack_a58,local_540,"check-order",0xb);
  clap_builder::builder::arg::Arg::help
            (local_540,auStack_a58,
             "check that the input is correctly sorted, even if all input lines are pairable",0x4e);
  clap_builder::builder::arg::Arg::action(auStack_a58,local_540,2);
  clap_builder::builder::command::Command::arg(local_540,local_808,auStack_a58);
                    /* try { // try from 001c4d1e to 001c4d6e has its CatchHandler @ 001c50d5 */
  clap_builder::builder::arg::Arg::new(local_808,"nocheck-order",0xd);
  clap_builder::builder::arg::Arg::long(auStack_a58,local_808,"nocheck-order",0xd);
  clap_builder::builder::arg::Arg::help
            (local_808,auStack_a58,"do not check that the input is correctly sorted",0x2f);
  clap_builder::builder::arg::Arg::action(auStack_a58,local_808,2);
  clap_builder::builder::command::Command::arg(local_808,local_540,auStack_a58);
                    /* try { // try from 001c4d9f to 001c4def has its CatchHandler @ 001c50c0 */
  clap_builder::builder::arg::Arg::new(local_540,"header",6);
  clap_builder::builder::arg::Arg::long(auStack_a58,local_540,"header",6);
  clap_builder::builder::arg::Arg::help
            (local_540,auStack_a58,
             "treat the first line in each file as field headers, print them without trying to pair them"
             ,0x5a);
  clap_builder::builder::arg::Arg::action(auStack_a58,local_540,2);
  clap_builder::builder::command::Command::arg(local_540,local_808,auStack_a58);
                    /* try { // try from 001c4e20 to 001c4e88 has its CatchHandler @ 001c50ab */
  clap_builder::builder::arg::Arg::new(local_808,"z",1);
  clap_builder::builder::arg::Arg::short(auStack_a58,local_808,0x7a);
  clap_builder::builder::arg::Arg::long(local_808,auStack_a58,"zero-terminated",0xf);
  clap_builder::builder::arg::Arg::help
            (auStack_a58,local_808,"line delimiter is NUL, not newline",0x22);
  clap_builder::builder::arg::Arg::action(&local_278,auStack_a58,2);
  clap_builder::builder::command::Command::arg(local_808,local_540,&local_278);
                    /* try { // try from 001c4eb9 to 001c4ed1 has its CatchHandler @ 001c5096 */
  clap_builder::builder::arg::Arg::new(local_540,"file1",5);
  (*(code *)PTR_memcpy_002392b0)(auStack_a58,local_540,0x248);
  local_810 = local_2f8 | 1;
  local_80c = local_2f4;
                    /* try { // try from 001c4f0a to 001c4f3a has its CatchHandler @ 001c5096 */
  clap_builder::builder::arg::Arg::value_name(local_540,auStack_a58,"FILE1",5);
  clap_builder::builder::arg::Arg::value_hint(auStack_a58,local_540,3);
  (*(code *)PTR_memcpy_002392b0)(&local_278,auStack_a58,0x248);
  local_30 = local_810 | 4;
  local_2c = local_80c;
  clap_builder::builder::command::Command::arg(local_540,local_808,&local_278);
                    /* try { // try from 001c4f8b to 001c4fa3 has its CatchHandler @ 001c5081 */
  clap_builder::builder::arg::Arg::new(local_808,"file2",5);
  (*(code *)PTR_memcpy_002392b0)(auStack_a58,local_808,0x248);
  local_810 = local_5c0 | 1;
  local_80c = local_5bc;
                    /* try { // try from 001c4fdc to 001c500c has its CatchHandler @ 001c5081 */
  clap_builder::builder::arg::Arg::value_name
            (local_808,auStack_a58,
             "FILE2incompatible join fields , invalid field number: invalid file number: ",5);
  clap_builder::builder::arg::Arg::value_hint(auStack_a58,local_808,3);
  (*(code *)PTR_memcpy_002392b0)(local_808,auStack_a58,0x248);
  local_5c0 = local_810 | 4;
  local_5bc = local_80c;
  clap_builder::builder::command::Command::arg(param_1,local_540,local_808);
  return param_1;
}