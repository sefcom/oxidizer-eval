void _ZN5uu_dd9parseargs31parse_bytes_with_opt_multiplier17hba7bf735da655d4cE
               (ulong *param_1,undefined8 param_2,ulong param_3)

{
  undefined auVar1 [16];
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  undefined auVar5 [16];
  undefined8 local_b0;
  undefined8 *local_a8;
  long local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined2 local_58;
  undefined local_50 [32];
  
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (&uStack_88,0x78,param_2,param_3);
  local_98 = 0;
  local_58 = 1;
  local_90 = param_3;
  _ZN4core4iter6traits8iterator8Iterator7collect17h743a2879142d859eE(&local_b0,&local_98);
  if (local_a0 == 1) {
                    /* try { // try from 0018e429 to 0018e436 has its CatchHandler @ 0018e572 */
    _ZN5uu_dd9parseargs16parse_bytes_no_x17h5472f4e3f9be4cacE
              (param_1,param_2,param_3,*local_a8,local_a8[1]);
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hf6c7f10f0c068d6aE
              (local_b0,local_a8);
    return;
  }
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h9498cef3078a0b70E
            (local_50,&local_b0);
  auVar5 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he417a95ce55c1253E
                     (local_50);
  if (auVar5._0_8_ == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 1;
    do {
      cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9308b2f97abc21f0E
                        (auVar5._0_8_,auVar5._8_8_,"0",1);
      if (cVar2 != '\0') {
                    /* try { // try from 0018e4ab to 0018e4c3 has its CatchHandler @ 0018e58a */
        _ZN5uu_dd9parseargs28show_zero_multiplier_warning17h6f4af1804e1c11d6E();
      }
      _ZN5uu_dd9parseargs16parse_bytes_no_x17h5472f4e3f9be4cacE
                (&local_98,param_2,param_3,auVar5._0_8_,auVar5._8_8_);
      if (local_98 != 0xe) {
        *(undefined4 *)(param_1 + 2) = uStack_88;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_84;
        *(undefined4 *)(param_1 + 3) = uStack_80;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_7c;
        uVar4 = local_98;
        uVar3 = local_90;
LAB_0018e524:
        *param_1 = uVar4;
        param_1[1] = uVar3;
        _ZN4core3ptr67drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_str_GT__GT_17h773b74249533a103E
                  (local_50);
        return;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar4;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_90;
      uVar4 = SUB168(auVar5 * auVar1,0);
      if (SUB168(auVar5 * auVar1,8) != 0) {
                    /* try { // try from 0018e547 to 0018e556 has its CatchHandler @ 0018e570 */
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h074386e79a8fa9e7E
                  (&local_98,param_2,param_3);
        *(undefined4 *)(param_1 + 2) = (undefined4)local_90;
        *(undefined4 *)((long)param_1 + 0x14) = local_90._4_4_;
        *(undefined4 *)(param_1 + 3) = uStack_88;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_84;
        uVar4 = 0xd;
        uVar3 = local_98;
        goto LAB_0018e524;
      }
      auVar5 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he417a95ce55c1253E
                         (local_50);
    } while (auVar5._0_8_ != 0);
  }
  _ZN4core3ptr67drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_str_GT__GT_17h773b74249533a103E
            (local_50);
  param_1[1] = uVar4;
  *param_1 = 0xe;
  return;
}