undefined *
_ZN7uu_fold9fold_file17hcf3a60b599ccdb00E(undefined8 *param_1,uint param_2,code *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong extraout_RDX;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uleb128 *puVar8;
  code *pcVar9;
  code *pcVar10;
  code *unaff_R13;
  code *pcVar11;
  undefined8 *local_e0;
  undefined8 **local_d8;
  code *local_d0;
  undefined8 **local_c8;
  code *local_c0;
  undefined8 **local_b8;
  code *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined8 ***local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined **local_78;
  undefined8 *local_70;
  uint local_64;
  undefined8 local_60;
  long local_58;
  long local_50;
  ulong local_48;
  long local_40;
  long local_38;
  
  local_60 = 0;
  local_58 = 1;
  local_50 = 0;
  local_e0 = (undefined8 *)0x0;
  local_d8 = (undefined8 **)&DAT_00000001;
  local_d0 = (code *)0x0;
  local_48 = (ulong)param_2;
  uVar5 = 0;
  local_78 = &PTR_s_src_uu_fold_src_fold_rs_0021a9b8;
  pcVar11 = (code *)0x0;
  local_70 = param_1;
  local_64 = param_2;
  do {
    uVar3 = _ZN3std2io16append_to_string17h03d08dbf90a74f4aE(&local_60,local_70);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hd92c105567eaf153E
              (&local_a8,uVar3);
    puVar4 = local_a8;
    if (local_a8 != (undefined *)0x0) {
                    /* try { // try from 001b21b6 to 001b21bf has its CatchHandler @ 001b2233 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he0f0171ff9caf1b3E(&local_e0);
                    /* try { // try from 001b21c0 to 001b21cc has its CatchHandler @ 001b222e */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he0f0171ff9caf1b3E(&local_60);
LAB_001b21e6:
      _ZN4core3ptr101drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF_mut_u20_dyn_u20_std__io__Read_GT__GT_17hd2a31b9451a7f555E
                (*local_70,local_70[1]);
      return puVar4;
    }
    if (local_a0 == 0) {
                    /* try { // try from 001b21cf to 001b21d8 has its CatchHandler @ 001b2233 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he0f0171ff9caf1b3E(&local_e0);
                    /* try { // try from 001b21d9 to 001b21e5 has its CatchHandler @ 001b222e */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he0f0171ff9caf1b3E(&local_60);
      goto LAB_001b21e6;
    }
    local_38 = local_50 + local_58;
    local_40 = local_58;
    while( true ) {
      iVar2 = _ZN4core3str11validations15next_code_point17haf22137f2b8c1872E(&local_40);
      pcVar10 = local_d0;
      puVar8 = (uleb128 *)(extraout_RDX & 0xffffffff);
      if (iVar2 == 0) {
        puVar8 = &uleb128_00110000;
      }
      uVar7 = (uint)puVar8;
      if (uVar7 == 10) {
        local_c8 = local_d8;
        local_c0 = local_d0;
        local_b8 = &local_c8;
        local_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17ha398d9e18c3ebe29E;
        local_a8 = &DAT_0021a968;
        local_a0 = 2;
        local_88 = 0;
        local_98 = &local_b8;
        local_90 = 1;
                    /* try { // try from 001b211b to 001b21b0 has its CatchHandler @ 001b2238 */
        _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_a8);
        _ZN5alloc6string6String13replace_range17h5f9cb15ffada2cb3E(&local_e0,pcVar10,1,0);
        uVar5 = 0;
        pcVar11 = local_d0;
        if (local_d0 == (code *)0x0) goto LAB_001b1df0;
        goto LAB_001b2155;
      }
      if (uVar7 == 0x110000) break;
      pcVar10 = pcVar11;
      if (param_3 <= pcVar11) {
        pcVar10 = unaff_R13 + 1;
        if (uVar5 == 0) {
          pcVar10 = local_d0;
        }
        if (pcVar10 != (code *)0x0) {
          if (pcVar10 < local_d0) {
            if ((char)*(code *)((long)local_d8 + (long)pcVar10) < -0x40) goto LAB_001b221e;
          }
          else if (pcVar10 != local_d0) goto LAB_001b221e;
        }
        local_c8 = local_d8;
        local_b8 = &local_c8;
        local_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17ha398d9e18c3ebe29E;
        local_a8 = &DAT_0021a968;
        local_a0 = 2;
        local_88 = 0;
        local_98 = &local_b8;
        local_90 = 1;
        local_c0 = pcVar10;
        _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_a8);
        _ZN5alloc6string6String13replace_range17h5f9cb15ffada2cb3E(&local_e0,pcVar10,1,0);
        uVar5 = 0;
        pcVar10 = local_d0;
      }
      uVar6 = uVar5;
      pcVar9 = unaff_R13;
      if (uVar7 == 8) {
        pcVar11 = pcVar10 + -1;
        if (pcVar10 == (code *)0x0) {
          pcVar11 = (code *)0x0;
        }
      }
      else if (uVar7 == 9) {
        pcVar11 = (code *)(((ulong)pcVar10 & 0xfffffffffffffff8) + 8);
        uVar6 = local_48;
        pcVar9 = local_d0;
        if (param_3 < pcVar11) {
          if (local_d0 == (code *)0x0) {
            pcVar9 = (code *)0x0;
          }
          else {
            pcVar10 = unaff_R13 + 1;
            if (uVar5 == 0) {
              pcVar10 = local_d0;
            }
            if (pcVar10 != (code *)0x0) {
              if (pcVar10 < local_d0) {
                if ((char)*(code *)((long)local_d8 + (long)pcVar10) < -0x40) {
LAB_001b220f:
                  local_78 = &PTR_s_src_uu_fold_src_fold_rs_0021a9d0;
LAB_001b221e:
                    /* try { // try from 001b221e to 001b222d has its CatchHandler @ 001b223a */
                  uVar3 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                                    (local_d8,local_d0,0,pcVar10,local_78);
                    /* catch() { ... } // from try @ 001b21c0 with catch @ 001b222e
                       catch() { ... } // from try @ 001b21d9 with catch @ 001b222e */
                  _ZN4core3ptr101drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF_mut_u20_dyn_u20_std__io__Read_GT__GT_17hd2a31b9451a7f555E
                            (*local_70,local_70[1]);
                  puVar4 = (undefined *)_Unwind_Resume(uVar3);
                  return puVar4;
                }
              }
              else if (pcVar10 != local_d0) goto LAB_001b220f;
            }
            local_c8 = local_d8;
            local_b8 = &local_c8;
            local_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17ha398d9e18c3ebe29E;
            local_a8 = &DAT_0021a968;
            local_a0 = 2;
            local_88 = 0;
            local_98 = &local_b8;
            local_90 = 1;
            local_c0 = pcVar10;
            _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_a8);
            _ZN5alloc6string6String13replace_range17h5f9cb15ffada2cb3E(&local_e0,pcVar10,1,0);
            uVar6 = local_48;
            pcVar9 = local_d0;
          }
        }
      }
      else if (uVar7 == 0xd) {
        pcVar11 = (code *)0x0;
      }
      else if (((char)local_64 == '\0') ||
              (((0x20 < uVar7 || ((0x100003800U >> ((ulong)puVar8 & 0x3f) & 1) == 0)) &&
               ((uVar7 < 0x80 ||
                (cVar1 = _ZN4core7unicode12unicode_data11white_space6lookup17hc2937f3d40e148abE
                                   (puVar8), cVar1 == '\0')))))) {
        pcVar11 = pcVar10 + 1;
      }
      else {
        pcVar11 = pcVar10 + 1;
        uVar6 = 1;
        pcVar9 = local_d0;
      }
                    /* try { // try from 001b1e6d to 001b208a has its CatchHandler @ 001b223c */
      _ZN5alloc6string6String4push17h859ae11851fd8b8eE(&local_e0,puVar8);
      uVar5 = uVar6;
      unaff_R13 = pcVar9;
    }
    if (local_d0 != (code *)0x0) {
LAB_001b2155:
      local_c8 = &local_e0;
      local_c0 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      local_a8 = &DAT_00114600;
      local_a0 = 1;
      local_88 = 0;
      local_98 = &local_c8;
      local_90 = 1;
      _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_a8);
      _ZN5alloc6string6String8truncate17hafe089c60c3201e9E(&local_e0);
    }
LAB_001b1df0:
                    /* try { // try from 001b1df0 to 001b1e11 has its CatchHandler @ 001b2238 */
    _ZN5alloc6string6String8truncate17hafe089c60c3201e9E(&local_60);
  } while( true );
}