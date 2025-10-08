void _ZN6zoxide4util12resolve_path17h8aa7abc34508b0d7E(undefined4 *param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 local_208;
  long local_200;
  long local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 *local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  char local_158;
  undefined3 uStack_157;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined uStack_148;
  undefined4 uStack_147;
  undefined4 uStack_143;
  undefined4 uStack_13f;
  undefined4 uStack_13b;
  undefined4 local_137;
  undefined4 uStack_133;
  undefined4 uStack_12f;
  undefined4 uStack_12b;
  undefined7 uStack_127;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  char local_e0;
  undefined4 local_df;
  undefined4 uStack_db;
  undefined4 uStack_d7;
  undefined4 uStack_d3;
  undefined4 local_cf;
  undefined4 uStack_cb;
  undefined4 uStack_c7;
  undefined4 uStack_c3;
  undefined4 local_bf;
  undefined4 uStack_bb;
  undefined4 uStack_b7;
  undefined4 uStack_b3;
  char local_a8;
  undefined4 local_a7;
  undefined4 uStack_a3;
  undefined4 uStack_9f;
  undefined4 uStack_9b;
  undefined8 local_97;
  undefined8 uStack_8f;
  undefined8 local_87;
  undefined7 uStack_7f;
  undefined uStack_78;
  undefined7 uStack_77;
  undefined local_70 [64];
  
  uVar6 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h08b3da5308d0badbE
                    (param_2);
  (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_0023b9c0)(&local_1d8,uVar6);
  local_f0 = local_1a8;
  uStack_ec = uStack_1a4;
  uStack_e8 = (undefined4)uStack_1a0;
  uStack_e4 = uStack_1a0._4_4_;
  local_100 = local_1b8;
  uStack_fc = uStack_1b4;
  uStack_f8 = uStack_1b0;
  uStack_f4 = uStack_1ac;
  local_110 = local_1c8;
  uStack_10c = uStack_1c4;
  uStack_108 = uStack_1c0;
  uStack_104 = uStack_1bc;
  uStack_120 = local_1d8;
  uStack_11c = uStack_1d4;
  uStack_118 = uStack_1d0;
  uStack_114 = uStack_1cc;
  local_158 = '\v';
  local_208 = 0;
  local_200 = 8;
  local_1f8 = 0;
                    /* try { // try from 0019370a to 00193805 has its CatchHandler @ 00193a24 */
  _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h3a44b47bf2ecd131E(&local_158,&uStack_120);
  cVar5 = local_158;
  if ((local_158 == '\n') ||
     (cVar4 = _ZN61__LT_std__path__Component_u20_as_u20_core__cmp__PartialEq_GT_2eq17hfa2fa96020c6cc4bE
                        (local_158), cVar4 == '\0')) {
    _ZN6zoxide4util11current_dir17hc8c2386c7ca5eb95E(&local_1d8);
    local_1f0 = CONCAT44(uStack_1d4,local_1d8);
    local_1e8 = CONCAT44(uStack_1cc,uStack_1d0);
    (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_0023b9c0)
              (local_70,local_1e8,CONCAT44(uStack_1c4,local_1c8));
    bVar2 = true;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_16extend_desugared17h8ae28a35e9d737e7E(&local_208,local_70);
  }
  else {
    local_df = CONCAT13((undefined)uStack_154,uStack_157);
    uStack_db = CONCAT13((undefined)uStack_150,uStack_154._1_3_);
    uStack_d7 = CONCAT13((undefined)uStack_14c,uStack_150._1_3_);
    uStack_d3 = CONCAT13(uStack_148,uStack_14c._1_3_);
    local_bf = local_137;
    uStack_bb = uStack_133;
    uStack_b7 = uStack_12f;
    uStack_b3 = uStack_12b;
    local_cf = uStack_147;
    uStack_cb = uStack_143;
    uStack_c7 = uStack_13f;
    uStack_c3 = uStack_13b;
    local_158 = '\v';
    local_e0 = cVar5;
    bVar2 = false;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h00ddbab168b7c69eE
              (&local_208,&local_e0,&PTR_s_src_util_rs_00234c68);
  }
  local_168 = CONCAT44(uStack_e4,uStack_e8);
  local_178 = CONCAT44(uStack_f4,uStack_f8);
  uStack_170 = CONCAT44(uStack_ec,local_f0);
  local_188 = CONCAT44(uStack_104,uStack_108);
  uStack_180 = CONCAT44(uStack_fc,local_100);
  local_198 = CONCAT44(uStack_114,uStack_118);
  uStack_190 = CONCAT44(uStack_10c,local_110);
  uStack_1a0 = CONCAT44(uStack_11c,uStack_120);
  local_1a8 = (undefined4)CONCAT71(uStack_127,uStack_12b._3_1_);
  uStack_1a4 = (undefined4)((uint7)uStack_127 >> 0x18);
  local_1b8 = (undefined4)CONCAT41(local_137,uStack_13b._3_1_);
  uStack_1b4 = (undefined4)
               (CONCAT35((undefined3)uStack_133,CONCAT41(local_137,uStack_13b._3_1_)) >> 0x20);
  uStack_1b0 = (undefined4)CONCAT41(uStack_12f,uStack_133._3_1_);
  uStack_1ac = (undefined4)
               (CONCAT35((undefined3)uStack_12b,CONCAT41(uStack_12f,uStack_133._3_1_)) >> 0x20);
  local_1c8 = (undefined4)CONCAT41(uStack_147,uStack_148);
  uStack_1c4 = (undefined4)
               (CONCAT35((undefined3)uStack_143,CONCAT41(uStack_147,uStack_148)) >> 0x20);
  uStack_1c0 = (undefined4)CONCAT41(uStack_13f,uStack_143._3_1_);
  uStack_1bc = (undefined4)
               (CONCAT35((undefined3)uStack_13b,CONCAT41(uStack_13f,uStack_143._3_1_)) >> 0x20);
  uStack_1d4 = uStack_154;
  uStack_1d0 = uStack_150;
  uStack_1cc = uStack_14c;
  local_1d8 = CONCAT31(uStack_157,0xb);
  cVar5 = local_158;
  local_1e0 = param_1;
  if (local_158 == '\v') goto LAB_00193918;
LAB_001938b0:
  uStack_77 = (undefined7)(CONCAT44(uStack_1a4,local_1a8) >> 8);
  local_a7 = CONCAT13((undefined)uStack_1d4,local_1d8._1_3_);
  uStack_a3 = CONCAT13((undefined)uStack_1d0,uStack_1d4._1_3_);
  uStack_9f = CONCAT13((undefined)uStack_1cc,uStack_1d0._1_3_);
  uStack_9b = CONCAT13((undefined)local_1c8,uStack_1cc._1_3_);
  local_97 = CONCAT17((undefined)uStack_1c0,CONCAT43(uStack_1c4,local_1c8._1_3_));
  uStack_8f = CONCAT17((undefined)local_1b8,CONCAT43(uStack_1bc,uStack_1c0._1_3_));
  local_87 = CONCAT17((undefined)uStack_1b0,CONCAT43(uStack_1b4,local_1b8._1_3_));
  uStack_7f = CONCAT43(uStack_1ac,uStack_1b0._1_3_);
  local_a8 = cVar5;
  lVar3 = local_1f8;
  uStack_78 = (undefined)local_1a8;
  do {
    local_1f8 = lVar3;
    if (local_a8 == '\n') {
                    /* try { // try from 001939aa to 00193a19 has its CatchHandler @ 00193a24 */
      _ZN4core4iter6traits8iterator8Iterator7collect17h3b8a6bb661afc5dfE
                (&local_1d8,local_200,lVar3 * 0x38 + local_200);
      *(ulong *)(local_1e0 + 4) = CONCAT44(uStack_1c4,local_1c8);
      *local_1e0 = local_1d8;
      local_1e0[1] = uStack_1d4;
      local_1e0[2] = uStack_1d0;
      local_1e0[3] = uStack_1cc;
      _ZN4core3ptr64drop_in_place_LT_alloc__vec__Vec_LT_std__path__Component_GT__GT_17hc69b35f51677355dE
                (local_208,local_200);
      if (bVar2) {
        _ZN4core3mem4drop17h8efcdb4578edbe7fE(local_1f0,local_1e8);
      }
      return;
    }
    switch(local_a8) {
    default:
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_0023b9c8)
                ("internal error: entered unreachable code",0x28,&PTR_s_src_util_rs_00234c80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    case '\a':
      break;
    case '\b':
      puVar7 = (undefined4 *)(lVar3 * 0x38 + local_200 + -0x38);
      if (puVar7 == (undefined4 *)0x0 || lVar3 == 0) {
        if (lVar3 != 0) {
LAB_0019398f:
          local_1f8 = lVar3 + -1;
        }
      }
      else {
        cVar5 = _ZN61__LT_std__path__Component_u20_as_u20_core__cmp__PartialEq_GT_2eq17hfa2fa96020c6cc4bE
                          (*puVar7);
        if (cVar5 == '\0') goto LAB_0019398f;
      }
      break;
    case '\t':
                    /* try { // try from 001938f0 to 0019392a has its CatchHandler @ 00193a1c */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h00ddbab168b7c69eE
                (&local_208,&local_a8,&PTR_s_src_util_rs_00234c98);
    }
    cVar5 = (char)local_1d8;
    local_1d8 = CONCAT31(local_1d8._1_3_,0xb);
    if (cVar5 != '\v') goto LAB_001938b0;
LAB_00193918:
    (*(code *)
      PTR__ZN80__LT_std__path__Components_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h73ed8dd6f02f5cb4E_0023b748
    )(&local_a8,&uStack_1a0);
    lVar3 = local_1f8;
  } while( true );
}