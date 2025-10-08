undefined8 *
_ZN4just8function7env_var17hbabeac8dce4c02efE
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 extraout_RDX;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_98;
  code *local_90;
  undefined4 *local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  byte local_40 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_d8 = param_3;
  local_d0 = param_4;
  lVar1 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h7621d24a43012b45E
                    (**(undefined8 **)(*param_2 + 8),(*(undefined8 **)(*param_2 + 8))[1]);
  if (lVar1 == 0) {
    _ZN3std3env3var17haeedb8a63b9509fbE(local_40,param_3,param_4);
    if ((local_40[0] & 1) != 0) {
      local_68 = local_28;
      local_78 = local_38;
      uStack_74 = uStack_34;
      uStack_70 = uStack_30;
      uStack_6c = uStack_2c;
      local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hcd9ad0a553cee1efE;
      local_88 = &local_78;
      local_80 = 
      PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_005663f0
      ;
      local_c8 = &PTR_s_environment_variable____not_pres_0052fe68;
      local_c0 = 2;
      local_a8 = 0;
      local_b8 = &local_98;
      local_b0 = 2;
                    /* try { // try from 0036a6d4 to 0036a6e7 has its CatchHandler @ 0036a716 */
      local_98 = (undefined *)&local_d8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E
                (&local_58,0,extraout_RDX,&local_c8);
      param_1[3] = local_48;
      *(undefined4 *)(param_1 + 1) = local_58;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_54;
      *(undefined4 *)(param_1 + 2) = uStack_50;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_4c;
      *param_1 = 1;
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hb5088e4c98ca9abdE(&local_78);
      return param_1;
    }
    param_1[3] = local_28;
    param_1[1] = CONCAT44(uStack_34,local_38);
    param_1[2] = CONCAT44(uStack_2c,uStack_30);
  }
  else {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00565d98
    )(param_1 + 1,lVar1);
  }
  *param_1 = 0;
  return param_1;
}