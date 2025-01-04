undefined8 __rustcall uu_cp::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **local_a70;
  code *local_a68;
  undefined **local_a60;
  code *local_a58;
  char *local_a50;
  undefined8 local_a48;
  uint local_828;
  undefined4 local_824;
  undefined *local_820;
  undefined8 local_818;
  char *local_810;
  undefined8 local_808;
  char *local_800;
  undefined8 local_7f8;
  uint local_5d8;
  undefined4 local_5d4;
  ulong local_564;
  undefined4 local_55c;
  undefined *local_558;
  undefined8 local_550;
  undefined ***local_548;
  undefined8 local_540;
  undefined8 local_538;
  ulong local_29c;
  undefined4 local_294;
  undefined local_290 [24];
  undefined8 local_278;
  undefined8 local_270;
  undefined local_268;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(&local_558,uVar1);
  clap_builder::builder::command::Command::version(&local_820,&local_558,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (&local_558,&local_820,"Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.",0x38);
                    /* try { // try from 001ff8a7 to 001ff8bd has its CatchHandler @ 0020112a */
  uucore::format_usage
            (&local_a70,
             "{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE..."
             ,0x68);
  clap_builder::builder::command::Command::override_usage(&local_820,&local_558,&local_a70);
  local_a70 = &PTR_DAT_002b5bc0;
  local_a68 = _<&T_as_core::fmt::Display>::fmt;
  local_a60 = &PTR_DAT_002b5bb0;
  local_a58 = _<&T_as_core::fmt::Display>::fmt;
  local_558 = &DAT_002b5bd0;
  local_550 = 2;
  local_538 = 0;
  local_540 = 2;
                    /* try { // try from 001ff93f to 001ff953 has its CatchHandler @ 00201115 */
  local_548 = &local_a70;
  core::option::Option<T>::map_or_else(local_290,&local_558);
  clap_builder::builder::command::Command::after_help(&local_558,&local_820,local_290);
  (*(code *)PTR_memcpy_002bbe30)(&local_820,&local_558,700);
  local_564 = local_29c | 0x8800000088;
  local_55c = local_294;
                    /* try { // try from 001ff9b2 to 001ffa97 has its CatchHandler @ 00201376 */
  clap_builder::builder::arg::Arg::new(&local_558,"target-directory",0x10);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_558,0x74);
  clap_builder::builder::arg::Arg::conflicts_with(&local_558,&local_a70,"no-target-directory",0x13);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_558,"target-directory",0x10);
  clap_builder::builder::arg::Arg::value_name(&local_558,&local_a70,"target-directory",0x10);
  clap_builder::builder::arg::Arg::value_hint(&local_a70,&local_558,4);
  local_278 = 3;
  clap_builder::builder::arg::Arg::value_parser(&local_558,&local_a70,&local_278);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_558,"copy all SOURCE arguments into target-directory",0x2f);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_a70);
                    /* try { // try from 001ffab2 to 001ffb3c has its CatchHandler @ 0020132e */
  clap_builder::builder::arg::Arg::new(&local_820,"no-target-directory",0x13);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x54);
  clap_builder::builder::arg::Arg::long(&local_820,&local_a70,"no-target-directory",0x13);
  clap_builder::builder::arg::Arg::conflicts_with(&local_a70,&local_820,"target-directory",0x10);
  clap_builder::builder::arg::Arg::help
            (&local_820,&local_a70,"Treat DEST as a regular file and not a directory",0x30);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 001ffb6f to 001ffbf9 has its CatchHandler @ 0020131c */
  clap_builder::builder::arg::Arg::new(&local_558,"interactive",0xb);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_558,0x69);
  clap_builder::builder::arg::Arg::long(&local_558,&local_a70,"interactive",0xb);
  clap_builder::builder::arg::Arg::overrides_with(&local_a70,&local_558,"no-clobber",10);
  clap_builder::builder::arg::Arg::help(&local_558,&local_a70,"ask before overwriting files",0x1c);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_558,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_a70);
                    /* try { // try from 001ffc2c to 001ffcb6 has its CatchHandler @ 0020130a */
  clap_builder::builder::arg::Arg::new(&local_820,&DAT_0011e218,4);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x6c);
  clap_builder::builder::arg::Arg::long(&local_820,&local_a70,&DAT_0011e218,4);
  clap_builder::builder::arg::Arg::overrides_with_all(&local_a70,&local_820,&PTR_DAT_002b5bf0,5);
  clap_builder::builder::arg::Arg::help
            (&local_820,&local_a70,"hard-link files instead of copying",0x22);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 001ffce9 to 001ffd73 has its CatchHandler @ 002012f8 */
  clap_builder::builder::arg::Arg::new(&local_558,"no-clobber",10);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_558,0x6e);
  clap_builder::builder::arg::Arg::long(&local_558,&local_a70,"no-clobber",10);
  clap_builder::builder::arg::Arg::overrides_with(&local_a70,&local_558,"interactive",0xb);
  clap_builder::builder::arg::Arg::help
            (&local_558,&local_a70,"don\'t overwrite a file that already exists",0x2a);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_558,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_a70);
                    /* try { // try from 001ffda6 to 001ffe29 has its CatchHandler @ 002012e3 */
  clap_builder::builder::arg::Arg::new(&local_820,"recursive",9);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x52);
  clap_builder::builder::arg::Arg::visible_short_alias(&local_820,&local_a70,0x72);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,"recursive",9);
  clap_builder::builder::arg::Arg::help(&local_820,&local_a70,"copy directories recursively",0x1c);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 001ffe5c to 001ffeb0 has its CatchHandler @ 002011fc */
  clap_builder::builder::arg::Arg::new(&local_558,"strip-trailing-slashes",0x16);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_558,"strip-trailing-slashes",0x16);
  clap_builder::builder::arg::Arg::help
            (&local_558,&local_a70,"remove any trailing slashes from each SOURCE argument",0x35);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_558,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_a70);
                    /* try { // try from 001ffee3 to 001fff37 has its CatchHandler @ 002011e7 */
  clap_builder::builder::arg::Arg::new(&local_820,"debug",5);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,"debug",5);
  clap_builder::builder::arg::Arg::help
            (&local_820,&local_a70,"explain how a file is copied. Implies -v",0x28);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 001fff6a to 001fffd6 has its CatchHandler @ 002011d2 */
  clap_builder::builder::arg::Arg::new(&local_558,"verbose",7);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_558,0x76);
  clap_builder::builder::arg::Arg::long(&local_558,&local_a70,"verbose",7);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_558,"explicitly state what is being done",0x23);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 00200009 to 00200093 has its CatchHandler @ 002012ce */
  clap_builder::builder::arg::Arg::new(&local_820,"symbolic-link",0xd);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x73);
  clap_builder::builder::arg::Arg::long(&local_820,&local_a70,"symbolic-link",0xd);
  clap_builder::builder::arg::Arg::overrides_with_all(&local_a70,&local_820,&PTR_DAT_002b5bf0,5);
  clap_builder::builder::arg::Arg::help
            (&local_820,&local_a70,"make symbolic links instead of copying",0x26);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 002000c6 to 00200132 has its CatchHandler @ 002011bd */
  clap_builder::builder::arg::Arg::new(&local_558,"force",5);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_558,0x66);
  clap_builder::builder::arg::Arg::long(&local_558,&local_a70,"force",5);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_558,
             "if an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows."
             ,0xaa);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 00200165 to 002001d7 has its CatchHandler @ 002012b9 */
  clap_builder::builder::arg::Arg::new(&local_820,"remove-destination",0x12);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,"remove-destination",0x12);
  clap_builder::builder::arg::Arg::overrides_with(&local_820,&local_a70,"force",5);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_820,
             "remove each existing destination file before attempting to open it (contrast with --force). On Windows, currently only works for writeable files."
             ,0x91);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_278);
                    /* try { // try from 0020020a to 00200214 has its CatchHandler @ 00201100 */
  uucore::features::backup_control::arguments::backup(&local_a70);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_a70);
                    /* try { // try from 0020022f to 00200239 has its CatchHandler @ 002010eb */
  uucore::features::backup_control::arguments::backup_no_args(&local_a70);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 00200254 to 0020025e has its CatchHandler @ 002010d6 */
  uucore::features::backup_control::arguments::suffix(&local_a70);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_a70);
                    /* try { // try from 00200279 to 00200283 has its CatchHandler @ 002010c1 */
  uucore::features::update_control::arguments::update(&local_a70);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 0020029e to 002002a8 has its CatchHandler @ 002010ac */
  uucore::features::update_control::arguments::update_no_args(&local_a70);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_a70);
                    /* try { // try from 002002c3 to 00200335 has its CatchHandler @ 00201364 */
  clap_builder::builder::arg::Arg::new(&local_820,"reflink",7);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,"reflink",7);
  clap_builder::builder::arg::Arg::value_name(&local_820,&local_a70,&DAT_0011e1ec,4);
  clap_builder::builder::arg::Arg::overrides_with_all(&local_a70,&local_820,&PTR_DAT_002b5bf0,5);
  (*(code *)PTR_memcpy_002bbe30)(&local_820,&local_a70,0x248);
  local_5d8 = local_828 | 0x80;
  local_5d4 = local_824;
                    /* try { // try from 00200372 to 0020038d has its CatchHandler @ 00201364 */
  clap_builder::builder::arg::Arg::default_missing_value(&local_a70,&local_820,"always",6);
  local_820 = &DAT_0011e1d8;
  local_818 = 4;
  local_810 = "always";
  local_808 = 6;
  local_800 = "never";
  local_7f8 = 5;
                    /* try { // try from 002003d8 to 002003ec has its CatchHandler @ 0020109a */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_278,&local_820);
                    /* try { // try from 002003ed to 00200406 has its CatchHandler @ 00201095 */
  clap_builder::builder::arg::Arg::value_parser(&local_820,&local_a70,&local_278);
  local_278 = 0;
  local_270 = 1;
  local_268 = 0;
                    /* try { // try from 00200427 to 0020045e has its CatchHandler @ 00201364 */
  clap_builder::builder::arg::Arg::num_args(&local_a70,&local_820,&local_278);
  clap_builder::builder::arg::Arg::help
            (&local_278,&local_a70,"control clone/CoW copies. See below",0x23);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_278);
                    /* try { // try from 0020047c to 002004ee has its CatchHandler @ 002012a4 */
  clap_builder::builder::arg::Arg::new(&local_558,"attributes-only",0xf);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_558,"attributes-only",0xf);
  clap_builder::builder::arg::Arg::overrides_with_all(&local_558,&local_a70,&PTR_DAT_002b5bf0,5);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_558,"Don\'t copy the file data, just the attributes",0x2d);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 00200521 to 00200584 has its CatchHandler @ 00201352 */
  clap_builder::builder::arg::Arg::new(&local_820,"preserveENETDOWN",8);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,"preserveENETDOWN",8);
  clap_builder::builder::arg::Arg::action(&local_820,&local_a70,1);
  clap_builder::builder::arg::Arg::use_value_delimiter(&local_a70,&local_820,1);
                    /* try { // try from 00200585 to 0020059d has its CatchHandler @ 00201083 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_278,&PTR_s_mode_002b5b40,7);
                    /* try { // try from 0020059e to 002005b7 has its CatchHandler @ 0020107e */
  clap_builder::builder::arg::Arg::value_parser(&local_820,&local_a70,&local_278);
                    /* try { // try from 002005b8 to 002005cb has its CatchHandler @ 00201352 */
  clap_builder::builder::arg::Arg::num_args(&local_a70,&local_820,0);
  (*(code *)PTR_memcpy_002bbe30)(&local_820,&local_a70,0x248);
  local_5d8 = local_828 | 0x80;
  local_5d4 = local_824;
                    /* try { // try from 00200608 to 0020065c has its CatchHandler @ 00201352 */
  clap_builder::builder::arg::Arg::value_name(&local_a70,&local_820,"ATTR_LIST",9);
  clap_builder::builder::arg::Arg::default_missing_value
            (&local_820,&local_a70,"mode,ownership,timestamp",0x18);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_820,
             "Preserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, xattr, all"
             ,0x93);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 00200677 to 002006e3 has its CatchHandler @ 002011a8 */
  clap_builder::builder::arg::Arg::new(&local_558,"preserve-default-attributes",0x1b);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_558,0x70);
  clap_builder::builder::arg::Arg::long(&local_558,&local_a70,"preserve-default-attributes",0x1b);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_558,"same as --preserve=mode,ownership(unix only),timestamps",0x37);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 00200716 to 00200779 has its CatchHandler @ 00201340 */
  clap_builder::builder::arg::Arg::new(&local_820,"no-preserve",0xb);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,"no-preserve",0xb);
  clap_builder::builder::arg::Arg::action(&local_820,&local_a70,1);
  clap_builder::builder::arg::Arg::use_value_delimiter(&local_a70,&local_820,1);
                    /* try { // try from 0020077a to 00200792 has its CatchHandler @ 0020106c */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_278,&PTR_s_mode_002b5b40,7);
                    /* try { // try from 00200793 to 002007ac has its CatchHandler @ 00201067 */
  clap_builder::builder::arg::Arg::value_parser(&local_820,&local_a70,&local_278);
                    /* try { // try from 002007ad to 002007c0 has its CatchHandler @ 00201340 */
  clap_builder::builder::arg::Arg::num_args(&local_a70,&local_820,0);
  (*(code *)PTR_memcpy_002bbe30)(&local_820,&local_a70,0x248);
  local_5d8 = local_828 | 0x80;
  local_5d4 = local_824;
                    /* try { // try from 002007fd to 00200833 has its CatchHandler @ 00201340 */
  clap_builder::builder::arg::Arg::value_name(&local_a70,&local_820,"ATTR_LIST",9);
  clap_builder::builder::arg::Arg::help
            (&local_278,&local_a70,"don\'t preserve the specified attributes",0x27);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_278);
                    /* try { // try from 00200851 to 002008c3 has its CatchHandler @ 0020128f */
  clap_builder::builder::arg::Arg::new(&local_558,"parents",7);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_558,"parents",7);
  clap_builder::builder::arg::Arg::alias(&local_558,&local_a70,"parent",6);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_558,"use full source file name under DIRECTORY",0x29);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 002008f6 to 00200980 has its CatchHandler @ 0020127a */
  clap_builder::builder::arg::Arg::new(&local_820,"no-dereference",0xe);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x50);
  clap_builder::builder::arg::Arg::long(&local_820,&local_a70,"no-dereference",0xe);
  clap_builder::builder::arg::Arg::overrides_with(&local_a70,&local_820,"dereference",0xb);
  clap_builder::builder::arg::Arg::help
            (&local_820,&local_a70,"never follow symbolic links in SOURCE",0x25);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 002009b3 to 00200a3d has its CatchHandler @ 00201265 */
  clap_builder::builder::arg::Arg::new(&local_558,"dereference",0xb);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_558,0x4c);
  clap_builder::builder::arg::Arg::long(&local_558,&local_a70,"dereference",0xb);
  clap_builder::builder::arg::Arg::overrides_with(&local_a70,&local_558,"no-dereference",0xe);
  clap_builder::builder::arg::Arg::help
            (&local_558,&local_a70,"always follow symbolic links in SOURCE",0x26);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_558,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_a70);
                    /* try { // try from 00200a70 to 00200abe has its CatchHandler @ 00201154 */
  clap_builder::builder::arg::Arg::new(&local_820,"cli-symbolic-links",0x12);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x48);
  clap_builder::builder::arg::Arg::help
            (&local_820,&local_a70,"follow command-line symbolic links in SOURCE",0x2c);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 00200af1 to 00200b5d has its CatchHandler @ 00201193 */
  clap_builder::builder::arg::Arg::new(&local_558,"archive",7);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_558,0x61);
  clap_builder::builder::arg::Arg::long(&local_558,&local_a70,"archive",7);
  clap_builder::builder::arg::Arg::help(&local_a70,&local_558,"Same as -dR --preserve=all",0x1a);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 00200b90 to 00200bde has its CatchHandler @ 0020113f */
  clap_builder::builder::arg::Arg::new(&local_820,"no-dereference-preserve-links",0x1d);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,100);
  clap_builder::builder::arg::Arg::help
            (&local_820,&local_a70,"same as --no-dereference --preserve=links",0x29);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 00200c11 to 00200c7d has its CatchHandler @ 0020117e */
  clap_builder::builder::arg::Arg::new(&local_558,"one-file-system",0xf);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_558,0x78);
  clap_builder::builder::arg::Arg::long(&local_558,&local_a70,"one-file-system",0xf);
  clap_builder::builder::arg::Arg::help(&local_a70,&local_558,"stay on this file system",0x18);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 00200cb0 to 00200d04 has its CatchHandler @ 00201250 */
  clap_builder::builder::arg::Arg::new(&local_820,"sparse",6);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,"sparse",6);
  clap_builder::builder::arg::Arg::value_name(&local_820,&local_a70,&DAT_0011e1ec,4);
  local_a70 = (undefined **)0x12caed;
  local_a68 = (code *)0x5;
  local_a60 = (undefined **)&DAT_0011e1d8;
  local_a58 = (code *)0x4;
  local_a50 = "always";
  local_a48 = 6;
                    /* try { // try from 00200d2f to 00200d40 has its CatchHandler @ 00201052 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_278,&local_a70);
                    /* try { // try from 00200d41 to 00200d5a has its CatchHandler @ 0020104d */
  clap_builder::builder::arg::Arg::value_parser(&local_a70,&local_820,&local_278);
                    /* try { // try from 00200d5b to 00200d78 has its CatchHandler @ 00201250 */
  clap_builder::builder::arg::Arg::help
            (&local_278,&local_a70,"control creation of sparse files. See below",0x2b);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_278);
                    /* try { // try from 00200d96 to 00200e08 has its CatchHandler @ 0020123b */
  clap_builder::builder::arg::Arg::new(&local_558,"copy-contents",0xd);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_558,"copy-contents",0xd);
  clap_builder::builder::arg::Arg::overrides_with(&local_558,&local_a70,"attributes-only",0xf);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_558,"NotImplemented: copy contents of special files when recursive",
             0x3d);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 00200e3b to 00200ead has its CatchHandler @ 00201226 */
  clap_builder::builder::arg::Arg::new(&local_820,&DAT_0012bfb1,7);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,&DAT_0012bfb1,7);
  clap_builder::builder::arg::Arg::value_name(&local_820,&local_a70,"CTX",3);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_820,
             "NotImplemented: set SELinux security context of destination file to default type",0x50
            );
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 00200ec8 to 00200f49 has its CatchHandler @ 00201169 */
  clap_builder::builder::arg::Arg::new(&local_558,"progress",8);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_558,"progress",8);
  clap_builder::builder::arg::Arg::short(&local_558,&local_a70,0x67);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_558,2);
  clap_builder::builder::arg::Arg::help
            (&local_278,&local_a70,
             "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.",0x4e)
  ;
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 00200f67 to 00200fae has its CatchHandler @ 00201211 */
  clap_builder::builder::arg::Arg::new(&local_820,"paths",5);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,1);
  clap_builder::builder::arg::Arg::num_args(&local_820,&local_a70,1);
  (*(code *)PTR_memcpy_002bbe30)(&local_a70,&local_820,0x248);
  local_828 = local_5d8 | 1;
  local_824 = local_5d4;
                    /* try { // try from 00200fe9 to 00201023 has its CatchHandler @ 00201211 */
  clap_builder::builder::arg::Arg::value_hint(&local_820,&local_a70,2);
  local_278 = 2;
  clap_builder::builder::arg::Arg::value_parser(&local_a70,&local_820,&local_278);
  clap_builder::builder::command::Command::arg(param_1,&local_558,&local_a70);
  return param_1;
}