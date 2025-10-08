undefined8 *
_ZN13turborepo_lsp16strip_lit_prefix17h5175dd89c61b79b2E
          (undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  
  uVar3 = 0x8000000000000000;
  auVar4 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                     (param_3,param_4,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  if (auVar4._0_8_ == 0) {
    uVar3 = 0x8000000000000001;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x18);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    *(undefined (*) [16])(param_1 + 1) = auVar4;
    param_1[3] = param_4 + lVar1;
    param_1[4] = uVar2;
  }
  *param_1 = uVar3;
  return param_1;
}