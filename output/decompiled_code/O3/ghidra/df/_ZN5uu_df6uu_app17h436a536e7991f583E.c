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
                    /* try { // try from 001c70c7 to 001c70dd has its CatchHandler @ 001c8034 */
  uucore::format_usage(local_a58,"{} [OPTION]... [FILE]...",0x18);
  clap_builder::builder::command::Command::override_usage(local_540,local_808,local_a58);
  clap_builder::builder::command::Command::after_help
            (local_808,local_540,
             "Display values are in units of the first available SIZE from --block-size,\nand the DF_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or 512 if POSIXLY_CORRECT is set).\n\nSIZE is an integer and optional unit (example: 10M is 10*1024*1024).\nUnits are K, M, G, T, P, E, Z, Y (powers of 1024) or KB, MB,... (powers\nof 1000)."
             ,0x174);
  (*(code *)PTR_memcpy_00246780)(local_540,local_808,700);
  local_284 = local_54c | 0x4008000040080;
  local_27c = local_544;
                    /* try { // try from 001c7158 to 001c71ac has its CatchHandler @ 001c8073 */
  clap_builder::builder::arg::Arg::new(local_808,&DAT_0010bdfc,4);
  clap_builder::builder::arg::Arg::long(local_a58,local_808,&DAT_0010bdfc,4);
  clap_builder::builder::arg::Arg::help(local_808,local_a58,"Print help information.",0x17);
  clap_builder::builder::arg::Arg::action(local_a58,local_808,5);
  clap_builder::builder::command::Command::arg(local_808,local_540,local_a58);
                    /* try { // try from 001c71df to 001c7269 has its CatchHandler @ 001c813c */
  clap_builder::builder::arg::Arg::new(local_540,"all",3);
  clap_builder::builder::arg::Arg::short(local_a58,local_540,0x61);
  clap_builder::builder::arg::Arg::long(local_540,local_a58,"all",3);
  clap_builder::builder::arg::Arg::overrides_with(local_a58,local_540,"all",3);
  clap_builder::builder::arg::Arg::help(local_540,local_a58,"include dummy file systems",0x1a);
  clap_builder::builder::arg::Arg::action(local_a58,local_540,2);
  clap_builder::builder::command::Command::arg(local_540,local_808,local_a58);
                    /* try { // try from 001c729c to 001c7372 has its CatchHandler @ 001c8160 */
  clap_builder::builder::arg::Arg::new(local_808,"blocksize",9);
  clap_builder::builder::arg::Arg::short(local_a58,local_808,0x42);
  clap_builder::builder::arg::Arg::long(local_808,local_a58,"block-size",10);
  clap_builder::builder::arg::Arg::value_name(local_a58,local_808,&DAT_0010bd60,4);
  local_278 = &DAT_0010bdd8;
  local_270 = 4;
  local_268 = "blocksize";
  local_260 = 9;
  clap_builder::builder::arg::Arg::overrides_with_all(local_808,local_a58,&local_278);
  clap_builder::builder::arg::Arg::help
            (local_a58,local_808,
             "scale sizes by SIZE before printing them; e.g.\'-BM\' prints sizes in units of 1,048,576 bytes"
             ,0x5c);
  clap_builder::builder::command::Command::arg(local_808,local_540,local_a58);
                    /* try { // try from 001c738d to 001c73ff has its CatchHandler @ 001c812a */
  clap_builder::builder::arg::Arg::new(local_540,"total",5);
  clap_builder::builder::arg::Arg::long(local_a58,local_540,"total",5);
  clap_builder::builder::arg::Arg::overrides_with(local_540,local_a58,"total",5);
  clap_builder::builder::arg::Arg::help(local_a58,local_540,"produce a grand total",0x15);
  clap_builder::builder::arg::Arg::action(&local_278,local_a58,2);
  clap_builder::builder::command::Command::arg(local_540,local_808,&local_278);
                    /* try { // try from 001c7432 to 001c74ea has its CatchHandler @ 001c8118 */
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
                    /* try { // try from 001c751d to 001c75ce has its CatchHandler @ 001c8106 */
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
                    /* try { // try from 001c7601 to 001c768e has its CatchHandler @ 001c80f1 */
  clap_builder::builder::arg::Arg::new(local_808,"inodes",6);
  clap_builder::builder::arg::Arg::short(local_a58,local_808,0x69);
  clap_builder::builder::arg::Arg::long(local_808,local_a58,"inodes",6);
  clap_builder::builder::arg::Arg::overrides_with(local_a58,local_808,"inodes",6);
  clap_builder::builder::arg::Arg::help
            (local_808,local_a58,"list inode information instead of block usage",0x2d);
  clap_builder::builder::arg::Arg::action(local_a58,local_808,2);
  clap_builder::builder::command::Command::arg(local_808,local_540,local_a58);
                    /* try { // try from 001c76c1 to 001c7754 has its CatchHandler @ 001c805e */
  clap_builder::builder::arg::Arg::new(local_540,&DAT_0010bdd8,4);
  clap_builder::builder::arg::Arg::short(local_a58,local_540,0x6b);
  clap_builder::builder::arg::Arg::help(local_540,local_a58,"like --block-size=1K",0x14);
  local_278 = "blocksize";
  local_270 = 9;
  local_268 = &DAT_0010bdd8;
  local_260 = 4;
  clap_builder::builder::arg::Arg::overrides_with_all(local_a58,local_540,&local_278);
  clap_builder::builder::arg::Arg::action(&local_278,local_a58,2);
  clap_builder::builder::command::Command::arg(local_540,local_808,&local_278);
                    /* try { // try from 001c7787 to 001c7811 has its CatchHandler @ 001c80dc */
  clap_builder::builder::arg::Arg::new(local_808,"local",5);
  clap_builder::builder::arg::Arg::short(local_a58,local_808,0x6c);
  clap_builder::builder::arg::Arg::long(local_808,local_a58,"local",5);
  clap_builder::builder::arg::Arg::overrides_with(local_a58,local_808,"local",5);
  clap_builder::builder::arg::Arg::help
            (local_808,local_a58,"limit listing to local file systems",0x23);
  clap_builder::builder::arg::Arg::action(local_a58,local_808,2);
  clap_builder::builder::command::Command::arg(local_808,local_540,local_a58);
                    /* try { // try from 001c7844 to 001c78e4 has its CatchHandler @ 001c80c7 */
  clap_builder::builder::arg::Arg::new(local_540,"no-sync",7);
  clap_builder::builder::arg::Arg::long(local_a58,local_540,"no-sync",7);
  local_278 = &DAT_0010be20;
  local_270 = 4;
  local_268 = "no-sync";
  local_260 = 7;
  clap_builder::builder::arg::Arg::overrides_with_all(local_540,local_a58,&local_278);
  clap_builder::builder::arg::Arg::help
            (local_a58,local_540,"do not invoke sync before getting usage info (default)",0x36);
  clap_builder::builder::arg::Arg::action(&local_278,local_a58,2);
  clap_builder::builder::command::Command::arg(local_540,local_808,&local_278);
                    /* try { // try from 001c7917 to 001c7995 has its CatchHandler @ 001c8184 */
  clap_builder::builder::arg::Arg::new(local_808,"output",6);
  clap_builder::builder::arg::Arg::long(local_a58,local_808,"output",6);
  clap_builder::builder::arg::Arg::value_name(local_808,local_a58,"FIELD_LIST",10);
  clap_builder::builder::arg::Arg::action(local_a58,local_808,1);
  clap_builder::builder::arg::Arg::num_args(local_808,local_a58);
  (*(code *)PTR_memcpy_00246780)(local_a58,local_808,0x248);
  local_810 = local_5c0 | 0x80;
  local_80c = local_5bc;
                    /* try { // try from 001c79d2 to 001c79e7 has its CatchHandler @ 001c8184 */
  clap_builder::builder::arg::Arg::use_value_delimiter(local_808,local_a58,1);
  (*(code *)PTR_memcpy_00246780)(&local_278,OUTPUT_FIELD_LIST,0xc0);
                    /* try { // try from 001c7a05 to 001c7b69 has its CatchHandler @ 001c8184 */
  clap_builder::builder::arg::Arg::value_parser(local_a58,local_808,&local_278);
  clap_builder::builder::arg::Arg::default_missing_values_os(local_808,local_a58);
  local_278 = "sourcefstypeitotaliusediavailipcent";
  local_270 = 6;
  local_268 = &DAT_0010be48;
  local_260 = 4;
  local_258 = &DAT_0010be5c;
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
                    /* try { // try from 001c7b84 to 001c7c0e has its CatchHandler @ 001c80b2 */
  clap_builder::builder::arg::Arg::new(local_540,"portability",0xb);
  clap_builder::builder::arg::Arg::short(local_a58,local_540,0x50);
  clap_builder::builder::arg::Arg::long(local_540,local_a58,"portability",0xb);
  clap_builder::builder::arg::Arg::overrides_with(local_a58,local_540,"portability",0xb);
  clap_builder::builder::arg::Arg::help(local_540,local_a58,"use the POSIX output format",0x1b);
  clap_builder::builder::arg::Arg::action(local_a58,local_540,2);
  clap_builder::builder::command::Command::arg(local_540,local_808,local_a58);
                    /* try { // try from 001c7c41 to 001c7cda has its CatchHandler @ 001c809d */
  clap_builder::builder::arg::Arg::new(local_808,&DAT_0010be20,4);
  clap_builder::builder::arg::Arg::long(local_a58,local_808,&DAT_0010be20,4);
  local_278 = "no-sync";
  local_270 = 7;
  local_268 = &DAT_0010be20;
  local_260 = 4;
  clap_builder::builder::arg::Arg::overrides_with_all(local_808,local_a58,&local_278);
  clap_builder::builder::arg::Arg::help
            (local_a58,local_808,"invoke sync before getting usage info (non-windows only)",0x38);
  clap_builder::builder::arg::Arg::action(&local_278,local_a58,2);
  clap_builder::builder::command::Command::arg(local_808,local_540,&local_278);
                    /* try { // try from 001c7d0d to 001c7df9 has its CatchHandler @ 001c814e */
  clap_builder::builder::arg::Arg::new(local_540,&DAT_0010be24,4);
  clap_builder::builder::arg::Arg::short(local_a58,local_540,0x74);
  clap_builder::builder::arg::Arg::long(local_540,local_a58,&DAT_0010be24,4);
  local_a70 = 2;
  local_268 = (char *)local_a60;
  local_278 = (char *)0x2;
  local_270 = local_a68;
  clap_builder::builder::arg::Arg::value_parser(local_a58,local_540,&local_278);
  clap_builder::builder::arg::Arg::value_name(local_540,local_a58,&DAT_0010be30,4);
  clap_builder::builder::arg::Arg::action(local_a58,local_540,1);
  clap_builder::builder::arg::Arg::help
            (&local_278,local_a58,"limit listing to file systems of type TYPE",0x2a);
  clap_builder::builder::command::Command::arg(local_540,local_808,&local_278);
                    /* try { // try from 001c7e17 to 001c7ea1 has its CatchHandler @ 001c8088 */
  clap_builder::builder::arg::Arg::new(local_808,"print-type",10);
  clap_builder::builder::arg::Arg::short(local_a58,local_808,0x54);
  clap_builder::builder::arg::Arg::long(local_808,local_a58,"print-type",10);
  clap_builder::builder::arg::Arg::overrides_with(local_a58,local_808,"print-type",10);
  clap_builder::builder::arg::Arg::help(local_808,local_a58,"print file system type",0x16);
  clap_builder::builder::arg::Arg::action(local_a58,local_808,2);
  clap_builder::builder::command::Command::arg(local_808,local_540,local_a58);
                    /* try { // try from 001c7ed4 to 001c7fa5 has its CatchHandler @ 001c8172 */
  clap_builder::builder::arg::Arg::new(local_540,"exclude-type",0xc);
  clap_builder::builder::arg::Arg::short(local_a58,local_540,0x78);
  clap_builder::builder::arg::Arg::long(local_540,local_a58,"exclude-type",0xc);
  clap_builder::builder::arg::Arg::action(local_a58,local_540,1);
  clap_builder::builder::arg::Arg::value_parser(local_540,local_a58,&local_a70);
  clap_builder::builder::arg::Arg::value_name(local_a58,local_540,&DAT_0010be30,4);
  clap_builder::builder::arg::Arg::use_value_delimiter(local_540,local_a58,1);
  clap_builder::builder::arg::Arg::help
            (local_a58,local_540,"limit listing to file systems not of type TYPE",0x2e);
  clap_builder::builder::command::Command::arg(local_540,local_808,local_a58);
                    /* try { // try from 001c7fc0 to 001c8007 has its CatchHandler @ 001c8049 */
  clap_builder::builder::arg::Arg::new(local_808,"paths",5);
  clap_builder::builder::arg::Arg::action(local_a58,local_808,1);
  clap_builder::builder::arg::Arg::value_hint(local_808,local_a58,2);
  clap_builder::builder::command::Command::arg(param_1,local_540,local_808);
  return param_1;
}