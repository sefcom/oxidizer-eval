undefined8 __rustcall uu_numfmt::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_a48;
  undefined8 local_a40;
  undefined *local_a38;
  undefined8 local_a30;
  char *local_a28;
  undefined8 local_a20;
  char *local_a18;
  undefined8 local_a10;
  char *local_a08;
  undefined8 local_a00;
  uint local_800;
  undefined4 local_7fc;
  undefined local_7f8 [584];
  uint local_5b0;
  undefined4 local_5ac;
  uint local_53c;
  ulong local_538;
  undefined local_530 [584];
  uint local_2e8;
  undefined4 local_2e4;
  uint local_274;
  ulong local_270;
  char *local_268;
  undefined8 local_260;
  undefined *local_258;
  undefined8 local_250;
  undefined *local_248;
  undefined8 local_240;
  char *local_238;
  undefined8 local_230;
  uint local_20;
  undefined4 local_1c;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_530,uVar1);
  clap_builder::builder::command::Command::version(local_7f8,local_530,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_530,local_7f8,"Convert numbers from/to human-readable strings",0x2e);
  clap_builder::builder::command::Command::after_help
            (local_7f8,local_530,
             "UNIT options:\n\n- none: no auto-scaling is done; suffixes will trigger an error\n- auto: accept optional single/two letter suffix:\n\n    1K = 1000, 1Ki = 1024, 1M = 1000000, 1Mi = 1048576,\n\n- si: accept optional single letter suffix:\n\n    1K = 1000, 1M = 1000000, ...\n\n- iec: accept optional single letter suffix:\n\n    1K = 1024, 1M = 1048576, ...\n\n- iec-i: accept optional two-letter suffix:\n\n    1Ki = 1024, 1Mi = 1048576, ...\n\n- FIELDS supports cut(1) style field ranges:\n\n    N    N\'th field, counted from 1\n    N-   from N\'th field, to end of line\n    N-M  from N\'th to M\'th field (inclusive)\n    -M   from first to M\'th field (inclusive)\n    -    all fields\n\nMultiple fields/ranges can be separated with commas\n\nFORMAT must be suitable for printing one floating-point argument %f.\nOptional quote (%\'f) will enable --grouping (if supported by current locale).\nOptional width value (%10f) will pad output. Optional zero (%010f) width\nwill zero pad the number. Optional negative values (%-10f) will left align.\nOptional precision (%.1f) will override the input determined precision."
             ,0x43a);
                    /* try { // try from 001c1572 to 001c1586 has its CatchHandler @ 001c1f8d */
  uucore::format_usage(&local_a48,"{} [OPTION]... [NUMBER]...",0x1a);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,&local_a48);
  (*(code *)PTR_memcpy_0023a358)(local_7f8,local_530,700);
  local_53c = local_274 | 0x84;
  local_538 = local_270 | 0x80;
                    /* try { // try from 001c15e0 to 001c165f has its CatchHandler @ 001c1fe1 */
  clap_builder::builder::arg::Arg::new(local_530,"delimiter",9);
  clap_builder::builder::arg::Arg::short(&local_a48,local_530);
  clap_builder::builder::arg::Arg::long(local_530,&local_a48,"delimiter",9);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_530,"X",1);
  clap_builder::builder::arg::Arg::help
            (&local_268,&local_a48,"use X instead of whitespace for field delimiter",0x2f);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001c167d to 001c16e9 has its CatchHandler @ 001c2050 */
  clap_builder::builder::arg::Arg::new(local_7f8,"field",5);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,"field",5);
  clap_builder::builder::arg::Arg::help
            (local_7f8,&local_a48,"replace the numbers in these input fields; see FIELDS below",0x3b
            );
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_7f8,"FIELDS",6);
  (*(code *)PTR_memcpy_0023a358)(local_7f8,&local_a48,0x248);
  local_5b0 = local_800 | 0x20;
  local_5ac = local_7fc;
                    /* try { // try from 001c1722 to 001c1738 has its CatchHandler @ 001c2050 */
  clap_builder::builder::arg::Arg::default_value(&local_a48,local_7f8,"1",1);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_a48);
                    /* try { // try from 001c1751 to 001c17bd has its CatchHandler @ 001c1fcc */
  clap_builder::builder::arg::Arg::new(local_530,"format",6);
  clap_builder::builder::arg::Arg::long(&local_a48,local_530,"format",6);
  clap_builder::builder::arg::Arg::help
            (local_530,&local_a48,
             "use printf style floating-point FORMAT; see FORMAT below for details",0x44);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_530,"FORMAT",6);
  (*(code *)PTR_memcpy_0023a358)(&local_268,&local_a48,0x248);
  local_20 = local_800 | 0x20;
  local_1c = local_7fc;
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001c180e to 001c1896 has its CatchHandler @ 001c203e */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_001159c8,4);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,&DAT_001159c8,4);
  clap_builder::builder::arg::Arg::help
            (local_7f8,&local_a48,"auto-scale input numbers to UNITs; see UNIT below",0x31);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_7f8,&DAT_001159dc,4);
  clap_builder::builder::arg::Arg::default_value(&local_268,&local_a48,&DAT_00115a18,4);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001c18b4 to 001c193c has its CatchHandler @ 001c202c */
  clap_builder::builder::arg::Arg::new(local_530,"from-unit",9);
  clap_builder::builder::arg::Arg::long(&local_a48,local_530,"from-unit",9);
  clap_builder::builder::arg::Arg::help(local_530,&local_a48,"specify the input unit size",0x1b);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_530,"N",1);
  clap_builder::builder::arg::Arg::default_value(&local_268,&local_a48,"1",1);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001c195a to 001c19e2 has its CatchHandler @ 001c201a */
  clap_builder::builder::arg::Arg::new(local_7f8,"to",2);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,"to",2);
  clap_builder::builder::arg::Arg::help
            (local_7f8,&local_a48,"auto-scale output numbers to UNITs; see UNIT below",0x32);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_7f8,&DAT_001159dc,4);
  clap_builder::builder::arg::Arg::default_value(&local_268,&local_a48,&DAT_00115a18,4);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001c1a00 to 001c1a88 has its CatchHandler @ 001c2008 */
  clap_builder::builder::arg::Arg::new(local_530,"to-unit",7);
  clap_builder::builder::arg::Arg::long(&local_a48,local_530,"to-unit",7);
  clap_builder::builder::arg::Arg::help(local_530,&local_a48,"the output unit size",0x14);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_530,"N",1);
  clap_builder::builder::arg::Arg::default_value(&local_268,&local_a48,"1",1);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001c1aa6 to 001c1b12 has its CatchHandler @ 001c1fb7 */
  clap_builder::builder::arg::Arg::new(local_7f8,"padding",7);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,"padding",7);
  clap_builder::builder::arg::Arg::help
            (local_7f8,&local_a48,
             "pad the output to N characters; positive N will right-align; negative N will left-align; padding is ignored if the output is wider than N; the default is to automatically pad if a whitespace is found"
             ,199);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_7f8,"N",1);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_a48);
                    /* try { // try from 001c1b2b to 001c1bb7 has its CatchHandler @ 001c2074 */
  clap_builder::builder::arg::Arg::new(local_530,"header",6);
  clap_builder::builder::arg::Arg::long(&local_a48,local_530,"header",6);
  clap_builder::builder::arg::Arg::help
            (local_530,&local_a48,
             "print (without converting) the first N header lines; N defaults to 1 if not specified"
             ,0x55);
  clap_builder::builder::arg::Arg::num_args(&local_a48,local_530);
  clap_builder::builder::arg::Arg::value_name(local_530,&local_a48,"N",1);
  clap_builder::builder::arg::Arg::default_missing_value(&local_a48,local_530);
  (*(code *)PTR_memcpy_0023a358)(&local_268,&local_a48,0x248);
  local_20 = local_800 | 0x400;
  local_1c = local_7fc;
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001c1c0a to 001c1c95 has its CatchHandler @ 001c1ff6 */
  clap_builder::builder::arg::Arg::new(local_7f8,"round",5);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,"round",5);
  clap_builder::builder::arg::Arg::help
            (local_7f8,&local_a48,"use METHOD for rounding when scaling",0x24);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_7f8,"METHOD",6);
  clap_builder::builder::arg::Arg::default_value(local_7f8,&local_a48,"from-zero",9);
  local_a48 = "up";
  local_a40 = 2;
  local_a38 = &DAT_00115a1c;
  local_a30 = 4;
  local_a28 = "from-zero";
  local_a20 = 9;
  local_a18 = "towards-zero";
  local_a10 = 0xc;
  local_a08 = "nearest";
  local_a00 = 7;
                    /* try { // try from 001c1cf7 to 001c1d06 has its CatchHandler @ 001c1f7b */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_268,&local_a48);
                    /* try { // try from 001c1d07 to 001c1d1e has its CatchHandler @ 001c1f79 */
  clap_builder::builder::arg::Arg::value_parser(&local_a48,local_7f8,&local_268);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_a48);
                    /* try { // try from 001c1d37 to 001c1da3 has its CatchHandler @ 001c1fa2 */
  clap_builder::builder::arg::Arg::new(local_530,"suffix",6);
  clap_builder::builder::arg::Arg::long(&local_a48,local_530,"suffix",6);
  clap_builder::builder::arg::Arg::help
            (local_530,&local_a48,
             "print SUFFIX after each formatted number, and accept inputs optionally ending with SUFFIX"
             ,0x59);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_530,"SUFFIX",6);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_a48);
                    /* try { // try from 001c1dbc to 001c1ec4 has its CatchHandler @ 001c2062 */
  clap_builder::builder::arg::Arg::new(local_7f8,"invalid",7);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,"invalid",7);
  clap_builder::builder::arg::Arg::help
            (local_7f8,&local_a48,"set the failure mode for invalid input",0x26);
  clap_builder::builder::arg::Arg::default_value(&local_a48,local_7f8,"abort",5);
  local_268 = "abort";
  local_260 = 5;
  local_258 = &DAT_001159a8;
  local_250 = 4;
  local_248 = &DAT_00115980;
  local_240 = 4;
  local_238 = "ignore";
  local_230 = 6;
  clap_builder::builder::arg::Arg::value_parser(local_7f8,&local_a48,&local_268);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_7f8,"INVALID",7);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_a48);
                    /* try { // try from 001c1edd to 001c1ef5 has its CatchHandler @ 001c1f64 */
  clap_builder::builder::arg::Arg::new(local_530,"NUMBER",6);
  (*(code *)PTR_memcpy_0023a358)(&local_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
  clap_builder::builder::arg::Arg::action(local_530,&local_a48);
  clap_builder::builder::command::Command::arg(param_1,local_7f8,local_530);
  return param_1;
}