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
  clap_builder::builder::command::Command::version(&local_820,&local_558,&DAT_0012bdc5,6);
  clap_builder::builder::command::Command::about(&local_558,&local_820,&DAT_0012bdcb,0x38);
                    /* try { // try from 001fef77 to 001fef8d has its CatchHandler @ 002007fa */
  uucore::format_usage(&local_a70,&DAT_0012be03,0x68);
  clap_builder::builder::command::Command::override_usage(&local_820,&local_558,&local_a70);
  local_a70 = &PTR_DAT_002b54f0;
  local_a68 = _<&T_as_core::fmt::Display>::fmt;
  local_a60 = &PTR_DAT_002b54e0;
  local_a58 = _<&T_as_core::fmt::Display>::fmt;
  local_558 = &DAT_002b5500;
  local_550 = 2;
  local_538 = 0;
  local_540 = 2;
                    /* try { // try from 001ff00f to 001ff023 has its CatchHandler @ 002007e5 */
  local_548 = &local_a70;
  core::option::Option<T>::map_or_else(local_290,&local_558);
  clap_builder::builder::command::Command::after_help(&local_558,&local_820,local_290);
  (*(code *)PTR_memcpy_002bb710)(&local_820,&local_558,700);
  local_564 = local_29c | 0x8800000088;
  local_55c = local_294;
                    /* try { // try from 001ff082 to 001ff167 has its CatchHandler @ 00200a46 */
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
                    /* try { // try from 001ff182 to 001ff20c has its CatchHandler @ 002009fe */
  clap_builder::builder::arg::Arg::new(&local_820,"no-target-directory",0x13);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x54);
  clap_builder::builder::arg::Arg::long(&local_820,&local_a70,"no-target-directory",0x13);
  clap_builder::builder::arg::Arg::conflicts_with(&local_a70,&local_820,"target-directory",0x10);
  clap_builder::builder::arg::Arg::help
            (&local_820,&local_a70,"Treat DEST as a regular file and not a directory",0x30);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 001ff23f to 001ff2c9 has its CatchHandler @ 002009ec */
  clap_builder::builder::arg::Arg::new(&local_558,"interactive",0xb);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_558,0x69);
  clap_builder::builder::arg::Arg::long(&local_558,&local_a70,"interactive",0xb);
  clap_builder::builder::arg::Arg::overrides_with(&local_a70,&local_558,"no-clobber",10);
  clap_builder::builder::arg::Arg::help(&local_558,&local_a70,"ask before overwriting files",0x1c);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_558,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_a70);
                    /* try { // try from 001ff2fc to 001ff386 has its CatchHandler @ 002009da */
  clap_builder::builder::arg::Arg::new(&local_820,&DAT_0011e04c,4);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x6c);
  clap_builder::builder::arg::Arg::long(&local_820,&local_a70,&DAT_0011e04c,4);
  clap_builder::builder::arg::Arg::overrides_with_all(&local_a70,&local_820,&PTR_DAT_002b5520,5);
  clap_builder::builder::arg::Arg::help
            (&local_820,&local_a70,"hard-link files instead of copying",0x22);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 001ff3b9 to 001ff443 has its CatchHandler @ 002009c8 */
  clap_builder::builder::arg::Arg::new(&local_558,"no-clobber",10);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_558,0x6e);
  clap_builder::builder::arg::Arg::long(&local_558,&local_a70,"no-clobber",10);
  clap_builder::builder::arg::Arg::overrides_with(&local_a70,&local_558,"interactive",0xb);
  clap_builder::builder::arg::Arg::help
            (&local_558,&local_a70,"don\'t overwrite a file that already exists",0x2a);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_558,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_a70);
                    /* try { // try from 001ff476 to 001ff4f9 has its CatchHandler @ 002009b3 */
  clap_builder::builder::arg::Arg::new(&local_820,"recursive",9);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x52);
  clap_builder::builder::arg::Arg::visible_short_alias(&local_820,&local_a70,0x72);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,"recursive",9);
  clap_builder::builder::arg::Arg::help(&local_820,&local_a70,"copy directories recursively",0x1c);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 001ff52c to 001ff580 has its CatchHandler @ 002008cc */
  clap_builder::builder::arg::Arg::new(&local_558,"strip-trailing-slashes",0x16);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_558,"strip-trailing-slashes",0x16);
  clap_builder::builder::arg::Arg::help
            (&local_558,&local_a70,"remove any trailing slashes from each SOURCE argument",0x35);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_558,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_a70);
                    /* try { // try from 001ff5b3 to 001ff607 has its CatchHandler @ 002008b7 */
  clap_builder::builder::arg::Arg::new(&local_820,"debug",5);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,"debug",5);
  clap_builder::builder::arg::Arg::help
            (&local_820,&local_a70,"explain how a file is copied. Implies -v",0x28);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 001ff63a to 001ff6a6 has its CatchHandler @ 002008a2 */
  clap_builder::builder::arg::Arg::new(&local_558,"verbose",7);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_558,0x76);
  clap_builder::builder::arg::Arg::long(&local_558,&local_a70,"verbose",7);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_558,"explicitly state what is being done",0x23);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 001ff6d9 to 001ff763 has its CatchHandler @ 0020099e */
  clap_builder::builder::arg::Arg::new(&local_820,"symbolic-link",0xd);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x73);
  clap_builder::builder::arg::Arg::long(&local_820,&local_a70,"symbolic-link",0xd);
  clap_builder::builder::arg::Arg::overrides_with_all(&local_a70,&local_820,&PTR_DAT_002b5520,5);
  clap_builder::builder::arg::Arg::help
            (&local_820,&local_a70,"make symbolic links instead of copying",0x26);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 001ff796 to 001ff802 has its CatchHandler @ 0020088d */
  clap_builder::builder::arg::Arg::new(&local_558,"force",5);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_558,0x66);
  clap_builder::builder::arg::Arg::long(&local_558,&local_a70,"force",5);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_558,
             "if an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows."
             ,0xaa);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 001ff835 to 001ff8a7 has its CatchHandler @ 00200989 */
  clap_builder::builder::arg::Arg::new(&local_820,"remove-destination",0x12);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,"remove-destination",0x12);
  clap_builder::builder::arg::Arg::overrides_with(&local_820,&local_a70,"force",5);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_820,
             "remove each existing destination file before attempting to open it (contrast with --force). On Windows, currently only works for writeable files."
             ,0x91);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_278);
                    /* try { // try from 001ff8da to 001ff8e4 has its CatchHandler @ 002007d0 */
  uucore::features::backup_control::arguments::backup(&local_a70);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_a70);
                    /* try { // try from 001ff8ff to 001ff909 has its CatchHandler @ 002007bb */
  uucore::features::backup_control::arguments::backup_no_args(&local_a70);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 001ff924 to 001ff92e has its CatchHandler @ 002007a6 */
  uucore::features::backup_control::arguments::suffix(&local_a70);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_a70);
                    /* try { // try from 001ff949 to 001ff953 has its CatchHandler @ 00200791 */
  uucore::features::update_control::arguments::update(&local_a70);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 001ff96e to 001ff978 has its CatchHandler @ 0020077c */
  uucore::features::update_control::arguments::update_no_args(&local_a70);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_a70);
                    /* try { // try from 001ff993 to 001ffa05 has its CatchHandler @ 00200a34 */
  clap_builder::builder::arg::Arg::new(&local_820,"reflink",7);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,"reflink",7);
  clap_builder::builder::arg::Arg::value_name(&local_820,&local_a70,&DAT_0011e020,4);
  clap_builder::builder::arg::Arg::overrides_with_all(&local_a70,&local_820,&PTR_DAT_002b5520,5);
  (*(code *)PTR_memcpy_002bb710)(&local_820,&local_a70,0x248);
  local_5d8 = local_828 | 0x80;
  local_5d4 = local_824;
                    /* try { // try from 001ffa42 to 001ffa5d has its CatchHandler @ 00200a34 */
  clap_builder::builder::arg::Arg::default_missing_value(&local_a70,&local_820,"always",6);
  local_820 = &DAT_0011e00c;
  local_818 = 4;
  local_810 = "always";
  local_808 = 6;
  local_800 = "never";
  local_7f8 = 5;
                    /* try { // try from 001ffaa8 to 001ffabc has its CatchHandler @ 0020076a */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_278,&local_820);
                    /* try { // try from 001ffabd to 001ffad6 has its CatchHandler @ 00200765 */
  clap_builder::builder::arg::Arg::value_parser(&local_820,&local_a70,&local_278);
  local_278 = 0;
  local_270 = 1;
  local_268 = 0;
                    /* try { // try from 001ffaf7 to 001ffb2e has its CatchHandler @ 00200a34 */
  clap_builder::builder::arg::Arg::num_args(&local_a70,&local_820,&local_278);
  clap_builder::builder::arg::Arg::help
            (&local_278,&local_a70,"control clone/CoW copies. See below",0x23);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_278);
                    /* try { // try from 001ffb4c to 001ffbbe has its CatchHandler @ 00200974 */
  clap_builder::builder::arg::Arg::new(&local_558,"attributes-only",0xf);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_558,"attributes-only",0xf);
  clap_builder::builder::arg::Arg::overrides_with_all(&local_558,&local_a70,&PTR_DAT_002b5520,5);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_558,"Don\'t copy the file data, just the attributes",0x2d);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 001ffbf1 to 001ffc54 has its CatchHandler @ 00200a22 */
  clap_builder::builder::arg::Arg::new(&local_820,"preserveENETDOWN",8);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,"preserveENETDOWN",8);
  clap_builder::builder::arg::Arg::action(&local_820,&local_a70,1);
  clap_builder::builder::arg::Arg::use_value_delimiter(&local_a70,&local_820,1);
                    /* try { // try from 001ffc55 to 001ffc6d has its CatchHandler @ 00200753 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_278,&PTR_s_mode_002b5470,7);
                    /* try { // try from 001ffc6e to 001ffc87 has its CatchHandler @ 0020074e */
  clap_builder::builder::arg::Arg::value_parser(&local_820,&local_a70,&local_278);
                    /* try { // try from 001ffc88 to 001ffc9b has its CatchHandler @ 00200a22 */
  clap_builder::builder::arg::Arg::num_args(&local_a70,&local_820,0);
  (*(code *)PTR_memcpy_002bb710)(&local_820,&local_a70,0x248);
  local_5d8 = local_828 | 0x80;
  local_5d4 = local_824;
                    /* try { // try from 001ffcd8 to 001ffd2c has its CatchHandler @ 00200a22 */
  clap_builder::builder::arg::Arg::value_name(&local_a70,&local_820,"ATTR_LIST",9);
  clap_builder::builder::arg::Arg::default_missing_value
            (&local_820,&local_a70,"mode,ownership,timestamp",0x18);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_820,
             "Preserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, xattr, all"
             ,0x93);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 001ffd47 to 001ffdb3 has its CatchHandler @ 00200878 */
  clap_builder::builder::arg::Arg::new(&local_558,"preserve-default-attributes",0x1b);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_558,0x70);
  clap_builder::builder::arg::Arg::long(&local_558,&local_a70,"preserve-default-attributes",0x1b);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_558,"same as --preserve=mode,ownership(unix only),timestamps",0x37);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 001ffde6 to 001ffe49 has its CatchHandler @ 00200a10 */
  clap_builder::builder::arg::Arg::new(&local_820,"no-preserve",0xb);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,"no-preserve",0xb);
  clap_builder::builder::arg::Arg::action(&local_820,&local_a70,1);
  clap_builder::builder::arg::Arg::use_value_delimiter(&local_a70,&local_820,1);
                    /* try { // try from 001ffe4a to 001ffe62 has its CatchHandler @ 0020073c */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_278,&PTR_s_mode_002b5470,7);
                    /* try { // try from 001ffe63 to 001ffe7c has its CatchHandler @ 00200737 */
  clap_builder::builder::arg::Arg::value_parser(&local_820,&local_a70,&local_278);
                    /* try { // try from 001ffe7d to 001ffe90 has its CatchHandler @ 00200a10 */
  clap_builder::builder::arg::Arg::num_args(&local_a70,&local_820,0);
  (*(code *)PTR_memcpy_002bb710)(&local_820,&local_a70,0x248);
  local_5d8 = local_828 | 0x80;
  local_5d4 = local_824;
                    /* try { // try from 001ffecd to 001fff03 has its CatchHandler @ 00200a10 */
  clap_builder::builder::arg::Arg::value_name(&local_a70,&local_820,"ATTR_LIST",9);
  clap_builder::builder::arg::Arg::help
            (&local_278,&local_a70,"don\'t preserve the specified attributes",0x27);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_278);
                    /* try { // try from 001fff21 to 001fff93 has its CatchHandler @ 0020095f */
  clap_builder::builder::arg::Arg::new(&local_558,"parents",7);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_558,"parents",7);
  clap_builder::builder::arg::Arg::alias(&local_558,&local_a70,"parent",6);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_558,"use full source file name under DIRECTORY",0x29);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 001fffc6 to 00200050 has its CatchHandler @ 0020094a */
  clap_builder::builder::arg::Arg::new(&local_820,"no-dereference",0xe);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x50);
  clap_builder::builder::arg::Arg::long(&local_820,&local_a70,"no-dereference",0xe);
  clap_builder::builder::arg::Arg::overrides_with(&local_a70,&local_820,"dereference",0xb);
  clap_builder::builder::arg::Arg::help
            (&local_820,&local_a70,"never follow symbolic links in SOURCE",0x25);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 00200083 to 0020010d has its CatchHandler @ 00200935 */
  clap_builder::builder::arg::Arg::new(&local_558,"dereference",0xb);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_558,0x4c);
  clap_builder::builder::arg::Arg::long(&local_558,&local_a70,"dereference",0xb);
  clap_builder::builder::arg::Arg::overrides_with(&local_a70,&local_558,"no-dereference",0xe);
  clap_builder::builder::arg::Arg::help
            (&local_558,&local_a70,"always follow symbolic links in SOURCE",0x26);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_558,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_a70);
                    /* try { // try from 00200140 to 0020018e has its CatchHandler @ 00200824 */
  clap_builder::builder::arg::Arg::new(&local_820,"cli-symbolic-links",0x12);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,0x48);
  clap_builder::builder::arg::Arg::help
            (&local_820,&local_a70,"follow command-line symbolic links in SOURCE",0x2c);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 002001c1 to 0020022d has its CatchHandler @ 00200863 */
  clap_builder::builder::arg::Arg::new(&local_558,"archive",7);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_558,0x61);
  clap_builder::builder::arg::Arg::long(&local_558,&local_a70,"archive",7);
  clap_builder::builder::arg::Arg::help(&local_a70,&local_558,"Same as -dR --preserve=all",0x1a);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 00200260 to 002002ae has its CatchHandler @ 0020080f */
  clap_builder::builder::arg::Arg::new(&local_820,"no-dereference-preserve-links",0x1d);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_820,100);
  clap_builder::builder::arg::Arg::help
            (&local_820,&local_a70,"same as --no-dereference --preserve=links",0x29);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,2);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 002002e1 to 0020034d has its CatchHandler @ 0020084e */
  clap_builder::builder::arg::Arg::new(&local_558,"one-file-system",0xf);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_558,0x78);
  clap_builder::builder::arg::Arg::long(&local_558,&local_a70,"one-file-system",0xf);
  clap_builder::builder::arg::Arg::help(&local_a70,&local_558,"stay on this file system",0x18);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 00200380 to 002003d4 has its CatchHandler @ 00200920 */
  clap_builder::builder::arg::Arg::new(&local_820,"sparse",6);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,"sparse",6);
  clap_builder::builder::arg::Arg::value_name(&local_820,&local_a70,&DAT_0011e020,4);
  local_a70 = (undefined **)0x12c8ed;
  local_a68 = (code *)0x5;
  local_a60 = (undefined **)&DAT_0011e00c;
  local_a58 = (code *)0x4;
  local_a50 = "always";
  local_a48 = 6;
                    /* try { // try from 002003ff to 00200410 has its CatchHandler @ 00200722 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (&local_278,&local_a70);
                    /* try { // try from 00200411 to 0020042a has its CatchHandler @ 0020071d */
  clap_builder::builder::arg::Arg::value_parser(&local_a70,&local_820,&local_278);
                    /* try { // try from 0020042b to 00200448 has its CatchHandler @ 00200920 */
  clap_builder::builder::arg::Arg::help
            (&local_278,&local_a70,"control creation of sparse files. See below",0x2b);
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_278);
                    /* try { // try from 00200466 to 002004d8 has its CatchHandler @ 0020090b */
  clap_builder::builder::arg::Arg::new(&local_558,"copy-contents",0xd);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_558,"copy-contents",0xd);
  clap_builder::builder::arg::Arg::overrides_with(&local_558,&local_a70,"attributes-only",0xf);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_558,"NotImplemented: copy contents of special files when recursive",
             0x3d);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 0020050b to 0020057d has its CatchHandler @ 002008f6 */
  clap_builder::builder::arg::Arg::new(&local_820,&DAT_0012bdb1,7);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_820,&DAT_0012bdb1,7);
  clap_builder::builder::arg::Arg::value_name(&local_820,&local_a70,"CTX",3);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_820,
             "NotImplemented: set SELinux security context of destination file to default type",0x50
            );
  clap_builder::builder::command::Command::arg(&local_820,&local_558,&local_a70);
                    /* try { // try from 00200598 to 00200619 has its CatchHandler @ 00200839 */
  clap_builder::builder::arg::Arg::new(&local_558,"progress",8);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_558,"progress",8);
  clap_builder::builder::arg::Arg::short(&local_558,&local_a70,0x67);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_558,2);
  clap_builder::builder::arg::Arg::help
            (&local_278,&local_a70,
             "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.",0x4e)
  ;
  clap_builder::builder::command::Command::arg(&local_558,&local_820,&local_278);
                    /* try { // try from 00200637 to 0020067e has its CatchHandler @ 002008e1 */
  clap_builder::builder::arg::Arg::new(&local_820,"paths",5);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_820,1);
  clap_builder::builder::arg::Arg::num_args(&local_820,&local_a70,1);
  (*(code *)PTR_memcpy_002bb710)(&local_a70,&local_820,0x248);
  local_828 = local_5d8 | 1;
  local_824 = local_5d4;
                    /* try { // try from 002006b9 to 002006f3 has its CatchHandler @ 002008e1 */
  clap_builder::builder::arg::Arg::value_hint(&local_820,&local_a70,2);
  local_278 = 2;
  clap_builder::builder::arg::Arg::value_parser(&local_a70,&local_820,&local_278);
  clap_builder::builder::command::Command::arg(param_1,&local_558,&local_a70);
  return param_1;
}