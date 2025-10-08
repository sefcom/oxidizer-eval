void _ZN3bat7vscreen10Attributes11parse_color17h678d5e16d2ba0f94E
               (undefined8 *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 extraout_RDX;
  undefined8 uVar2;
  undefined8 extraout_RDX_00;
  undefined auVar3 [16];
  undefined2 local_9a;
  undefined2 *local_98;
  undefined *local_90;
  short *local_88;
  code *local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined2 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  short local_30 [12];
  
  local_9a = (undefined2)param_2;
  cVar1 = (char)param_2 + ((byte)((param_2 & 0xff) / 5) & 0xfe) * -5;
  if (cVar1 == '\b') {
    auVar3 = _ZN102__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3f5ad03f1c999b66E
                       (param_3);
    uVar2 = auVar3._8_8_;
    if ((auVar3 & (undefined  [16])0x1) == (undefined  [16])0x0) goto LAB_0054519f;
    local_30[0] = auVar3._8_2_;
    if (local_30[0] == 2) {
      _ZN3bat7vscreen4join17h55e6457a6c5afd34E(local_30,3,param_3);
      local_98 = &local_9a;
      local_90 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h76cd049dd60d778dE_00808218
      ;
      local_80 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_78 = &PTR_DAT_007ceda0;
      local_70 = 3;
      local_58 = 0;
      local_68 = &local_98;
      local_60 = 2;
                    /* try { // try from 0054521f to 0054522f has its CatchHandler @ 005452bb */
      local_88 = local_30;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hec96efa742f30dccE
                (&local_48,0,extraout_RDX_00,&local_78);
    }
    else {
      if ((auVar3._8_4_ & 0xffff) != 5) {
        local_90 = 
        PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h76cd049dd60d778dE_00808218
        ;
        local_88 = local_30;
        local_78 = &PTR_DAT_007cedd0;
        local_70 = 3;
        local_60 = 2;
        local_80 = (code *)local_90;
        goto LAB_00545186;
      }
      _ZN3bat7vscreen4join17h55e6457a6c5afd34E(local_30,1,param_3);
      local_98 = &local_9a;
      local_90 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h76cd049dd60d778dE_00808218
      ;
      local_80 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_78 = &PTR_DAT_007ced70;
      local_70 = 3;
      local_58 = 0;
      local_68 = &local_98;
      local_60 = 2;
                    /* try { // try from 00545129 to 00545139 has its CatchHandler @ 005452bd */
      local_88 = local_30;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hec96efa742f30dccE
                (&local_48,0,extraout_RDX,&local_78);
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(local_30);
    param_1[2] = local_38;
    *param_1 = local_48;
    param_1[1] = uStack_40;
  }
  else {
    if (cVar1 == '\t') {
LAB_0054519f:
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6553538e39c64234E
                (param_1,1,0);
      return;
    }
    local_90 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h76cd049dd60d778dE_00808218
    ;
    local_78 = &PTR_DAT_007cee00;
    local_70 = 2;
    local_60 = 1;
    uVar2 = param_3;
LAB_00545186:
    local_68 = &local_98;
    local_98 = &local_9a;
    local_58 = 0;
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h76cd049dd60d778dE_00808218
         = local_90;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hec96efa742f30dccE(param_1,0,uVar2,&local_78);
  }
  return;
}