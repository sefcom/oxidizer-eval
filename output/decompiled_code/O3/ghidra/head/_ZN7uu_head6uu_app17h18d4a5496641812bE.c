undefined8 __rustcall uu_head::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_a50 [584];
  uint local_808;
  undefined4 local_804;
  undefined local_800 [700];
  ulong local_544;
  undefined4 local_53c;
  undefined local_538 [584];
  uint local_2f0;
  undefined4 local_2ec;
  ulong local_27c;
  undefined4 local_274;
  char *local_270;
  undefined8 local_268;
  char *local_260;
  undefined8 local_258;
  uint local_28;
  undefined4 local_24;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_800,uVar1);
  clap_builder::builder::command::Command::version(local_538,local_800,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_800,local_538,
             "Print the first 10 lines of each `FILE` to standard output.\nWith more than one `FILE`, precede each with a header giving the file name.\nWith no `FILE`, or when `FILE` is `-`, read standard input.\n\nMandatory arguments to long flags are mandatory for short flags too."
             ,0x109);
                    /* try { // try from 001b87b5 to 001b87cb has its CatchHandler @ 001b8e35 */
  uucore::format_usage(local_a50,"{} [FLAG]... [FILE]...",0x16);
  clap_builder::builder::command::Command::override_usage(local_538,local_800,local_a50);
  (*(code *)PTR_memcpy_00231488)(local_800,local_538,700);
  local_544 = local_27c | 0x8000000080;
  local_53c = local_274;
                    /* try { // try from 001b8827 to 001b88f1 has its CatchHandler @ 001b8eb3 */
  clap_builder::builder::arg::Arg::new(local_538,"BYTES",5);
  clap_builder::builder::arg::Arg::short(local_a50,local_538,99);
  clap_builder::builder::arg::Arg::long(local_538,local_a50,"bytes",5);
  clap_builder::builder::arg::Arg::value_name(local_a50,local_538);
  clap_builder::builder::arg::Arg::help
            (local_538,local_a50,
             "print the first NUM bytes of each file;\nwith the leading \'-\', print all but the last\nNUM bytes of each file"
             ,0x6b);
  local_270 = "BYTES";
  local_268 = 5;
  local_260 = "LINES";
  local_258 = 5;
  clap_builder::builder::arg::Arg::overrides_with_all(local_a50,local_538,&local_270);
  (*(code *)PTR_memcpy_00231488)(&local_270,local_a50,0x248);
  local_28 = local_808 | 0x20;
  local_24 = local_804;
  clap_builder::builder::command::Command::arg(local_538,local_800,&local_270);
                    /* try { // try from 001b8944 to 001b8a07 has its CatchHandler @ 001b8ea1 */
  clap_builder::builder::arg::Arg::new(local_800,"LINES",5);
  clap_builder::builder::arg::Arg::short(local_a50,local_800,0x6e);
  clap_builder::builder::arg::Arg::long(local_800,local_a50,"lines",5);
  clap_builder::builder::arg::Arg::value_name(local_a50,local_800);
  clap_builder::builder::arg::Arg::help
            (local_800,local_a50,
             "print the first NUM lines instead of the first 10;\nwith the leading \'-\', print all but the last\nNUM lines of each file"
             ,0x76);
  local_270 = "LINES";
  local_268 = 5;
  local_260 = "BYTES";
  local_258 = 5;
  clap_builder::builder::arg::Arg::overrides_with_all(local_a50,local_800,&local_270);
  (*(code *)PTR_memcpy_00231488)(&local_270,local_a50,0x248);
  local_28 = local_808 | 0x20;
  local_24 = local_804;
  clap_builder::builder::command::Command::arg(local_800,local_538,&local_270);
                    /* try { // try from 001b8a5a to 001b8b30 has its CatchHandler @ 001b8e8f */
  clap_builder::builder::arg::Arg::new(local_538,"QUIET",5);
  clap_builder::builder::arg::Arg::short(local_a50,local_538,0x71);
  clap_builder::builder::arg::Arg::long(local_538,local_a50,"quiet",5);
  clap_builder::builder::arg::Arg::visible_alias(local_a50,local_538,"silent",6);
  clap_builder::builder::arg::Arg::help
            (local_538,local_a50,"never print headers giving file names",0x25);
  local_270 = "VERBOSE";
  local_268 = 7;
  local_260 = "QUIET";
  local_258 = 5;
  clap_builder::builder::arg::Arg::overrides_with_all(local_a50,local_538,&local_270);
  clap_builder::builder::arg::Arg::action(&local_270,local_a50,2);
  clap_builder::builder::command::Command::arg(local_538,local_800,&local_270);
                    /* try { // try from 001b8b63 to 001b8c14 has its CatchHandler @ 001b8e7d */
  clap_builder::builder::arg::Arg::new(local_800,"VERBOSE",7);
  clap_builder::builder::arg::Arg::short(local_a50,local_800,0x76);
  clap_builder::builder::arg::Arg::long(local_800,local_a50,"verbose",7);
  clap_builder::builder::arg::Arg::help
            (local_a50,local_800,"always print headers giving file names",0x26);
  local_270 = "QUIET";
  local_268 = 5;
  local_260 = "VERBOSE";
  local_258 = 7;
  clap_builder::builder::arg::Arg::overrides_with_all(local_800,local_a50,&local_270);
  clap_builder::builder::arg::Arg::action(local_a50,local_800,2);
  clap_builder::builder::command::Command::arg(local_800,local_538,local_a50);
                    /* try { // try from 001b8c47 to 001b8c9b has its CatchHandler @ 001b8e59 */
  clap_builder::builder::arg::Arg::new(local_538,"-PRESUME-INPUT-PIPE",0x13);
  clap_builder::builder::arg::Arg::long(local_a50,local_538,"presume-input-pipe",0x12);
  clap_builder::builder::arg::Arg::alias(local_538,local_a50,"-presume-input-pipe",0x13);
  (*(code *)PTR_memcpy_00231488)(local_a50,local_538,0x248);
  local_808 = local_2f0 | 4;
  local_804 = local_2ec;
  clap_builder::builder::arg::Arg::action(&local_270,local_a50,2);
  clap_builder::builder::command::Command::arg(local_538,local_800,&local_270);
                    /* try { // try from 001b8d06 to 001b8d90 has its CatchHandler @ 001b8e6b */
  clap_builder::builder::arg::Arg::new(local_800,&DAT_00114c00,4);
  clap_builder::builder::arg::Arg::short(local_a50,local_800,0x7a);
  clap_builder::builder::arg::Arg::long(local_800,local_a50,"zero-terminated",0xf);
  clap_builder::builder::arg::Arg::help
            (local_a50,local_800,"line delimiter is NUL, not newline",0x22);
  clap_builder::builder::arg::Arg::overrides_with(local_800,local_a50,&DAT_00114c00,4);
  clap_builder::builder::arg::Arg::action(local_a50,local_800,2);
  clap_builder::builder::command::Command::arg(local_800,local_538,local_a50);
                    /* try { // try from 001b8dc3 to 001b8e0a has its CatchHandler @ 001b8e47 */
  clap_builder::builder::arg::Arg::new(local_538,&DAT_00114c58,4);
  clap_builder::builder::arg::Arg::action(local_a50,local_538,1);
  clap_builder::builder::arg::Arg::value_hint(local_538,local_a50,3);
  clap_builder::builder::command::Command::arg(param_1,local_800,local_538);
  return param_1;
}