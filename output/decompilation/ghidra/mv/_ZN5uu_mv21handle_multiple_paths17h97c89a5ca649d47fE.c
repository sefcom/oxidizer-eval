void _ZN5uu_mv21handle_multiple_paths17h97c89a5ca649d47fE(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined auVar3 [16];
  undefined8 *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined local_38 [24];
  undefined4 local_20;
  
  local_58 = (undefined *)&local_98;
  if (*(char *)(param_3 + 0x30) == '\0') {
    if (param_2 == 0) {
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0024a948)
                (&PTR_s_src_uu_mv_src_mv_rs_00241888);
      goto LAB_0018bd39;
    }
    lVar1 = param_2 - 1;
    auVar3 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hfa85d5bb3948d4f8E
                       (lVar1,param_1,param_2);
    _ZN5uu_mv19move_files_into_dir17h52a820120b69cecfE
              (auVar3._0_8_,auVar3._8_8_,*(undefined8 *)(param_1 + 8 + lVar1 * 0x18),
               *(undefined8 *)(param_1 + 0x10 + lVar1 * 0x18),param_3);
  }
  else {
    if (param_2 < 3) {
LAB_0018bd39:
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0024a550)(2);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_80 = *(undefined8 *)(param_1 + 0x38);
    local_78 = *(undefined8 *)(param_1 + 0x40);
    local_88 = 1;
    local_70 = 1;
    local_98 = &local_88;
    local_90 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0024a618
    ;
    local_68 = &PTR_s_mv__extra_operand_00241878;
    local_60 = 1;
    local_48 = 0;
    local_50 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h26cd0638306e3785E(local_38,&local_68);
    local_20 = 1;
    _ZN5alloc5boxed12Box_LT_T_GT_3new17hbfa620bc4db9cfd6E(local_38);
  }
  return;
}