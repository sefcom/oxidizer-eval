undefined8 __rustcall uu_date::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_a58;
  undefined8 local_a50;
  char *local_a48;
  undefined8 local_a40;
  char *local_a38;
  undefined8 local_a30;
  char *local_a28;
  undefined8 local_a20;
  char *local_a18;
  undefined8 local_a10;
  ulong local_79c;
  undefined4 local_794;
  char *local_790;
  undefined8 local_788;
  char *local_780;
  undefined8 local_778;
  char *local_770;
  undefined8 local_768;
  undefined local_540 [700];
  ulong local_284;
  undefined4 local_27c;
  undefined8 local_278;
  undefined8 local_270;
  undefined local_268;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_540,uVar1);
  clap_builder::builder::command::Command::version(&local_a58,local_540,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_540,&local_a58,"Print or set the system date and time",0x25);
                    /* try { // try from 002c6b02 to 002c6b1b has its CatchHandler @ 002c72ba */
  uucore::format_usage
            (&local_790,"{} [OPTION]... [+FORMAT]...\n{} [OPTION]... [MMDDhhmm[[CC]YY][.ss]]",0x42);
  clap_builder::builder::command::Command::override_usage(&local_a58,local_540,&local_790);
  (*(code *)PTR_memcpy_0044d800)(local_540,&local_a58,700);
  local_284 = local_79c | 0x8000000080;
  local_27c = local_794;
                    /* try { // try from 002c6b75 to 002c6bf7 has its CatchHandler @ 002c731a */
  clap_builder::builder::arg::Arg::new(&local_a58,"date",4);
  clap_builder::builder::arg::Arg::short(&local_790,&local_a58,100);
  clap_builder::builder::arg::Arg::long(&local_a58,&local_790,"date",4);
  clap_builder::builder::arg::Arg::value_name(&local_790,&local_a58,"STRING",6);
  clap_builder::builder::arg::Arg::help
            (&local_278,&local_790,"display time described by STRING, not \'now\'",0x2b);
  clap_builder::builder::command::Command::arg(&local_a58,local_540,&local_278);
                    /* try { // try from 002c6c10 to 002c6cbd has its CatchHandler @ 002c733e */
  clap_builder::builder::arg::Arg::new(local_540,"filemode",4);
  clap_builder::builder::arg::Arg::short(&local_790,local_540,0x66);
  clap_builder::builder::arg::Arg::long(local_540,&local_790,"filemode",4);
  clap_builder::builder::arg::Arg::value_name(&local_790,local_540,&DAT_00152178,8);
  clap_builder::builder::arg::Arg::value_hint(local_540,&local_790,3);
  clap_builder::builder::arg::Arg::help
            (&local_790,local_540,"like --date; once for each line of DATEFILE",0x2b);
  clap_builder::builder::command::Command::arg(local_540,&local_a58,&local_790);
                    /* try { // try from 002c6cd6 to 002c6d34 has its CatchHandler @ 002c734b */
  clap_builder::builder::arg::Arg::new(&local_a58,&DAT_00152428,8);
  clap_builder::builder::arg::Arg::short(&local_790,&local_a58,0x49);
  clap_builder::builder::arg::Arg::long(&local_a58,&local_790,&DAT_00152428,8);
  clap_builder::builder::arg::Arg::value_name(&local_790,&local_a58,"FMT",3);
  local_a58 = "date";
  local_a50 = 4;
  local_a48 = "hours";
  local_a40 = 5;
  local_a38 = "minutes";
  local_a30 = 7;
  local_a28 = "seconds";
  local_a20 = 7;
  local_a18 = "ns";
  local_a10 = 2;
                    /* try { // try from 002c6d96 to 002c6da5 has its CatchHandler @ 002c72a5 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_278,&local_a58);
                    /* try { // try from 002c6da6 to 002c6dbd has its CatchHandler @ 002c72a0 */
  clap_builder::builder::arg::Arg::value_parser(&local_a58,&local_790,&local_278);
  local_278 = 0;
  local_270 = 1;
  local_268 = 0;
                    /* try { // try from 002c6dde to 002c6e21 has its CatchHandler @ 002c734b */
  clap_builder::builder::arg::Arg::num_args(&local_790,&local_a58,&local_278);
  clap_builder::builder::arg::Arg::default_missing_value(&local_a58,&local_790);
  clap_builder::builder::arg::Arg::help
            (&local_790,&local_a58,
             "output date/time in ISO 8601 format.\n FMT=\'date\' for date only (the default),\n \'hours\', \'minutes\', \'seconds\', or \'ns\'\n for date and time to the indicated precision.\n Example: 2006-08-14T02:34:56-06:00"
             ,200);
  clap_builder::builder::command::Command::arg(&local_a58,local_540,&local_790);
                    /* try { // try from 002c6e3a to 002c6eac has its CatchHandler @ 002c72dc */
  clap_builder::builder::arg::Arg::new(local_540,"rfc-email",9);
  clap_builder::builder::arg::Arg::short(&local_790,local_540,0x52);
  clap_builder::builder::arg::Arg::long(local_540,&local_790,"rfc-email",9);
  clap_builder::builder::arg::Arg::help
            (&local_790,local_540,
             "output date and time in RFC 5322 format.\n Example: Mon, 14 Aug 2006 02:34:56 -0600",
             0x52);
  clap_builder::builder::arg::Arg::action(&local_278,&local_790);
  clap_builder::builder::command::Command::arg(local_540,&local_a58,&local_278);
                    /* try { // try from 002c6ed8 to 002c6f23 has its CatchHandler @ 002c7308 */
  clap_builder::builder::arg::Arg::new(&local_a58,"rfc-3339",8);
  clap_builder::builder::arg::Arg::long(&local_790,&local_a58,"rfc-3339",8);
  clap_builder::builder::arg::Arg::value_name(&local_a58,&local_790,"FMT",3);
  local_790 = "date";
  local_788 = 4;
  local_780 = "seconds";
  local_778 = 7;
  local_770 = "ns";
  local_768 = 2;
                    /* try { // try from 002c6f60 to 002c6f74 has its CatchHandler @ 002c7293 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_278,&local_790);
                    /* try { // try from 002c6f75 to 002c6f8c has its CatchHandler @ 002c7291 */
  clap_builder::builder::arg::Arg::value_parser(&local_790,&local_a58,&local_278);
                    /* try { // try from 002c6f8d to 002c6fad has its CatchHandler @ 002c7308 */
  clap_builder::builder::arg::Arg::help
            (&local_278,&local_790,
             "output date/time in RFC 3339 format.\n FMT=\'date\', \'seconds\', or \'ns\'\n for date and time to the indicated precision.\n Example: 2006-08-14 02:34:56-06:00"
             ,0x97);
  clap_builder::builder::command::Command::arg(&local_a58,local_540,&local_278);
                    /* try { // try from 002c6fc6 to 002c7020 has its CatchHandler @ 002c72cf */
  clap_builder::builder::arg::Arg::new(local_540,"debug",5);
  clap_builder::builder::arg::Arg::long(&local_790,local_540,"debug",5);
  clap_builder::builder::arg::Arg::help
            (local_540,&local_790,
             "annotate the parsed date, and warn about questionable usage to stderr",0x45);
  clap_builder::builder::arg::Arg::action(&local_790,local_540);
  clap_builder::builder::command::Command::arg(local_540,&local_a58,&local_790);
                    /* try { // try from 002c704c to 002c70db has its CatchHandler @ 002c732c */
  clap_builder::builder::arg::Arg::new(&local_a58,"reference",9);
  clap_builder::builder::arg::Arg::short(&local_790,&local_a58,0x72);
  clap_builder::builder::arg::Arg::long(&local_a58,&local_790,"reference",9);
  clap_builder::builder::arg::Arg::value_name(&local_790,&local_a58,&DAT_001506e4,4);
  clap_builder::builder::arg::Arg::value_hint(&local_a58,&local_790,2);
  clap_builder::builder::arg::Arg::help
            (&local_790,&local_a58,"display the last modification time of FILE",0x2a);
  clap_builder::builder::command::Command::arg(&local_a58,local_540,&local_790);
                    /* try { // try from 002c70f4 to 002c7187 has its CatchHandler @ 002c72fb */
  clap_builder::builder::arg::Arg::new(local_540,"set",3);
  clap_builder::builder::arg::Arg::short(&local_790,local_540,0x73);
  clap_builder::builder::arg::Arg::long(local_540,&local_790,"set",3);
  clap_builder::builder::arg::Arg::value_name(&local_790,local_540,"STRING",6);
  clap_builder::builder::arg::Arg::help(&local_278,&local_790,"set time described by STRING",0x1c);
  clap_builder::builder::command::Command::arg(local_540,&local_a58,&local_278);
                    /* try { // try from 002c71a0 to 002c721a has its CatchHandler @ 002c72e9 */
  clap_builder::builder::arg::Arg::new(&local_a58,"universal",9);
  clap_builder::builder::arg::Arg::short(&local_790,&local_a58,0x75);
  clap_builder::builder::arg::Arg::long(&local_a58,&local_790,"universal",9);
  clap_builder::builder::arg::Arg::alias(&local_790,&local_a58,"utc",3);
  clap_builder::builder::arg::Arg::help
            (&local_a58,&local_790,"print or set Coordinated Universal Time (UTC)",0x2d);
  clap_builder::builder::arg::Arg::action(&local_790,&local_a58);
  clap_builder::builder::command::Command::arg(&local_a58,local_540,&local_790);
                    /* try { // try from 002c7241 to 002c7259 has its CatchHandler @ 002c7281 */
  clap_builder::builder::arg::Arg::new(local_540,"format",6);
  clap_builder::builder::command::Command::arg(param_1,&local_a58,local_540);
  return param_1;
}