undefined  [16] __rustcall
uu_cut::cut_fields_implicit_out_delim
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined param_5,undefined param_6)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_b2;
  undefined local_b1;
  undefined local_b0 [16];
  long local_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_28 [16];
  undefined8 local_18;
  
  local_b2 = param_5;
  local_b1 = param_6;
  local_68 = param_3;
  local_60 = param_4;
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_58,0x2000,param_1);
                    /* try { // try from 001b6a18 to 001b6a1c has its CatchHandler @ 001b6b39 */
  local_b0 = stdout_writer();
  puStack_90 = &local_b2;
  local_88 = local_b0;
  local_80 = &local_b1;
  local_78 = &local_68;
                    /* try { // try from 001b6a54 to 001b6a65 has its CatchHandler @ 001b6b1f */
  local_98 = param_2;
  local_a0 = bstr::io::BufReadExt::for_byte_record_with_terminator(&local_58,param_6,&local_98);
  if (local_a0 == 0) {
    core::ptr::drop_in_place<alloc::boxed::Box<dyn_std::io::Write>>(local_b0._0_8_,local_b0._8_8_);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>
              (local_58,local_50);
    uVar1 = 0;
  }
  else {
                    /* try { // try from 001b6a70 to 001b6aad has its CatchHandler @ 001b6b10 */
    _<T_as_alloc::string::ToString>::to_string(local_28,&local_a0);
    local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
    local_88 = (undefined *)local_18;
    uVar1 = ::alloc::boxed::Box<T>::new(&local_98);
                    /* try { // try from 001b6ab6 to 001b6aba has its CatchHandler @ 001b6b1f */
    core::ptr::drop_in_place<std::io::error::Error>(local_a0);
                    /* try { // try from 001b6ac5 to 001b6ae9 has its CatchHandler @ 001b6b39 */
    core::ptr::drop_in_place<alloc::boxed::Box<dyn_std::io::Write>>(local_b0._0_8_,local_b0._8_8_);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>
              (local_58,local_50);
  }
  auVar2._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00228da0;
  auVar2._0_8_ = uVar1;
  return auVar2;
}