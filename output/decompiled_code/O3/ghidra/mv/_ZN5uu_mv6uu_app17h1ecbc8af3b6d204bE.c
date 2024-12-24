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
  clap_builder::builder::command::Command::version(local_820,&local_540,&DAT_00125f80,6);
  clap_builder::builder::command::Command::about(&local_540,local_820,&DAT_00125f86,0x40);
                    /* try { // try from 001e7a67 to 001e7a7d has its CatchHandler @ 001e8431 */
  uucore::format_usage(&local_a70,&DAT_00125fc6,0x68);
  clap_builder::builder::command::Command::override_usage(local_820,&local_540,&local_a70);
  local_a70 = &PTR_DAT_00287020;
  local_a68 = _<&T_as_core::fmt::Display>::fmt;
  local_a60 = &PTR_DAT_00287010;
  local_a58 = _<&T_as_core::fmt::Display>::fmt;
  local_540 = &DAT_00287030;
  local_538 = 2;
  local_520 = 0;
  local_528 = 2;
                    /* try { // try from 001e7aff to 001e7b13 has its CatchHandler @ 001e841c */
  local_530 = &local_a70;
  core::option::Option<T>::map_or_else(local_558,&local_540);
  clap_builder::builder::command::Command::after_help(&local_540,local_820,local_558);
  (*(code *)PTR_memcpy_0028ce50)(local_820,&local_540,700);
  local_564 = local_284 | 0x8000000080;
  local_55c = local_27c;
                    /* try { // try from 001e7b72 to 001e7c31 has its CatchHandler @ 001e84dc */
  clap_builder::builder::arg::Arg::new(&local_540,&DAT_00125f2c,5);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_540,0x66);
  clap_builder::builder::arg::Arg::long(&local_540,&local_a70,&DAT_00125f2c,5);
  clap_builder::builder::arg::Arg::help(&local_a70,&local_540,&DAT_00120cf0,0x20);
  local_278 = &DAT_00125f31;
  local_270 = 0xb;
  local_268 = &DAT_00125f3c;
  local_260 = 10;
  clap_builder::builder::arg::Arg::overrides_with_all(&local_540,&local_a70,&local_278);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_540,2);
  clap_builder::builder::command::Command::arg(&local_540,local_820,&local_a70);
                    /* try { // try from 001e7c64 to 001e7d15 has its CatchHandler @ 001e84ca */
  clap_builder::builder::arg::Arg::new(local_820,&DAT_00125f31,0xb);
  clap_builder::builder::arg::Arg::short(&local_a70,local_820,0x69);
  clap_builder::builder::arg::Arg::long(local_820,&local_a70,&DAT_00125f31,0xb);
  clap_builder::builder::arg::Arg::help(&local_a70,local_820,"prompt before override",0x16);
  local_278 = &DAT_00125f2c;
  local_270 = 5;
  local_268 = &DAT_00125f3c;
  local_260 = 10;
  clap_builder::builder::arg::Arg::overrides_with_all(local_820,&local_a70,&local_278);
  clap_builder::builder::arg::Arg::action(&local_a70,local_820,2);
  clap_builder::builder::command::Command::arg(local_820,&local_540,&local_a70);
                    /* try { // try from 001e7d48 to 001e7df6 has its CatchHandler @ 001e84b8 */
  clap_builder::builder::arg::Arg::new(&local_540,&DAT_00125f3c,10);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_540,0x6e);
  clap_builder::builder::arg::Arg::long(&local_540,&local_a70,&DAT_00125f3c,10);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_540,"do not overwrite an existing file",0x21);
  local_278 = &DAT_00125f2c;
  local_270 = 5;
  local_268 = &DAT_00125f31;
  local_260 = 0xb;
  clap_builder::builder::arg::Arg::overrides_with_all(&local_540,&local_a70,&local_278);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_540,2);
  clap_builder::builder::command::Command::arg(&local_540,local_820,&local_a70);
                    /* try { // try from 001e7e29 to 001e7e7d has its CatchHandler @ 001e8494 */
  clap_builder::builder::arg::Arg::new(local_820,&DAT_00125f46,0x16);
  clap_builder::builder::arg::Arg::long(&local_a70,local_820,&DAT_00125f46,0x16);
  clap_builder::builder::arg::Arg::help
            (local_820,&local_a70,"remove any trailing slashes from each SOURCE argument",0x35);
  clap_builder::builder::arg::Arg::action(&local_a70,local_820,2);
  clap_builder::builder::command::Command::arg(local_820,&local_540,&local_a70);
                    /* try { // try from 001e7eb0 to 001e7eba has its CatchHandler @ 001e8407 */
  uucore::features::backup_control::arguments::backup(&local_a70);
  clap_builder::builder::command::Command::arg(&local_540,local_820,&local_a70);
                    /* try { // try from 001e7ed5 to 001e7edf has its CatchHandler @ 001e83f2 */
  uucore::features::backup_control::arguments::backup_no_args(&local_a70);
  clap_builder::builder::command::Command::arg(local_820,&local_540,&local_a70);
                    /* try { // try from 001e7efa to 001e7f04 has its CatchHandler @ 001e83dd */
  uucore::features::backup_control::arguments::suffix(&local_a70);
  clap_builder::builder::command::Command::arg(&local_540,local_820,&local_a70);
                    /* try { // try from 001e7f1f to 001e7f29 has its CatchHandler @ 001e83c8 */
  uucore::features::update_control::arguments::update(&local_a70);
  clap_builder::builder::command::Command::arg(local_820,&local_540,&local_a70);
                    /* try { // try from 001e7f44 to 001e7f4e has its CatchHandler @ 001e83b3 */
  uucore::features::update_control::arguments::update_no_args(&local_a70);
  clap_builder::builder::command::Command::arg(&local_540,local_820,&local_a70);
                    /* try { // try from 001e7f69 to 001e8064 has its CatchHandler @ 001e84ee */
  clap_builder::builder::arg::Arg::new(local_820,"target-directory",0x10);
  clap_builder::builder::arg::Arg::short(&local_a70,local_820,0x74);
  clap_builder::builder::arg::Arg::long(local_820,&local_a70,"target-directory",0x10);
  clap_builder::builder::arg::Arg::help
            (&local_a70,local_820,"move all SOURCE arguments into DIRECTORY",0x28);
  clap_builder::builder::arg::Arg::value_name(local_820,&local_a70);
  clap_builder::builder::arg::Arg::value_hint(&local_a70,local_820,4);
  clap_builder::builder::arg::Arg::conflicts_with(local_820,&local_a70,&DAT_00125f5c,0x13);
  local_a88 = 2;
  local_268 = (undefined *)local_a78;
  local_278 = (undefined *)0x2;
  local_270 = local_a80;
  clap_builder::builder::arg::Arg::value_parser(&local_a70,local_820,&local_278);
  clap_builder::builder::command::Command::arg(local_820,&local_540,&local_a70);
                    /* try { // try from 001e807f to 001e80eb has its CatchHandler @ 001e8482 */
  clap_builder::builder::arg::Arg::new(&local_540,&DAT_00125f5c,0x13);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_540,0x54);
  clap_builder::builder::arg::Arg::long(&local_540,&local_a70,&DAT_00125f5c,0x13);
  clap_builder::builder::arg::Arg::help(&local_a70,&local_540,"treat DEST as a normal file",0x1b);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_540,local_820,&local_278);
                    /* try { // try from 001e811e to 001e818a has its CatchHandler @ 001e8470 */
  clap_builder::builder::arg::Arg::new(local_820,&DAT_00125f6f,7);
  clap_builder::builder::arg::Arg::short(&local_a70,local_820,0x76);
  clap_builder::builder::arg::Arg::long(local_820,&local_a70,&DAT_00125f6f,7);
  clap_builder::builder::arg::Arg::help(&local_a70,local_820,"explain what is being done",0x1a);
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(local_820,&local_540,&local_278);
                    /* try { // try from 001e81bd to 001e8229 has its CatchHandler @ 001e845b */
  clap_builder::builder::arg::Arg::new(&local_540,"progress",8);
  clap_builder::builder::arg::Arg::short(&local_a70,&local_540,0x67);
  clap_builder::builder::arg::Arg::long(&local_540,&local_a70,"progress",8);
  clap_builder::builder::arg::Arg::help
            (&local_a70,&local_540,
             "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.",0x4e)
  ;
  clap_builder::builder::arg::Arg::action(&local_278,&local_a70,2);
  clap_builder::builder::command::Command::arg(&local_540,local_820,&local_278);
                    /* try { // try from 001e825c to 001e829e has its CatchHandler @ 001e84a6 */
  clap_builder::builder::arg::Arg::new(local_820,&DAT_00125f76,5);
  clap_builder::builder::arg::Arg::action(&local_a70,local_820,1);
  clap_builder::builder::arg::Arg::num_args(local_820,&local_a70);
  (*(code *)PTR_memcpy_0028ce50)(&local_a70,local_820,0x248);
  local_828 = local_5d8 | 1;
  local_824 = local_5d4;
                    /* try { // try from 001e82d9 to 001e8302 has its CatchHandler @ 001e84a6 */
  clap_builder::builder::arg::Arg::value_parser(local_820,&local_a70,&local_a88);
  clap_builder::builder::arg::Arg::value_hint(&local_a70,local_820,2);
  clap_builder::builder::command::Command::arg(local_820,&local_540,&local_a70);
                    /* try { // try from 001e831d to 001e8371 has its CatchHandler @ 001e8446 */
  clap_builder::builder::arg::Arg::new(&local_540,&DAT_00125f7b,5);
  clap_builder::builder::arg::Arg::long(&local_a70,&local_540,&DAT_00125f7b,5);
  clap_builder::builder::arg::Arg::help
            (&local_540,&local_a70,"explain how a file is copied. Implies -v",0x28);
  clap_builder::builder::arg::Arg::action(&local_a70,&local_540,2);
  clap_builder::builder::command::Command::arg(param_1,local_820,&local_a70);
  return param_1;
}