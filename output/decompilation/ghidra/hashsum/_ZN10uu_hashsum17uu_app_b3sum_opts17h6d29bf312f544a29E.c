void __rustcall uu_hashsum::uu_app_b3sum_opts(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_778 [592];
  undefined local_528 [592];
  undefined local_2d8 [712];
  
  (*(code *)PTR_memcpy_0047f5e0)(local_2d8,param_2,0x2c8);
                    /* try { // try from 002db510 to 002db55b has its CatchHandler @ 002db592 */
  clap_builder::builder::arg::Arg::new(auStack_778,"no-names",8);
  clap_builder::builder::arg::Arg::long(local_528,auStack_778,"no-names",8);
  clap_builder::builder::arg::Arg::help
            (auStack_778,local_528,
             "Omits filenames in the output (option not present in GNU/Coreutils)",0x43);
  clap_builder::builder::arg::Arg::action(local_528,auStack_778,2);
  clap_builder::builder::command::Command::arg(param_1,local_2d8,local_528);
  return;
}