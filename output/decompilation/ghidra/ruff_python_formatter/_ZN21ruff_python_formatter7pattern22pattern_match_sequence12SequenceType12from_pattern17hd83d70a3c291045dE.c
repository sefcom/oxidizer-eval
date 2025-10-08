char _ZN21ruff_python_formatter7pattern22pattern_match_sequence12SequenceType12from_pattern17hd83d70a3c291045dE
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 unaff_RBX;
  ulong *puVar9;
  undefined8 unaff_R14;
  undefined8 uVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined local_98 [48];
  undefined local_68;
  undefined local_60 [48];
  
  auVar11._8_8_ = unaff_R14;
  auVar11._0_8_ = unaff_RBX;
  uVar1 = *(uint *)(param_1 + 0x18);
  puVar9 = (ulong *)(param_1 + 0x1c);
  lVar2 = *(long *)(param_1 + 0x10);
  puVar6 = puVar9;
  if (lVar2 != 0) {
    puVar6 = *(ulong **)(param_1 + 8);
    switch(*puVar6 ^ 0x8000000000000000) {
    case 0:
      puVar6 = puVar6 + 2;
      break;
    case 1:
    case 5:
    case 6:
      puVar6 = puVar6 + 1;
      break;
    case 2:
    case 7:
      puVar6 = puVar6 + 4;
      break;
    default:
      puVar6 = puVar6 + 0xb;
      break;
    case 4:
      puVar6 = puVar6 + 10;
    }
  }
  local_b8 = param_2;
  local_b0 = param_3;
  if (*(uint *)puVar6 < uVar1) {
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
              ("assertion failed: start.raw <= end.raw",0x26,
               &PTR_s_crates_ruff_python_formatter_src_0067e718);
    auVar12._8_8_ = local_a8;
    auVar12._0_8_ = local_a0;
LAB_00417351:
    local_a8 = auVar12._8_8_;
    local_a0 = auVar12._0_8_;
    uVar10 = auVar11._8_8_;
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
              (local_b8,local_b0,auVar11._0_8_,uVar10,
               &PTR_s_crates_ruff_python_formatter_src_0067e730);
    auVar12._8_8_ = local_a8;
    auVar12._0_8_ = local_a0;
LAB_0041736e:
    local_a8 = auVar12._8_8_;
    local_a0 = auVar12._0_8_;
    auVar13._8_8_ = puVar9;
    auVar13._0_8_ = uVar10;
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
              ("assertion failed: start.raw <= end.raw",0x26,
               &PTR_s_crates_ruff_python_formatter_src_0067e748);
  }
  else {
    auVar11 = _ZN14ruff_text_size5range122__LT_impl_u20_core__convert__From_LT_ruff_text_size__range__TextRange_GT__u20_for_u20_core__ops__range__Range_LT_T_GT__GT_4from17h5565193b43bb472cE
                        (uVar1);
    uVar10 = auVar11._8_8_;
    auVar12 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                        (auVar11._0_8_,uVar10,local_b8,local_b0);
    local_a8 = auVar12._8_8_;
    local_a0 = auVar12._0_8_;
    if (local_a0 == 0) goto LAB_00417351;
    if (lVar2 != 0) {
      puVar9 = *(ulong **)(param_1 + 8);
      switch(*puVar9 ^ 0x8000000000000000) {
      case 0:
        puVar9 = (ulong *)((long)puVar9 + 0x14);
        break;
      case 1:
      case 5:
      case 6:
        puVar9 = (ulong *)((long)puVar9 + 0xc);
        break;
      case 2:
      case 7:
        puVar9 = (ulong *)((long)puVar9 + 0x24);
        break;
      default:
        puVar9 = (ulong *)((long)puVar9 + 0x5c);
        break;
      case 4:
        puVar9 = (ulong *)((long)puVar9 + 0x54);
      }
    }
    if (*(uint *)puVar9 < uVar1) goto LAB_0041736e;
    auVar13 = _ZN14ruff_text_size5range122__LT_impl_u20_core__convert__From_LT_ruff_text_size__range__TextRange_GT__u20_for_u20_core__ops__range__Range_LT_T_GT__GT_4from17h5565193b43bb472cE
                        (uVar1);
    auVar11 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                        (auVar13._0_8_,auVar13._8_8_,local_b8,local_b0);
    if (auVar11._0_8_ != 0) {
      local_bc = 0;
      auVar12 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x5b,&local_bc);
      lVar2 = local_a0;
      uVar10 = local_a8;
      cVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf48f8dbcb851e47fE
                        (local_a0,local_a8,auVar12._0_8_,auVar12._8_8_);
      if (cVar5 != '\0') {
        local_bc = 0;
        auVar12 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2c,&local_bc);
        cVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h74aadde88527fc22E
                          (auVar11._0_8_,auVar11._8_8_,auVar12._0_8_,auVar12._8_8_);
        if (cVar5 == '\0') {
          return '\0';
        }
      }
      local_bc = 0;
      auVar11 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x28,&local_bc);
      cVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf48f8dbcb851e47fE
                        (lVar2,uVar10,auVar11._0_8_,auVar11._8_8_);
      uVar4 = local_b0;
      uVar10 = local_b8;
      if (cVar5 == '\0') {
        return '\x02';
      }
      if (*(long *)(param_1 + 0x10) == 0) {
        return '\x01';
      }
      puVar9 = *(ulong **)(param_1 + 8);
      uVar7 = *puVar9 ^ 0x8000000000000000;
      if (7 < uVar7) {
        uVar7 = 3;
      }
      if (*(uint *)(param_1 + 0x18) <=
          *(uint *)((long)puVar9 + *(long *)(&DAT_0018d5d0 + uVar7 * 8))) {
        (*(code *)
          PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
                  (local_60,local_b8,local_b0);
        uVar8 = _ZN4core4iter6traits8iterator8Iterator4fold17h84b128d4ad72991aE(local_60);
        uVar7 = 3;
        if ((*puVar9 ^ 0x8000000000000000) < 8) {
          uVar7 = *puVar9 ^ 0x8000000000000000;
        }
        (*(code *)
          PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
                  (local_98,uVar10,uVar4,
                   *(undefined4 *)((long)puVar9 + *(long *)(&DAT_0018d590 + uVar7 * 8)),
                   *(undefined4 *)((long)puVar9 + *(long *)(&DAT_0018d590 + uVar7 * 8)));
        local_68 = 0;
        uVar7 = _ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h8c5d36edf804012fE
                          (local_98);
        return '\x02' - (uVar7 < uVar8);
      }
      goto LAB_004173a4;
    }
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
            (local_b8,local_b0,auVar13._0_8_,auVar13._8_8_,
             &PTR_s_crates_ruff_python_formatter_src_0067e760);
LAB_004173a4:
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
            ("assertion failed: start.raw <= end.raw",0x26,
             &PTR_s_crates_ruff_python_formatter_src_0067e778);
  pcVar3 = (code *)swi(3);
  cVar5 = (*pcVar3)();
  return cVar5;
}