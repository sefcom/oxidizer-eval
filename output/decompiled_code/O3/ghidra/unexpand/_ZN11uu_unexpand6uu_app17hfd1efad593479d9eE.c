undefined8 __rustcall uu_unexpand::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
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
  undefined local_268 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_530,uVar1);
  clap_builder::builder::command::Command::version(auStack_a48,local_530,"0.0.28",6);
                    /* try { // try from 001b306f to 001b3088 has its CatchHandler @ 001b33f4 */
  uucore::format_usage(local_780,"{} [OPTION]... [FILE]...",0x18);
  clap_builder::builder::command::Command::override_usage(local_530,auStack_a48,local_780);
  clap_builder::builder::command::Command::about
            (auStack_a48,local_530,
             "Convert blanks in each `FILE` to tabs, writing to standard output.\nWith no `FILE`, or when `FILE` is `-`, read standard input."
             ,0x7e);
  (*(code *)PTR_memcpy_00222858)(local_530,auStack_a48,700);
  local_274 = local_78c | 0x8000000080;
  local_26c = local_784;
                    /* try { // try from 001b30fc to 001b310f has its CatchHandler @ 001b3401 */
  clap_builder::builder::arg::Arg::new(auStack_a48,&DAT_00114c1c,4);
  (*(code *)PTR_memcpy_00222858)(local_780,auStack_a48,0x248);
  local_538 = local_800 | 4;
  local_534 = local_7fc;
  clap_builder::builder::arg::Arg::action(auStack_a48,local_780,1);
                    /* try { // try from 001b315b to 001b316f has its CatchHandler @ 001b3401 */
  clap_builder::builder::arg::Arg::value_hint(local_780,auStack_a48,3);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_780);
                    /* try { // try from 001b3188 to 001b31fa has its CatchHandler @ 001b3437 */
  clap_builder::builder::arg::Arg::new(local_530,"all",3);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x61);
  clap_builder::builder::arg::Arg::long(local_530,local_780,"all",3);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,"convert all blanks, instead of just initial blanks",0x32);
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_268);
                    /* try { // try from 001b322b to 001b3276 has its CatchHandler @ 001b3425 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"first-only",10);
  clap_builder::builder::arg::Arg::long(local_780,auStack_a48,"first-only",10);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_780,"convert only leading sequences of blanks (overrides -a)",0x37);
  clap_builder::builder::arg::Arg::action(local_780,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_780);
                    /* try { // try from 001b32a2 to 001b3341 has its CatchHandler @ 001b3444 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00114ba8,4);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x74);
  clap_builder::builder::arg::Arg::long(local_530,local_780,&DAT_00114ba8,4);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,
             "use comma separated LIST of tab positions or have tabs N characters apart instead of 8 (enables -a)"
             ,99);
  clap_builder::builder::arg::Arg::action(local_530,local_780,1);
  clap_builder::builder::arg::Arg::value_name(local_780,local_530);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_780);
                    /* try { // try from 001b335a to 001b33b8 has its CatchHandler @ 001b3413 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"no-utf8",7);
  clap_builder::builder::arg::Arg::short(local_780,auStack_a48,0x55);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_780,"no-utf8",7);
  clap_builder::builder::arg::Arg::help
            (local_780,auStack_a48,"interpret input file as 8-bit ASCII rather than UTF-8",0x35);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_780,2);
  clap_builder::builder::command::Command::arg(param_1,local_530,auStack_a48);
  return param_1;
}