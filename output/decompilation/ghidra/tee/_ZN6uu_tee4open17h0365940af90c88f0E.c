undefined8 * __rustcall
uu_tee::open(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,byte *param_5)

{
  undefined8 uVar1;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined2 uStack_ce;
  undefined2 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 *local_70;
  code *local_68;
  undefined8 *local_60;
  code *local_58;
  undefined local_50 [16];
  undefined8 local_40;
  undefined local_38;
  
  std::sys::os_str::bytes::Slice::to_owned(local_98);
  local_d8 = 0x1b600000000;
  if (param_4 == 0) {
    uStack_ce = 0x100;
  }
  else {
    uStack_ce = 1;
  }
  _local_d0 = CONCAT22(uStack_ce,0x100);
  local_cc = 1;
                    /* try { // try from 001b34ec to 001b34fa has its CatchHandler @ 001b36b6 */
  std::fs::OpenOptions::open(&local_80,&local_d8,local_90,local_88);
  if (local_80 == 0) {
    uVar1 = ::alloc::boxed::Box<T>::new(local_7c);
                    /* try { // try from 001b363a to 001b364c has its CatchHandler @ 001b36a4 */
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_c8,param_2,param_3);
    param_1[2] = local_b8;
    *(undefined4 *)param_1 = (undefined4)local_c8;
    *(undefined4 *)((long)param_1 + 4) = local_c8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_c0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_c0._4_4_;
    param_1[3] = uVar1;
    param_1[4] = &PTR_drop_in_place<std_fs_File>_0021f9f8;
  }
  else {
    local_e0 = local_78;
                    /* try { // try from 001b3510 to 001b3608 has its CatchHandler @ 001b36c5 */
    local_50 = uucore::util_name();
    local_68 = _<&T_as_core::fmt::Display>::fmt;
    local_c8 = &DAT_0021f9a8;
    uStack_c0 = 2;
    local_a8 = 0;
    local_b0 = 1;
    local_b8 = &local_70;
    local_70 = (undefined8 *)local_50;
    std::io::stdio::_eprint(&local_c8);
    local_50._0_8_ = 0;
    local_38 = 0;
    local_68 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_60 = &local_e0;
    local_58 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
    local_c8 = &DAT_0021f9c8;
    uStack_c0 = 3;
    local_a8 = 0;
    local_b0 = 2;
    local_b8 = &local_70;
    local_70 = (undefined8 *)local_50;
    local_50._8_8_ = param_2;
    local_40 = param_3;
    std::io::stdio::_eprint(&local_c8);
    if ((param_5 == (byte *)0x0) || (*param_5 < 2)) {
      *param_1 = 0x8000000000000001;
                    /* try { // try from 001b362a to 001b3639 has its CatchHandler @ 001b36b1 */
      core::ptr::drop_in_place<std::io::error::Error>(local_e0);
    }
    else {
      *param_1 = 0x8000000000000000;
      param_1[1] = local_e0;
    }
  }
  core::ptr::drop_in_place<std::path::PathBuf>(local_98);
  return param_1;
}