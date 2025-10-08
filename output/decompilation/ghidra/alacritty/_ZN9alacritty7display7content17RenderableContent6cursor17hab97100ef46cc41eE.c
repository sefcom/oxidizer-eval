void _ZN9alacritty7display7content17RenderableContent6cursor17hab97100ef46cc41eE
               (undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 200);
  uVar2 = *(undefined4 *)(param_2 + 0xcc);
  uVar3 = *(undefined4 *)(param_2 + 0xd0);
  uVar4 = *(undefined4 *)(param_2 + 0xd4);
  uVar5 = *(undefined4 *)(param_2 + 0xdc);
  uVar6 = *(undefined4 *)(param_2 + 0xe0);
  uVar7 = *(undefined4 *)(param_2 + 0xe4);
  param_1[4] = *(undefined4 *)(param_2 + 0xd8);
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  _ZN4core3ptr67drop_in_place_LT_alacritty__display__content__RenderableContent_GT_17h3ed0299185b41f6aE
            (param_2);
  return;
}