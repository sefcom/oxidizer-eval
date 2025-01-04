undefined8 __rustcall uu_rmdir::uu_app(undefined8 param_1)

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
  undefined8 local_270 [74];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_a50,uVar1);
  clap_builder::builder::command::Command::version(local_538,local_a50);
  clap_builder::builder::command::Command::about(local_a50,local_538);
                    /* try { // try from 001aa6d7 to 001aa6f0 has its CatchHandler @ 001aaa21 */
  uucore::format_usage(local_788,"{} [OPTION]... DIRECTORY...",0x1b);
  clap_builder::builder::command::Command::override_usage(local_538,local_a50,local_788);
  (*(code *)PTR_memcpy_00211210)(local_a50,local_538,700);
  local_794 = local_27c | 0x8000000080;
  local_78c = local_274;
  clap_builder::builder::arg::Arg::new(local_538,"ignore-fail-on-non-empty",0x18);
  clap_builder::builder::arg::Arg::long(local_788,local_538,"ignore-fail-on-non-empty",0x18);
                    /* try { // try from 001aa783 to 001aa79e has its CatchHandler @ 001aaa12 */
  clap_builder::builder::arg::Arg::help
            (local_538,local_788,
             "ignore each failure that is solely because a directory is non-empty",0x43);
  clap_builder::builder::arg::Arg::action(local_788,local_538,2);
  clap_builder::builder::command::Command::arg(local_538,local_a50,local_788);
  clap_builder::builder::arg::Arg::new(local_a50,"parents",7);
  clap_builder::builder::arg::Arg::short(local_788,local_a50,0x70);
  clap_builder::builder::arg::Arg::long(local_a50,local_788,"parents",7);
                    /* try { // try from 001aa81d to 001aa838 has its CatchHandler @ 001aaa00 */
  clap_builder::builder::arg::Arg::help
            (local_788,local_a50,
             "remove DIRECTORY and its ancestors; e.g.,\n                  \'rmdir -p a/b/c\' is similar to rmdir a/b/c a/b a"
             ,0x6c);
  clap_builder::builder::arg::Arg::action(local_270,local_788,2);
  clap_builder::builder::command::Command::arg(local_a50,local_538,local_270);
  clap_builder::builder::arg::Arg::new(local_538,"verbose: removing directory, \n",7);
  clap_builder::builder::arg::Arg::short(local_788,local_538,0x76);
  clap_builder::builder::arg::Arg::long(local_538,local_788,"verbose: removing directory, \n",7);
                    /* try { // try from 001aa8bd to 001aa8d8 has its CatchHandler @ 001aa9f1 */
  clap_builder::builder::arg::Arg::help
            (local_788,local_538,"output a diagnostic for every directory processed",0x31);
  clap_builder::builder::arg::Arg::action(local_270,local_788,2);
  clap_builder::builder::command::Command::arg(local_538,local_a50,local_270);
  clap_builder::builder::arg::Arg::new(local_a50,&DAT_00112dfc,4);
  clap_builder::builder::arg::Arg::action(local_788,local_a50,1);
  clap_builder::builder::arg::Arg::num_args(local_a50,local_788);
  (*(code *)PTR_memcpy_00211210)(local_788,local_a50,0x248);
  local_540 = local_808 | 1;
  local_53c = local_804;
  local_270[0] = 2;
                    /* try { // try from 001aa990 to 001aa9a4 has its CatchHandler @ 001aa9df */
  clap_builder::builder::arg::Arg::value_parser(local_a50,local_788,local_270);
  clap_builder::builder::arg::Arg::value_hint(local_788,local_a50);
  clap_builder::builder::command::Command::arg(param_1,local_538,local_788);
  return param_1;
}