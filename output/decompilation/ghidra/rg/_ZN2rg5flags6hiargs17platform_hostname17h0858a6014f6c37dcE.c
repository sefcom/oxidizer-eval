void _ZN2rg5flags6hiargs17platform_hostname17h0858a6014f6c37dcE(undefined8 *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  (*(code *)PTR__ZN8grep_cli8hostname8hostname17h92c4a1ccf3300345E_00527220)(&local_38);
  puVar2 = uStack_30;
  local_a8 = local_28;
  local_b8 = (undefined4)local_38;
  uStack_b4 = local_38._4_4_;
  uStack_b0 = (undefined4)uStack_30;
  uStack_ac = uStack_30._4_4_;
                    /* try { // try from 0035335e to 00353454 has its CatchHandler @ 00353495 */
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_005267a8)(&local_90,uStack_30);
  if ((int)local_90 == 1) {
    uVar1 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
    if (3 < uVar1) {
      uStack_30 = 
      PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_00526aa0
      ;
      local_90 = &PTR_s_got_hostname___but_it_s_not_vali_004eb390;
      uStack_88 = 2;
      local_70 = 0;
      local_78 = 1;
      local_80 = &local_38;
      local_38 = &local_b8;
      local_40 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                           (&PTR_s_crates_core_flags_hiargs_rs_004eb3b0);
      local_60 = "rg::flags::hiargs";
      local_58 = 0x11;
      local_50 = "rg::flags::hiargs";
      local_48 = 0x11;
      _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_90,4,&local_60);
      puVar2 = (undefined *)CONCAT44(uStack_ac,uStack_b0);
    }
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17ha1b355bbd6f8eb7bE
              (CONCAT44(uStack_b4,local_b8),puVar2);
    return;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
            (&local_90,uStack_88,local_80);
  param_1[2] = local_80;
  *(int *)param_1 = (int)local_90;
  *(undefined4 *)((long)param_1 + 4) = local_90._4_4_;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_88;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_88._4_4_;
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17ha1b355bbd6f8eb7bE
            (CONCAT44(uStack_b4,local_b8),puVar2);
  return;
}