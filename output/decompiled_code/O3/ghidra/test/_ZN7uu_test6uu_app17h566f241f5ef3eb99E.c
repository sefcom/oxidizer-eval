undefined8 __rustcall uu_test::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_5c0 [24];
  undefined local_5a8 [712];
  undefined local_2e0 [712];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_5a8,uVar1);
  clap_builder::builder::command::Command::version(local_2e0,local_5a8,&DAT_0011c4e2,6);
  clap_builder::builder::command::Command::about(local_5a8,local_2e0,&DAT_0011c4e8,0x24);
                    /* try { // try from 001ac0ed to 001ac103 has its CatchHandler @ 001ac145 */
  uucore::format_usage(local_5c0,&DAT_0011c50c,0x2f);
  clap_builder::builder::command::Command::override_usage(local_2e0,local_5a8,local_5c0);
  clap_builder::builder::command::Command::after_help(param_1,local_2e0,&DAT_0011c53b,0xbef);
  return param_1;
}