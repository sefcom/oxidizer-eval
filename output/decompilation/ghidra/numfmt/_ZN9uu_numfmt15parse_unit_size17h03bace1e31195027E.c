void _ZN9uu_numfmt15parse_unit_size17h03bace1e31195027E
               (undefined8 *param_1,undefined **param_2,long **param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined **local_c8;
  undefined **ppuStack_c0;
  undefined8 **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined **local_98;
  undefined **ppuStack_90;
  undefined8 **local_88;
  undefined local_80;
  undefined8 local_78;
  undefined local_70 [8];
  undefined8 local_68;
  long local_60;
  long *local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  ppuStack_c0 = (undefined **)((long)param_2 + (long)param_3);
  local_b8 = (undefined8 **)((ulong)local_b8 & 0xffffffffffffff00);
  local_c8 = param_2;
  _ZN4core4iter6traits8iterator8Iterator7collect17h967ab1cd420e9d0aE(local_70,&local_c8);
  auVar4 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                     (local_60,param_2,param_3);
  if (auVar4._0_8_ == 0) {
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00209938)
              (param_2,param_3,local_60,param_3,&DAT_00202810);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar3 = auVar4._8_8_;
  if (local_60 == 0) {
LAB_0016c5d7:
    auVar4 = _ZN9uu_numfmt22parse_unit_size_suffix17hdf13b6214e4b882fE(auVar4._0_8_,uVar3);
    if ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      if (local_60 == 0) {
        param_1[1] = auVar4._8_8_;
      }
      else {
        _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                  (&local_c8,local_68,local_60);
        if ((char)local_c8 == '\x01') goto LAB_0016c60c;
        param_1[1] = auVar4._8_8_ * (long)ppuStack_c0;
      }
      *param_1 = 0x8000000000000000;
      goto LAB_0016c6b2;
    }
  }
  else {
    local_78 = auVar4._8_8_;
                    /* try { // try from 0016c58d to 0016c6e6 has its CatchHandler @ 0016c6e9 */
    _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h65bc8cec15465d63E(&local_c8,local_60);
    local_88 = local_b8;
    local_98 = local_c8;
    ppuStack_90 = ppuStack_c0;
    cVar2 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h57e8dd7d227d19fbE
                      (ppuStack_c0,local_b8,local_68,local_60);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h34fbae09aa78bed8E(&local_98);
    uVar3 = local_78;
    if (cVar2 == '\0') goto LAB_0016c5d7;
  }
LAB_0016c60c:
  local_98 = (undefined **)0x0;
  local_80 = 1;
  local_58 = (long *)&local_98;
  local_50 = 
  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00209948
  ;
  local_c8 = &PTR_s_invalid_unit_size__src_uu_numfmt_00202800;
  ppuStack_c0 = (undefined **)0x1;
  local_a8 = 0;
  local_b8 = &local_58;
  local_b0 = 1;
  ppuStack_90 = param_2;
  local_88 = param_3;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h6181b64f68c0f373E(&local_48,&local_c8);
  param_1[2] = local_38;
  *(undefined4 *)param_1 = local_48;
  *(undefined4 *)((long)param_1 + 4) = uStack_44;
  *(undefined4 *)(param_1 + 1) = uStack_40;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
LAB_0016c6b2:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h34fbae09aa78bed8E(local_70);
  return;
}