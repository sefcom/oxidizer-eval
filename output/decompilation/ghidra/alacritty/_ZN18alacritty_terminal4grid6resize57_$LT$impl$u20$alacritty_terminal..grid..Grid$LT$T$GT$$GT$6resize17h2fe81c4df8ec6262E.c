void _ZN18alacritty_terminal4grid6resize57__LT_impl_u20_alacritty_terminal__grid__Grid_LT_T_GT__GT_6resize17h2fe81c4df8ec6262E
               (long param_1,undefined param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  _ZN79__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_core__default__Default_GT_7default17h2206ab58710dae3dE
            (&local_38);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = local_38;
  *(undefined4 *)(param_1 + 0x44) = uStack_34;
  *(undefined4 *)(param_1 + 0x48) = uStack_30;
  *(undefined4 *)(param_1 + 0x4c) = uStack_2c;
  *(undefined8 *)(param_1 + 0x50) = local_28;
  bVar5 = *(ulong *)(param_1 + 0x98) < param_3;
  bVar2 = !bVar5 && *(ulong *)(param_1 + 0x98) != param_3;
  if (bVar2 != bVar5) {
    if ((char)(bVar2 - bVar5) == '\x01') {
                    /* try { // try from 0046eaf8 to 0046eb45 has its CatchHandler @ 0046eb88 */
      _ZN18alacritty_terminal4grid6resize57__LT_impl_u20_alacritty_terminal__grid__Grid_LT_T_GT__GT_12shrink_lines17h17439bedf3b4c61eE
                (param_1,param_3);
    }
    else {
      _ZN18alacritty_terminal4grid6resize57__LT_impl_u20_alacritty_terminal__grid__Grid_LT_T_GT__GT_10grow_lines17h797124adb8045c3dE
                (param_1,param_3);
    }
  }
  bVar5 = *(ulong *)(param_1 + 0x90) < param_4;
  bVar2 = !bVar5 && *(ulong *)(param_1 + 0x90) != param_4;
  if (bVar2 != bVar5) {
    if ((char)(bVar2 - bVar5) == '\x01') {
      _ZN18alacritty_terminal4grid6resize57__LT_impl_u20_alacritty_terminal__grid__Grid_LT_T_GT__GT_14shrink_columns17hf025751948d3172fE
                (param_1,param_2,param_4);
    }
    else {
      _ZN18alacritty_terminal4grid6resize57__LT_impl_u20_alacritty_terminal__grid__Grid_LT_T_GT__GT_12grow_columns17hda8ffb581183d2c1E
                (param_1,param_2,param_4);
    }
  }
                    /* try { // try from 0046eb46 to 0046eb51 has its CatchHandler @ 0046eb6d */
  _ZN4core3ptr57drop_in_place_LT_alacritty_terminal__term__cell__Cell_GT_17h331fd95bdd9b1d23E
            ((undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  return;
}