void _ZN9alacritty3ipc16spawn_ipc_socket17h71ea705a2a85995bE
               (undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 *local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  _ZN55__LT__RF_str_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0eee6798dc8ee10dE
            (&local_78,*(undefined8 *)(param_2 + 0x1d0),*(undefined8 *)(param_2 + 0x1d8));
  uStack_88 = (undefined4)uStack_70;
  uStack_84 = uStack_70._4_4_;
  uStack_80 = (undefined4)local_68;
  uStack_7c = local_68._4_4_;
  local_90 = local_78;
                    /* try { // try from 0055b7e6 to 0055b7f4 has its CatchHandler @ 0055b91a */
  _ZN3std2os4unix3net8listener12UnixListener4bind17h0d7793f5f7fb1ed2E(&local_78,&local_90);
  if ((int)local_78 == 1) {
    param_1[1] = uStack_70;
    *param_1 = 0x8000000000000000;
    _ZN4core3mem4drop17ha42964a555fb617bE(&local_90);
    _ZN4core3ptr85drop_in_place_LT_winit__event_loop__EventLoopProxy_LT_alacritty__event__Event_GT__GT_17h24ae1d3a938ce77bE
              (param_3);
  }
  else {
    uVar1 = local_78._4_4_;
                    /* try { // try from 0055b837 to 0055b8ad has its CatchHandler @ 0055b8f9 */
    _ZN3std3env7set_var17hd696746618852d1eE
              ("ALACRITTY_SOCKET",0x10,CONCAT44(uStack_84,uStack_88),CONCAT44(uStack_7c,uStack_80));
    if (*(char *)(param_2 + 0x1e2) != '\0') {
      local_48 = &local_38;
      local_38 = uStack_88;
      uStack_34 = uStack_84;
      uStack_30 = uStack_80;
      uStack_2c = uStack_7c;
      local_40 = 
      PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_009dff10
      ;
      local_78 = &PTR_s_ALACRITTY_SOCKET___export_ALACRI_00982ec8;
      uStack_70 = 2;
      local_58 = 0;
      local_68 = &local_48;
      uStack_60 = 1;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_009dff18)(&local_78);
    }
    local_58 = CONCAT44(local_58._4_4_,uVar1);
    local_78 = (undefined **)*param_3;
    uStack_70 = param_3[1];
    local_68 = (undefined4 **)param_3[2];
    uStack_60 = param_3[3];
                    /* try { // try from 0055b8c3 to 0055b8db has its CatchHandler @ 0055b905 */
    _ZN18alacritty_terminal6thread11spawn_named17h24574652a96280a1E(&local_38,&local_78);
    _ZN4core3ptr60drop_in_place_LT_std__thread__JoinHandle_LT__LP__RP__GT__GT_17h883787786a0c6ec5E
              (&local_38);
    param_1[2] = CONCAT44(uStack_7c,uStack_80);
    *param_1 = local_90;
    param_1[1] = CONCAT44(uStack_84,uStack_88);
  }
  return;
}