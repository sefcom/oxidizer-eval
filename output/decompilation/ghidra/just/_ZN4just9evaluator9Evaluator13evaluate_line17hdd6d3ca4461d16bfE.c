void _ZN4just9evaluator9Evaluator13evaluate_line17hdd6d3ca4461d16bfE
               (char *param_1,undefined8 param_2,long param_3,long param_4,byte param_5)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_dc;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined3 uStack_a8;
  undefined4 uStack_a5;
  undefined8 local_a1;
  char local_98;
  undefined7 uStack_97;
  undefined local_90;
  undefined7 uStack_8f;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_108 = 0;
  uStack_100 = 1;
  local_f8 = 0;
  local_c8 = param_4 * 0x80 + param_3;
  local_c0 = 0;
  local_f0 = param_2;
  local_d0 = param_3;
  auVar5 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he3b34ff9b5c4663aE
                     (&local_d0);
  if (auVar5._8_8_ != 0) {
    do {
      if (*auVar5._8_8_ == 0x12) {
                    /* try { // try from 00366ea2 to 00366f1c has its CatchHandler @ 00367056 */
        auVar6 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)
                           (auVar5._8_8_ + 2);
        _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17h89cd4697c7693803E
                  (&local_98,auVar6._0_8_,auVar6._8_8_,"{{{{Q",4,"{{",2);
        lVar3 = CONCAT71(uStack_8f,local_90);
        if ((param_5 & auVar5._0_8_ == 0) == 0) {
          lVar2 = CONCAT44(uStack_84,uStack_88) + lVar3;
        }
        else {
          auVar5 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17h646b688298f76263E
                             (lVar3,CONCAT44(uStack_84,uStack_88));
          lVar3 = auVar5._0_8_;
          lVar2 = auVar5._8_8_ + lVar3;
        }
                    /* try { // try from 00366f73 to 00366f7a has its CatchHandler @ 00367034 */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hb25a112a407b21ecE
                  (&local_108,lVar3,lVar2);
        pcVar4 = &local_98;
      }
      else {
        _ZN4just9evaluator9Evaluator19evaluate_expression17h1032c41901323605E(&local_98,local_f0);
        uStack_a8 = (undefined3)((uint)uStack_88 >> 8);
        uStack_b0 = (undefined4)uStack_8f;
        uVar1 = uStack_b0;
        if (local_98 != '8') {
          uStack_a5 = uStack_84;
          local_a1 = CONCAT44(uStack_7c,local_80);
          uStack_b8 = (undefined4)uStack_97;
          uStack_b4 = (undefined4)(CONCAT17(local_90,uStack_97) >> 0x20);
          uStack_ac = (undefined4)(CONCAT17((undefined)uStack_88,uStack_8f) >> 0x20);
          *(undefined8 *)(param_1 + 0x60) = local_38;
          *(undefined8 *)(param_1 + 0x50) = local_48;
          *(undefined8 *)(param_1 + 0x58) = uStack_40;
          *(undefined8 *)(param_1 + 0x40) = local_58;
          *(undefined8 *)(param_1 + 0x48) = uStack_50;
          *(undefined4 *)(param_1 + 0x30) = local_68;
          *(undefined4 *)(param_1 + 0x34) = uStack_64;
          *(undefined4 *)(param_1 + 0x38) = uStack_60;
          *(undefined4 *)(param_1 + 0x3c) = uStack_5c;
          *(undefined4 *)(param_1 + 0x20) = local_78;
          *(undefined4 *)(param_1 + 0x24) = uStack_74;
          *(undefined4 *)(param_1 + 0x28) = uStack_70;
          *(undefined4 *)(param_1 + 0x2c) = uStack_6c;
          *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_84,uStack_88);
          *(undefined8 *)(param_1 + 0x18) = local_a1;
          *(undefined4 *)(param_1 + 1) = uStack_b8;
          *(undefined4 *)(param_1 + 5) = uStack_b4;
          *(undefined4 *)(param_1 + 9) = uStack_b0;
          *(undefined4 *)(param_1 + 0xd) = uStack_ac;
          *param_1 = local_98;
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(&local_108);
          return;
        }
        uStack_b4 = CONCAT13(local_90,(undefined3)uStack_b4);
        uStack_ac = CONCAT13((undefined)uStack_88,(int3)((uint7)uStack_8f >> 0x20));
        uStack_b0._0_3_ = (undefined3)uStack_8f;
        local_e8 = CONCAT31((undefined3)uStack_b0,local_90);
        uStack_e4 = (undefined4)((uint7)uStack_8f >> 0x18);
        uStack_dc = uStack_84;
        uStack_b0 = uVar1;
                    /* try { // try from 00366f53 to 00366f5a has its CatchHandler @ 0036702a */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hb25a112a407b21ecE
                  (&local_108,CONCAT44(uStack_84,uStack_88),
                   CONCAT44(uStack_7c,local_80) + CONCAT44(uStack_84,uStack_88));
        pcVar4 = (char *)&local_e8;
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(pcVar4);
      auVar5 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he3b34ff9b5c4663aE
                         (&local_d0);
    } while (auVar5._8_8_ != 0);
  }
  *(undefined8 *)(param_1 + 0x18) = local_f8;
  *(undefined8 *)(param_1 + 8) = local_108;
  *(undefined8 *)(param_1 + 0x10) = uStack_100;
  *param_1 = '8';
  return;
}