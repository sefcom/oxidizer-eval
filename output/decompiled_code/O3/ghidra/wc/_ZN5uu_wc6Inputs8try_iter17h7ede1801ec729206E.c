void __rustcall uu_wc::Inputs::try_iter(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long local_e0;
  undefined local_d8;
  undefined7 uStack_d7;
  long lStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  long local_88;
  long lStack_80;
  long local_78 [2];
  long local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  if (*param_2 == 0) {
    local_e0 = -0x7fffffffffffffff;
    local_d8 = 1;
    lVar1 = ::alloc::boxed::Box<T>::new(&local_e0);
    ppuVar3 = &
              PTR_drop_in_place<core_iter_sources_once_Once<core_result_Result<uu_wc_Input,alloc_boxed_Box<dyn_uucore_mods_error_UError>>>>_00232010
    ;
  }
  else if ((int)*param_2 == 1) {
    lVar1 = ::alloc::boxed::Box<T>::new(param_2[2],param_2[2] + param_2[3] * 0x18);
    ppuVar3 = (undefined **)&DAT_00232048;
  }
  else if (param_2[1] == -0x7fffffffffffffff) {
    files0_iter_stdin(&local_e0);
    lVar1 = ::alloc::boxed::Box<T>::new(&local_e0);
    ppuVar3 = &
              PTR_drop_in_place<core_iter_adapters_map_Map<core_iter_sources_from_fn_FromFn<uu_wc_files0_iter<std_io_stdio_StdinLock>___closure__>,uu_wc_files0_iter_stdin___closure__>>_002320b8
    ;
  }
  else {
    files0_iter_file(&local_e0,param_2[2],param_2[3]);
    if (local_e0 == -0x7fffffffffffffff) {
      param_1[1] = CONCAT71(uStack_d7,local_d8);
      param_1[2] = lStack_d0;
      *param_1 = -0x7ffffffffffffffd;
      return;
    }
    local_30 = local_98;
    local_40 = local_a8;
    uStack_3c = uStack_a4;
    uStack_38 = uStack_a0;
    uStack_34 = uStack_9c;
    local_50 = local_b8;
    uStack_4c = uStack_b4;
    uStack_48 = uStack_b0;
    uStack_44 = uStack_ac;
    local_60 = local_c8;
    uStack_5c = uStack_c4;
    uStack_58 = uStack_c0;
    uStack_54 = uStack_bc;
    local_78[0] = local_e0;
    local_68 = lStack_d0;
    lVar1 = ::alloc::boxed::Box<T>::new(local_78);
    ppuVar3 = &
              PTR_drop_in_place<core_iter_sources_from_fn_FromFn<uu_wc_files0_iter<std_fs_File>___closure__>>_00232080
    ;
  }
  lVar2 = -0x7ffffffffffffffe;
  if (*param_3 != -0x7ffffffffffffffe) {
    core::ops::function::FnOnce::call_once(&local_e0,param_3);
    local_88 = CONCAT71(uStack_d7,local_d8);
    lStack_80 = lStack_d0;
    lVar2 = local_e0;
  }
  *param_1 = lVar2;
  param_1[1] = local_88;
  param_1[2] = lStack_80;
  param_1[3] = lVar1;
  param_1[4] = (long)ppuVar3;
  param_1[5] = 0;
  return;
}