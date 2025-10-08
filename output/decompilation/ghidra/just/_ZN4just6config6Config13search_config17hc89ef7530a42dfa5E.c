void _ZN4just6config6Config13search_config17hc89ef7530a42dfa5E
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5581ced2fe72531cE_00566ac8
          )(param_2,&DAT_0016f276,0xf);
  if (cVar1 == '\0') {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h223ef8b59aed830dE
              (&local_b8,param_2,&DAT_00169018,8);
    lVar3 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h25b7f9d64b5b1d51E
                      (&DAT_00169018,8,&local_b8);
    if (lVar3 == 0) {
      local_f0 = -0x8000000000000000;
    }
    else {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                (&local_f0,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
    }
                    /* try { // try from 0035f84b to 0035f890 has its CatchHandler @ 0035fa86 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h223ef8b59aed830dE
              (&local_b8,param_2,&DAT_0016f294,0x11);
    lVar3 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h25b7f9d64b5b1d51E
                      (&DAT_0016f294,0x11,&local_b8);
    if (lVar3 == 0) {
      local_d8 = -0x8000000000000000;
      lVar3 = *(long *)(param_3 + 0x30);
    }
    else {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                (&local_b8,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
      lVar3 = *(long *)(param_3 + 0x30);
      local_d8 = local_b8;
      uStack_d0 = (undefined4)uStack_b0;
      uStack_cc = uStack_b0._4_4_;
      local_c8 = local_a8;
    }
    if (lVar3 != -0x8000000000000000) {
                    /* try { // try from 0035f8c0 to 0035f8c9 has its CatchHandler @ 0035fa77 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                (&local_b8,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x40));
      local_78 = local_a8;
      local_88 = (undefined4)local_b8;
      uStack_84 = local_b8._4_4_;
      uStack_80 = (undefined4)uStack_b0;
      uStack_7c = uStack_b0._4_4_;
      if (local_b8 != -0x8000000000000000) {
        if ((local_f0 == -0x8000000000000000) && (local_d8 == -0x8000000000000000)) {
          param_1[4] = local_a8;
          *(undefined4 *)(param_1 + 2) = (undefined4)local_b8;
          *(undefined4 *)((long)param_1 + 0x14) = local_b8._4_4_;
          *(undefined4 *)(param_1 + 3) = (undefined4)uStack_b0;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_b0._4_4_;
          param_1[1] = 0x8000000000000001;
          *param_1 = 0x8000000000000007;
        }
        else {
          *param_1 = 0x8000000000000004;
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_88);
        }
        _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h35203c2827c71cb0E
                  (&local_d8);
        _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h35203c2827c71cb0E
                  (&local_f0);
        return;
      }
    }
    local_68 = local_f0;
    uStack_60 = uStack_e8;
    local_58 = local_e0;
    local_50 = (undefined4)local_d8;
    uStack_4c = local_d8._4_4_;
    uStack_48 = uStack_d0;
    uStack_44 = uStack_cc;
    local_40 = local_c8;
    if (local_f0 == -0x8000000000000000) {
      if (local_d8 != -0x8000000000000000) {
                    /* try { // try from 0035f9a7 to 0035f9bc has its CatchHandler @ 0035fa64 */
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                  (&local_b8,&DAT_0016fc83,0x2a);
        param_1[3] = local_a8;
        *(undefined4 *)(param_1 + 1) = (undefined4)local_b8;
        *(undefined4 *)((long)param_1 + 0xc) = local_b8._4_4_;
        *(undefined4 *)(param_1 + 2) = (undefined4)uStack_b0;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_b0._4_4_;
        *param_1 = 0x8000000000000001;
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_50);
        return;
      }
      param_1[1] = 0x8000000000000000;
      goto LAB_0035f7e5;
    }
    if (local_d8 != -0x8000000000000000) {
      param_1[1] = local_f0;
      param_1[2] = uStack_e8;
      param_1[5] = CONCAT44(uStack_cc,uStack_d0);
      param_1[6] = local_c8;
      param_1[3] = local_e0;
      param_1[4] = local_d8;
      goto LAB_0035f7e5;
    }
    param_1[4] = local_e0;
    param_1[2] = local_f0;
    param_1[3] = uStack_e8;
    uVar2 = 0x8000000000000003;
  }
  else {
    uVar2 = 0x8000000000000002;
  }
  param_1[1] = uVar2;
LAB_0035f7e5:
  *param_1 = 0x8000000000000007;
  return;
}