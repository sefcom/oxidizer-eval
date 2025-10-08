void _ZN9alacritty6config4font24SecondaryFontDescription4desc17h751d716c6e59b054E
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar6 = 0x8000000000000000;
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_009de2a8
  )(&local_40,param_2);
  uVar5 = uStack_2c;
  uVar4 = uStack_30;
  uVar3 = uStack_34;
  uVar2 = local_38;
  uVar1 = local_40;
  if (*(long *)(param_2 + 0x18) != -0x8000000000000000) {
                    /* try { // try from 00534ebf to 00534ecc has its CatchHandler @ 00534f03 */
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_009de2a8
    )(&local_40,param_2 + 0x18);
    local_28 = CONCAT44(uStack_34,local_38);
    uStack_20 = CONCAT44(uStack_2c,uStack_30);
    uVar6 = local_40;
  }
  param_1[2] = CONCAT44(uVar5,uVar4);
  *param_1 = uVar1;
  param_1[1] = CONCAT44(uVar3,uVar2);
  param_1[3] = uVar6;
  param_1[4] = local_28;
  param_1[5] = uStack_20;
  return;
}