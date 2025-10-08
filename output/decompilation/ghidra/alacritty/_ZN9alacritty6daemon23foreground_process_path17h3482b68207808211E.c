void _ZN9alacritty6daemon23foreground_process_path17h3482b68207808211E
               (undefined8 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 extraout_EDX;
  int local_74;
  undefined **local_70;
  undefined8 local_68;
  undefined4 **local_60;
  undefined8 local_58;
  undefined8 local_50;
  int *local_40;
  undefined *local_38;
  undefined local_30 [24];
  
  iVar1 = (*(code *)PTR_tcgetpgrp_009dfdc8)(param_2);
  local_74 = param_3;
  if (-1 < iVar1) {
    local_74 = iVar1;
  }
  local_40 = &local_74;
  local_38 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h6f30f0a695ff7937E_009deb58
  ;
  local_70 = &PTR_DAT_00981fa0;
  local_68 = 2;
  local_50 = 0;
  local_60 = &local_40;
  local_58 = 1;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
            (local_30,0,extraout_EDX,&local_70);
  _ZN3std2fs9read_link17h26201e9301c7092eE(&local_70,local_30);
  param_1[1] = local_68;
  param_1[2] = local_60;
  *param_1 = local_70;
  return;
}