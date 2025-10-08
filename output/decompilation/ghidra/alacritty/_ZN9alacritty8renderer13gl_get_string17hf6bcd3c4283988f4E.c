void _ZN9alacritty8renderer13gl_get_string17hf6bcd3c4283988f4E
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_RDX;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 local_40;
  int *local_30;
  code *local_28;
  undefined8 *local_20;
  code *local_18;
  
  local_70 = param_3;
  local_68 = param_4;
  lVar2 = (*(code *)_ZN9alacritty2gl7storage9GetString17h69a233b31d134479E_0)(param_2);
  iVar1 = (*(code *)_ZN9alacritty2gl7storage8GetError17h44a6fc6462751df8E_0)();
  if (iVar1 == 0) {
    if (lVar2 != 0) {
      lVar3 = (*(code *)PTR_strlen_009df220)(lVar2);
      (*(code *)
        PTR__ZN5alloc3ffi5c_str40__LT_impl_u20_core__ffi__c_str__CStr_GT_15to_string_lossy17h9afbfb8b28205f24E_009df228
      )(param_1 + 1,lVar2,lVar3 + 1);
      *param_1 = 4;
      return;
    }
  }
  else if (iVar1 == 0x500) {
    local_30 = (int *)&local_70;
    local_28 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hde322f69d68256c4E;
    local_60 = &PTR_s_OpenGL_error_requesting___invali_00984008;
    local_48 = 1;
    goto LAB_0056c25b;
  }
  local_30 = &local_74;
  local_28 = (code *)
             PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_009deb88
  ;
  local_20 = &local_70;
  local_18 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hde322f69d68256c4E;
  local_60 = &PTR_s_OpenGL_error_requesting_00984028;
  local_48 = 2;
  local_74 = iVar1;
LAB_0056c25b:
  local_50 = (undefined8 **)&local_30;
  local_40 = 0;
  local_58 = 2;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
            (param_1 + 1,0,extraout_RDX,&local_60);
  *param_1 = 3;
  return;
}