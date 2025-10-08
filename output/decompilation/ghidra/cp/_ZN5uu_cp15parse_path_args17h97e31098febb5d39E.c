undefined8 *
_ZN5uu_cp15parse_path_args17h97e31098febb5d39E(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined **local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *puStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar7 = param_2[2];
  local_98 = param_1;
  if (uVar7 == 1) {
    if (*(long *)(param_3 + 0x18) != -0x8000000000000000) {
LAB_0019fe0f:
      _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hdde023ffc5414155E
                (&local_d8,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
      cVar1 = *(char *)(param_3 + 0x5d);
      puStack_68 = local_c8;
      uStack_70 = (undefined4)uStack_d0;
      uStack_6c = uStack_d0._4_4_;
      pcVar2 = (code *)
               PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00267978;
      pcVar4 = (code *)PTR__ZN3std4path10Components7as_path17h1663bfb7bee69036E_00267bf0;
      local_78 = local_d8;
      goto joined_r0x0019fe4c;
    }
    local_90 = param_2[1];
    uStack_88 = 
    PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_002674f0
    ;
    local_d8 = &PTR_s_missing_destination_file_operand_0025ea18;
    uStack_d0 = 1;
    local_b8 = 0;
    local_c8 = &local_90;
    uStack_c0 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(&local_60,&local_d8);
    param_1[3] = local_50;
    local_48 = local_60;
    uStack_44 = uStack_5c;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
LAB_0019fdae:
    *(undefined4 *)(param_1 + 1) = local_48;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_44;
    *(undefined4 *)(param_1 + 2) = uStack_40;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_3c;
    *param_1 = 0x8000000000000003;
LAB_0019fdba:
    _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h8dd980832f2f5399E
              (param_2);
    return param_1;
  }
  if (uVar7 == 0) {
                    /* try { // try from 0019fc64 to 0019fe23 has its CatchHandler @ 0019ff75 */
    (*(code *)
      PTR__ZN67__LT_uu_cp__Error_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h0e3b1f2b5d04343dE_00267ae8
    )(&local_d8,"missing file operand",0x14);
    param_1[6] = local_a8;
    param_1[4] = local_b8;
    param_1[5] = uStack_b0;
    param_1[2] = local_c8;
    param_1[3] = uStack_c0;
    *(undefined4 *)param_1 = (undefined4)local_d8;
    *(undefined4 *)((long)param_1 + 4) = local_d8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_d0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_d0._4_4_;
    goto LAB_0019fdba;
  }
  if ((*(byte *)(param_3 + 0x5a) & *(long *)(param_3 + 0x18) == -0x8000000000000000) == 0) {
    if (*(long *)(param_3 + 0x18) != -0x8000000000000000) goto LAB_0019fe0f;
  }
  else if (2 < uVar7) {
    local_90 = param_2[1] + 0x30;
    uStack_88 = 
    PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_002674f0
    ;
    local_d8 = &PTR_s_extra_operand___warning__0025ea28;
    uStack_d0 = 1;
    local_b8 = 0;
    local_c8 = &local_90;
    uStack_c0 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(&local_48,&local_d8);
    param_1[3] = local_38;
    goto LAB_0019fdae;
  }
  uVar7 = uVar7 - 1;
  param_2[2] = uVar7;
  local_78 = *(undefined ***)(param_2[1] + uVar7 * 0x18);
  if (local_78 == (undefined **)0x8000000000000000) {
                    /* try { // try from 0019ff44 to 0019ff50 has its CatchHandler @ 0019ff75 */
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_002679b0)
              (&PTR_s_src_uu_cp_src_cp_rs_0025ea38);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar6 = param_2[1] + uVar7 * 0x18;
  uStack_70 = *(undefined4 *)(lVar6 + 8);
  uStack_6c = *(undefined4 *)(lVar6 + 0xc);
  puStack_68 = *(undefined8 **)(lVar6 + 0x10);
  cVar1 = *(char *)(param_3 + 0x5d);
  pcVar2 = (code *)
           PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00267978;
  pcVar4 = (code *)PTR__ZN3std4path10Components7as_path17h1663bfb7bee69036E_00267bf0;
joined_r0x0019fe4c:
  PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00267978 = pcVar2;
  PTR__ZN3std4path10Components7as_path17h1663bfb7bee69036E_00267bf0 = pcVar4;
  if (cVar1 != '\0') {
    puVar8 = (undefined4 *)param_2[1];
    lVar6 = uVar7 * 0x18;
    do {
                    /* try { // try from 0019fe88 to 0019fe9e has its CatchHandler @ 0019ff53 */
      (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_002678f8)
                (&local_d8,*(undefined8 *)(puVar8 + 2),*(undefined8 *)(puVar8 + 4));
      uVar5 = (*pcVar4)(&local_d8);
      (*pcVar2)(&local_90,uVar5);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(puVar8);
      *(undefined8 *)(puVar8 + 4) = local_80;
      *puVar8 = (undefined4)local_90;
      puVar8[1] = local_90._4_4_;
      puVar8[2] = (undefined4)uStack_88;
      puVar8[3] = uStack_88._4_4_;
      puVar8 = puVar8 + 6;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  uVar5 = param_2[2];
  uVar3 = param_2[1];
  local_98[1] = *param_2;
  local_98[2] = uVar3;
  local_98[3] = uVar5;
  local_98[4] = local_78;
  local_98[5] = CONCAT44(uStack_6c,uStack_70);
  local_98[6] = puStack_68;
  *local_98 = 0x800000000000000c;
  return local_98;
}