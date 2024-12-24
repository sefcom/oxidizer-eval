undefined8 __rustcall uu_date::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_a60;
  undefined8 local_a58;
  char *local_a50;
  undefined8 local_a48;
  char *local_a40;
  undefined8 local_a38;
  char *local_a30;
  undefined8 local_a28;
  char *local_a20;
  undefined8 local_a18;
  ulong local_7a4;
  undefined4 local_79c;
  char *local_798;
  undefined8 local_790;
  char *local_788;
  undefined8 local_780;
  char *local_778;
  undefined8 local_770;
  undefined local_548 [700];
  ulong local_28c;
  undefined4 local_284;
  undefined local_280 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_548,uVar1);
  clap_builder::builder::command::Command::version(&local_a60,local_548);
  clap_builder::builder::command::Command::about(local_548,&local_a60);
                    /* try { // try from 002c698d to 002c69a6 has its CatchHandler @ 002c716e */
  uucore::format_usage
            (&local_798,"{} [OPTION]... [+FORMAT]...\n{} [OPTION]... [MMDDhhmm[[CC]YY][.ss]]",0x42);
  clap_builder::builder::command::Command::override_usage(&local_a60,local_548,&local_798);
  (*(code *)PTR_memcpy_0044ca88)(local_548,&local_a60,700);
  local_28c = local_7a4 | 0x8000000080;
  local_284 = local_79c;
                    /* try { // try from 002c6a02 to 002c6a8d has its CatchHandler @ 002c71d7 */
  clap_builder::builder::arg::Arg::new(&local_a60,"date",4);
  clap_builder::builder::arg::Arg::short(&local_798,&local_a60,100);
  clap_builder::builder::arg::Arg::long(&local_a60,&local_798,"date",4);
  clap_builder::builder::arg::Arg::value_name(&local_798,&local_a60,"STRING",6);
  clap_builder::builder::arg::Arg::help
            (local_280,&local_798,"display time described by STRING, not \'now\'",0x2b);
  clap_builder::builder::command::Command::arg(&local_a60,local_548,local_280);
                    /* try { // try from 002c6aa8 to 002c6b53 has its CatchHandler @ 002c720d */
  clap_builder::builder::arg::Arg::new(local_548,"filemode",4);
  clap_builder::builder::arg::Arg::short(&local_798,local_548,0x66);
  clap_builder::builder::arg::Arg::long(local_548,&local_798,"filemode",4);
  clap_builder::builder::arg::Arg::value_name(&local_798,local_548,&DAT_00152378,8);
  clap_builder::builder::arg::Arg::value_hint(local_548,&local_798,3);
  clap_builder::builder::arg::Arg::help
            (&local_798,local_548,"like --date; once for each line of DATEFILE",0x2b);
  clap_builder::builder::command::Command::arg(local_548,&local_a60,&local_798);
                    /* try { // try from 002c6b6e to 002c6bd5 has its CatchHandler @ 002c71fb */
  clap_builder::builder::arg::Arg::new(&local_a60,&DAT_00152628,8);
  clap_builder::builder::arg::Arg::short(&local_798,&local_a60,0x49);
  clap_builder::builder::arg::Arg::long(&local_a60,&local_798,&DAT_00152628,8);
  clap_builder::builder::arg::Arg::value_name(&local_798,&local_a60,"FMT",3);
  local_a60 = "date";
  local_a58 = 4;
  local_a50 = "hours";
  local_a48 = 5;
  local_a40 = "minutes";
  local_a38 = 7;
  local_a30 = "seconds";
  local_a28 = 7;
  local_a20 = "ns";
  local_a18 = 2;
                    /* try { // try from 002c6c38 to 002c6c49 has its CatchHandler @ 002c7159 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (local_280,&local_a60);
                    /* try { // try from 002c6c4a to 002c6c63 has its CatchHandler @ 002c7154 */
  clap_builder::builder::arg::Arg::value_parser(&local_a60,&local_798,local_280);
  clap_builder::builder::arg::Arg::num_args(&local_798,&local_a60);
                    /* try { // try from 002c6c79 to 002c6ca3 has its CatchHandler @ 002c71fb */
  clap_builder::builder::arg::Arg::default_missing_value(&local_a60,&local_798);
  clap_builder::builder::arg::Arg::help
            (&local_798,&local_a60,
             "output date/time in ISO 8601 format.\n FMT=\'date\' for date only (the default),\n \'hours\', \'minutes\', \'seconds\', or \'ns\'\n for date and time to the indicated precision.\n Example: 2006-08-14T02:34:56-06:00"
             ,200);
  clap_builder::builder::command::Command::arg(&local_a60,local_548,&local_798);
                    /* try { // try from 002c6cbe to 002c6d2e has its CatchHandler @ 002c7195 */
  clap_builder::builder::arg::Arg::new(local_548,"rfc-email",9);
  clap_builder::builder::arg::Arg::short(&local_798,local_548,0x52);
  clap_builder::builder::arg::Arg::long(local_548,&local_798,"rfc-email",9);
  clap_builder::builder::arg::Arg::help
            (&local_798,local_548,
             "output date and time in RFC 5322 format.\n Example: Mon, 14 Aug 2006 02:34:56 -0600",
             0x52);
  clap_builder::builder::arg::Arg::action(local_280,&local_798);
  clap_builder::builder::command::Command::arg(local_548,&local_a60,local_280);
                    /* try { // try from 002c6d5c to 002c6dab has its CatchHandler @ 002c71c5 */
  clap_builder::builder::arg::Arg::new(&local_a60,"rfc-3339",8);
  clap_builder::builder::arg::Arg::long(&local_798,&local_a60,"rfc-3339",8);
  clap_builder::builder::arg::Arg::value_name(&local_a60,&local_798,"FMT",3);
  local_798 = "date";
  local_790 = 4;
  local_788 = "seconds";
  local_780 = 7;
  local_778 = "ns";
  local_770 = 2;
                    /* try { // try from 002c6de8 to 002c6dfc has its CatchHandler @ 002c7145 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (local_280,&local_798);
                    /* try { // try from 002c6dfd to 002c6e16 has its CatchHandler @ 002c7140 */
  clap_builder::builder::arg::Arg::value_parser(&local_798,&local_a60,local_280);
                    /* try { // try from 002c6e17 to 002c6e37 has its CatchHandler @ 002c71c5 */
  clap_builder::builder::arg::Arg::help
            (local_280,&local_798,
             "output date/time in RFC 3339 format.\n FMT=\'date\', \'seconds\', or \'ns\'\n for date and time to the indicated precision.\n Example: 2006-08-14 02:34:56-06:00"
             ,0x97);
  clap_builder::builder::command::Command::arg(&local_a60,local_548,local_280);
                    /* try { // try from 002c6e52 to 002c6eaa has its CatchHandler @ 002c7183 */
  clap_builder::builder::arg::Arg::new(local_548,"debug",5);
  clap_builder::builder::arg::Arg::long(&local_798,local_548,"debug",5);
  clap_builder::builder::arg::Arg::help
            (local_548,&local_798,
             "annotate the parsed date, and warn about questionable usage to stderr",0x45);
  clap_builder::builder::arg::Arg::action(&local_798,local_548);
  clap_builder::builder::command::Command::arg(local_548,&local_a60,&local_798);
                    /* try { // try from 002c6ed8 to 002c6f74 has its CatchHandler @ 002c71e9 */
  clap_builder::builder::arg::Arg::new(&local_a60,"reference",9);
  clap_builder::builder::arg::Arg::short(&local_798,&local_a60,0x72);
  clap_builder::builder::arg::Arg::long(&local_a60,&local_798,"reference",9);
  clap_builder::builder::arg::Arg::value_name(&local_798,&local_a60,&DAT_001508e4,4);
  clap_builder::builder::arg::Arg::value_hint(&local_a60,&local_798,2);
  clap_builder::builder::arg::Arg::help
            (&local_798,&local_a60,"display the last modification time of FILE",0x2a);
  clap_builder::builder::command::Command::arg(&local_a60,local_548,&local_798);
                    /* try { // try from 002c6f8f to 002c7020 has its CatchHandler @ 002c71b6 */
  clap_builder::builder::arg::Arg::new(local_548,"set",3);
  clap_builder::builder::arg::Arg::short(&local_798,local_548,0x73);
  clap_builder::builder::arg::Arg::long(local_548,&local_798,"set",3);
  clap_builder::builder::arg::Arg::value_name(&local_798,local_548,"STRING",6);
  clap_builder::builder::arg::Arg::help(local_280,&local_798,"set time described by STRING",0x1c);
  clap_builder::builder::command::Command::arg(local_548,&local_a60,local_280);
                    /* try { // try from 002c703b to 002c70c0 has its CatchHandler @ 002c71a4 */
  clap_builder::builder::arg::Arg::new(&local_a60,"universal",9);
  clap_builder::builder::arg::Arg::short(&local_798,&local_a60,0x75);
  clap_builder::builder::arg::Arg::long(&local_a60,&local_798,"universal",9);
  clap_builder::builder::arg::Arg::alias(&local_798,&local_a60,"utc",3);
  clap_builder::builder::arg::Arg::help
            (&local_a60,&local_798,"print or set Coordinated Universal Time (UTC)",0x2d);
  clap_builder::builder::arg::Arg::action(&local_798,&local_a60);
  clap_builder::builder::command::Command::arg(&local_a60,local_548,&local_798);
                    /* try { // try from 002c70eb to 002c7103 has its CatchHandler @ 002c712e */
  clap_builder::builder::arg::Arg::new(local_548,"format",6);
  clap_builder::builder::command::Command::arg(param_1,&local_a60,local_548);
  return param_1;
}