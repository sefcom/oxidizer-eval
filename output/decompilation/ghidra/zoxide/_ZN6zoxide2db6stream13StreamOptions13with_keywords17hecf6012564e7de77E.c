void _ZN6zoxide2db6stream13StreamOptions13with_keywords17hecf6012564e7de77E
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  auVar8 = _ZN4core4iter6traits8iterator8Iterator3map17hda1b8e4a70fc589cE(param_3,param_4);
  uVar7 = _ZN4core4iter6traits8iterator8Iterator3map17hda1b8e4a70fc589cE(auVar8._0_8_,auVar8._8_8_);
                    /* try { // try from 001916a3 to 001916ad has its CatchHandler @ 00191709 */
  _ZN4core4iter6traits8iterator8Iterator7collect17h346e69444f2181f7E(&local_28,uVar7);
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hef709365aaceeb89E
            (param_2);
  param_2[2] = local_18;
  *param_2 = local_28;
  param_2[1] = uStack_20;
  uVar7 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar7;
  uVar7 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar7;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar7 = param_2[2];
  uVar1 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar6;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[2] = uVar7;
  param_1[3] = uVar1;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}