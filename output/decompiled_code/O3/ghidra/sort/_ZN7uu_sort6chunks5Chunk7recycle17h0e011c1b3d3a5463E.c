undefined8 * __rustcall uu_sort::chunks::Chunk::recycle(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 8;
  *(undefined8 *)(param_2 + 0x28) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 8;
  *(undefined8 *)(param_2 + 0x40) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar9 = *(undefined8 *)(param_2 + 0x48);
  uVar10 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 8;
  *(undefined8 *)(param_2 + 0x58) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  uVar11 = *(undefined8 *)(param_2 + 0x60);
  uVar12 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 8;
  *(undefined8 *)(param_2 + 0x70) = 0;
                    /* try { // try from 0026db12 to 0026db1b has its CatchHandler @ 0026db83 */
  into_owner(&local_20);
  param_1[2] = uVar1;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[5] = uVar2;
  param_1[3] = uVar7;
  param_1[4] = uVar8;
  param_1[8] = uVar3;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  param_1[9] = uVar11;
  param_1[10] = uVar12;
  param_1[0xb] = uVar4;
  param_1[0xc] = local_20;
  param_1[0xd] = uStack_18;
  param_1[0xe] = local_10;
  return param_1;
}