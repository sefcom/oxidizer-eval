undefined8 __rustcall uu_wc::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined8 local_a50;
  undefined *local_a48;
  undefined8 local_a40;
  char *local_a38;
  undefined8 local_a30;
  undefined *local_a28;
  undefined8 local_a20;
  char *local_a18;
  undefined8 local_a10;
  uint local_800;
  undefined4 local_7fc;
  ulong local_78c;
  undefined4 local_784;
  undefined local_780 [584];
  uint local_538;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(&local_a48,uVar1);
  clap_builder::builder::command::Command::version(local_530,&local_a48,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (&local_a48,local_530,
             "Display newline, word, and byte counts for each FILE, and a total line if\nmore than one FILE is specified. With no FILE, or when FILE is -, read standard input."
             ,0xa0);
                    /* try { // try from 001b9a6d to 001b9a86 has its CatchHandler @ 001ba0d7 */
  uucore::format_usage(local_780,"{} [OPTION]... [FILE]...",0x18);
  clap_builder::builder::command::Command::override_usage(local_530,&local_a48,local_780);
  (*(code *)PTR_memcpy_002360b8)(&local_a48,local_530,700);
  local_78c = local_274 | 0x8800000088;
  local_784 = local_26c;
                    /* try { // try from 001b9adf to 001b9b51 has its CatchHandler @ 001ba13d */
  clap_builder::builder::arg::Arg::new(local_530,"bytes",5);
  clap_builder::builder::arg::Arg::short(local_780,local_530,99);
  clap_builder::builder::arg::Arg::long(local_530,local_780,"bytes",5);
  clap_builder::builder::arg::Arg::help(local_780,local_530,"print the byte counts",0x15);
  clap_builder::builder::arg::Arg::action(&local_268,local_780,2);
  clap_builder::builder::command::Command::arg(local_530,&local_a48,&local_268);
                    /* try { // try from 001b9b84 to 001b9bea has its CatchHandler @ 001ba12b */
  clap_builder::builder::arg::Arg::new(&local_a48,"chars",5);
  clap_builder::builder::arg::Arg::short(local_780,&local_a48,0x6d);
  clap_builder::builder::arg::Arg::long(&local_a48,local_780,"chars",5);
  clap_builder::builder::arg::Arg::help(local_780,&local_a48,"print the character counts",0x1a);
  clap_builder::builder::arg::Arg::action(&local_268,local_780,2);
  clap_builder::builder::command::Command::arg(&local_a48,local_530,&local_268);
                    /* try { // try from 001b9c1d to 001b9cff has its CatchHandler @ 001ba15e */
  clap_builder::builder::arg::Arg::new(local_530,"files0-from",0xb);
  clap_builder::builder::arg::Arg::long(local_780,local_530,"files0-from",0xb);
  clap_builder::builder::arg::Arg::value_name(local_530,local_780,"F",1);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,
             "read input from the files specified by\n  NUL-terminated names in file F;\n  If F is - then read names from standard input"
             ,0x78);
  local_a60 = 2;
  local_258 = local_a50;
  local_268 = 2;
  local_260 = local_a58;
  clap_builder::builder::arg::Arg::value_parser(local_530,local_780,&local_268);
  clap_builder::builder::arg::Arg::value_hint(local_780,local_530,3);
  clap_builder::builder::command::Command::arg(local_530,&local_a48,local_780);
                    /* try { // try from 001b9d1a to 001b9d80 has its CatchHandler @ 001ba119 */
  clap_builder::builder::arg::Arg::new(&local_a48,"lines",5);
  clap_builder::builder::arg::Arg::short(local_780,&local_a48,0x6c);
  clap_builder::builder::arg::Arg::long(&local_a48,local_780,"lines",5);
  clap_builder::builder::arg::Arg::help(local_780,&local_a48,"print the newline counts",0x18);
  clap_builder::builder::arg::Arg::action(&local_268,local_780,2);
  clap_builder::builder::command::Command::arg(&local_a48,local_530,&local_268);
                    /* try { // try from 001b9db3 to 001b9e25 has its CatchHandler @ 001ba10a */
  clap_builder::builder::arg::Arg::new(local_530,"max-line-length",0xf);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x4c);
  clap_builder::builder::arg::Arg::long(local_530,local_780,"max-line-length",0xf);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,"print the length of the longest line",0x24);
  clap_builder::builder::arg::Arg::action(&local_268,local_780,2);
  clap_builder::builder::command::Command::arg(local_530,&local_a48,&local_268);
                    /* try { // try from 001b9e58 to 001b9e8b has its CatchHandler @ 001ba14c */
  clap_builder::builder::arg::Arg::new(&local_a48,"total",5);
  clap_builder::builder::arg::Arg::long(local_780,&local_a48,"total",5);
  local_a48 = &DAT_0011590c;
  local_a40 = 4;
  local_a38 = "always";
  local_a30 = 6;
  local_a28 = &DAT_0011593c;
  local_a20 = 4;
  local_a18 = "never";
  local_a10 = 5;
                    /* try { // try from 001b9ee0 to 001b9ef1 has its CatchHandler @ 001ba0c5 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_268,&local_a48);
                    /* try { // try from 001b9ef2 to 001b9f0b has its CatchHandler @ 001ba0c0 */
  clap_builder::builder::arg::Arg::value_parser(&local_a48,local_780,&local_268);
                    /* try { // try from 001b9f0c to 001b9f29 has its CatchHandler @ 001ba14c */
  clap_builder::builder::arg::Arg::value_name(local_780,&local_a48,&DAT_00115920,4);
  (*(code *)PTR_memcpy_002360b8)(&local_a48,local_780,0x248);
  local_800 = local_538 | 0x10;
  local_7fc = local_534;
                    /* try { // try from 001b9f64 to 001b9f7f has its CatchHandler @ 001ba14c */
  clap_builder::builder::arg::Arg::help
            (local_780,&local_a48,
             "when to print a line with total counts;\n  WHEN can be: auto, always, only, never",
             0x50);
  clap_builder::builder::command::Command::arg(&local_a48,local_530,local_780);
                    /* try { // try from 001b9f9a to 001ba00c has its CatchHandler @ 001ba0fb */
  clap_builder::builder::arg::Arg::new(local_530,"words",5);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x77);
  clap_builder::builder::arg::Arg::long(local_530,local_780,"words",5);
  clap_builder::builder::arg::Arg::help(local_780,local_530,"print the word counts",0x15);
  clap_builder::builder::arg::Arg::action(&local_268,local_780,2);
  clap_builder::builder::command::Command::arg(local_530,&local_a48,&local_268);
                    /* try { // try from 001ba03f to 001ba097 has its CatchHandler @ 001ba0e9 */
  clap_builder::builder::arg::Arg::new(&local_a48,&DAT_0011e45a,5);
  clap_builder::builder::arg::Arg::action(local_780,&local_a48,1);
  clap_builder::builder::arg::Arg::value_parser(&local_a48,local_780,&local_a60);
  clap_builder::builder::arg::Arg::value_hint(local_780,&local_a48,3);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_780);
  return param_1;
}