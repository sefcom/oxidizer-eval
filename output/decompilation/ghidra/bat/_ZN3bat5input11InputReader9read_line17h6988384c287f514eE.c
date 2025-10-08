void _ZN3bat5input11InputReader9read_line17h6988384c287f514eE
               (undefined2 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined auVar3 [16];
  
  if (*(long *)(param_2 + 0x10) != 0) {
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h6ae3258b718e1a7eE
              (param_3,*(undefined8 *)(param_2 + 8));
    *(undefined8 *)(param_2 + 0x10) = 0;
    *param_1 = 0x100;
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x28) == '\x03') {
    _ZN3bat5input15read_utf16_line17h0b621ced04bc80c9E(param_1,uVar1,lVar2,param_3,0,10);
    return;
  }
  if (*(char *)(param_2 + 0x28) == '\x04') {
    _ZN3bat5input15read_utf16_line17h0b621ced04bc80c9E(param_1,uVar1,lVar2,param_3,10,0);
    return;
  }
  auVar3 = (**(code **)(lVar2 + 0x70))(uVar1,10,param_3);
  if ((auVar3 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    *(long *)(param_1 + 4) = auVar3._8_8_;
    *(undefined *)param_1 = 1;
    return;
  }
  *(bool *)((long)param_1 + 1) = auVar3._8_8_ != 0;
  *(undefined *)param_1 = 0;
  return;
}