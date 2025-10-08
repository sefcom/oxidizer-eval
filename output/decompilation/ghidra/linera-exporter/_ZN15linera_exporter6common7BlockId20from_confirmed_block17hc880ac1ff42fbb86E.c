void _ZN15linera_exporter6common7BlockId20from_confirmed_block17hc880ac1ff42fbb86E
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  uVar2 = *(undefined8 *)(param_2 + 200);
  uVar3 = *(undefined8 *)(param_2 + 0xd8);
  param_1[6] = *(undefined8 *)(param_2 + 0xd0);
  param_1[7] = uVar3;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x260);
  uVar2 = *(undefined8 *)(param_2 + 0x268);
  uVar3 = *(undefined8 *)(param_2 + 0x270);
  *param_1 = *(undefined8 *)(param_2 + 600);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[8] = *(undefined8 *)(param_2 + 0x200);
  return;
}