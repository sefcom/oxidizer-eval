undefined4 *
_ZN7flealib9systemcmd9SystemCmd12kill_process17hf7c07f2b08326518E
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_78;
  code *local_70;
  undefined local_60 [24];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 **local_38;
  code *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_78 = &local_48;
  local_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5e99a2697242919dE;
  local_a8 = &PTR_DAT_00809140;
  local_a0 = 1;
  local_88 = 0;
  local_98 = &local_78;
  local_90 = 1;
  local_48 = param_3;
  local_40 = param_4;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(local_60,&local_a8);
                    /* try { // try from 00474274 to 00474281 has its CatchHandler @ 0047432d */
  (*(code *)PTR__ZN7flealib9systemcmd9SystemCmd20execute_bash_command17h10459d7455dc0e1eE_008281a0)
            (&local_78);
  local_30 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
  local_a8 = &PTR_DAT_00809150;
  local_a0 = 1;
  local_88 = 0;
  local_98 = &local_38;
  local_90 = 1;
                    /* try { // try from 004742c3 to 004742d2 has its CatchHandler @ 0047431e */
  local_38 = &local_78;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(&local_28,&local_a8);
                    /* try { // try from 004742d3 to 004742dc has its CatchHandler @ 0047430c */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_78);
  *(undefined8 *)(param_1 + 4) = local_18;
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  param_1[3] = uStack_1c;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(local_60);
  return param_1;
}