void _ZN2fd24extract_time_constraints17h733b02d9fa69be15E(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar2;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined *local_b8;
  code *local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_78 [6];
  int local_60 [6];
  undefined local_48 [24];
  undefined local_30 [24];
  
  local_d0 = 0;
  uStack_c8 = 8;
  local_c0 = 0;
  local_d8 = param_2 + 0x118;
                    /* try { // try from 002fbc6f to 002fbde2 has its CatchHandler @ 002fbe01 */
  _ZN2fd6filter4time10TimeFilter5after17h806e9649c0de5a90E
            (local_78,*(undefined8 *)(param_2 + 0x120),*(undefined8 *)(param_2 + 0x128));
  if (local_78[0] == 2) {
    local_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9d7524885660455aE;
    local_a8 = &PTR_s____is_not_a_valid_size_constrain_00502900;
    local_a0 = 2;
    local_88 = 0;
    local_98 = &local_b8;
    local_90 = 1;
    local_b8 = (undefined *)&local_d8;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h1f7ab50fdd345844E
              (local_48,0,extraout_RDX,&local_a8);
    uVar1 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h06348eb8850c741dE(local_48);
    param_1[1] = uVar1;
    *param_1 = 0x8000000000000000;
    uVar1 = 8;
    uVar2 = 0;
LAB_002fbdc6:
    _ZN4core3ptr72drop_in_place_LT_alloc__vec__Vec_LT_fd__filter__time__TimeFilter_GT__GT_17h01aa39202dfda311E
              (uVar2,uVar1);
  }
  else {
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h06bfc1afd985d20aE(&local_d0,local_78,&PTR_DAT_00502920);
    if (*(long *)(param_2 + 0x130) != -0x8000000000000000) {
      local_d8 = param_2 + 0x130;
      _ZN2fd6filter4time10TimeFilter6before17h5ae92f0af3d8d241E
                (local_60,*(undefined8 *)(param_2 + 0x138),*(undefined8 *)(param_2 + 0x140));
      if (local_60[0] == 2) {
        local_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9d7524885660455aE;
        local_a8 = &PTR_s____is_not_a_valid_size_constrain_00502900;
        local_a0 = 2;
        local_88 = 0;
        local_98 = &local_b8;
        local_90 = 1;
        local_b8 = (undefined *)&local_d8;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h1f7ab50fdd345844E
                  (local_30,0,extraout_RDX_00,&local_a8);
        uVar1 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h06348eb8850c741dE(local_30);
        param_1[1] = uVar1;
        *param_1 = 0x8000000000000000;
        uVar1 = uStack_c8;
        uVar2 = local_d0;
        goto LAB_002fbdc6;
      }
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h06bfc1afd985d20aE(&local_d0,local_60,&PTR_DAT_00502938)
      ;
    }
    param_1[2] = local_c0;
    *param_1 = local_d0;
    param_1[1] = uStack_c8;
  }
  return;
}