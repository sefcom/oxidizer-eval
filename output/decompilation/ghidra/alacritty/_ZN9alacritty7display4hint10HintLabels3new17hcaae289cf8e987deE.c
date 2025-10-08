void _ZN9alacritty7display4hint10HintLabels3new17hcaae289cf8e987deE(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  undefined local_28 [8];
  long local_20;
  long local_18;
  
  _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h39b6d71bf19d243aE(local_28);
                    /* try { // try from 00547cf1 to 00547cfa has its CatchHandler @ 00547dd8 */
  _ZN4core4iter6traits8iterator8Iterator7collect17h380a1850675d8d0fE
            (&local_40,local_20,local_18 + local_20);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(local_28);
  lVar2 = local_30;
  puVar3 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,8,0);
  if (puVar3 != (undefined8 *)0x0) {
    fVar6 = (float)(lVar2 - 1) * DAT_001ec2f4;
    uVar4 = 0;
    if (0.0 <= fVar6) {
      uVar4 = (long)(fVar6 - DAT_001ec664) & (long)fVar6 >> 0x3f | (long)fVar6;
    }
    uVar5 = 0xffffffffffffffff;
    if (fVar6 <= DAT_001ec668) {
      uVar5 = uVar4;
    }
    *puVar3 = 0;
    param_1[2] = local_30;
    *param_1 = local_40;
    param_1[1] = uStack_38;
    param_1[3] = 1;
    param_1[4] = puVar3;
    param_1[5] = 1;
    param_1[6] = uVar5;
    return;
  }
                    /* try { // try from 00547dc6 to 00547dd5 has its CatchHandler @ 00547ded */
  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_009de8b0)(8,8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}