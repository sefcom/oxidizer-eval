void _ZN18alacritty_terminal4grid13Grid_LT_T_GT_5reset17h8b322fa070245340E(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar3 = *(ulong *)(param_1 + 0x98);
  if (*(ulong *)(param_1 + 0x28) < *(ulong *)(param_1 + 0x98)) {
    uVar3 = *(ulong *)(param_1 + 0x28);
  }
  *(ulong *)(param_1 + 0x28) = uVar3;
  if (uVar3 + 1000 < *(ulong *)(param_1 + 0x10)) {
    _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_8truncate17h2d132ed67c9d1788E(param_1);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _ZN84__LT_alacritty_terminal__grid__Cursor_LT_T_GT__u20_as_u20_core__default__Default_GT_7default17hc6ed34f88d23cf01E
            (&local_50);
                    /* try { // try from 0046cf24 to 0046cf2b has its CatchHandler @ 0046cfdd */
  _ZN4core3ptr97drop_in_place_LT_alacritty_terminal__grid__Cursor_LT_alacritty_terminal__term__cell__Cell_GT__GT_17hdbfd31c2680bb7f5E
            ((undefined4 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x80) = local_30;
  *(undefined4 *)(param_1 + 0x84) = uStack_2c;
  *(undefined4 *)(param_1 + 0x88) = uStack_28;
  *(undefined4 *)(param_1 + 0x8c) = uStack_24;
  *(undefined4 *)(param_1 + 0x70) = local_40;
  *(undefined4 *)(param_1 + 0x74) = uStack_3c;
  *(undefined4 *)(param_1 + 0x78) = uStack_38;
  *(undefined4 *)(param_1 + 0x7c) = uStack_34;
  *(undefined4 *)(param_1 + 0x60) = local_50;
  *(undefined4 *)(param_1 + 100) = uStack_4c;
  *(undefined4 *)(param_1 + 0x68) = uStack_48;
  *(undefined4 *)(param_1 + 0x6c) = uStack_44;
  _ZN84__LT_alacritty_terminal__grid__Cursor_LT_T_GT__u20_as_u20_core__default__Default_GT_7default17hc6ed34f88d23cf01E
            (&local_50);
                    /* try { // try from 0046cf57 to 0046cf5e has its CatchHandler @ 0046cfdb */
  _ZN4core3ptr97drop_in_place_LT_alacritty_terminal__grid__Cursor_LT_alacritty_terminal__term__cell__Cell_GT__GT_17hdbfd31c2680bb7f5E
            ((undefined4 *)(param_1 + 0x30));
  *(ulong *)(param_1 + 0x50) = CONCAT44(uStack_2c,local_30);
  *(ulong *)(param_1 + 0x58) = CONCAT44(uStack_24,uStack_28);
  *(ulong *)(param_1 + 0x40) = CONCAT44(uStack_3c,local_40);
  *(ulong *)(param_1 + 0x48) = CONCAT44(uStack_34,uStack_38);
  *(undefined4 *)(param_1 + 0x30) = local_50;
  *(undefined4 *)(param_1 + 0x34) = uStack_4c;
  *(undefined4 *)(param_1 + 0x38) = uStack_48;
  *(undefined4 *)(param_1 + 0x3c) = uStack_44;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  iVar1 = (int)*(ulong *)(param_1 + 0x98);
  iVar4 = 0;
  if (*(ulong *)(param_1 + 0x98) <= *(ulong *)(param_1 + 0x28)) {
    iVar4 = (int)*(ulong *)(param_1 + 0x28) - iVar1;
  }
  for (iVar4 = -iVar4; iVar4 < iVar1; iVar4 = iVar4 + 1) {
    uVar2 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                      (param_1,iVar4,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977368);
    _ZN18alacritty_terminal4grid3row12Row_LT_T_GT_5reset17h7a49f1c8f619314fE
              (uVar2,*(undefined4 *)(param_1 + 0x4c));
  }
  return;
}