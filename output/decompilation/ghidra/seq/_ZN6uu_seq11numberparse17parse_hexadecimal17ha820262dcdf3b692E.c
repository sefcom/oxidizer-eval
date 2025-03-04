/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * _ZN6uu_seq11numberparse17parse_hexadecimal17ha820262dcdf3b692E
                 (long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined auVar8 [16];
  char local_88 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined uStack_78;
  undefined7 uStack_77;
  undefined uStack_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  long local_58;
  undefined uStack_50;
  undefined7 uStack_4f;
  undefined uStack_48;
  undefined7 uStack_47;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  uVar3 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2d,local_88);
  cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h9cb9db4a84f1050bE
                    (param_2,param_3,uVar3,1);
  if (cVar1 == '\0') {
    auVar8 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                       (2,param_2,param_3);
    if (auVar8._0_8_ == 0) {
      ppuVar7 = &PTR_s_src_uu_seq_src_numberparse_rs_00243fa0;
      uVar3 = 2;
      goto LAB_001ce45e;
    }
  }
  else {
    auVar8 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                       (3,param_2,param_3);
    if (auVar8._0_8_ == 0) {
      ppuVar7 = &PTR_s_src_uu_seq_src_numberparse_rs_00243fb8;
      uVar3 = 3;
LAB_001ce45e:
      uVar3 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                        (param_2,param_3,uVar3,param_3,ppuVar7);
                    /* catch() { ... } // from try @ 001ce3c2 with catch @ 001ce46d */
      _ZN4core3ptr43drop_in_place_LT_bigdecimal__BigDecimal_GT_17h9ea64fcf6ce46304E(local_88);
      plVar5 = (long *)_Unwind_Resume(uVar3);
      return plVar5;
    }
  }
  uVar6 = auVar8._8_8_;
  uVar3 = auVar8._0_8_;
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  uVar4 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2d,local_88);
  cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h9cb9db4a84f1050bE
                    (uVar3,uVar6,uVar4,1);
  if (cVar2 == '\0') {
    local_88[0] = '\0';
    local_88[1] = '\0';
    local_88[2] = '\0';
    local_88[3] = '\0';
    uVar4 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2b,local_88);
    cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h9cb9db4a84f1050bE
                      (uVar3,uVar6,uVar4,1);
    if (cVar2 == '\0') {
      _ZN10num_bigint6bigint7convert72__LT_impl_u20_num_traits__Num_u20_for_u20_num_bigint__bigint__BigInt_GT_14from_str_radix17hb9365f03b0604201E
                (local_88,uVar3,uVar6,0x10);
      local_58 = CONCAT44(uStack_84,local_88);
      if (local_58 != -0x8000000000000000) {
        uStack_3c = (undefined4)((uint7)uStack_6f >> 0x18);
        uStack_4f = CONCAT43(uStack_7c,uStack_80._1_3_);
        uStack_48 = uStack_78;
        uStack_47 = uStack_77;
        uStack_40._1_3_ = (undefined3)uStack_6f;
        uStack_40 = CONCAT31(uStack_40._1_3_,uStack_70);
        uStack_50 = (undefined)uStack_80;
        local_38 = 0;
        uStack_78 = (undefined)_DAT_0011b888;
        uStack_77 = (undefined7)((ulong)_DAT_0011b888 >> 8);
        uStack_70 = (undefined)_UNK_0011b890;
        uStack_6f = (undefined7)((ulong)_UNK_0011b890 >> 8);
        local_88[0] = s__0011b878[0];
        local_88[1] = s__0011b878[1];
        local_88[2] = s__0011b878[2];
        local_88[3] = s__0011b878[3];
        uStack_84 = _UNK_0011b87c;
        uStack_80 = _UNK_0011b880;
        uStack_7c = _UNK_0011b884;
        local_68 = 0;
                    /* try { // try from 001ce394 to 001ce3a1 has its CatchHandler @ 001ce472 */
        cVar2 = _ZN10bigdecimal8impl_cmp73__LT_impl_u20_core__cmp__PartialEq_u20_for_u20_bigdecimal__BigDecimal_GT_2eq17h0c7161c8c911041fE
                          (&local_58,local_88);
        if (cVar1 == '\0') {
          param_1[4] = local_38;
          param_1[2] = CONCAT71(uStack_47,uStack_48);
          param_1[3] = CONCAT44(uStack_3c,uStack_40);
          *param_1 = local_58;
          param_1[1] = CONCAT71(uStack_4f,uStack_50);
          param_1[5] = 0;
          param_1[6] = 0;
        }
        else if (cVar2 == '\0') {
          param_1[2] = CONCAT71(uStack_47,uStack_48);
          *param_1 = local_58;
          param_1[1] = CONCAT71(uStack_4f,uStack_50);
          if ((char)uStack_40 == '\0') {
            *(undefined *)(param_1 + 3) = 2;
          }
          else if ((char)uStack_40 == '\x01') {
            *(undefined *)(param_1 + 3) = 1;
          }
          else {
            *(undefined *)(param_1 + 3) = 0;
          }
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_3c;
          *(uint *)((long)param_1 + 0x19) = CONCAT13((undefined)uStack_3c,uStack_40._1_3_);
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
        }
        else {
          *param_1 = -0x7ffffffffffffffe;
          param_1[5] = 2;
          param_1[6] = 0;
                    /* try { // try from 001ce3c2 to 001ce3cb has its CatchHandler @ 001ce46d */
          _ZN4core3ptr43drop_in_place_LT_bigdecimal__BigDecimal_GT_17h9ea64fcf6ce46304E(&local_58);
        }
        _ZN4core3ptr43drop_in_place_LT_bigdecimal__BigDecimal_GT_17h9ea64fcf6ce46304E(local_88);
        return param_1;
      }
      *(undefined *)(param_1 + 1) = 2;
      goto LAB_001ce30d;
    }
  }
  *(undefined *)(param_1 + 1) = 0;
LAB_001ce30d:
  *param_1 = -0x7ffffffffffffffc;
  return param_1;
}