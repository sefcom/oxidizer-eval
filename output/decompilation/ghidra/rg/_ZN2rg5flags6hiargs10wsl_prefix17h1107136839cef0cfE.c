void _ZN2rg5flags6hiargs10wsl_prefix17h1107136839cef0cfE(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 extraout_RDX;
  undefined4 **ppuVar2;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char **local_78;
  char *local_68;
  char **ppcStack_60;
  undefined4 **local_58;
  code *local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  _ZN3std3env6var_os17hb4475f8d1a095f3cE(&local_b8,"WSL_DISTRO_NAME",0xf);
  ppuVar2 = uStack_b0;
  local_78 = local_a8;
  local_88 = (int)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
                    /* try { // try from 00353505 to 0035362e has its CatchHandler @ 00353660 */
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_005267a8)(&local_b8,uStack_b0);
  if ((int)local_b8 == 1) {
    uVar1 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
    if (3 < uVar1) {
      local_68 = (char *)&local_88;
      ppcStack_60 = (char **)
                    PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_00526aa0
      ;
      local_b8 = &PTR_s_found_WSL_DISTRO_NAME___but_valu_004eb3e0;
      uStack_b0 = (undefined4 **)0x2;
      local_98 = 0;
      local_a8 = &local_68;
      local_a0 = 1;
      local_38 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                           (&PTR_s_crates_core_flags_hiargs_rs_004eb410);
      local_58 = (undefined4 **)0x18754f;
      local_50 = (code *)0x11;
      local_48 = "rg::flags::hiargs";
      local_40 = 0x11;
      _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_b8,4,&local_58);
      ppuVar2 = (undefined4 **)CONCAT44(uStack_7c,uStack_80);
    }
    *param_1 = 0x8000000000000000;
  }
  else {
    local_68 = (char *)uStack_b0;
    ppcStack_60 = local_a8;
    local_58 = (undefined4 **)&local_68;
    local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8797fd25d6434092E;
    local_b8 = &PTR_s_wsl___004eb400;
    uStack_b0 = (undefined4 **)&DAT_00000001;
    local_98 = 0;
    local_a8 = (char **)&local_58;
    local_a0 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
              (&local_30,0,extraout_RDX,&local_b8);
    param_1[2] = local_20;
    *(undefined4 *)param_1 = local_30;
    *(undefined4 *)((long)param_1 + 4) = uStack_2c;
    *(undefined4 *)(param_1 + 1) = uStack_28;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_24;
  }
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17ha1b355bbd6f8eb7bE
            (CONCAT44(uStack_84,local_88),ppuVar2);
  return;
}