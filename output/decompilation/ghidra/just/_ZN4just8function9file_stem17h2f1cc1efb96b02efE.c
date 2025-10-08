ulong * _ZN4just8function9file_stem17h2f1cc1efb96b02efE
                  (ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined auVar2 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined **local_48;
  ulong local_40;
  undefined **ppuStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined *local_18;
  code *local_10;
  
  local_58 = param_3;
  local_50 = param_4;
  auVar2 = (*(code *)PTR__ZN3std4path4Path9file_stem17hc69c2d2c61933548E_00565dc8)(param_3,param_4);
  lVar1 = auVar2._0_8_;
  if (lVar1 == 0) {
    local_10 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hcd9ad0a553cee1efE;
    local_48 = &PTR_s_Could_not_extract_file_stem_from_0052fec8;
    local_40 = 2;
    local_28 = 0;
    ppuStack_38 = &local_18;
    local_30 = 1;
    local_18 = (undefined *)&local_58;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E
              (param_1 + 1,0,auVar2._8_8_,&local_48);
  }
  else {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (&local_48,lVar1);
    param_1[2] = local_40;
    param_1[3] = (ulong)ppuStack_38;
    param_1[1] = (ulong)local_48;
  }
  *param_1 = (ulong)(lVar1 == 0);
  return param_1;
}