void _ZN3bat6output12BuiltinPager3new17h5052a4e4c2ea861dE(undefined8 *param_1)

{
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined local_28 [24];
  
  (*(code *)PTR__ZN5minus5pager5Pager3new17hed592299e9df6bccE_008088a8)(&local_88);
                    /* try { // try from 0053cc6b to 0053cccf has its CatchHandler @ 0053ccfd */
  _ZN58__LT_minus__pager__Pager_u20_as_u20_core__clone__Clone_GT_5clone17h0a045ed1a1d3a159E
            (&local_48,&local_88);
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  local_a8 = 0x8000000000000000;
  local_b8 = 0;
  local_90 = 0;
  _ZN3std6thread7Builder15spawn_unchecked17h62eb7994e13c58eaE(local_28,&local_b8,&local_68);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h0e103480dd3d7923E(&local_b8,local_28);
  param_1[6] = local_a8;
  param_1[4] = local_b8;
  param_1[5] = uStack_b0;
  param_1[2] = local_78;
  param_1[3] = uStack_70;
  *param_1 = local_88;
  param_1[1] = uStack_80;
  return;
}