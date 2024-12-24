/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __rustcall uu_sort::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_ac8;
  undefined4 uStack_ac0;
  undefined4 uStack_abc;
  undefined8 local_ab8;
  char *local_ab0;
  undefined8 uStack_aa8;
  char *local_aa0;
  undefined8 local_a98;
  char *local_a90;
  undefined8 local_a88;
  char *local_a80;
  undefined8 local_a78;
  char *local_a70;
  undefined8 local_a68;
  char *local_a60;
  undefined8 local_a58;
  char *local_a50;
  undefined8 local_a48;
  uint local_828;
  undefined4 local_824;
  char *local_820;
  undefined8 local_818;
  char *local_810;
  undefined8 local_808;
  char *local_800;
  undefined8 local_7f8;
  char *local_7f0;
  undefined8 local_7e8;
  char *local_7e0;
  undefined8 local_7d8;
  char *local_7d0;
  undefined8 local_7c8;
  ulong local_564;
  undefined4 local_55c;
  undefined8 local_558 [2];
  undefined8 local_548;
  uint local_310;
  undefined4 local_30c;
  ulong local_29c;
  undefined4 local_294;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  char *local_278;
  undefined8 uStack_270;
  char *local_268;
  undefined8 uStack_260;
  char *local_258;
  undefined8 uStack_250;
  undefined *local_248;
  undefined8 uStack_240;
  undefined *local_238;
  undefined8 uStack_230;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(&local_820,uVar1);
  clap_builder::builder::command::Command::version(local_558,&local_820,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (&local_820,local_558,
             "Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input."
             ,0x62);
  clap_builder::builder::command::Command::after_help
            (local_558,&local_820,
             "The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by default are separated by the first whitespace after a non-whitespace character. Use -t to specify a custom separator.\nIn the default case, whitespace is appended at the beginning of each field. Custom separators however are not included in fields.\n\nFIELD and CHAR both start at 1 (i.e. they are 1-indexed). If there is no end specified after a comma, the end will be the end of the line.\nIf CHAR is set 0, it means the end of the field. CHAR defaults to 1 for the start position and to 0 for the end position.\n\nValid options are: MbdfhnRrV. They override the global options for this key."
             ,0x297);
                    /* try { // try from 002212e7 to 002212fd has its CatchHandler @ 00222815 */
  uucore::format_usage(&local_a70,"{} [OPTION]... [FILE]...",0x18);
  clap_builder::builder::command::Command::override_usage(&local_820,local_558,&local_a70);
  (*(code *)PTR_memcpy_00306060)(local_558,&local_820,700);
  local_29c = local_564 | 0x14008800140088;
  local_294 = local_55c;
                    /* try { // try from 00221359 to 002213ad has its CatchHandler @ 00222911 */
  clap_builder::builder::arg::Arg::new(&local_820,&DAT_00124258,4);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,&DAT_00124258,4);
  clap_builder::builder::arg::Arg::help(&local_820,&local_a70,"Print help information.",0x17);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,5);
  clap_builder::builder::command::Command::arg(&local_820,local_558,&local_a70);
                    /* try { // try from 002213e0 to 00221437 has its CatchHandler @ 002228fc */
  clap_builder::builder::arg::Arg::new(local_558,"version",7);
  clap_builder::builder::arg::Arg::long(&local_a70,local_558,"version",7);
  clap_builder::builder::arg::Arg::help(local_558,&local_a70,"Print version information.",0x1a);
  clap_builder::builder::arg::Arg::action(&local_a70,local_558,8);
  clap_builder::builder::command::Command::arg(local_558,&local_820,&local_a70);
                    /* try { // try from 0022146a to 002214a0 has its CatchHandler @ 002228e7 */
  clap_builder::builder::arg::Arg::new(&local_820,&DAT_00124284,4);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,&DAT_00124284,4);
  local_820 = "general-numeric";
  local_818 = 0xf;
  local_810 = "human-numeric";
  local_808 = 0xd;
  local_800 = "month";
  local_7f8 = 5;
  local_7f0 = "numeric";
  local_7e8 = 7;
  local_7e0 = "version";
  local_7d8 = 7;
  local_7d0 = "random";
  local_7c8 = 6;
                    /* try { // try from 0022153c to 00221550 has its CatchHandler @ 00222803 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_288,&local_820);
                    /* try { // try from 00221551 to 0022156a has its CatchHandler @ 002227fe */
  clap_builder::builder::arg::Arg::value_parser(&local_820,&local_a70,&local_288);
  local_238 = PTR_s_random_sort_002ff120;
  uStack_230 = _UNK_002ff128;
  local_248 = PTR_s_version_sort_002ff110;
  uStack_240 = _UNK_002ff118;
  local_258 = PTR_s_numeric_sort_002ff100;
  uStack_250 = _UNK_002ff108;
  local_268 = PTR_s_month_sort_002ff0f0;
  uStack_260 = _UNK_002ff0f8;
  local_278 = PTR_s_human_numeric_sort_002ff0e0;
  uStack_270 = _UNK_002ff0e8;
  local_288 = PTR_s_general_numeric_sort_002ff0d0._0_4_;
  uStack_284 = PTR_s_general_numeric_sort_002ff0d0._4_4_;
  uStack_280 = _UNK_002ff0d8;
  uStack_27c = _UNK_002ff0dc;
                    /* try { // try from 002215c5 to 002215de has its CatchHandler @ 002228e7 */
  clap_builder::builder::arg::Arg::conflicts_with_all(&local_a70,&local_820,&local_288);
  clap_builder::builder::command::Command::arg(&local_820,local_558,&local_a70);
                    /* try { // try from 002215f9 to 00221623 has its CatchHandler @ 002227e9 */
  make_sort_mode_arg(&local_a70,"human-numeric-sort",0x12,0x68,
                     "compare according to human readable sizes, eg 1M > 100k",0x37);
  clap_builder::builder::command::Command::arg(local_558,&local_820,&local_a70);
                    /* try { // try from 0022163e to 00221668 has its CatchHandler @ 002227d4 */
  make_sort_mode_arg(&local_a70,"month-sort",10,0x4d,"compare according to month name abbreviation",
                     0x2c);
  clap_builder::builder::command::Command::arg(&local_820,local_558,&local_a70);
                    /* try { // try from 00221683 to 002216ad has its CatchHandler @ 002227bf */
  make_sort_mode_arg(&local_a70,"numeric-sort",0xc,0x6e,
                     "compare according to string numerical value",0x2b);
  clap_builder::builder::command::Command::arg(local_558,&local_820,&local_a70);
                    /* try { // try from 002216c8 to 002216f2 has its CatchHandler @ 002227aa */
  make_sort_mode_arg(&local_a70,"general-numeric-sort",0x14,0x67,
                     "compare according to string general numerical value",0x33);
  clap_builder::builder::command::Command::arg(&local_820,local_558,&local_a70);
                    /* try { // try from 0022170d to 00221734 has its CatchHandler @ 00222795 */
  make_sort_mode_arg(&local_a70,"version-sort",0xc,0x56,
                     "Sort by SemVer version number, eg 1.12.2 > 1.1.2",0x30);
  clap_builder::builder::command::Command::arg(local_558,&local_820,&local_a70);
                    /* try { // try from 0022174f to 00221776 has its CatchHandler @ 00222780 */
  make_sort_mode_arg(&local_a70,"random-sort",0xb,0x52,"shuffle in random order",0x17);
  clap_builder::builder::command::Command::arg(&local_820,local_558,&local_a70);
                    /* try { // try from 00221791 to 002218aa has its CatchHandler @ 002229b3 */
  clap_builder::builder::arg::Arg::new(local_558,"dictionary-order",0x10);
  clap_builder::builder::arg::Arg::short(&local_a70,local_558,100);
  clap_builder::builder::arg::Arg::long(local_558,&local_a70,"dictionary-order",0x10);
  clap_builder::builder::arg::Arg::help
            (&local_a70,local_558,"consider only blanks and alphanumeric characters",0x30);
  local_ab0 = "numeric-sort";
  uStack_aa8 = 0xc;
  local_aa0 = "general-numeric-sort";
  local_a98 = 0x14;
  local_a90 = "human-numeric-sort";
  local_a88 = 0x12;
  local_a80 = "month-sort";
  local_a78 = 10;
  local_258 = "month-sort";
  uStack_250 = 10;
  local_268 = "human-numeric-sort";
  uStack_260 = 0x12;
  local_278 = "general-numeric-sort";
  uStack_270 = 0x14;
  local_288 = 0x12eed4;
  uStack_284 = 0;
  uStack_280 = 0xc;
  uStack_27c = 0;
  clap_builder::builder::arg::Arg::conflicts_with_all(local_558,&local_a70,&local_288);
  clap_builder::builder::arg::Arg::action(&local_a70,local_558,2);
  clap_builder::builder::command::Command::arg(local_558,&local_820,&local_a70);
                    /* try { // try from 002218dd to 00221949 has its CatchHandler @ 002228d2 */
  clap_builder::builder::arg::Arg::new(&local_820,"merge",5);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x6d);
  clap_builder::builder::arg::Arg::long(&local_820,&local_a70,"merge",5);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_820,"merge already sorted files; do not sort",0x27);
  clap_builder::builder::arg::Arg::action(&local_288,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_820,local_558,&local_288);
                    /* try { // try from 0022197c to 002219ca has its CatchHandler @ 002229fb */
  clap_builder::builder::arg::Arg::new(local_558,"check",5);
  clap_builder::builder::arg::Arg::short(&local_a70,local_558,99);
  clap_builder::builder::arg::Arg::long(local_558,&local_a70,"check",5);
  (*(code *)PTR_memcpy_00306060)(&local_a70,local_558,0x248);
  local_828 = local_310 | 0x80;
  local_824 = local_30c;
                    /* try { // try from 00221a07 to 00221a16 has its CatchHandler @ 002229fb */
  clap_builder::builder::arg::Arg::num_args(local_558,&local_a70);
  local_a70 = "silent";
  local_a68 = 6;
  local_a60 = "quiet";
  local_a58 = 5;
  local_a50 = "diagnose-first";
  local_a48 = 0xe;
                    /* try { // try from 00221a59 to 00221a6a has its CatchHandler @ 0022276b */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_288,&local_a70);
                    /* try { // try from 00221a6b to 00221a84 has its CatchHandler @ 00222766 */
  clap_builder::builder::arg::Arg::value_parser(&local_a70,local_558,&local_288);
                    /* try { // try from 00221a85 to 00221ac0 has its CatchHandler @ 002229fb */
  clap_builder::builder::arg::Arg::conflicts_with(local_558,&local_a70,"output",6);
  clap_builder::builder::arg::Arg::help
            (&local_a70,local_558,"check for sorted input; do not sort",0x23);
  clap_builder::builder::command::Command::arg(local_558,&local_820,&local_a70);
                    /* try { // try from 00221adb to 00221b65 has its CatchHandler @ 002229a1 */
  clap_builder::builder::arg::Arg::new(&local_820,"check-silent",0xc);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x43);
  clap_builder::builder::arg::Arg::long(&local_820,&local_a70,"check-silent",0xc);
  clap_builder::builder::arg::Arg::conflicts_with(&local_a70,&local_820,"output",6);
  clap_builder::builder::arg::Arg::help
            (&local_820,&local_a70,
             "exit successfully if the given file is already sorted, and exit with status 1 otherwise."
             ,0x58);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,local_558,&local_a70);
                    /* try { // try from 00221b98 to 00221c04 has its CatchHandler @ 002228bd */
  clap_builder::builder::arg::Arg::new(local_558,"ignore-case",0xb);
  clap_builder::builder::arg::Arg::short(&local_a70,local_558,0x66);
  clap_builder::builder::arg::Arg::long(local_558,&local_a70,"ignore-case",0xb);
  clap_builder::builder::arg::Arg::help
            (&local_a70,local_558,"fold lower case to upper case characters",0x28);
  clap_builder::builder::arg::Arg::action(&local_288,&local_a70,2);
  clap_builder::builder::command::Command::arg(local_558,&local_820,&local_288);
                    /* try { // try from 00221c37 to 00221cba has its CatchHandler @ 0022298f */
  clap_builder::builder::arg::Arg::new(&local_820,"ignore-nonprinting",0x12);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x69);
  clap_builder::builder::arg::Arg::long(&local_820,&local_a70,"ignore-nonprinting",0x12);
  clap_builder::builder::arg::Arg::help(&local_a70,&local_820,"ignore nonprinting characters",0x1d);
  clap_builder::builder::arg::Arg::conflicts_with_all(&local_820,&local_a70,&local_ab0);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,local_558,&local_a70);
                    /* try { // try from 00221ced to 00221d59 has its CatchHandler @ 002228a8 */
  clap_builder::builder::arg::Arg::new(local_558,"ignore-leading-blanks",0x15);
  clap_builder::builder::arg::Arg::short(&local_a70,local_558,0x62);
  clap_builder::builder::arg::Arg::long(local_558,&local_a70,"ignore-leading-blanks",0x15);
  clap_builder::builder::arg::Arg::help
            (&local_a70,local_558,"ignore leading blanks when finding sort keys in each line",0x39);
  clap_builder::builder::arg::Arg::action(&local_288,&local_a70,2);
  clap_builder::builder::command::Command::arg(local_558,&local_820,&local_288);
                    /* try { // try from 00221d8c to 00221e2d has its CatchHandler @ 002229e9 */
  clap_builder::builder::arg::Arg::new(&local_820,"output",6);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x6f);
  clap_builder::builder::arg::Arg::long(&local_820,&local_a70,"output",6);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_820,"write output to FILENAME instead of stdout",0x2a);
  clap_builder::builder::arg::Arg::value_name(&local_820,&local_a70,"FILENAME",8);
  clap_builder::builder::arg::Arg::value_hint(&local_a70,&local_820,3);
  clap_builder::builder::command::Command::arg(&local_820,local_558,&local_a70);
                    /* try { // try from 00221e48 to 00221eb4 has its CatchHandler @ 00222893 */
  clap_builder::builder::arg::Arg::new(local_558,"reverse",7);
  clap_builder::builder::arg::Arg::short(&local_a70,local_558,0x72);
  clap_builder::builder::arg::Arg::long(local_558,&local_a70,"reverse",7);
  clap_builder::builder::arg::Arg::help(&local_a70,local_558,"reverse the output",0x12);
  clap_builder::builder::arg::Arg::action(&local_288,&local_a70,2);
  clap_builder::builder::command::Command::arg(local_558,&local_820,&local_288);
                    /* try { // try from 00221ee7 to 00221f53 has its CatchHandler @ 0022287e */
  clap_builder::builder::arg::Arg::new(&local_820,"stable",6);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x73);
  clap_builder::builder::arg::Arg::long(&local_820,&local_a70,"stable",6);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_820,"stabilize sort by disabling last-resort comparison",0x32);
  clap_builder::builder::arg::Arg::action(&local_288,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_820,local_558,&local_288);
                    /* try { // try from 00221f86 to 00221ff2 has its CatchHandler @ 00222869 */
  clap_builder::builder::arg::Arg::new(local_558,"unique",6);
  clap_builder::builder::arg::Arg::short(&local_a70,local_558,0x75);
  clap_builder::builder::arg::Arg::long(local_558,&local_a70,"unique",6);
  clap_builder::builder::arg::Arg::help
            (&local_a70,local_558,"output only the first of an equal run",0x25);
  clap_builder::builder::arg::Arg::action(&local_288,&local_a70,2);
  clap_builder::builder::command::Command::arg(local_558,&local_820,&local_288);
                    /* try { // try from 00222025 to 002220b8 has its CatchHandler @ 0022297a */
  clap_builder::builder::arg::Arg::new(&local_820,"key",3);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x6b);
  clap_builder::builder::arg::Arg::long(&local_820,&local_a70,"key",3);
  clap_builder::builder::arg::Arg::help(&local_a70,&local_820,"sort by a key",0xd);
  clap_builder::builder::arg::Arg::action(&local_820,&local_a70,1);
  clap_builder::builder::arg::Arg::num_args(&local_a70,&local_820);
  clap_builder::builder::command::Command::arg(&local_820,local_558,&local_a70);
                    /* try { // try from 002220d3 to 00222187 has its CatchHandler @ 00222965 */
  clap_builder::builder::arg::Arg::new(local_558,"field-separator",0xf);
  clap_builder::builder::arg::Arg::short(&local_a70,local_558,0x74);
  clap_builder::builder::arg::Arg::long(local_558,&local_a70,"field-separator",0xf);
  clap_builder::builder::arg::Arg::help(&local_a70,local_558,"custom separator for -k",0x17);
  local_ac8 = 2;
  local_548 = local_ab8;
  local_558[0] = 2;
  clap_builder::builder::arg::Arg::value_parser(&local_288,&local_a70,local_558);
  clap_builder::builder::command::Command::arg(local_558,&local_820,&local_288);
                    /* try { // try from 002221a5 to 00222211 has its CatchHandler @ 00222854 */
  clap_builder::builder::arg::Arg::new(&local_820,"zero-terminated",0xf);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x7a);
  clap_builder::builder::arg::Arg::long(&local_820,&local_a70,"zero-terminated",0xf);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_820,"line delimiter is NUL, not newline",0x22);
  clap_builder::builder::arg::Arg::action(&local_288,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_820,local_558,&local_288);
                    /* try { // try from 00222244 to 002222b6 has its CatchHandler @ 00222950 */
  clap_builder::builder::arg::Arg::new(local_558,"parallelDeadlock",8);
  clap_builder::builder::arg::Arg::long(&local_a70,local_558,"parallelDeadlock",8);
  clap_builder::builder::arg::Arg::help
            (local_558,&local_a70,"change the number of threads running concurrently to NUM_THREADS"
             ,0x40);
  clap_builder::builder::arg::Arg::value_name(&local_a70,local_558,"NUM_THREADS",0xb);
  clap_builder::builder::command::Command::arg(local_558,&local_820,&local_a70);
                    /* try { // try from 002222d1 to 0022235b has its CatchHandler @ 0022293b */
  clap_builder::builder::arg::Arg::new(&local_820,"buffer-size",0xb);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x53);
  clap_builder::builder::arg::Arg::long(&local_820,&local_a70,"buffer-size",0xb);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_820,"sets the maximum SIZE of each segment in number of sorted items"
             ,0x3f);
  clap_builder::builder::arg::Arg::value_name(&local_288,&local_a70,&DAT_001241cc,4);
  clap_builder::builder::command::Command::arg(&local_820,local_558,&local_288);
                    /* try { // try from 00222379 to 0022241a has its CatchHandler @ 002229d7 */
  clap_builder::builder::arg::Arg::new(local_558,"temporary-directory",0x13);
  clap_builder::builder::arg::Arg::short(&local_a70,local_558,0x54);
  clap_builder::builder::arg::Arg::long(local_558,&local_a70,"temporary-directory",0x13);
  clap_builder::builder::arg::Arg::help
            (&local_a70,local_558,"use DIR for temporaries, not $TMPDIR or /tmp",0x2c);
  clap_builder::builder::arg::Arg::value_name(local_558,&local_a70,"DIR",3);
  clap_builder::builder::arg::Arg::value_hint(&local_a70,local_558,4);
  clap_builder::builder::command::Command::arg(local_558,&local_820,&local_a70);
                    /* try { // try from 00222435 to 002224be has its CatchHandler @ 002229c5 */
  clap_builder::builder::arg::Arg::new(&local_820,"compress-program",0x10);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,"compress-program",0x10);
  clap_builder::builder::arg::Arg::help
            (&local_820,&local_a70,
             "compress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output to stdout"
             ,0x73);
  clap_builder::builder::arg::Arg::value_name(&local_a70,&local_820,&DAT_00124214,4);
  clap_builder::builder::arg::Arg::value_hint(&local_288,&local_a70,6);
  clap_builder::builder::command::Command::arg(&local_820,local_558,&local_288);
                    /* try { // try from 002224dc to 0022254e has its CatchHandler @ 00222926 */
  clap_builder::builder::arg::Arg::new(local_558,"batch-size",10);
  clap_builder::builder::arg::Arg::long(&local_a70,local_558,"batch-size",10);
  clap_builder::builder::arg::Arg::help
            (local_558,&local_a70,"Merge at most N_MERGE inputs at once.",0x25);
  clap_builder::builder::arg::Arg::value_name(&local_a70,local_558,"N_MERGE",7);
  clap_builder::builder::command::Command::arg(local_558,&local_820,&local_a70);
                    /* try { // try from 00222569 to 0022263a has its CatchHandler @ 00222a0d */
  clap_builder::builder::arg::Arg::new(&local_820,"files0-from",0xb);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,"files0-from",0xb);
  clap_builder::builder::arg::Arg::help
            (&local_820,&local_a70,"read input from the files specified by NUL-terminated NUL_FILES"
             ,0x3f);
  clap_builder::builder::arg::Arg::value_name(&local_a70,&local_820,"NUL_FILES",9);
  clap_builder::builder::arg::Arg::action(&local_820,&local_a70,1);
  local_278 = (char *)local_ab8;
  local_288 = (undefined4)local_ac8;
  uStack_284 = local_ac8._4_4_;
  uStack_280 = uStack_ac0;
  uStack_27c = uStack_abc;
  clap_builder::builder::arg::Arg::value_parser(&local_a70,&local_820,&local_288);
  clap_builder::builder::arg::Arg::value_hint(&local_288,&local_a70,3);
  clap_builder::builder::command::Command::arg(&local_820,local_558,&local_288);
                    /* try { // try from 00222658 to 002226ac has its CatchHandler @ 0022283f */
  clap_builder::builder::arg::Arg::new(local_558,"debug",5);
  clap_builder::builder::arg::Arg::long(&local_a70,local_558,"debug",5);
  clap_builder::builder::arg::Arg::help
            (local_558,&local_a70,
             "underline the parts of the line that are actually used for sorting",0x42);
  clap_builder::builder::arg::Arg::action(&local_a70,local_558,2);
  clap_builder::builder::command::Command::arg(local_558,&local_820,&local_a70);
                    /* try { // try from 002226df to 0022273b has its CatchHandler @ 0022282a */
  clap_builder::builder::arg::Arg::new(&local_820,"files",5);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,1);
  clap_builder::builder::arg::Arg::value_parser(&local_820,&local_a70,&local_ac8);
  clap_builder::builder::arg::Arg::value_hint(&local_a70,&local_820,3);
  clap_builder::builder::command::Command::arg(param_1,local_558,&local_a70);
  return param_1;
}