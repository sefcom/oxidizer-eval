long __rustcall uu_whoami::uu_app(long param_1)

{
  undefined8 uVar1;
  undefined local_5c0 [24];
  undefined local_5a8 [700];
  ulong local_2ec;
  undefined4 local_2e4;
  undefined local_2e0 [712];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_2e0,uVar1);
  clap_builder::builder::command::Command::version(local_5a8,local_2e0);
  clap_builder::builder::command::Command::about(local_2e0,local_5a8);
                    /* try { // try from 001a55f8 to 001a560e has its CatchHandler @ 001a5670 */
  uucore::format_usage(local_5c0,"{}",2);
  clap_builder::builder::command::Command::override_usage(local_5a8,local_2e0,local_5c0);
  (*(code *)PTR_memcpy_0020b650)(param_1,local_5a8,700);
  *(ulong *)(param_1 + 700) = local_2ec | 0x8000000080;
  *(undefined4 *)(param_1 + 0x2c4) = local_2e4;
  return param_1;
}