undefined8 __rustcall uu_mkdir::uu_app(undefined8 param_1)

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
  undefined8 local_268 [74];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(auStack_a48,uVar1);
  clap_builder::builder::command::Command::version(local_530,auStack_a48,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (auStack_a48,local_530,"Create the given DIRECTORY(ies) if they do not exist",0x34);
                    /* try { // try from 001b2df9 to 001b2e12 has its CatchHandler @ 001b3106 */
  uucore::format_usage(local_780,"{} [OPTION]... DIRECTORY...",0x1b);
  clap_builder::builder::command::Command::override_usage(local_530,auStack_a48,local_780);
  (*(code *)PTR_memcpy_00225668)(auStack_a48,local_530,700);
  local_78c = local_274 | 0x8000000080;
  local_784 = local_26c;
                    /* try { // try from 001b2e67 to 001b2ed9 has its CatchHandler @ 001b3120 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00114588,4);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x6d);
  clap_builder::builder::arg::Arg::long(local_530,local_780,&DAT_00114588,4);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,"set file mode (not implemented on windows)",0x2a);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_780);
                    /* try { // try from 001b2ef2 to 001b2f6c has its CatchHandler @ 001b313f */
  clap_builder::builder::arg::Arg::new(auStack_a48,"parents",7);
  clap_builder::builder::arg::Arg::short(local_780,auStack_a48,0x70);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_780,"parents",7);
  clap_builder::builder::arg::Arg::help
            (local_780,auStack_a48,"make parent directories as needed",0x21);
  clap_builder::builder::arg::Arg::overrides_with(auStack_a48,local_780,"parents",7);
  clap_builder::builder::arg::Arg::action(local_780,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_780);
                    /* try { // try from 001b2f98 to 001b300a has its CatchHandler @ 001b3113 */
  clap_builder::builder::arg::Arg::new(local_530,"verbose",7);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x76);
  clap_builder::builder::arg::Arg::long(local_530,local_780,"verbose",7);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,"print a message for each printed directory: \n",0x2a);
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_268);
                    /* try { // try from 001b303b to 001b3071 has its CatchHandler @ 001b312d */
  clap_builder::builder::arg::Arg::new(auStack_a48,&DAT_00114530,4);
  clap_builder::builder::arg::Arg::action(local_780,auStack_a48,1);
  clap_builder::builder::arg::Arg::num_args(auStack_a48,local_780);
  (*(code *)PTR_memcpy_00225668)(local_780,auStack_a48,0x248);
  local_538 = local_800 | 1;
  local_534 = local_7fc;
  local_268[0] = 2;
                    /* try { // try from 001b30b6 to 001b30dd has its CatchHandler @ 001b312d */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_780,local_268);
  clap_builder::builder::arg::Arg::value_hint(local_780,auStack_a48,4);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_780);
  return param_1;
}