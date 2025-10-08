undefined8 *
_ZN4just8function5style17ha3f9d2b4981024b2E
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 extraout_RDX;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  code *local_28;
  
  local_40 = param_3;
  local_38 = param_4;
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                    (param_3,param_4,&DAT_0016f91f,7);
  if (cVar1 == '\0') {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                      (param_3,param_4,
                       "error: Justfile contains no recipes.Justfile contains no default recipe.Justfile contains no choosable recipes.Could not find source file for import.Failed to get homedirFormatted justfile differs from original.Dotenv file not found"
                       ,5);
    if (cVar1 == '\0') {
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                        (param_3,param_4,"warning",7);
      if (cVar1 == '\0') {
        local_30 = &local_40;
        local_28 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hcd9ad0a553cee1efE;
        local_70 = 0x5300b8;
        uStack_6c = 0;
        uStack_68 = 2;
        uStack_64 = 0;
        local_50 = 0;
        local_60 = &local_30;
        local_58 = 1;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E
                  (param_1 + 1,0,extraout_RDX,&local_70);
        *param_1 = 1;
        return param_1;
      }
      uStack_68 = 3;
    }
    else {
      uStack_68 = 1;
    }
  }
  else {
    uStack_68 = *(undefined4 *)(*(long *)*param_2 + 0x180);
  }
  uStack_6c = 0;
  local_70 = 1;
  uStack_64 = CONCAT31(uStack_64._1_3_,10);
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h462c94f21fd65b1bE
            (param_1 + 1,&local_70);
  *param_1 = 0;
  return param_1;
}