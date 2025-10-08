void _ZN2fd4walk23ReceiverBuffer_LT_W_GT_3new17h8e579d629470b6a2E
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined auVar9 [12];
  
  lVar6 = *(long *)(param_2 + 0x210);
  lVar7 = *(long *)(param_2 + 0x218);
  iVar1 = *(int *)(param_2 + 0x198);
  uVar5 = *(undefined8 *)(param_2 + 400);
                    /* try { // try from 002f7d53 to 002f7d80 has its CatchHandler @ 002f7e54 */
  auVar9 = (*(code *)PTR__ZN3std4time7Instant3now17h767314cc8c6c5886E_0053ffd8)();
  if (iVar1 == 1000000000) {
    uVar5 = 0;
  }
  iVar4 = 100000000;
  if (iVar1 != 1000000000) {
    iVar4 = iVar1;
  }
  auVar9 = (*(code *)
             PTR__ZN88__LT_std__time__Instant_u20_as_u20_core__ops__arith__Add_LT_core__time__Duration_GT__GT_3add17h6e1ba6fe622dc9c8E_00540018
           )(auVar9._0_8_,auVar9._8_4_,uVar5,iVar4);
                    /* try { // try from 002f7dad to 002f7dc7 has its CatchHandler @ 002f7e3b */
  auVar8 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h48a23d67ea2efec0E
                     (1000,8,0x138,&PTR_s_src_walk_rs_005025e8);
  lVar6 = lVar6 + _DAT_00170ba0;
  lVar7 = lVar7 + _UNK_00170ba8;
  param_1[0xc] = param_2;
  param_1[0xd] = lVar6;
  param_1[0xe] = lVar7;
  *param_1 = param_3;
  param_1[1] = param_4;
  uVar5 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  param_1[2] = *param_5;
  param_1[3] = uVar5;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = param_5[4];
  *(undefined *)(param_1 + 0x10) = 0;
  *(undefined (*) [12])(param_1 + 10) = auVar9;
  *(undefined (*) [16])(param_1 + 7) = auVar8;
  param_1[9] = 0;
  param_1[0xf] = 0;
  return;
}