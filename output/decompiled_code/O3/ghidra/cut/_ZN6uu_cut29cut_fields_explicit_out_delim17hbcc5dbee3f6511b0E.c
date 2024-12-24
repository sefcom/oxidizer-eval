undefined  [16] __rustcall
uu_cut::cut_fields_explicit_out_delim
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined param_5,undefined param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_c2;
  undefined local_c1;
  undefined local_c0 [16];
  long local_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_58 [16];
  undefined8 local_48;
  undefined local_40 [48];
  
  local_c2 = param_5;
  local_c1 = param_6;
  local_68 = param_3;
  local_60 = param_4;
  std::io::buffered::bufreader::BufReader<R>::with_capacity(local_40,0x2000,param_1);
                    /* try { // try from 001b6af9 to 001b6afd has its CatchHandler @ 001b6c2d */
  local_c0 = stdout_writer();
  puStack_a0 = &local_c2;
  local_98 = local_c0;
  local_90 = &local_c1;
  local_88 = &local_68;
  local_80 = param_7;
  local_78 = param_8;
                    /* try { // try from 001b6b4f to 001b6b63 has its CatchHandler @ 001b6c13 */
  local_a8 = param_2;
  local_b0 = bstr::io::BufReadExt::for_byte_record_with_terminator(local_40,param_6,&local_a8);
  if (local_b0 == 0) {
    core::ptr::drop_in_place<alloc::boxed::Box<dyn_std::io::Write>>(local_c0._0_8_,local_c0._8_8_);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(local_40);
    uVar1 = 0;
  }
  else {
                    /* try { // try from 001b6b6e to 001b6ba5 has its CatchHandler @ 001b6c04 */
    _<T_as_alloc::string::ToString>::to_string(local_58,&local_b0);
    local_90 = (undefined *)CONCAT44(local_90._4_4_,1);
    local_98 = (undefined *)local_48;
    uVar1 = ::alloc::boxed::Box<T>::new(&local_a8);
                    /* try { // try from 001b6bae to 001b6bb2 has its CatchHandler @ 001b6c13 */
    core::ptr::drop_in_place<std::io::error::Error>(local_b0);
                    /* try { // try from 001b6bbd to 001b6bdf has its CatchHandler @ 001b6c2d */
    core::ptr::drop_in_place<alloc::boxed::Box<dyn_std::io::Write>>(local_c0._0_8_,local_c0._8_8_);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(local_40);
  }
  auVar2._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00229df0;
  auVar2._0_8_ = uVar1;
  return auVar2;
}