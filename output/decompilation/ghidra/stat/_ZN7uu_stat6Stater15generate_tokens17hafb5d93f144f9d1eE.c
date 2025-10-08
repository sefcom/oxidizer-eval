void _ZN7uu_stat6Stater15generate_tokens17hafb5d93f144f9d1eE
               (undefined8 *param_1,long param_2,ulong param_3,char param_4)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  undefined auVar5 [16];
  ulong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  ulong local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  long local_68;
  ulong local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_b8 = 0;
  uStack_b0 = 8;
  local_a8 = 0;
                    /* try { // try from 00175c8e to 00175c97 has its CatchHandler @ 00175eef */
  local_a0 = param_1;
  _ZN4core4iter6traits8iterator8Iterator7collect17hc2256cc222372473E
            (&local_70,param_2,param_3 + param_2);
  lVar3 = local_68;
  local_c0 = 0;
  if (param_3 != 0) {
    do {
      if (local_60 <= local_c0) {
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_002220e8)
                  (local_c0,local_60,&PTR_s_src_uu_stat_src_stat_rs_00219f08);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      iVar1 = *(int *)(lVar3 + local_c0 * 4);
      if (iVar1 == 0x25) {
        _ZN7uu_stat6Stater19handle_percent_case17hcbef71a70831617cE
                  (&local_98,lVar3,local_60,&local_c0,param_3,param_2,param_3);
        if (local_98 == 5) {
          local_a0[1] = CONCAT44(uStack_8c,local_90);
          local_a0[2] = local_88;
          *local_a0 = 0x8000000000000000;
          _ZN4core3ptr48drop_in_place_LT_alloc__vec__Vec_LT_char_GT__GT_17h0dbcc999510fd514E
                    (local_70,lVar3);
          _ZN4core3ptr58drop_in_place_LT_alloc__vec__Vec_LT_uu_stat__Token_GT__GT_17h3cf71f1ca7f8d943E
                    (local_b8,uStack_b0);
          return;
        }
        local_40 = local_80;
        uStack_3c = uStack_7c;
        uStack_38 = uStack_78;
        uStack_34 = uStack_74;
        local_58 = local_98;
        local_48 = local_88;
        local_50 = CONCAT44(uStack_8c,local_90);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h67ea3e1d2f0918cbE
                  (&local_b8,&local_58,&PTR_s_src_uu_stat_src_stat_rs_00219f20);
      }
      else if (iVar1 == 0x5c) {
        if (param_4 == '\0') {
          local_90 = 0x5c;
          local_98 = 3;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h67ea3e1d2f0918cbE
                    (&local_b8,&local_98,&PTR_s_src_uu_stat_src_stat_rs_00219f38);
        }
        else {
          _ZN7uu_stat6Stater23handle_escape_sequences17h968fffb30d055b36E
                    (&local_98,lVar3,local_60,&local_c0,param_3,param_2,param_3);
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h67ea3e1d2f0918cbE
                    (&local_b8,&local_98,&PTR_s_src_uu_stat_src_stat_rs_00219f50);
        }
      }
      else {
        local_98 = 3;
        local_90 = iVar1;
                    /* try { // try from 00175cdd to 00175dff has its CatchHandler @ 00175f10 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h67ea3e1d2f0918cbE
                  (&local_b8,&local_98,&PTR_s_src_uu_stat_src_stat_rs_00219f68);
      }
      local_c0 = local_c0 + 1;
    } while (local_c0 < param_3);
  }
  if (param_4 == '\0') {
    local_98 = local_98 & 0xffffffff00000000;
    auVar5 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(10,&local_98);
                    /* try { // try from 00175e26 to 00175eec has its CatchHandler @ 00175f06 */
    cVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h1fce938563fb45edE
                      (param_2,param_3,auVar5._0_8_,auVar5._8_8_);
    if (cVar4 == '\0') {
      local_90 = 10;
      local_98 = 3;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h67ea3e1d2f0918cbE
                (&local_b8,&local_98,&PTR_s_src_uu_stat_src_stat_rs_00219ef0);
    }
  }
  local_a0[2] = local_a8;
  *(undefined4 *)local_a0 = (undefined4)local_b8;
  *(undefined4 *)((long)local_a0 + 4) = local_b8._4_4_;
  *(undefined4 *)(local_a0 + 1) = (undefined4)uStack_b0;
  *(undefined4 *)((long)local_a0 + 0xc) = uStack_b0._4_4_;
  _ZN4core3ptr48drop_in_place_LT_alloc__vec__Vec_LT_char_GT__GT_17h0dbcc999510fd514E
            (local_70,local_68);
  return;
}