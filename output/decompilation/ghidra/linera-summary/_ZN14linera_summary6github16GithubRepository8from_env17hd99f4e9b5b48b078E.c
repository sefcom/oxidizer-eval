void _ZN14linera_summary6github16GithubRepository8from_env17hd99f4e9b5b48b078E
               (undefined8 *param_1,int param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined local_f8 [8];
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined2 local_98;
  byte local_88 [8];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  _ZN3std3env3var17h3e0bd6d3c4a94666E(local_88,"GITHUB_REPOSITORY",0x11);
  if (param_2 == 0) {
    uStack_f0 = CONCAT44(uStack_74,uStack_78);
    if ((local_88[0] & 1) != 0) {
      uVar2 = _ZN14linera_summary6github16GithubRepository8from_env28__u7b__u7b_closure_u7d__u7d_17h7a72685267245493E
                        ();
      param_1[1] = uVar2;
      *param_1 = 0x8000000000000000;
      return;
    }
    local_e8 = local_70;
  }
  else if ((local_88[0] & 1) == 0) {
    local_e8 = local_70;
    uStack_f0 = CONCAT44(uStack_74,uStack_78);
  }
  else {
    _ZN14linera_summary6github16GithubRepository8from_env28__u7b__u7b_closure_u7d__u7d_17hd49ff3a820f2757eE
              (local_f8,CONCAT44(uStack_7c,local_80),CONCAT44(uStack_74,uStack_78));
  }
  uVar2 = local_e8;
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (&local_c8,0x2f,uStack_f0,local_e8);
  local_d8 = 0;
  uStack_d0 = uVar2;
  local_98 = 1;
                    /* try { // try from 006185ed to 006185fe has its CatchHandler @ 00618738 */
  _ZN4core4iter6traits8iterator8Iterator7collect17hb471293643a10684E(&local_68,&local_d8);
  local_50 = local_58;
  if (local_58 == 2) {
                    /* try { // try from 00618628 to 00618631 has its CatchHandler @ 0061874b */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h81302a4b01e720c3E
              (&local_d8,*local_60,local_60[1]);
    local_38 = local_c8;
    local_48 = (undefined4)local_d8;
    uStack_44 = local_d8._4_4_;
    uStack_40 = (undefined4)uStack_d0;
    uStack_3c = uStack_d0._4_4_;
                    /* try { // try from 00618654 to 00618660 has its CatchHandler @ 00618726 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h81302a4b01e720c3E
              (&local_30,local_60[2],local_60[3]);
    local_b0 = local_20;
    local_c0 = local_30;
    uStack_b8 = uStack_28;
    local_c8 = local_38;
    local_d8 = CONCAT44(uStack_44,local_48);
    uStack_d0 = CONCAT44(uStack_3c,uStack_40);
    param_1[4] = uStack_28;
    param_1[5] = local_20;
    param_1[2] = local_38;
    param_1[3] = local_30;
    *(undefined4 *)param_1 = local_48;
    *(undefined4 *)((long)param_1 + 4) = uStack_44;
    *(undefined4 *)(param_1 + 1) = uStack_40;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h10f420a45b15fff5E
              (local_68,local_60);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(local_f8);
    return;
  }
  local_d8 = 0;
                    /* try { // try from 00618701 to 00618723 has its CatchHandler @ 0061874b */
  (*(code *)PTR__ZN4core9panicking13assert_failed17h449f2a7fe5426575E_00a4bc78)
            (0,&local_50,&DAT_00233f38,&local_d8,&PTR_s_linera_summary_src_github_rs_009f3428);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}