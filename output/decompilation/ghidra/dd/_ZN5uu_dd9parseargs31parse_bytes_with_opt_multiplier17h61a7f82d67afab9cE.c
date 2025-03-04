void _ZN5uu_dd9parseargs31parse_bytes_with_opt_multiplier17h61a7f82d67afab9cE
               (ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  undefined auVar5 [16];
  undefined local_d0 [8];
  undefined8 *local_c8;
  long local_c0;
  ulong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined local_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h77b0cfb9226a3587E
            (local_68,0x78,param_2,param_3);
  local_78 = 0;
  local_38 = 1;
  local_70 = param_3;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h96366f3336c0a79dE
            (local_d0,&local_78);
  if (local_c0 == 1) {
                    /* try { // try from 001d48aa to 001d48b7 has its CatchHandler @ 001d49e2 */
    _ZN5uu_dd9parseargs16parse_bytes_no_x17h9d66ee8239148f5fE
              (param_1,param_2,param_3,*local_c8,local_c8[1]);
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hf4edae12fbccf23eE(local_d0);
  }
  else {
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h532aa9ace314f175E
              (local_98,local_d0);
    auVar5 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1fb4a3ee92f93d48E
                       (local_98);
    if (auVar5._0_8_ == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 1;
      do {
                    /* try { // try from 001d4900 to 001d4933 has its CatchHandler @ 001d49f1 */
        cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h27cd8ef99e7e17deE
                          (auVar5._0_8_,auVar5._8_8_,"0",1);
        if (cVar2 != '\0') {
          _ZN5uu_dd9parseargs28show_zero_multiplier_warning17hbe4ec55817d90dd4E();
        }
        _ZN5uu_dd9parseargs16parse_bytes_no_x17h9d66ee8239148f5fE
                  (&local_b8,param_2,param_3,auVar5._0_8_,auVar5._8_8_);
        uVar3 = CONCAT44(uStack_ac,local_b0);
        if (local_b8 != 0xe) {
          *(undefined4 *)(param_1 + 2) = uStack_a8;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_a4;
          *(undefined4 *)(param_1 + 3) = uStack_a0;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_9c;
          uVar4 = local_b8;
LAB_001d49bd:
          *param_1 = uVar4;
          param_1[1] = uVar3;
          _ZN4core3ptr67drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_str_GT__GT_17h09ad4d2f7ce83910E
                    (local_98);
          return;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar4;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar4 = SUB168(auVar5 * auVar1,0);
        if (SUB168(auVar5 * auVar1,8) != 0) {
                    /* try { // try from 001d4996 to 001d49a5 has its CatchHandler @ 001d49e0 */
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h778f954dace7b409E
                    (&local_b8,param_2,param_3);
          *(undefined4 *)(param_1 + 2) = local_b0;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_ac;
          *(undefined4 *)(param_1 + 3) = uStack_a8;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_a4;
          uVar4 = 0xd;
          uVar3 = local_b8;
          goto LAB_001d49bd;
        }
        auVar5 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1fb4a3ee92f93d48E
                           (local_98);
      } while (auVar5._0_8_ != 0);
    }
    _ZN4core3ptr67drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_str_GT__GT_17h09ad4d2f7ce83910E
              (local_98);
    param_1[1] = uVar4;
    *param_1 = 0xe;
  }
  return;
}