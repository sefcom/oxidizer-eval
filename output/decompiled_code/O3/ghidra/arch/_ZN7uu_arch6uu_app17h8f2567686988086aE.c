long __rustcall uu_arch::uu_app(long param_1)

{
  undefined8 uVar1;
  undefined auStack_5a8 [700];
  ulong local_2ec;
  undefined4 local_2e4;
  undefined local_2e0 [712];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_2e0,uVar1);
  clap_builder::builder::command::Command::version(auStack_5a8,local_2e0);
  clap_builder::builder::command::Command::about(local_2e0,auStack_5a8);
  clap_builder::builder::command::Command::after_help(auStack_5a8,local_2e0);
  (*(code *)PTR_memcpy_00208b58)(param_1,auStack_5a8,700);
  *(ulong *)(param_1 + 700) = local_2ec | 0x8000000080;
  *(undefined4 *)(param_1 + 0x2c4) = local_2e4;
  return param_1;
}