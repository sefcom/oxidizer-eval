undefined8 __rustcall uu_ln::uu_app(undefined8 param_1)

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
  clap_builder::builder::command::Command::new(auStack_a48,uVar1);
  clap_builder::builder::command::Command::version(local_530,auStack_a48,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (auStack_a48,local_530,"Make links between files.",0x19);
                    /* try { // try from 001b8f59 to 001b8f72 has its CatchHandler @ 001b977d */
  uucore::format_usage
            (local_780,
             "{} [OPTION]... [-T] TARGET LINK_NAME\n{} [OPTION]... TARGET\n{} [OPTION]... TARGET... DIRECTORY\n{} [OPTION]... -t DIRECTORY TARGET..."
             ,0x83);
  clap_builder::builder::command::Command::override_usage(local_530,auStack_a48,local_780);
  (*(code *)PTR_memcpy_00230f68)(auStack_a48,local_530,700);
  local_78c = local_274 | 0x8000000080;
  local_784 = local_26c;
                    /* try { // try from 001b8fc7 to 001b8fd4 has its CatchHandler @ 001b976d */
  uucore::features::backup_control::arguments::backup(local_780);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_780);
                    /* try { // try from 001b8fed to 001b8ffa has its CatchHandler @ 001b9758 */
  uucore::features::backup_control::arguments::backup_no_args(local_780);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_780);
                    /* try { // try from 001b9013 to 001b9085 has its CatchHandler @ 001b97eb */
  clap_builder::builder::arg::Arg::new(local_530,"force",5);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x66);
  clap_builder::builder::arg::Arg::long(local_530,local_780,"force",5);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,"remove existing destination files",0x21);
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_268);
                    /* try { // try from 001b90b6 to 001b9114 has its CatchHandler @ 001b97d9 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"interactive",0xb);
  clap_builder::builder::arg::Arg::short(local_780,auStack_a48,0x69);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_780,"interactive",0xb);
  clap_builder::builder::arg::Arg::help
            (local_780,auStack_a48,"prompt whether to remove existing destination files",0x33);
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_268);
                    /* try { // try from 001b9145 to 001b91b7 has its CatchHandler @ 001b97cc */
  clap_builder::builder::arg::Arg::new(local_530,"no-dereference",0xe);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x6e);
  clap_builder::builder::arg::Arg::long(local_530,local_780,"no-dereference",0xe);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,
             "treat LINK_NAME as a normal file if it is a symbolic link to a directory",0x48);
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_268);
                    /* try { // try from 001b91e8 to 001b9262 has its CatchHandler @ 001b981c */
  clap_builder::builder::arg::Arg::new(auStack_a48,"logical",7);
  clap_builder::builder::arg::Arg::short(local_780,auStack_a48,0x4c);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_780,"logical",7);
  clap_builder::builder::arg::Arg::help
            (local_780,auStack_a48,"follow TARGETs that are symbolic links",0x26);
  clap_builder::builder::arg::Arg::overrides_with(auStack_a48,local_780,&DAT_00115cc8,8);
  clap_builder::builder::arg::Arg::action(local_780,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_780);
                    /* try { // try from 001b928e to 001b9300 has its CatchHandler @ 001b97bf */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00115cc8,8);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x50);
  clap_builder::builder::arg::Arg::long(local_530,local_780,&DAT_00115cc8,8);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,"make hard links directly to symbolic links",0x2a);
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_268);
                    /* try { // try from 001b9331 to 001b93ab has its CatchHandler @ 001b980a */
  clap_builder::builder::arg::Arg::new(auStack_a48,"symbolicEALREADYDeadlock",8);
  clap_builder::builder::arg::Arg::short(local_780,auStack_a48,0x73);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_780,"symbolicEALREADYDeadlock",8);
  clap_builder::builder::arg::Arg::help
            (local_780,auStack_a48,"make symbolic links instead of hard links",0x29);
  clap_builder::builder::arg::Arg::overrides_with
            (auStack_a48,local_780,"symbolicEALREADYDeadlock",8);
  clap_builder::builder::arg::Arg::action(local_780,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_780);
                    /* try { // try from 001b93d7 to 001b93e4 has its CatchHandler @ 001b9748 */
  uucore::features::backup_control::arguments::suffix(local_780);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_780);
                    /* try { // try from 001b93fd to 001b94a1 has its CatchHandler @ 001b982e */
  clap_builder::builder::arg::Arg::new(auStack_a48,&DAT_00115770,0x10);
  clap_builder::builder::arg::Arg::short(local_780,auStack_a48,0x74);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_780,&DAT_00115770,0x10);
  clap_builder::builder::arg::Arg::help
            (local_780,auStack_a48,"specify the DIRECTORY in which to create the links",0x32);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_780);
  clap_builder::builder::arg::Arg::value_hint(local_780,auStack_a48,4);
  clap_builder::builder::arg::Arg::conflicts_with(local_268,local_780,"no-target-directory",0x13);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_268);
                    /* try { // try from 001b94ba to 001b952c has its CatchHandler @ 001b97b2 */
  clap_builder::builder::arg::Arg::new(local_530,"no-target-directory",0x13);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x54);
  clap_builder::builder::arg::Arg::long(local_530,local_780,"no-target-directory",0x13);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,"treat LINK_NAME as a normal file always",0x27);
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_268);
                    /* try { // try from 001b955d to 001b95d7 has its CatchHandler @ 001b97f8 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"relative",8);
  clap_builder::builder::arg::Arg::short(local_780,auStack_a48,0x72);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_780,"relative",8);
  clap_builder::builder::arg::Arg::help
            (local_780,auStack_a48,"create symbolic links relative to link location",0x2f);
  clap_builder::builder::arg::Arg::requires(auStack_a48,local_780,"symbolicEALREADYDeadlock",8);
  clap_builder::builder::arg::Arg::action(local_780,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_780);
                    /* try { // try from 001b9603 to 001b9675 has its CatchHandler @ 001b97a2 */
  clap_builder::builder::arg::Arg::new(local_530,"verbose",7);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x76);
  clap_builder::builder::arg::Arg::long(local_530,local_780,"verbose",7);
  clap_builder::builder::arg::Arg::help(local_780,local_530,"print name of each linked file",0x1e);
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_268);
                    /* try { // try from 001b96a6 to 001b96e1 has its CatchHandler @ 001b978d */
  clap_builder::builder::arg::Arg::new(auStack_a48,"files",5);
  clap_builder::builder::arg::Arg::action(local_780,auStack_a48,1);
  clap_builder::builder::arg::Arg::value_hint(auStack_a48,local_780,2);
  (*(code *)PTR_memcpy_00230f68)(local_780,auStack_a48,0x248);
  local_538 = local_800 | 1;
  local_534 = local_7fc;
                    /* try { // try from 001b971a to 001b9724 has its CatchHandler @ 001b978d */
  clap_builder::builder::arg::Arg::num_args(auStack_a48,local_780);
  clap_builder::builder::command::Command::arg(param_1,local_530,auStack_a48);
  return param_1;
}