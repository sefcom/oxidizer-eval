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
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [584];
  uint local_2e8;
  undefined4 local_2e4;
  ulong local_274;
  undefined4 local_26c;
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
                    /* try { // try from 001c1122 to 001c1136 has its CatchHandler @ 001c1b3d */
  uucore::format_usage(&local_a48,"{} [OPTION]... [NUMBER]...",0x1a);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,&local_a48);
  (*(code *)PTR_memcpy_002398d8)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8000000084;
  local_534 = local_26c;
                    /* try { // try from 001c1190 to 001c120f has its CatchHandler @ 001c1b91 */
  clap_builder::builder::arg::Arg::new(local_530,"delimiter",9);
  clap_builder::builder::arg::Arg::short(&local_a48,local_530);
  clap_builder::builder::arg::Arg::long(local_530,&local_a48,"delimiter",9);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_530,"X",1);
  clap_builder::builder::arg::Arg::help
            (&local_268,&local_a48,"use X instead of whitespace for field delimiter",0x2f);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001c122d to 001c1299 has its CatchHandler @ 001c1c00 */
  clap_builder::builder::arg::Arg::new(local_7f8,"field",5);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,"field",5);
  clap_builder::builder::arg::Arg::help
            (local_7f8,&local_a48,"replace the numbers in these input fields; see FIELDS below",0x3b
            );
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_7f8,"FIELDS",6);
  (*(code *)PTR_memcpy_002398d8)(local_7f8,&local_a48,0x248);
  local_5b0 = local_800 | 0x20;
  local_5ac = local_7fc;
                    /* try { // try from 001c12d2 to 001c12e8 has its CatchHandler @ 001c1c00 */
  clap_builder::builder::arg::Arg::default_value(&local_a48,local_7f8,"1",1);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_a48);
                    /* try { // try from 001c1301 to 001c136d has its CatchHandler @ 001c1b7c */
  clap_builder::builder::arg::Arg::new(local_530,"format",6);
  clap_builder::builder::arg::Arg::long(&local_a48,local_530,"format",6);
  clap_builder::builder::arg::Arg::help
            (local_530,&local_a48,
             "use printf style floating-point FORMAT; see FORMAT below for details",0x44);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_530,"FORMAT",6);
  (*(code *)PTR_memcpy_002398d8)(&local_268,&local_a48,0x248);
  local_20 = local_800 | 0x20;
  local_1c = local_7fc;
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001c13be to 001c1446 has its CatchHandler @ 001c1bee */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00115848,4);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,&DAT_00115848,4);
  clap_builder::builder::arg::Arg::help
            (local_7f8,&local_a48,"auto-scale input numbers to UNITs; see UNIT below",0x31);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_7f8,&DAT_0011585c,4);
  clap_builder::builder::arg::Arg::default_value(&local_268,&local_a48,&DAT_00115898,4);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001c1464 to 001c14ec has its CatchHandler @ 001c1bdc */
  clap_builder::builder::arg::Arg::new(local_530,"from-unit",9);
  clap_builder::builder::arg::Arg::long(&local_a48,local_530,"from-unit",9);
  clap_builder::builder::arg::Arg::help(local_530,&local_a48,"specify the input unit size",0x1b);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_530,"N",1);
  clap_builder::builder::arg::Arg::default_value(&local_268,&local_a48,"1",1);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001c150a to 001c1592 has its CatchHandler @ 001c1bca */
  clap_builder::builder::arg::Arg::new(local_7f8,"to",2);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,"to",2);
  clap_builder::builder::arg::Arg::help
            (local_7f8,&local_a48,"auto-scale output numbers to UNITs; see UNIT below",0x32);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_7f8,&DAT_0011585c,4);
  clap_builder::builder::arg::Arg::default_value(&local_268,&local_a48,&DAT_00115898,4);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001c15b0 to 001c1638 has its CatchHandler @ 001c1bb8 */
  clap_builder::builder::arg::Arg::new(local_530,"to-unit",7);
  clap_builder::builder::arg::Arg::long(&local_a48,local_530,"to-unit",7);
  clap_builder::builder::arg::Arg::help(local_530,&local_a48,"the output unit size",0x14);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_530,"N",1);
  clap_builder::builder::arg::Arg::default_value(&local_268,&local_a48,"1",1);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001c1656 to 001c16c2 has its CatchHandler @ 001c1b67 */
  clap_builder::builder::arg::Arg::new(local_7f8,"padding",7);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,"padding",7);
  clap_builder::builder::arg::Arg::help
            (local_7f8,&local_a48,
             "pad the output to N characters; positive N will right-align; negative N will left-align; padding is ignored if the output is wider than N; the default is to automatically pad if a whitespace is found"
             ,199);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_7f8,"N",1);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_a48);
                    /* try { // try from 001c16db to 001c1767 has its CatchHandler @ 001c1c24 */
  clap_builder::builder::arg::Arg::new(local_530,"header",6);
  clap_builder::builder::arg::Arg::long(&local_a48,local_530,"header",6);
  clap_builder::builder::arg::Arg::help
            (local_530,&local_a48,
             "print (without converting) the first N header lines; N defaults to 1 if not specified"
             ,0x55);
  clap_builder::builder::arg::Arg::num_args(&local_a48,local_530);
  clap_builder::builder::arg::Arg::value_name(local_530,&local_a48,"N",1);
  clap_builder::builder::arg::Arg::default_missing_value(&local_a48,local_530);
  (*(code *)PTR_memcpy_002398d8)(&local_268,&local_a48,0x248);
  local_20 = local_800 | 0x400;
  local_1c = local_7fc;
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001c17ba to 001c1845 has its CatchHandler @ 001c1ba6 */
  clap_builder::builder::arg::Arg::new(local_7f8,"round",5);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,"round",5);
  clap_builder::builder::arg::Arg::help
            (local_7f8,&local_a48,"use METHOD for rounding when scaling",0x24);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_7f8,"METHOD",6);
  clap_builder::builder::arg::Arg::default_value(local_7f8,&local_a48,"from-zero",9);
  local_a48 = "up";
  local_a40 = 2;
  local_a38 = &DAT_0011589c;
  local_a30 = 4;
  local_a28 = "from-zero";
  local_a20 = 9;
  local_a18 = "towards-zero";
  local_a10 = 0xc;
  local_a08 = "nearest";
  local_a00 = 7;
                    /* try { // try from 001c18a7 to 001c18b6 has its CatchHandler @ 001c1b2b */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_268,&local_a48);
                    /* try { // try from 001c18b7 to 001c18ce has its CatchHandler @ 001c1b29 */
  clap_builder::builder::arg::Arg::value_parser(&local_a48,local_7f8,&local_268);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_a48);
                    /* try { // try from 001c18e7 to 001c1953 has its CatchHandler @ 001c1b52 */
  clap_builder::builder::arg::Arg::new(local_530,"suffix",6);
  clap_builder::builder::arg::Arg::long(&local_a48,local_530,"suffix",6);
  clap_builder::builder::arg::Arg::help
            (local_530,&local_a48,
             "print SUFFIX after each formatted number, and accept inputs optionally ending with SUFFIX"
             ,0x59);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_530,"SUFFIX",6);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_a48);
                    /* try { // try from 001c196c to 001c1a74 has its CatchHandler @ 001c1c12 */
  clap_builder::builder::arg::Arg::new(local_7f8,"invalid",7);
  clap_builder::builder::arg::Arg::long(&local_a48,local_7f8,"invalid",7);
  clap_builder::builder::arg::Arg::help
            (local_7f8,&local_a48,"set the failure mode for invalid input",0x26);
  clap_builder::builder::arg::Arg::default_value(&local_a48,local_7f8,"abort",5);
  local_268 = "abort";
  local_260 = 5;
  local_258 = &DAT_00115828;
  local_250 = 4;
  local_248 = &DAT_00115800;
  local_240 = 4;
  local_238 = "ignore";
  local_230 = 6;
  clap_builder::builder::arg::Arg::value_parser(local_7f8,&local_a48,&local_268);
  clap_builder::builder::arg::Arg::value_name(&local_a48,local_7f8,"INVALID",7);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_a48);
                    /* try { // try from 001c1a8d to 001c1aa5 has its CatchHandler @ 001c1b14 */
  clap_builder::builder::arg::Arg::new(local_530,"NUMBER",6);
  (*(code *)PTR_memcpy_002398d8)(&local_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
  clap_builder::builder::arg::Arg::action(local_530,&local_a48);
  clap_builder::builder::command::Command::arg(param_1,local_7f8,local_530);
  return param_1;
}