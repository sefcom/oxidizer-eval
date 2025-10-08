long _ZN9meilitool7upgrade5v1_1216v1_12_to_v1_12_317h1124d443d8a50fb5E
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,
               undefined4 param_5)

{
  long lVar1;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined **local_80;
  undefined *local_78;
  int *local_70;
  undefined *local_68;
  undefined4 *puStack_60;
  undefined *local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined ***local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_80 = &PTR_s_Upgrading_from_v1_12__0__1__2__t_00626318;
  local_78 = (undefined *)0x1;
  local_70 = (int *)0x8;
  local_68 = (undefined *)0x0;
  puStack_60 = (undefined4 *)0x0;
  local_8c = param_3;
  local_88 = param_4;
  local_84 = param_5;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_80);
  if (param_4 == 0xc) {
    lVar1 = _ZN9meilitool7upgrade5v1_1226rebuild_field_distribution17h446077db02086abbE
                      (param_1,param_2);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  else {
    local_80 = (undefined **)&local_8c;
    local_78 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    local_70 = &local_88;
    local_68 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    puStack_60 = &local_84;
    local_58 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    local_50 = &PTR_s_Not_rebuilding_field_distributio_00626328;
    local_48 = 4;
    local_30 = 0;
    local_38 = 3;
    local_40 = &local_80;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_50);
  }
  return 0;
}