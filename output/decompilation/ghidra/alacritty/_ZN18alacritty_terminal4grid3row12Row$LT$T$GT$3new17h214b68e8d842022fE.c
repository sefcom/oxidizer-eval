void _ZN18alacritty_terminal4grid3row12Row_LT_T_GT_3new17h214b68e8d842022fE
               (undefined (*param_1) [16],ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  auVar3 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h6d79adff25664689E
                     (param_2,8,0x18,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009773e0);
  puVar1 = auVar3._8_8_;
  if (1 < param_2) {
    lVar2 = param_2 - 1;
    do {
      _ZN79__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_core__default__Default_GT_7default17h2206ab58710dae3dE
                (&local_48);
      puVar1[2] = local_38;
      *(undefined4 *)puVar1 = local_48;
      *(undefined4 *)((long)puVar1 + 4) = uStack_44;
      *(undefined4 *)(puVar1 + 1) = uStack_40;
      *(undefined4 *)((long)puVar1 + 0xc) = uStack_3c;
      puVar1 = puVar1 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  _ZN79__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_core__default__Default_GT_7default17h2206ab58710dae3dE
            (&local_48);
  puVar1[2] = local_38;
  *puVar1 = CONCAT44(uStack_44,local_48);
  puVar1[1] = CONCAT44(uStack_3c,uStack_40);
  *param_1 = auVar3;
  *(ulong *)param_1[1] = param_2;
  *(undefined8 *)(param_1[1] + 8) = 0;
  return;
}