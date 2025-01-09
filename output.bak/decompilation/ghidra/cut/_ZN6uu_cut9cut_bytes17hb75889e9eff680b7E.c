undefined  [16] __rustcall
uu_cut::cut_bytes(undefined4 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined local_b1;
  undefined local_b0 [16];
  long local_a0;
  undefined8 *local_98;
  undefined *puStack_90;
  char *local_88;
  long local_80;
  long *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_58 [16];
  undefined8 local_48;
  undefined local_40 [48];
  
  uVar1 = *(undefined *)(param_4 + 5);
  local_b1 = uVar1;
  local_68 = param_2;
  local_60 = param_3;
  std::io::buffered::bufreader::BufReader<R>::with_capacity(local_40,0x2000,param_1);
                    /* try { // try from 001b6102 to 001b6106 has its CatchHandler @ 001b622b */
  local_b0 = stdout_writer();
  pcVar2 = (char *)*param_4;
  local_80 = 1;
  if (pcVar2 != (char *)0x0) {
    local_80 = param_4[1];
  }
  local_88 = "\t";
  if (pcVar2 != (char *)0x0) {
    local_88 = pcVar2;
  }
  local_98 = &local_68;
  puStack_90 = local_b0;
  local_70 = &local_b1;
                    /* try { // try from 001b6159 to 001b616b has its CatchHandler @ 001b6211 */
  local_78 = param_4;
  local_a0 = bstr::io::BufReadExt::for_byte_record(local_40,uVar1,&local_98);
  if (local_a0 == 0) {
    core::ptr::drop_in_place<alloc::boxed::Box<dyn_std::io::Write>>(local_b0._0_8_,local_b0._8_8_);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(local_40);
    uVar3 = 0;
  }
  else {
                    /* try { // try from 001b6176 to 001b61aa has its CatchHandler @ 001b6202 */
    _<T_as_alloc::string::ToString>::to_string(local_58,&local_a0);
    local_80 = CONCAT44(local_80._4_4_,1);
    local_88 = (char *)local_48;
    uVar3 = ::alloc::boxed::Box<T>::new(&local_98);
                    /* try { // try from 001b61b3 to 001b61b7 has its CatchHandler @ 001b6211 */
    core::ptr::drop_in_place<std::io::error::Error>(local_a0);
                    /* try { // try from 001b61c2 to 001b61e1 has its CatchHandler @ 001b622b */
    core::ptr::drop_in_place<alloc::boxed::Box<dyn_std::io::Write>>(local_b0._0_8_,local_b0._8_8_);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(local_40);
  }
  auVar4._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00228da0;
  auVar4._0_8_ = uVar3;
  return auVar4;
}