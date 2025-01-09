undefined8 __rustcall uu_realpath::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_a50 [584];
  uint local_808;
  undefined4 local_804;
  ulong local_794;
  undefined4 local_78c;
  undefined local_788 [584];
  uint local_540;
  undefined4 local_53c;
  undefined local_538 [700];
  ulong local_27c;
  undefined4 local_274;
  char *local_270;
  undefined8 local_268;
  char *local_260;
  undefined8 local_258;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_a50,uVar1);
  clap_builder::builder::command::Command::version(local_538,local_a50,"0.0.28",6);
  clap_builder::builder::command::Command::about(local_a50,local_538,"Print the resolved path",0x17)
  ;
                    /* try { // try from 001b5c6f to 001b5c88 has its CatchHandler @ 001b638b */
  uucore::format_usage(local_788,"{} [OPTION]... FILE...",0x16);
  clap_builder::builder::command::Command::override_usage(local_538,local_a50,local_788);
  (*(code *)PTR_memcpy_002272c8)(local_a50,local_538,700);
  local_794 = local_27c | 0x8000000080;
  local_78c = local_274;
                    /* try { // try from 001b5ce1 to 001b5d53 has its CatchHandler @ 001b63f7 */
  clap_builder::builder::arg::Arg::new(local_538,"quiet",5);
  clap_builder::builder::arg::Arg::short(local_788,local_538,0x71);
  clap_builder::builder::arg::Arg::long(local_538,local_788,"quiet",5);
  clap_builder::builder::arg::Arg::help
            (local_788,local_538,"Do not print warnings for invalid paths",0x27);
  clap_builder::builder::arg::Arg::action(&local_270,local_788,2);
  clap_builder::builder::command::Command::arg(local_538,local_a50,&local_270);
                    /* try { // try from 001b5d86 to 001b5e0d has its CatchHandler @ 001b6415 */
  clap_builder::builder::arg::Arg::new(local_a50,"strip",5);
  clap_builder::builder::arg::Arg::short(local_788,local_a50,0x73);
  clap_builder::builder::arg::Arg::long(local_a50,local_788,"strip",5);
  clap_builder::builder::arg::Arg::visible_alias(local_788,local_a50,"no-symlinks",0xb);
  clap_builder::builder::arg::Arg::help
            (local_a50,local_788,
             "Only strip \'.\' and \'..\' components, but don\'t resolve symbolic links",0x44);
  clap_builder::builder::arg::Arg::action(local_788,local_a50,2);
  clap_builder::builder::command::Command::arg(local_a50,local_538,local_788);
                    /* try { // try from 001b5e3d to 001b5eaf has its CatchHandler @ 001b63e8 */
  clap_builder::builder::arg::Arg::new(local_538,&DAT_00114958,4);
  clap_builder::builder::arg::Arg::short(local_788,local_538,0x7a);
  clap_builder::builder::arg::Arg::long(local_538,local_788,&DAT_00114958,4);
  clap_builder::builder::arg::Arg::help
            (local_788,local_538,"Separate output filenames with \\0 rather than newline",0x35);
  clap_builder::builder::arg::Arg::action(&local_270,local_788,2);
  clap_builder::builder::command::Command::arg(local_538,local_a50,&local_270);
                    /* try { // try from 001b5ee2 to 001b5f4b has its CatchHandler @ 001b63d6 */
  clap_builder::builder::arg::Arg::new(local_a50,"logical",7);
  clap_builder::builder::arg::Arg::short(local_788,local_a50,0x4c);
  clap_builder::builder::arg::Arg::long(local_a50,local_788,"logical",7);
  clap_builder::builder::arg::Arg::help
            (local_788,local_a50,"resolve \'..\' components before symlinks",0x27);
  clap_builder::builder::arg::Arg::action(&local_270,local_788,2);
  clap_builder::builder::command::Command::arg(local_a50,local_538,&local_270);
                    /* try { // try from 001b5f7e to 001b6035 has its CatchHandler @ 001b6406 */
  clap_builder::builder::arg::Arg::new(local_538,&DAT_001149d0,8);
  clap_builder::builder::arg::Arg::short(local_788,local_538,0x50);
  clap_builder::builder::arg::Arg::long(local_538,local_788,&DAT_001149d0,8);
  local_270 = "strip";
  local_268 = 5;
  local_260 = "logical";
  local_258 = 7;
  clap_builder::builder::arg::Arg::overrides_with_all(local_788,local_538,&local_270);
  clap_builder::builder::arg::Arg::help
            (local_538,local_788,"resolve symlinks as encountered (default)",0x29);
  clap_builder::builder::arg::Arg::action(local_788,local_538,2);
  clap_builder::builder::command::Command::arg(local_538,local_a50,local_788);
                    /* try { // try from 001b6068 to 001b60ce has its CatchHandler @ 001b63c4 */
  clap_builder::builder::arg::Arg::new(local_a50,"canonicalize-existing",0x15);
  clap_builder::builder::arg::Arg::short(local_788,local_a50,0x65);
  clap_builder::builder::arg::Arg::long(local_a50,local_788,"canonicalize-existing",0x15);
  clap_builder::builder::arg::Arg::help
            (local_788,local_a50,
             "canonicalize by following every symlink in every component of the given name recursively, all components must exist"
             ,0x73);
  clap_builder::builder::arg::Arg::action(&local_270,local_788,2);
  clap_builder::builder::command::Command::arg(local_a50,local_538,&local_270);
                    /* try { // try from 001b6101 to 001b6173 has its CatchHandler @ 001b63b2 */
  clap_builder::builder::arg::Arg::new(local_538,"canonicalize-missing",0x14);
  clap_builder::builder::arg::Arg::short(local_788,local_538,0x6d);
  clap_builder::builder::arg::Arg::long(local_538,local_788,"canonicalize-missing",0x14);
  clap_builder::builder::arg::Arg::help
            (local_788,local_538,
             "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existence"
             ,0x86);
  clap_builder::builder::arg::Arg::action(&local_270,local_788,2);
  clap_builder::builder::command::Command::arg(local_538,local_a50,&local_270);
                    /* try { // try from 001b61a6 to 001b621e has its CatchHandler @ 001b6436 */
  clap_builder::builder::arg::Arg::new(local_a50,"relative-to",0xb);
  clap_builder::builder::arg::Arg::long(local_788,local_a50,"relative-to",0xb);
  clap_builder::builder::arg::Arg::value_name(local_a50,local_788);
  clap_builder::builder::arg::Arg::value_parser(local_788,local_a50);
  clap_builder::builder::arg::Arg::help
            (&local_270,local_788,"print the resolved path relative to DIR",0x27);
  clap_builder::builder::command::Command::arg(local_a50,local_538,&local_270);
                    /* try { // try from 001b6239 to 001b62bd has its CatchHandler @ 001b6427 */
  clap_builder::builder::arg::Arg::new(local_538,"relative-base",0xd);
  clap_builder::builder::arg::Arg::long(local_788,local_538,"relative-base",0xd);
  clap_builder::builder::arg::Arg::value_name(local_538,local_788);
  clap_builder::builder::arg::Arg::value_parser(local_788,local_538);
  clap_builder::builder::arg::Arg::help
            (&local_270,local_788,"print absolute paths unless paths below DIR",0x2b);
  clap_builder::builder::command::Command::arg(local_538,local_a50,&local_270);
                    /* try { // try from 001b62d8 to 001b62ed has its CatchHandler @ 001b639d */
  clap_builder::builder::arg::Arg::new(local_a50,"files",5);
  clap_builder::builder::arg::Arg::action(local_788,local_a50,1);
  (*(code *)PTR_memcpy_002272c8)(local_a50,local_788,0x248);
  local_808 = local_540 | 1;
  local_804 = local_53c;
                    /* try { // try from 001b633d to 001b6363 has its CatchHandler @ 001b639d */
  clap_builder::builder::arg::Arg::value_parser(local_788,local_a50);
  clap_builder::builder::arg::Arg::value_hint(local_a50,local_788,2);
  clap_builder::builder::command::Command::arg(param_1,local_538,local_a50);
  return param_1;
}