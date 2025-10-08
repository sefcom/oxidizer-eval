void _ZN8uu_rmdir13remove_single17h47fda4712a97f9b5E
               (long *param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined local_98 [16];
  undefined *local_88;
  code *local_80;
  undefined8 *local_78;
  undefined *local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((param_4 & 0x10000) != 0) {
    local_98 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e4cc8)();
    local_68 = 1;
    local_50 = 1;
    local_80 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9055eac9438a8266E;
    local_78 = &local_68;
    local_70 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001e4d50
    ;
    local_48 = &DAT_001de728;
    local_40 = 3;
    local_28 = 0;
    local_38 = &local_88;
    local_30 = 2;
    local_88 = local_98;
    local_60 = param_2;
    local_58 = param_3;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001e4df8)(&local_48);
  }
  lVar1 = _ZN3std2fs10remove_dir17h98701be05dccb4b0E(param_2,param_3);
  if (lVar1 != 0) {
    param_1[1] = param_2;
    param_1[2] = param_3;
  }
  *param_1 = lVar1;
  return;
}