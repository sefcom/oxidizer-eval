void __rustcall
uu_env::parse_name_value_opt(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  local_a0 = 0x8000000000000000;
                    /* try { // try from 001cc1a5 to 001cc1bb has its CatchHandler @ 001cc24d */
  local_98 = param_3;
  local_90 = param_4;
  native_int_str::NativeStr::split_once(&local_88,&local_a0,&DAT_00117620);
  if (local_88 == -0x7fffffffffffffff) {
                    /* try { // try from 001cc1c6 to 001cc1d3 has its CatchHandler @ 001cc24b */
    lVar1 = parse_program_opt(param_2,param_3,param_4);
    if (lVar1 != 0) {
      param_1[1] = (long)&PTR_drop_in_place<uucore_mods_error_UUsageError>_00248840;
      goto LAB_001cc22b;
    }
    *(undefined *)(param_1 + 1) = 1;
  }
  else {
    local_48 = local_78;
    local_58 = local_88;
    uStack_50 = uStack_80;
    local_40 = local_70;
    uStack_3c = uStack_6c;
    uStack_38 = uStack_68;
    uStack_34 = uStack_64;
    local_30 = local_60;
                    /* try { // try from 001cc212 to 001cc21e has its CatchHandler @ 001cc249 */
    ::alloc::vec::Vec<T,A>::push(param_2 + 0x30,&local_58);
    *(undefined *)(param_1 + 1) = 0;
  }
  lVar1 = 0;
LAB_001cc22b:
  *param_1 = lVar1;
  core::ptr::drop_in_place<uu_env::native_int_str::NativeStr>(&local_a0);
  return;
}