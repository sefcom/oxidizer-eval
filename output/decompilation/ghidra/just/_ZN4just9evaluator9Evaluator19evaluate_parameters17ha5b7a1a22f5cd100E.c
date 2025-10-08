void _ZN4just9evaluator9Evaluator19evaluate_parameters17ha5b7a1a22f5cd100E
               (char *param_1,undefined4 *param_2,undefined param_3,long param_4,long param_5,
               int *param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined uVar9;
  undefined6 uVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined3 uStack_168;
  undefined4 uStack_165;
  undefined uStack_161;
  undefined7 uStack_160;
  char *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined uStack_128;
  undefined6 uStack_127;
  undefined uStack_121;
  int iStack_120;
  int iStack_11c;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined uStack_d4;
  undefined uStack_d3;
  undefined uStack_d2;
  undefined uStack_d1;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  long local_b0;
  int *local_a8;
  int *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined local_50;
  
  local_78 = 0;
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  local_88 = *(undefined8 *)(param_2 + 4);
  uStack_80 = *(undefined8 *)(param_2 + 6);
  local_70 = 0;
  local_60 = 0;
  uStack_58 = param_8;
  local_150 = 0;
  uStack_148 = 8;
  local_140 = 0;
  local_158 = param_1;
  if (param_7 != 0) {
    local_a8 = param_6 + param_7 * 0x34;
    piVar11 = param_6 + 0x34;
    local_50 = param_3;
    do {
      puVar4 = 
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00565d98
      ;
      local_a0 = piVar11;
      if (param_5 == 0) {
        if (*param_6 == 0x12) {
          if (*(char *)((long)param_6 + 0xc9) != '\x02') {
                    /* try { // try from 00367402 to 00367417 has its CatchHandler @ 003674ce */
            _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                      (&local_138,"missing parameter without default",0x21);
            uVar10 = uStack_127;
            uVar9 = uStack_128;
            uVar6 = uStack_130;
            uVar5 = uStack_134;
            uVar3 = CONCAT61(uStack_127,uStack_128);
            uVar2 = CONCAT17(uStack_121,uVar3);
            uVar13 = CONCAT44(uStack_134,local_138);
            uVar1 = CONCAT44(uStack_12c,uStack_130);
            uStack_134._3_1_ = (undefined)local_138;
            uStack_130 = (undefined4)((ulong)uVar13 >> 8);
            uStack_12c._3_1_ = (undefined)uVar6;
            uStack_12c = CONCAT13(uStack_12c._3_1_,(int3)((uint)uVar5 >> 8));
            uStack_128 = (undefined)((uint)uVar6 >> 8);
            uStack_127 = (undefined6)((ulong)uVar1 >> 0x10);
            uStack_121 = uVar9;
            iStack_120 = (int)uVar10;
            iStack_11c._0_3_ = (undefined3)((ulong)uVar2 >> 0x28);
            *local_158 = '\x1d';
            *(undefined4 *)(local_158 + 1) = local_138;
            *(undefined4 *)(local_158 + 5) = uStack_134;
            *(undefined4 *)(local_158 + 9) = uStack_130;
            *(undefined4 *)(local_158 + 0xd) = uStack_12c;
            *(ulong *)(local_158 + 0x10) = CONCAT62(uStack_127,(short)uVar6);
            *(ulong *)(local_158 + 0x18) = CONCAT35((undefined3)iStack_11c,(int5)uVar3);
LAB_003674b2:
            _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h766f1f48926327acE
                      (&local_150);
            _ZN4core3ptr47drop_in_place_LT_just__evaluator__Evaluator_GT_17he8a263daf6e01e97E
                      (&local_98);
            return;
          }
          uStack_130 = 1;
          uStack_12c = 0;
          local_138 = 0;
          uStack_134 = 0;
          uVar13 = 0;
        }
        else {
                    /* try { // try from 0036726d to 0036727f has its CatchHandler @ 003674fc */
          _ZN4just9evaluator9Evaluator19evaluate_expression17h1032c41901323605E
                    (&local_138,&local_98,param_6);
          uStack_161 = (undefined)iStack_120;
          uStack_168 = (undefined3)uStack_127;
          if ((char)local_138 != '8') {
            uStack_165 = (undefined4)(CONCAT17(uStack_121,CONCAT61(uStack_127,uStack_128)) >> 0x20);
            uStack_160 = (undefined7)(CONCAT44(iStack_11c,iStack_120) >> 8);
            local_178 = (undefined4)CONCAT43(uStack_134,local_138._1_3_);
            uStack_174 = (undefined4)
                         (CONCAT17((undefined)uStack_130,CONCAT43(uStack_134,local_138._1_3_)) >>
                         0x20);
            uStack_170 = (undefined4)CONCAT43(uStack_12c,uStack_130._1_3_);
            uStack_16c = (undefined4)
                         (CONCAT17(uStack_128,CONCAT43(uStack_12c,uStack_130._1_3_)) >> 0x20);
            *(ulong *)(local_158 + 0x60) =
                 CONCAT17(uStack_d1,
                          CONCAT16(uStack_d2,CONCAT15(uStack_d3,CONCAT14(uStack_d4,local_d8))));
            *(ulong *)(local_158 + 0x50) = CONCAT44(iStack_e4,iStack_e8);
            *(undefined8 *)(local_158 + 0x58) = local_e0;
            *(ulong *)(local_158 + 0x40) = CONCAT44(iStack_f4,iStack_f8);
            *(ulong *)(local_158 + 0x48) = CONCAT44(iStack_ec,local_f0);
            *(undefined8 *)(local_158 + 0x30) = uStack_108;
            *(ulong *)(local_158 + 0x38) = CONCAT44(iStack_fc,local_100);
            *(undefined8 *)(local_158 + 0x20) = uStack_118;
            *(undefined8 *)(local_158 + 0x28) = local_110;
            *(ulong *)(local_158 + 0x10) = CONCAT44(uStack_165,CONCAT31(uStack_168,uStack_128));
            *(ulong *)(local_158 + 0x18) = CONCAT71(uStack_160,uStack_161);
            *(undefined4 *)(local_158 + 1) = local_178;
            *(undefined4 *)(local_158 + 5) = uStack_174;
            *(undefined4 *)(local_158 + 9) = uStack_170;
            *(undefined4 *)(local_158 + 0xd) = uStack_16c;
            *local_158 = (char)local_138;
            goto LAB_003674b2;
          }
          uStack_160 = (undefined7)(CONCAT44(iStack_11c,iStack_120) >> 8);
          uStack_174 = CONCAT13((undefined)uStack_130,(undefined3)uStack_174);
          uStack_170 = (undefined4)(CONCAT44(uStack_12c,uStack_130) >> 8);
          uStack_16c = CONCAT13(uStack_128,(int3)((uint)uStack_12c >> 8));
          uStack_165 = (undefined4)(CONCAT17(uStack_121,CONCAT61(uStack_127,uStack_128)) >> 0x20);
          local_c8 = uStack_130;
          uStack_c4 = uStack_12c;
          uStack_c0 = CONCAT31(uStack_168,uStack_128);
          uStack_bc = uStack_165;
          local_b8 = CONCAT71(uStack_160,uStack_161);
                    /* try { // try from 003672bc to 003672dc has its CatchHandler @ 003674dd */
          (*(code *)puVar4)(&local_138,&local_c8);
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h2be7ee32b7c9f397E
                    (&local_150,&local_138,&PTR_DAT_0052fb90);
          uVar13 = local_b8;
          local_138 = local_c8;
          uStack_134 = uStack_c4;
          uStack_130 = uStack_c0;
          uStack_12c = uStack_bc;
        }
LAB_003672f5:
        param_5 = 0;
      }
      else {
        if (*(char *)((long)param_6 + 0xc9) != '\x01') {
          lVar12 = 0;
          local_b0 = param_5;
          do {
                    /* try { // try from 003671f4 to 0036720c has its CatchHandler @ 003674fe */
            (*(code *)puVar4)(&local_138,lVar12 + param_4);
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h2be7ee32b7c9f397E
                      (&local_150,&local_138,&PTR_DAT_0052fbc0);
            lVar12 = lVar12 + 0x18;
          } while (param_5 * 0x18 != lVar12);
                    /* try { // try from 00367216 to 00367228 has its CatchHandler @ 003674fc */
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h43b71247e42c11acE
                    (&local_178,param_4,local_b0);
                    /* try { // try from 00367233 to 00367247 has its CatchHandler @ 003674d0 */
          _ZN5alloc3str17join_generic_copy17haa9e8db24d47c2b5E
                    (&local_138,CONCAT44(uStack_16c,uStack_170),
                     CONCAT17(uStack_161,CONCAT43(uStack_165,uStack_168)),&DAT_0016e4f0,1);
          uVar8 = uStack_12c;
          uVar7 = uStack_130;
          uVar6 = uStack_134;
          uVar5 = local_138;
          uVar13 = CONCAT17(uStack_121,CONCAT61(uStack_127,uStack_128));
          _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h766f1f48926327acE
                    (&local_178);
          param_4 = 8;
          local_138 = uVar5;
          uStack_134 = uVar6;
          uStack_130 = uVar7;
          uStack_12c = uVar8;
          goto LAB_003672f5;
        }
                    /* try { // try from 00367157 to 0036715e has its CatchHandler @ 003674fc */
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00565d98
        )(&local_178,param_4);
                    /* try { // try from 0036715f to 0036717a has its CatchHandler @ 003674ef */
        (*(code *)puVar4)(&local_138,&local_178);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h2be7ee32b7c9f397E
                  (&local_150,&local_138,&PTR_DAT_0052fba8);
        param_5 = param_5 + -1;
        param_4 = param_4 + 0x18;
        uVar13 = CONCAT17(uStack_161,CONCAT43(uStack_165,uStack_168));
        local_138 = local_178;
        uStack_134 = uStack_174;
        uStack_130 = uStack_170;
        uStack_12c = uStack_16c;
      }
      uStack_d3 = *(undefined *)(param_6 + 0x32);
      local_e0 = *(undefined8 *)(param_6 + 0x30);
      iStack_120 = param_6[0x20];
      iStack_11c = param_6[0x21];
      uStack_118 = *(undefined8 *)(param_6 + 0x22);
      local_110 = *(undefined8 *)(param_6 + 0x24);
      uStack_108 = *(undefined8 *)(param_6 + 0x26);
      local_100 = param_6[0x28];
      iStack_fc = param_6[0x29];
      iStack_f8 = param_6[0x2a];
      iStack_f4 = param_6[0x2b];
      local_f0 = param_6[0x2c];
      iStack_ec = param_6[0x2d];
      iStack_e8 = param_6[0x2e];
      iStack_e4 = param_6[0x2f];
      uStack_d4 = 0;
      local_d8 = 0;
      uStack_d2 = 0;
      uStack_128 = (undefined)uVar13;
      uStack_127 = (undefined6)((ulong)uVar13 >> 8);
      uStack_121 = (undefined)((ulong)uVar13 >> 0x38);
                    /* try { // try from 00367370 to 0036737f has its CatchHandler @ 003674fc */
      _ZN4just5scope5Scope4bind17h2017080dbe33bcdeE(&local_70,&local_138);
      piVar11 = local_a0 + 0x34;
      param_6 = local_a0;
    } while (local_a0 != local_a8);
  }
  *(undefined8 *)(local_158 + 0x38) = local_140;
  *(undefined8 *)(local_158 + 0x28) = local_150;
  *(undefined8 *)(local_158 + 0x30) = uStack_148;
  *(undefined8 *)(local_158 + 0x18) = local_60;
  *(undefined8 *)(local_158 + 0x20) = uStack_58;
  *(undefined8 *)(local_158 + 8) = local_70;
  *(undefined8 *)(local_158 + 0x10) = uStack_68;
  *local_158 = '8';
  return;
}