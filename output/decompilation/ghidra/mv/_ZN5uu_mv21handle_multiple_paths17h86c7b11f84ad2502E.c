void _ZN5uu_mv21handle_multiple_paths17h86c7b11f84ad2502E(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined auVar3 [16];
  undefined8 *local_98;
  code *local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined local_40;
  undefined local_38 [24];
  undefined4 local_20;
  
  local_78 = (undefined *)&local_98;
  if (*(char *)(param_3 + 0x30) == '\0') {
    if (param_2 == 0) {
      _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_mv_src_mv_rs_00287fe0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar1 = param_2 - 1;
    auVar3 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h1ae6fd92abd5a845E
                       (lVar1,param_1,param_2);
    _ZN5uu_mv19move_files_into_dir17hea74a81b456dd214E
              (auVar3._0_8_,auVar3._8_8_,*(undefined8 *)(param_1 + 8 + lVar1 * 0x18),
               *(undefined8 *)(param_1 + 0x10 + lVar1 * 0x18),param_3);
  }
  else {
    if (param_2 < 3) {
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                (2,param_2,&PTR_s_src_uu_mv_src_mv_rs_00288010);
    }
    local_50 = *(undefined4 *)(param_1 + 0x38);
    uStack_4c = *(undefined4 *)(param_1 + 0x3c);
    uStack_48 = *(undefined4 *)(param_1 + 0x40);
    uStack_44 = *(undefined4 *)(param_1 + 0x44);
    local_58 = 1;
    local_40 = 1;
    local_98 = &local_58;
    local_90 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_88 = &PTR_s_mv__extra_operand_00287fd0;
    local_80 = 1;
    local_68 = 0;
    local_70 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h70402eff178ea70dE(local_38,&local_88);
    local_20 = 1;
    _ZN5alloc5boxed12Box_LT_T_GT_3new17hbe638d0f99162453E(local_38);
  }
  return;
}