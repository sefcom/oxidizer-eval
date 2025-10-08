void _ZN2fd6filter5owner11OwnerFilter11from_string17h74e6c4148becee40E
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  code *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined local_80 [48];
  undefined2 local_50;
  undefined local_48 [24];
  
  local_c8 = param_2;
  local_c0 = param_3;
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (local_80,0x3a,param_2,param_3);
  local_90 = 0;
  local_50 = 1;
  local_88 = param_3;
  auVar2 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h307f8fd0ed8413beE(&local_90);
  auVar3 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h307f8fd0ed8413beE(&local_90);
  auVar4 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h307f8fd0ed8413beE(&local_90);
  if (auVar4._0_8_ == 0) {
    _ZN2fd6filter5owner14Check_LT_T_GT_5parse17h6fb56b91fc350486E
              (&local_f8,auVar2._0_8_,auVar2._8_8_);
    if ((local_f8 & 1) == 0) {
      local_a8 = uStack_f4;
      uStack_a4 = uStack_f0;
      uStack_a0 = 0;
      _ZN2fd6filter5owner14Check_LT_T_GT_5parse17hcc7d42e9676f47f4E
                (&local_f8,auVar3._0_8_,auVar3._8_8_);
      if (local_f8 != 1) {
        *param_1 = local_a8;
        param_1[1] = uStack_a4;
        param_1[2] = uStack_f4;
        param_1[3] = uStack_f0;
        return;
      }
    }
    uVar1 = CONCAT44(uStack_ec,uStack_f0);
  }
  else {
    local_b8 = &local_c8;
    local_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8a73a34aafb6f20dE;
    local_f8 = 0x502308;
    uStack_f4 = 0;
    uStack_f0 = 2;
    uStack_ec = 0;
    local_d8 = 0;
    local_e8 = &local_b8;
    local_e0 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h1f7ab50fdd345844E
              (local_48,0,auVar4._8_8_,&local_f8);
    uVar1 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h06348eb8850c741dE(local_48);
  }
  *(undefined8 *)(param_1 + 2) = uVar1;
  *param_1 = 3;
  return;
}