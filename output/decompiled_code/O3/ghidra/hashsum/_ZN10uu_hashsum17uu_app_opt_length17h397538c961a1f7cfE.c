void __rustcall uu_hashsum::uu_app_opt_length(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_790;
  undefined8 local_788;
  undefined *local_780;
  undefined local_778 [592];
  undefined local_528 [592];
  undefined local_2d8 [712];
  
  (*(code *)PTR_memcpy_004806c8)(local_2d8,param_2,0x2c8);
                    /* try { // try from 002db670 to 002db6a3 has its CatchHandler @ 002db774 */
  clap_builder::builder::arg::Arg::new(local_778,"length",6);
  clap_builder::builder::arg::Arg::long(local_528,local_778,"length",6);
                    /* try { // try from 002db6a4 to 002db6a8 has its CatchHandler @ 002db762 */
  local_788 = ::alloc::boxed::Box<T>::new();
  local_790 = 4;
  local_780 = &DAT_0043fbf0;
                    /* try { // try from 002db6c3 to 002db6d9 has its CatchHandler @ 002db760 */
  clap_builder::builder::arg::Arg::value_parser(local_778,local_528,&local_790);
  clap_builder::builder::arg::Arg::short(local_528,local_778,0x6c);
                    /* try { // try from 002db6f4 to 002db72a has its CatchHandler @ 002db774 */
  clap_builder::builder::arg::Arg::help
            (local_778,local_528,
             "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8"
             ,99);
  clap_builder::builder::arg::Arg::overrides_with(local_528,local_778,"length",6);
  clap_builder::builder::arg::Arg::action(local_778,local_528,0);
  clap_builder::builder::command::Command::arg(param_1,local_2d8,local_778);
  return;
}