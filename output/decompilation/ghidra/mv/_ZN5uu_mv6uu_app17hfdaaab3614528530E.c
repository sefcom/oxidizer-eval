undefined8 __rustcall uu_mv::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined8 local_a78;
  undefined **local_a70;
  code *local_a68;
  undefined **local_a60;
  code *local_a58;
  uint local_828;
  undefined4 local_824;
  undefined local_820 [584];
  uint local_5d8;
  undefined4 local_5d4;
  ulong local_564;
  undefined4 local_55c;
  undefined local_558 [24];
  undefined *local_540;
  undefined8 local_538;
  undefined ***local_530;
  undefined8 local_528;
  undefined8 local_520;
  ulong local_284;
  undefined4 local_27c;
  undefined *local_278;
  undefined8 local_270;
  undefined *local_268;
  undefined8 local_260;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(&local_540,uVar1);
  clap_builder::builder::command::Command::version(local_820,&local_540,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (&local_540,local_820,"Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`."
             ,0x40);
                    /* try { // try from 001e8687 to 001e869d has its CatchHandler @ 001e9051 */
  uucore::format_usage
            (&local_a70,
             "{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE..."
             ,0x68);
  clap_builder::builder::command::Command::override_usage(local_820,&local_540,&local_a70);
  local_a70 = &PTR_DAT_00287db0;
  local_a68 = _<&T_as_core::fmt::Display>::fmt;
  local_a60 = &PTR_DAT_00287da0;
  local_a58 = _<&T_as_core::fmt::Display>::fmt;
  local_540 = &DAT_00287dc0;
  local_538 = 2;
  local_520 = 0;
  local_528 = 2;
                    /* try { // try from 001e871f to 001e8733 has its CatchHandler @ 001e903c */
  local_530 = &local_a70;
  core::option::Option<T>::map_or_else(local_558,&local_540);
  clap_builder::builder::command::Command::after_help(&local_540,local_820,local_558);
  (*(code *)PTR_memcpy_0028dbf0)(local_820,&local_540,700);
  local_564 = local_284 | 0x8000000080;
  local_55c = local_27c;
                    /* try { // try from 001e8792 to 001e8851 has its CatchHandler @ 001e90fc */
  clap_builder::builder::arg::Arg::new(&local_540,&DAT_0012622c,5);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_540,0x66);
  clap_builder::builder::arg::Arg::long(&local_540,&local_a70,&DAT_0012622c,5);
  clap_builder::builder::arg::Arg::help(&local_a70,&local_540,&DAT_00120ff0,0x20);
  local_278 = &DAT_00126231;
  local_270 = 0xb;
  local_268 = &DAT_0012623c;
  local_260 = 10;
  clap_builder::builder::arg::Arg::overrides_with_all(&local_540,&local_a70,&local_278);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_540,2);
  clap_builder::builder::command::Command::arg(&local_540,local_820,&local_a70);
                    /* try { // try from 001e8884 to 001e8935 has its CatchHandler @ 001e90ea */
  clap_builder::builder::arg::Arg::new(local_820,&DAT_00126231,0xb);
  clap_builder::builder::arg::Arg::short(&local_a70,local_820,0x69);
  clap_builder::builder::arg::Arg::long(local_820,&local_a70,&DAT_00126231,0xb);
  clap_builder::builder::arg::Arg::help(&local_a70,local_820,"prompt before override",0x16);
  local_278 = &DAT_0012622c;
  local_270 = 5;
  local_268 = &DAT_0012623c;
  local_260 = 10;
  clap_builder::builder::arg::Arg::overrides_with_all(local_820,&local_a70,&local_278);
  clap_builder::builder::arg::Arg::action(&local_a70,local_820,2);
  clap_builder::builder::command::Command::arg(local_820,&local_540,&local_a70);
                    /* try { // try from 001e8968 to 001e8a16 has its CatchHandler @ 001e90d8 */
  clap_builder::builder::arg::Arg::new(&local_540,&DAT_0012623c,10);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_540,0x6e);
  clap_builder::builder::arg::Arg::long(&local_540,&local_a70,&DAT_0012623c,10);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_540,"do not overwrite an existing file",0x21);
  local_278 = &DAT_0012622c;
  local_270 = 5;
  local_268 = &DAT_00126231;
  local_260 = 0xb;
  clap_builder::builder::arg::Arg::overrides_with_all(&local_540,&local_a70,&local_278);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_540,2);
  clap_builder::builder::command::Command::arg(&local_540,local_820,&local_a70);
                    /* try { // try from 001e8a49 to 001e8a9d has its CatchHandler @ 001e90b4 */
  clap_builder::builder::arg::Arg::new(local_820,&DAT_00126246,0x16);
  clap_builder::builder::arg::Arg::long(&local_a70,local_820,&DAT_00126246,0x16);
  clap_builder::builder::arg::Arg::help
            (local_820,&local_a70,"remove any trailing slashes from each SOURCE argument",0x35);
  clap_builder::builder::arg::Arg::action(&local_a70,local_820,2);
  clap_builder::builder::command::Command::arg(local_820,&local_540,&local_a70);
                    /* try { // try from 001e8ad0 to 001e8ada has its CatchHandler @ 001e9027 */
  uucore::features::backup_control::arguments::backup(&local_a70);
  clap_builder::builder::command::Command::arg(&local_540,local_820,&local_a70);
                    /* try { // try from 001e8af5 to 001e8aff has its CatchHandler @ 001e9012 */
  uucore::features::backup_control::arguments::backup_no_args(&local_a70);
  clap_builder::builder::command::Command::arg(local_820,&local_540,&local_a70);
                    /* try { // try from 001e8b1a to 001e8b24 has its CatchHandler @ 001e8ffd */
  uucore::features::backup_control::arguments::suffix(&local_a70);
  clap_builder::builder::command::Command::arg(&local_540,local_820,&local_a70);
                    /* try { // try from 001e8b3f to 001e8b49 has its CatchHandler @ 001e8fe8 */
  uucore::features::update_control::arguments::update(&local_a70);
  clap_builder::builder::command::Command::arg(local_820,&local_540,&local_a70);
                    /* try { // try from 001e8b64 to 001e8b6e has its CatchHandler @ 001e8fd3 */
  uucore::features::update_control::arguments::update_no_args(&local_a70);
  clap_builder::builder::command::Command::arg(&local_540,local_820,&local_a70);
                    /* try { // try from 001e8b89 to 001e8c84 has its CatchHandler @ 001e910e */
  clap_builder::builder::arg::Arg::new(local_820,"target-directory",0x10);
  clap_builder::builder::arg::Arg::short(&local_a70,local_820,0x74);
  clap_builder::builder::arg::Arg::long(local_820,&local_a70,"target-directory",0x10);
  clap_builder::builder::arg::Arg::help
            (&local_a70,local_820,"move all SOURCE arguments into DIRECTORY",0x28);
  clap_builder::builder::arg::Arg::value_name(local_820,&local_a70);
  clap_builder::builder::arg::Arg::value_hint(&local_a70,local_820,4);
  clap_builder::builder::arg::Arg::conflicts_with(local_820,&local_a70,&DAT_0012625c,0x13);
  local_a88 = 2;
  local_268 = (undefined *)local_a78;
  local_278 = (undefined *)0x2;
  local_270 = local_a80;
  clap_builder::builder::arg::Arg::value_parser(&local_a70,local_820,&local_278);
  clap_builder::builder::command::Command::arg(local_820,&local_540,&local_a70);
                    /* try { // try from 001e8c9f to 001e8d0b has its CatchHandler @ 001e90a2 */
  clap_builder::builder::arg::Arg::new(&local_540,&DAT_0012625c,0x13);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_540,0x54);
  clap_builder::builder::arg::Arg::long(&local_540,&local_a70,&DAT_0012625c,0x13);
  clap_builder::builder::arg::Arg::help(&local_a70,&local_540,"treat DEST as a normal file",0x1b);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_540,local_820,&local_278);
                    /* try { // try from 001e8d3e to 001e8daa has its CatchHandler @ 001e9090 */
  clap_builder::builder::arg::Arg::new(local_820,&DAT_0012626f,7);
  clap_builder::builder::arg::Arg::short(&local_a70,local_820,0x76);
  clap_builder::builder::arg::Arg::long(local_820,&local_a70,&DAT_0012626f,7);
  clap_builder::builder::arg::Arg::help(&local_a70,local_820,"explain what is being done",0x1a);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(local_820,&local_540,&local_278);
                    /* try { // try from 001e8ddd to 001e8e49 has its CatchHandler @ 001e907b */
  clap_builder::builder::arg::Arg::new(&local_540,"progress",8);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_540,0x67);
  clap_builder::builder::arg::Arg::long(&local_540,&local_a70,"progress",8);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_540,
             "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.",0x4e)
  ;
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_540,local_820,&local_278);
                    /* try { // try from 001e8e7c to 001e8ebe has its CatchHandler @ 001e90c6 */
  clap_builder::builder::arg::Arg::new(local_820,&DAT_00126276,5);
  clap_builder::builder::arg::Arg::action(&local_a70,local_820,1);
  clap_builder::builder::arg::Arg::num_args(local_820,&local_a70);
  (*(code *)PTR_memcpy_0028dbf0)(&local_a70,local_820,0x248);
  local_828 = local_5d8 | 1;
  local_824 = local_5d4;
                    /* try { // try from 001e8ef9 to 001e8f22 has its CatchHandler @ 001e90c6 */
  clap_builder::builder::arg::Arg::value_parser(local_820,&local_a70,&local_a88);
  clap_builder::builder::arg::Arg::value_hint(&local_a70,local_820,2);
  clap_builder::builder::command::Command::arg(local_820,&local_540,&local_a70);
                    /* try { // try from 001e8f3d to 001e8f91 has its CatchHandler @ 001e9066 */
  clap_builder::builder::arg::Arg::new(&local_540,&DAT_0012627b,5);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_540,&DAT_0012627b,5);
  clap_builder::builder::arg::Arg::help
            (&local_540,&local_a70,"explain how a file is copied. Implies -v",0x28);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_540,2);
  clap_builder::builder::command::Command::arg(param_1,local_820,&local_a70);
  return param_1;
}