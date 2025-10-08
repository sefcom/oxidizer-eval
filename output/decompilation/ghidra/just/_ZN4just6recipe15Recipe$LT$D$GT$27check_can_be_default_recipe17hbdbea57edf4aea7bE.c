void _ZN4just6recipe15Recipe_LT_D_GT_27check_can_be_default_recipe17hbdbea57edf4aea7bE
               (undefined *param_1,long param_2)

{
  undefined8 uVar1;
  undefined uVar2;
  long lVar3;
  undefined8 extraout_RDX;
  
  lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17hca6170881fec0ef2E
                    (*(long *)(param_2 + 0x50),
                     *(long *)(param_2 + 0x58) * 0xd0 + *(long *)(param_2 + 0x50));
  if (lVar3 == 0) {
    uVar2 = 0x38;
  }
  else {
    uVar1 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(param_2 + 0x90);
    *(long *)(param_1 + 8) = lVar3;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined8 *)(param_1 + 0x18) = extraout_RDX;
    uVar2 = 0xf;
  }
  *param_1 = uVar2;
  return;
}