void _ZN4just6recipe15Recipe_LT_D_GT_14argument_range17hb6d51d234f252302E
               (undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17hca6170881fec0ef2E
                    (param_2,param_3 * 0xd0 + param_2);
  uVar2 = _ZN4just6recipe15Recipe_LT_D_GT_13max_arguments17h4d291109c050f382E(param_2,param_3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined *)(param_1 + 2) = 0;
  return;
}