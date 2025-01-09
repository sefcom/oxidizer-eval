undefined8 __rustcall uu_df::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_a70;
  undefined8 local_a68;
  undefined8 local_a60;
  undefined local_a58 [584];
  uint local_810;
  undefined4 local_80c;
  undefined local_808 [584];
  uint local_5c0;
  undefined4 local_5bc;
  ulong local_54c;
  undefined4 local_544;
  undefined local_540 [700];
  ulong local_284;
  undefined4 local_27c;
  char *local_278;
  undefined8 local_270;
  char *local_268;
  undefined8 local_260;
  char *local_258;
  undefined8 local_250;
  char *local_248;
  undefined8 local_240;
  char *local_238;
  undefined8 local_230;
  char *local_228;
  undefined8 local_220;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_808,uVar1);
  clap_builder::builder::command::Command::version(local_540,local_808,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_808,local_540,
             "Show information about the file system on which each FILE resides,\nor all file systems by default."
             ,0x62);
                    /* try { // try from 001c6c27 to 001c6c3d has its CatchHandler @ 001c7b94 */
  uucore::format_usage(local_a58,"{} [OPTION]... [FILE]...",0x18);
  clap_builder::builder::command::Command::override_usage(local_540,local_808,local_a58);
  clap_builder::builder::command::Command::after_help
            (local_808,local_540,
             "Display values are in units of the first available SIZE from --block-size,\nand the DF_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or 512 if POSIXLY_CORRECT is set).\n\nSIZE is an integer and optional unit (example: 10M is 10*1024*1024).\nUnits are K, M, G, T, P, E, Z, Y (powers of 1024) or KB, MB,... (powers\nof 1000)."
             ,0x174);
  (*(code *)PTR_memcpy_00245ae0)(local_540,local_808,700);
  local_284 = local_54c | 0x4008000040080;
  local_27c = local_544;
                    /* try { // try from 001c6cb8 to 001c6d0c has its CatchHandler @ 001c7bd3 */
  clap_builder::builder::arg::Arg::new(local_808,&DAT_0010be7c,4);
  clap_builder::builder::arg::Arg::long(local_a58,local_808,&DAT_0010be7c,4);
  clap_builder::builder::arg::Arg::help(local_808,local_a58,"Print help information.",0x17);
  clap_builder::builder::arg::Arg::action(local_a58,local_808,5);
  clap_builder::builder::command::Command::arg(local_808,local_540,local_a58);
                    /* try { // try from 001c6d3f to 001c6dc9 has its CatchHandler @ 001c7c9c */
  clap_builder::builder::arg::Arg::new(local_540,"all",3);
  clap_builder::builder::arg::Arg::short(local_a58,local_540,0x61);
  clap_builder::builder::arg::Arg::long(local_540,local_a58,"all",3);
  clap_builder::builder::arg::Arg::overrides_with(local_a58,local_540,"all",3);
  clap_builder::builder::arg::Arg::help(local_540,local_a58,"include dummy file systems",0x1a);
  clap_builder::builder::arg::Arg::action(local_a58,local_540,2);
  clap_builder::builder::command::Command::arg(local_540,local_808,local_a58);
                    /* try { // try from 001c6dfc to 001c6ed2 has its CatchHandler @ 001c7cc0 */
  clap_builder::builder::arg::Arg::new(local_808,"blocksize",9);
  clap_builder::builder::arg::Arg::short(local_a58,local_808,0x42);
  clap_builder::builder::arg::Arg::long(local_808,local_a58,"block-size",10);
  clap_builder::builder::arg::Arg::value_name(local_a58,local_808,&DAT_0010bde0,4);
  local_278 = &DAT_0010be58;
  local_270 = 4;
  local_268 = "blocksize";
  local_260 = 9;
  clap_builder::builder::arg::Arg::overrides_with_all(local_808,local_a58,&local_278);
  clap_builder::builder::arg::Arg::help
            (local_a58,local_808,
             "scale sizes by SIZE before printing them; e.g.\'-BM\' prints sizes in units of 1,048,576 bytes"
             ,0x5c);
  clap_builder::builder::command::Command::arg(local_808,local_540,local_a58);
                    /* try { // try from 001c6eed to 001c6f5f has its CatchHandler @ 001c7c8a */
  clap_builder::builder::arg::Arg::new(local_540,"total",5);
  clap_builder::builder::arg::Arg::long(local_a58,local_540,"total",5);
  clap_builder::builder::arg::Arg::overrides_with(local_540,local_a58,"total",5);
  clap_builder::builder::arg::Arg::help(local_a58,local_540,"produce a grand total",0x15);
  clap_builder::builder::arg::Arg::action(&local_278,local_a58,2);
  clap_builder::builder::command::Command::arg(local_540,local_808,&local_278);
                    /* try { // try from 001c6f92 to 001c704a has its CatchHandler @ 001c7c78 */
  clap_builder::builder::arg::Arg::new(local_808,"human-readable-binary",0x15);
  clap_builder::builder::arg::Arg::short(local_a58,local_808,0x68);
  clap_builder::builder::arg::Arg::long(local_808,local_a58,"human-readable",0xe);
  local_278 = "human-readable-decimal";
  local_270 = 0x16;
  local_268 = "human-readable-binary";
  local_260 = 0x15;
  clap_builder::builder::arg::Arg::overrides_with_all(local_a58,local_808,&local_278);
  clap_builder::builder::arg::Arg::help
            (local_808,local_a58,"print sizes in human readable format (e.g., 1K 234M 2G)",0x37);
  clap_builder::builder::arg::Arg::action(local_a58,local_808,2);
  clap_builder::builder::command::Command::arg(local_808,local_540,local_a58);
                    /* try { // try from 001c707d to 001c712e has its CatchHandler @ 001c7c66 */
  clap_builder::builder::arg::Arg::new(local_540,"human-readable-decimal",0x16);
  clap_builder::builder::arg::Arg::short(local_a58,local_540,0x48);
  clap_builder::builder::arg::Arg::long(local_540,local_a58,"si",2);
  local_278 = "human-readable-binary";
  local_270 = 0x15;
  local_268 = "human-readable-decimal";
  local_260 = 0x16;
  clap_builder::builder::arg::Arg::overrides_with_all(local_a58,local_540,&local_278);
  clap_builder::builder::arg::Arg::help
            (local_540,local_a58,"likewise, but use powers of 1000 not 1024",0x29);
  clap_builder::builder::arg::Arg::action(local_a58,local_540,2);
  clap_builder::builder::command::Command::arg(local_540,local_808,local_a58);
                    /* try { // try from 001c7161 to 001c71ee has its CatchHandler @ 001c7c51 */
  clap_builder::builder::arg::Arg::new(local_808,"inodes",6);
  clap_builder::builder::arg::Arg::short(local_a58,local_808,0x69);
  clap_builder::builder::arg::Arg::long(local_808,local_a58,"inodes",6);
  clap_builder::builder::arg::Arg::overrides_with(local_a58,local_808,"inodes",6);
  clap_builder::builder::arg::Arg::help
            (local_808,local_a58,"list inode information instead of block usage",0x2d);
  clap_builder::builder::arg::Arg::action(local_a58,local_808,2);
  clap_builder::builder::command::Command::arg(local_808,local_540,local_a58);
                    /* try { // try from 001c7221 to 001c72b4 has its CatchHandler @ 001c7bbe */
  clap_builder::builder::arg::Arg::new(local_540,&DAT_0010be58,4);
  clap_builder::builder::arg::Arg::short(local_a58,local_540,0x6b);
  clap_builder::builder::arg::Arg::help(local_540,local_a58,"like --block-size=1K",0x14);
  local_278 = "blocksize";
  local_270 = 9;
  local_268 = &DAT_0010be58;
  local_260 = 4;
  clap_builder::builder::arg::Arg::overrides_with_all(local_a58,local_540,&local_278);
  clap_builder::builder::arg::Arg::action(&local_278,local_a58,2);
  clap_builder::builder::command::Command::arg(local_540,local_808,&local_278);
                    /* try { // try from 001c72e7 to 001c7371 has its CatchHandler @ 001c7c3c */
  clap_builder::builder::arg::Arg::new(local_808,"local",5);
  clap_builder::builder::arg::Arg::short(local_a58,local_808,0x6c);
  clap_builder::builder::arg::Arg::long(local_808,local_a58,"local",5);
  clap_builder::builder::arg::Arg::overrides_with(local_a58,local_808,"local",5);
  clap_builder::builder::arg::Arg::help
            (local_808,local_a58,"limit listing to local file systems",0x23);
  clap_builder::builder::arg::Arg::action(local_a58,local_808,2);
  clap_builder::builder::command::Command::arg(local_808,local_540,local_a58);
                    /* try { // try from 001c73a4 to 001c7444 has its CatchHandler @ 001c7c27 */
  clap_builder::builder::arg::Arg::new(local_540,"no-sync",7);
  clap_builder::builder::arg::Arg::long(local_a58,local_540,"no-sync",7);
  local_278 = &DAT_0010bea0;
  local_270 = 4;
  local_268 = "no-sync";
  local_260 = 7;
  clap_builder::builder::arg::Arg::overrides_with_all(local_540,local_a58,&local_278);
  clap_builder::builder::arg::Arg::help
            (local_a58,local_540,"do not invoke sync before getting usage info (default)",0x36);
  clap_builder::builder::arg::Arg::action(&local_278,local_a58,2);
  clap_builder::builder::command::Command::arg(local_540,local_808,&local_278);
                    /* try { // try from 001c7477 to 001c74f5 has its CatchHandler @ 001c7ce4 */
  clap_builder::builder::arg::Arg::new(local_808,"output",6);
  clap_builder::builder::arg::Arg::long(local_a58,local_808,"output",6);
  clap_builder::builder::arg::Arg::value_name(local_808,local_a58,"FIELD_LIST",10);
  clap_builder::builder::arg::Arg::action(local_a58,local_808,1);
  clap_builder::builder::arg::Arg::num_args(local_808,local_a58);
  (*(code *)PTR_memcpy_00245ae0)(local_a58,local_808,0x248);
  local_810 = local_5c0 | 0x80;
  local_80c = local_5bc;
                    /* try { // try from 001c7532 to 001c7547 has its CatchHandler @ 001c7ce4 */
  clap_builder::builder::arg::Arg::use_value_delimiter(local_808,local_a58,1);
  (*(code *)PTR_memcpy_00245ae0)(&local_278,OUTPUT_FIELD_LIST,0xc0);
                    /* try { // try from 001c7565 to 001c76c9 has its CatchHandler @ 001c7ce4 */
  clap_builder::builder::arg::Arg::value_parser(local_a58,local_808,&local_278);
  clap_builder::builder::arg::Arg::default_missing_values_os(local_808,local_a58);
  local_278 = "sourcefstypeitotaliusediavailipcent";
  local_270 = 6;
  local_268 = &DAT_0010bec8;
  local_260 = 4;
  local_258 = &DAT_0010bedc;
  local_250 = 4;
  local_248 = "avail";
  local_240 = 5;
  local_238 = "pcent";
  local_230 = 5;
  local_228 = 
  "target--block-size argument  too largeinvalid --block-size argument invalid suffix in --block-size argument option --output: field  used more than once: file system type  both selected and excluded\n"
  ;
  local_220 = 6;
  clap_builder::builder::arg::Arg::default_values(local_a58,local_808,&local_278);
  local_278 = "inodes";
  local_270 = 6;
  local_268 = "portability";
  local_260 = 0xb;
  local_258 = "print-type";
  local_250 = 10;
  clap_builder::builder::arg::Arg::conflicts_with_all(local_808,local_a58,&local_278);
  clap_builder::builder::arg::Arg::help
            (local_a58,local_808,
             "use the output format defined by FIELD_LIST, or print all fields if FIELD_LIST is omitted."
             ,0x5a);
  clap_builder::builder::command::Command::arg(local_808,local_540,local_a58);
                    /* try { // try from 001c76e4 to 001c776e has its CatchHandler @ 001c7c12 */
  clap_builder::builder::arg::Arg::new(local_540,"portability",0xb);
  clap_builder::builder::arg::Arg::short(local_a58,local_540,0x50);
  clap_builder::builder::arg::Arg::long(local_540,local_a58,"portability",0xb);
  clap_builder::builder::arg::Arg::overrides_with(local_a58,local_540,"portability",0xb);
  clap_builder::builder::arg::Arg::help(local_540,local_a58,"use the POSIX output format",0x1b);
  clap_builder::builder::arg::Arg::action(local_a58,local_540,2);
  clap_builder::builder::command::Command::arg(local_540,local_808,local_a58);
                    /* try { // try from 001c77a1 to 001c783a has its CatchHandler @ 001c7bfd */
  clap_builder::builder::arg::Arg::new(local_808,&DAT_0010bea0,4);
  clap_builder::builder::arg::Arg::long(local_a58,local_808,&DAT_0010bea0,4);
  local_278 = "no-sync";
  local_270 = 7;
  local_268 = &DAT_0010bea0;
  local_260 = 4;
  clap_builder::builder::arg::Arg::overrides_with_all(local_808,local_a58,&local_278);
  clap_builder::builder::arg::Arg::help
            (local_a58,local_808,"invoke sync before getting usage info (non-windows only)",0x38);
  clap_builder::builder::arg::Arg::action(&local_278,local_a58,2);
  clap_builder::builder::command::Command::arg(local_808,local_540,&local_278);
                    /* try { // try from 001c786d to 001c7959 has its CatchHandler @ 001c7cae */
  clap_builder::builder::arg::Arg::new(local_540,&DAT_0010bea4,4);
  clap_builder::builder::arg::Arg::short(local_a58,local_540,0x74);
  clap_builder::builder::arg::Arg::long(local_540,local_a58,&DAT_0010bea4,4);
  local_a70 = 2;
  local_268 = (char *)local_a60;
  local_278 = (char *)0x2;
  local_270 = local_a68;
  clap_builder::builder::arg::Arg::value_parser(local_a58,local_540,&local_278);
  clap_builder::builder::arg::Arg::value_name(local_540,local_a58,&DAT_0010beb0,4);
  clap_builder::builder::arg::Arg::action(local_a58,local_540,1);
  clap_builder::builder::arg::Arg::help
            (&local_278,local_a58,"limit listing to file systems of type TYPE",0x2a);
  clap_builder::builder::command::Command::arg(local_540,local_808,&local_278);
                    /* try { // try from 001c7977 to 001c7a01 has its CatchHandler @ 001c7be8 */
  clap_builder::builder::arg::Arg::new(local_808,"print-type",10);
  clap_builder::builder::arg::Arg::short(local_a58,local_808,0x54);
  clap_builder::builder::arg::Arg::long(local_808,local_a58,"print-type",10);
  clap_builder::builder::arg::Arg::overrides_with(local_a58,local_808,"print-type",10);
  clap_builder::builder::arg::Arg::help(local_808,local_a58,"print file system type",0x16);
  clap_builder::builder::arg::Arg::action(local_a58,local_808,2);
  clap_builder::builder::command::Command::arg(local_808,local_540,local_a58);
                    /* try { // try from 001c7a34 to 001c7b05 has its CatchHandler @ 001c7cd2 */
  clap_builder::builder::arg::Arg::new(local_540,"exclude-type",0xc);
  clap_builder::builder::arg::Arg::short(local_a58,local_540,0x78);
  clap_builder::builder::arg::Arg::long(local_540,local_a58,"exclude-type",0xc);
  clap_builder::builder::arg::Arg::action(local_a58,local_540,1);
  clap_builder::builder::arg::Arg::value_parser(local_540,local_a58,&local_a70);
  clap_builder::builder::arg::Arg::value_name(local_a58,local_540,&DAT_0010beb0,4);
  clap_builder::builder::arg::Arg::use_value_delimiter(local_540,local_a58,1);
  clap_builder::builder::arg::Arg::help
            (local_a58,local_540,"limit listing to file systems not of type TYPE",0x2e);
  clap_builder::builder::command::Command::arg(local_540,local_808,local_a58);
                    /* try { // try from 001c7b20 to 001c7b67 has its CatchHandler @ 001c7ba9 */
  clap_builder::builder::arg::Arg::new(local_808,"paths",5);
  clap_builder::builder::arg::Arg::action(local_a58,local_808,1);
  clap_builder::builder::arg::Arg::value_hint(local_808,local_a58,2);
  clap_builder::builder::command::Command::arg(param_1,local_540,local_808);
  return param_1;
}