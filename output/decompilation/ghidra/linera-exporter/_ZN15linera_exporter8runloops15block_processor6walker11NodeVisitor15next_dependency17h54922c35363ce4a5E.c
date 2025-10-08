void _ZN15linera_exporter8runloops15block_processor6walker11NodeVisitor15next_dependency17h54922c35363ce4a5E
               (undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar2 = *(ulong *)(param_2 + 0xb8);
  if (uVar2 < *(ulong *)(param_2 + 0x40)) {
    lVar3 = *(long *)(param_2 + 0x38);
    *(ulong *)(param_2 + 0xb8) = uVar2 + 1;
    param_1[9] = *(undefined8 *)(lVar3 + 0x40 + uVar2 * 0x48);
    puVar1 = (undefined8 *)(lVar3 + uVar2 * 0x48);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    puVar1 = (undefined8 *)(lVar3 + 0x10 + uVar2 * 0x48);
    uVar6 = *puVar1;
    uVar7 = puVar1[1];
    puVar1 = (undefined8 *)(lVar3 + 0x20 + uVar2 * 0x48);
    uVar8 = *puVar1;
    uVar9 = puVar1[1];
    puVar1 = (undefined8 *)(lVar3 + 0x30 + uVar2 * 0x48);
    uVar10 = puVar1[1];
    param_1[7] = *puVar1;
    param_1[8] = uVar10;
    param_1[5] = uVar8;
    param_1[6] = uVar9;
    param_1[3] = uVar6;
    param_1[4] = uVar7;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}