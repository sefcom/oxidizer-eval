undefined8 __rustcall uu_tail::args::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_a88;
  undefined8 local_a80;
  char *local_a78;
  undefined8 local_a70;
  char *local_a68;
  undefined8 local_a60;
  char *local_a58;
  undefined8 local_a50;
  undefined local_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  char *local_7f8;
  undefined8 local_7f0;
  undefined *local_7e8;
  undefined8 local_7e0;
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [584];
  uint local_2e8;
  undefined4 local_2e4;
  ulong local_274;
  undefined4 local_26c;
  char *local_268;
  undefined8 local_260;
  char *local_258;
  undefined8 local_250;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(&local_7f8,uVar1);
  clap_builder::builder::command::Command::version(local_530,&local_7f8,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (&local_7f8,local_530,
             "Print the last 10 lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\nWith no FILE, or when FILE is -, read standard input.\n\nMandatory arguments to long flags are mandatory for short flags too."
             ,0xfe);
                    /* try { // try from 001fa1d3 to 001fa1e9 has its CatchHandler @ 001fadca */
  uucore::format_usage(local_a48,"{} [FLAG]... [FILE]...",0x16);
  clap_builder::builder::command::Command::override_usage(local_530,&local_7f8,local_a48);
  (*(code *)PTR_memcpy_002c2760)(&local_7f8,local_530,700);
  local_53c = local_274 | 0x8000000080;
  local_534 = local_26c;
                    /* try { // try from 001fa245 to 001fa296 has its CatchHandler @ 001fae93 */
  clap_builder::builder::arg::Arg::new(local_530,"bytes",5);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,99);
  clap_builder::builder::arg::Arg::long(local_530,local_a48,"bytes",5);
  (*(code *)PTR_memcpy_002c2760)(local_a48,local_530,0x248);
  local_800 = local_2e8 | 0x20;
  local_7fc = local_2e4;
  local_a88 = "bytes";
  local_a80 = 5;
  local_a78 = "lines";
  local_a70 = 5;
  local_258 = "lines";
  local_250 = 5;
  local_268 = "bytes";
  local_260 = 5;
                    /* try { // try from 001fa326 to 001fa35b has its CatchHandler @ 001fae93 */
  clap_builder::builder::arg::Arg::overrides_with_all(local_530,local_a48,&local_268);
  clap_builder::builder::arg::Arg::help(local_a48,local_530,"Number of bytes to print",0x18);
  clap_builder::builder::command::Command::arg(local_530,&local_7f8,local_a48);
                    /* try { // try from 001fa376 to 001fa410 has its CatchHandler @ 001faedb */
  clap_builder::builder::arg::Arg::new(&local_7f8,"follow",6);
  clap_builder::builder::arg::Arg::short(local_a48,&local_7f8,0x66);
  clap_builder::builder::arg::Arg::long(&local_7f8,local_a48,"follow",6);
  clap_builder::builder::arg::Arg::default_missing_value(local_a48,&local_7f8);
  local_268 = (char *)0x0;
  local_260 = 1;
  local_258 = (char *)((ulong)local_258 & 0xffffffffffffff00);
  clap_builder::builder::arg::Arg::num_args(&local_7f8,local_a48,&local_268);
  (*(code *)PTR_memcpy_002c2760)(local_a48,&local_7f8,0x248);
  local_800 = local_5b0 | 0x80;
  local_7fc = local_5ac;
  local_7f8 = "descriptor";
  local_7f0 = 10;
  local_7e8 = &DAT_0011ef30;
  local_7e0 = 4;
                    /* try { // try from 001fa480 to 001fa494 has its CatchHandler @ 001fadb8 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_268,&local_7f8);
                    /* try { // try from 001fa495 to 001fa4ae has its CatchHandler @ 001fadb3 */
  clap_builder::builder::arg::Arg::value_parser(&local_7f8,local_a48,&local_268);
                    /* try { // try from 001fa4af to 001fa4ea has its CatchHandler @ 001faedb */
  clap_builder::builder::arg::Arg::overrides_with(local_a48,&local_7f8,"follow",6);
  clap_builder::builder::arg::Arg::help(&local_268,local_a48,"Print the file as it grows",0x1a);
  clap_builder::builder::command::Command::arg(&local_7f8,local_530,&local_268);
                    /* try { // try from 001fa508 to 001fa556 has its CatchHandler @ 001fae81 */
  clap_builder::builder::arg::Arg::new(local_530,"lines",5);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,0x6e);
  clap_builder::builder::arg::Arg::long(local_530,local_a48,"lines",5);
  (*(code *)PTR_memcpy_002c2760)(local_a48,local_530,0x248);
  local_800 = local_2e8 | 0x20;
  local_7fc = local_2e4;
                    /* try { // try from 001fa591 to 001fa5c1 has its CatchHandler @ 001fae81 */
  clap_builder::builder::arg::Arg::overrides_with_all(local_530,local_a48,&local_a88);
  clap_builder::builder::arg::Arg::help(local_a48,local_530,"Number of lines to print",0x18);
  clap_builder::builder::command::Command::arg(local_530,&local_7f8,local_a48);
                    /* try { // try from 001fa5dc to 001fa66c has its CatchHandler @ 001faec9 */
  clap_builder::builder::arg::Arg::new(&local_7f8,"pid",3);
  clap_builder::builder::arg::Arg::long(local_a48,&local_7f8,"pid",3);
  clap_builder::builder::arg::Arg::value_name(&local_7f8,local_a48,"PID",3);
  clap_builder::builder::arg::Arg::help
            (local_a48,&local_7f8,"With -f, terminate after process ID, PID dies",0x2d);
  clap_builder::builder::arg::Arg::overrides_with(&local_268,local_a48,"pid",3);
  clap_builder::builder::command::Command::arg(&local_7f8,local_530,&local_268);
                    /* try { // try from 001fa68a to 001fa788 has its CatchHandler @ 001faeb7 */
  clap_builder::builder::arg::Arg::new(local_530,"quiet: warning: ",5);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,0x71);
  clap_builder::builder::arg::Arg::long(local_530,local_a48,"quiet: warning: ",5);
  clap_builder::builder::arg::Arg::visible_alias(local_a48,local_530,"silent",6);
  local_a68 = "quiet: warning: ";
  local_a60 = 5;
  local_a58 = "verbose";
  local_a50 = 7;
  local_258 = "verbose";
  local_250 = 7;
  local_268 = "quiet: warning: ";
  local_260 = 5;
  clap_builder::builder::arg::Arg::overrides_with_all(local_530,local_a48,&local_268);
  clap_builder::builder::arg::Arg::help
            (local_a48,local_530,"Never output headers giving file names",0x26);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48,2);
  clap_builder::builder::command::Command::arg(local_530,&local_7f8,&local_268);
                    /* try { // try from 001fa7bb to 001fa845 has its CatchHandler @ 001fae6f */
  clap_builder::builder::arg::Arg::new(&local_7f8,"sleep-interval",0xe);
  clap_builder::builder::arg::Arg::short(local_a48,&local_7f8,0x73);
  clap_builder::builder::arg::Arg::value_name(&local_7f8,local_a48,"N",1);
  clap_builder::builder::arg::Arg::long(local_a48,&local_7f8,"sleep-interval",0xe);
  clap_builder::builder::arg::Arg::help
            (&local_268,local_a48,
             "Number of seconds to sleep between polling the file when running with -f",0x48);
  clap_builder::builder::command::Command::arg(&local_7f8,local_530,&local_268);
                    /* try { // try from 001fa863 to 001fa8d5 has its CatchHandler @ 001fae5d */
  clap_builder::builder::arg::Arg::new(local_530,"max-unchanged-stats",0x13);
  clap_builder::builder::arg::Arg::value_name(local_a48,local_530,"N",1);
  clap_builder::builder::arg::Arg::long(local_530,local_a48,"max-unchanged-stats",0x13);
  clap_builder::builder::arg::Arg::help
            (local_a48,local_530,
             "Reopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rotated log files); This option is meaningful only when polling (i.e., with --use-polling) and when --follow=name"
             ,0xfe);
  clap_builder::builder::command::Command::arg(local_530,&local_7f8,local_a48);
                    /* try { // try from 001fa8f0 to 001fa973 has its CatchHandler @ 001fae48 */
  clap_builder::builder::arg::Arg::new(&local_7f8,"verbose",7);
  clap_builder::builder::arg::Arg::short(local_a48,&local_7f8,0x76);
  clap_builder::builder::arg::Arg::long(&local_7f8,local_a48,"verbose",7);
  clap_builder::builder::arg::Arg::overrides_with_all(local_a48,&local_7f8,&local_a68);
  clap_builder::builder::arg::Arg::help
            (&local_7f8,local_a48,"Always output headers giving file names",0x27);
  clap_builder::builder::arg::Arg::action(local_a48,&local_7f8,2);
  clap_builder::builder::command::Command::arg(&local_7f8,local_530,local_a48);
                    /* try { // try from 001fa9a6 to 001faa12 has its CatchHandler @ 001fae09 */
  clap_builder::builder::arg::Arg::new(local_530,"zero-terminated",0xf);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,0x7a);
  clap_builder::builder::arg::Arg::long(local_530,local_a48,"zero-terminated",0xf);
  clap_builder::builder::arg::Arg::help
            (local_a48,local_530,"Line delimiter is NUL, not newline",0x22);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48,2);
  clap_builder::builder::command::Command::arg(local_530,&local_7f8,&local_268);
                    /* try { // try from 001faa45 to 001faad5 has its CatchHandler @ 001faea5 */
  clap_builder::builder::arg::Arg::new(&local_7f8,"use-polling",0xb);
  clap_builder::builder::arg::Arg::alias(local_a48,&local_7f8,&DAT_0011f5a0,0x10);
  clap_builder::builder::arg::Arg::alias(&local_7f8,local_a48,"dis",3);
  clap_builder::builder::arg::Arg::long(local_a48,&local_7f8,"use-polling",0xb);
  clap_builder::builder::arg::Arg::help
            (&local_7f8,local_a48,"Disable \'inotify\' support and use polling instead",0x31);
  clap_builder::builder::arg::Arg::action(local_a48,&local_7f8,2);
  clap_builder::builder::command::Command::arg(&local_7f8,local_530,local_a48);
                    /* try { // try from 001fab08 to 001fab7a has its CatchHandler @ 001fae33 */
  clap_builder::builder::arg::Arg::new(local_530,"retry",5);
  clap_builder::builder::arg::Arg::long(local_a48,local_530,"retry",5);
  clap_builder::builder::arg::Arg::help
            (local_530,local_a48,"Keep trying to open a file if it is inaccessible",0x30);
  clap_builder::builder::arg::Arg::overrides_with(local_a48,local_530,"retry",5);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48,2);
  clap_builder::builder::command::Command::arg(local_530,&local_7f8,&local_268);
                    /* try { // try from 001fabad to 001fac19 has its CatchHandler @ 001fadf4 */
  clap_builder::builder::arg::Arg::new(&local_7f8,"F",1);
  clap_builder::builder::arg::Arg::short(local_a48,&local_7f8,0x46);
  clap_builder::builder::arg::Arg::help(&local_7f8,local_a48,"Same as --follow=name --retry",0x1d);
  clap_builder::builder::arg::Arg::overrides_with(local_a48,&local_7f8,"F",1);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48,2);
  clap_builder::builder::command::Command::arg(&local_7f8,local_530,&local_268);
                    /* try { // try from 001fac4c to 001faca0 has its CatchHandler @ 001faddf */
  clap_builder::builder::arg::Arg::new(local_530,"-presume-input-pipe",0x13);
  clap_builder::builder::arg::Arg::long
            (local_a48,local_530,
             "presume-input-pipecapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs"
             ,0x12);
  clap_builder::builder::arg::Arg::alias(local_530,local_a48,"-presume-input-pipe",0x13);
  (*(code *)PTR_memcpy_002c2760)(local_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
  clap_builder::builder::arg::Arg::action(&local_268,local_a48,2);
  clap_builder::builder::command::Command::arg(local_530,&local_7f8,&local_268);
                    /* try { // try from 001fad0b to 001fad8a has its CatchHandler @ 001fae1e */
  clap_builder::builder::arg::Arg::new(&local_7f8,"files",5);
  clap_builder::builder::arg::Arg::action(local_a48,&local_7f8,1);
  clap_builder::builder::arg::Arg::num_args(&local_7f8,local_a48);
  local_268 = (char *)0x2;
  clap_builder::builder::arg::Arg::value_parser(local_a48,&local_7f8,&local_268);
  clap_builder::builder::arg::Arg::value_hint(&local_7f8,local_a48,3);
  clap_builder::builder::command::Command::arg(param_1,local_530,&local_7f8);
  return param_1;
}