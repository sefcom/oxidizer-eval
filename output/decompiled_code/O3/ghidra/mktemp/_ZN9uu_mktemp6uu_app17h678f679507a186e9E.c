undefined8 __rustcall uu_mktemp::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_a60;
  undefined8 local_a58;
  ulong local_a50;
  undefined local_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  undefined local_7f8 [584];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 local_260;
  ulong local_258;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_7f8,uVar1);
  clap_builder::builder::command::Command::version(local_530,local_7f8,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_7f8,local_530,"Create a temporary file or directory.",0x25);
                    /* try { // try from 001bf963 to 001bf979 has its CatchHandler @ 001bff49 */
  uucore::format_usage(local_a48,"{} [OPTION]... [TEMPLATE]",0x19);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,local_a48);
  (*(code *)PTR_memcpy_0023adc8)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8000000080;
  local_534 = local_26c;
                    /* try { // try from 001bf9d5 to 001bfa41 has its CatchHandler @ 001bffa6 */
  clap_builder::builder::arg::Arg::new(local_530,"directory",9);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,100);
  clap_builder::builder::arg::Arg::long(local_530,local_a48,"directory",9);
  clap_builder::builder::arg::Arg::help
            (local_a48,local_530,"Make a directory instead of a file",0x22);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001bfa6f to 001bfadb has its CatchHandler @ 001bff94 */
  clap_builder::builder::arg::Arg::new(local_7f8,"dry-run",7);
  clap_builder::builder::arg::Arg::short(local_a48,local_7f8,0x75);
  clap_builder::builder::arg::Arg::long(local_7f8,local_a48,"dry-run",7);
  clap_builder::builder::arg::Arg::help
            (local_a48,local_7f8,"do not create anything; merely print a name (unsafe)",0x34);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001bfb09 to 001bfb75 has its CatchHandler @ 001bff82 */
  clap_builder::builder::arg::Arg::new(local_530,"quiet",5);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,0x71);
  clap_builder::builder::arg::Arg::long(local_530,local_a48,"quiet",5);
  clap_builder::builder::arg::Arg::help
            (local_a48,local_530,"Fail silently if an error occurs.",0x21);
  clap_builder::builder::arg::Arg::action(&local_268,local_a48);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001bfba3 to 001bfc15 has its CatchHandler @ 001bffb8 */
  clap_builder::builder::arg::Arg::new(local_7f8,"suffix",6);
  clap_builder::builder::arg::Arg::long(local_a48,local_7f8,"suffix",6);
  clap_builder::builder::arg::Arg::help
            (local_7f8,local_a48,
             "append SUFFIX to TEMPLATE; SUFFIX must not contain a path separator. This option is implied if TEMPLATE does not end with X."
             ,0x7c);
  clap_builder::builder::arg::Arg::value_name(local_a48,local_7f8,"SUFFIX",6);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_a48);
                    /* try { // try from 001bfc30 to 001bfd0f has its CatchHandler @ 001bffca */
  clap_builder::builder::arg::Arg::new(local_530,"p",1);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,0x70);
  clap_builder::builder::arg::Arg::help(local_530,local_a48,"short form of --tmpdir",0x16);
  clap_builder::builder::arg::Arg::value_name(local_a48,local_530,"DIR",3);
  clap_builder::builder::arg::Arg::num_args(local_530,local_a48);
  local_a60 = 3;
  local_258 = local_a50;
  local_268 = 3;
  local_260 = local_a58;
  clap_builder::builder::arg::Arg::value_parser(local_a48,local_530,&local_268);
  clap_builder::builder::arg::Arg::value_hint(&local_268,local_a48,4);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 001bfd2d to 001bfdd9 has its CatchHandler @ 001bffdc */
  clap_builder::builder::arg::Arg::new(local_7f8,"tmpdir",6);
  clap_builder::builder::arg::Arg::long(local_a48,local_7f8,"tmpdir",6);
  clap_builder::builder::arg::Arg::help
            (local_7f8,local_a48,
             "interpret TEMPLATE relative to DIR; if DIR is not specified, use $TMPDIR ($TMP on windows) if set, else /tmp. With this option, TEMPLATE must not be an absolute name; unlike with -t, TEMPLATE may contain slashes, but mktemp creates only the final component"
             ,0x100);
  clap_builder::builder::arg::Arg::value_name(local_a48,local_7f8,"DIR",3);
  local_268 = 0;
  local_260 = 1;
  local_258 = local_258 & 0xffffffffffffff00;
  clap_builder::builder::arg::Arg::num_args(local_7f8,local_a48,&local_268);
  (*(code *)PTR_memcpy_0023adc8)(local_a48,local_7f8,0x248);
  local_800 = local_5b0 | 0x80;
  local_7fc = local_5ac;
                    /* try { // try from 001bfe16 to 001bfe5f has its CatchHandler @ 001bffdc */
  clap_builder::builder::arg::Arg::overrides_with(local_7f8,local_a48,"p",1);
  clap_builder::builder::arg::Arg::value_parser(local_a48,local_7f8,&local_a60);
  clap_builder::builder::arg::Arg::value_hint(&local_268,local_a48,4);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 001bfe7d to 001bfecb has its CatchHandler @ 001bff70 */
  clap_builder::builder::arg::Arg::new(local_530,"t",1);
  clap_builder::builder::arg::Arg::short(local_a48,local_530,0x74);
  clap_builder::builder::arg::Arg::help
            (local_530,local_a48,
             "Generate a template (using the supplied prefix and TMPDIR (TMP on windows) if set) to create a filename template [deprecated]"
             ,0x7d);
  clap_builder::builder::arg::Arg::action(local_a48,local_530);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_a48);
                    /* try { // try from 001bfef9 to 001bff23 has its CatchHandler @ 001bff5e */
  clap_builder::builder::arg::Arg::new(local_7f8,"templateDeadlock",8);
  clap_builder::builder::arg::Arg::num_args(local_a48,local_7f8);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_a48);
  return param_1;
}