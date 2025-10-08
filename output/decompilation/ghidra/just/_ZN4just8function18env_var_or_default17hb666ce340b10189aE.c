undefined8 *
_ZN4just8function18env_var_or_default17hb666ce340b10189aE
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 extraout_RDX;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  code *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 local_60;
  byte local_50 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_c8 = param_3;
  local_c0 = param_4;
  lVar1 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h7621d24a43012b45E
                    (**(undefined8 **)(*param_2 + 8),(*(undefined8 **)(*param_2 + 8))[1]);
  if (lVar1 == 0) {
    _ZN3std3env3var17haeedb8a63b9509fbE(local_50,param_3,param_4);
    if ((local_50[0] & 1) != 0) {
      local_d8 = local_38;
      local_e8 = local_48;
      uStack_e4 = uStack_44;
      uStack_e0 = uStack_40;
      uStack_dc = uStack_3c;
      local_b8 = &local_c8;
      local_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hcd9ad0a553cee1efE;
      local_a0 = 
      PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_005663f0
      ;
      local_80 = &PTR_s_environment_variable____not_pres_0052fe68;
      local_78 = 2;
      local_60 = 0;
      local_70 = &local_b8;
      local_68 = 2;
                    /* try { // try from 0036a85c to 0036a86c has its CatchHandler @ 0036a893 */
      local_a8 = (undefined *)&local_e8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E
                (&local_98,0,extraout_RDX,&local_80);
      param_1[3] = local_88;
      *(undefined4 *)(param_1 + 1) = local_98;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_94;
      *(undefined4 *)(param_1 + 2) = uStack_90;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_8c;
      *param_1 = 1;
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hb5088e4c98ca9abdE(&local_e8);
      return param_1;
    }
    param_1[3] = local_38;
    param_1[1] = CONCAT44(uStack_44,local_48);
    param_1[2] = CONCAT44(uStack_3c,uStack_40);
  }
  else {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00565d98
    )(param_1 + 1,lVar1);
  }
  *param_1 = 0;
  return param_1;
}