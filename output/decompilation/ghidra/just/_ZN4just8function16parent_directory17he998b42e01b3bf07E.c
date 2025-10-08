ulong * _ZN4just8function16parent_directory17he998b42e01b3bf07E
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
  auVar2 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00566a90)(param_3,param_4);
  lVar1 = auVar2._0_8_;
  if (lVar1 == 0) {
    local_10 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hcd9ad0a553cee1efE;
    local_48 = &PTR_s_Could_not_extract_parent_directo_0052ffa0;
    local_40 = 2;
    local_28 = 0;
    ppuStack_38 = &local_18;
    local_30 = 1;
    local_18 = (undefined *)&local_58;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E
              (param_1 + 1,0,auVar2._8_8_,&local_48);
  }
  else {
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h901fb789f3b446ecE
              (&local_48,lVar1);
    param_1[2] = local_40;
    param_1[3] = (ulong)ppuStack_38;
    param_1[1] = (ulong)local_48;
  }
  *param_1 = (ulong)(lVar1 == 0);
  return param_1;
}