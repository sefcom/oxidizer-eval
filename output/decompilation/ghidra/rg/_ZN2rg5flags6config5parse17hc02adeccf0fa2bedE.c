void _ZN2rg5flags6config5parse17hc02adeccf0fa2bedE(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 extraout_RDX;
  undefined auVar2 [16];
  undefined8 local_b8;
  byte local_b0 [4];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined local_a0 [16];
  undefined local_90 [16];
  undefined8 *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_30 [24];
  
  auVar2 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h29fb4e4a214174b3E
                     (param_2);
  local_a0 = auVar2;
  _ZN3std2fs4File4open17h2111ba866cf95dc6E(local_b0,local_a0);
  if ((local_b0[0] & 1) == 0) {
    _ZN2rg5flags6config12parse_reader17h27fe71aea4262a25E(param_1,local_ac);
  }
  else {
    local_b8 = local_a8;
    local_80 = (undefined8 *)local_90;
    local_78 = 
    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00526dd0
    ;
    local_68 = 
    PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_00526fe8
    ;
    local_60 = &DAT_004e5d10;
    local_58 = 2;
    local_40 = 0;
    local_50 = &local_80;
    local_48 = 2;
                    /* try { // try from 003446ff to 0034471f has its CatchHandler @ 00344754 */
    local_70 = (undefined *)&local_b8;
    local_90 = auVar2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
              (local_30,0,extraout_RDX,&local_60);
    uVar1 = _ZN6anyhow4kind5Adhoc3new17h108351ff8f5d4b99E(local_30);
    param_1[1] = uVar1;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17haa31b1f83e302f9eE(&local_b8);
  }
  return;
}