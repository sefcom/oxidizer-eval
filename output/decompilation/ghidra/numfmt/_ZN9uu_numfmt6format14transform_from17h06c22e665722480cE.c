/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN9uu_numfmt6format14transform_from17h06c22e665722480cE
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  ulong uVar1;
  undefined auVar2 [16];
  long local_38;
  double dStack_30;
  undefined local_28;
  undefined uStack_27;
  undefined4 uStack_26;
  undefined2 uStack_22;
  
  _ZN9uu_numfmt6format12parse_suffix17h407c60c3b46102efE(&local_38);
  if (local_38 == -0x8000000000000000) {
    auVar2._8_4_ = (int)((ulong)param_4 >> 0x20);
    auVar2._0_8_ = param_4;
    auVar2._12_4_ = _UNK_00115e94;
    _ZN9uu_numfmt6format13remove_suffix17h52c5c1e5f9168522E
              (dStack_30 *
               ((auVar2._8_8_ - _UNK_00115dd8) +
               ((double)CONCAT44(_DAT_00115e90,(int)param_4) - _DAT_00115dd0)),&local_38,local_28,
               uStack_27,param_5);
    if (local_38 == -0x8000000000000000) {
      if (param_5 == '\x05') {
        uVar1 = ~-(ulong)(dStack_30 == 0.0) & (ulong)dStack_30;
      }
      else if (0.0 <= dStack_30) {
        uVar1 = (*(code *)PTR_ceil_0023a148)(dStack_30);
      }
      else {
        uVar1 = (*(code *)PTR_ceil_0023a148)((ulong)dStack_30 & _DAT_00115de0);
        uVar1 = uVar1 ^ _DAT_00116160;
      }
      param_1[1] = uVar1;
      *param_1 = -0x8000000000000000;
    }
    else {
      param_1[2] = CONCAT26(uStack_22,CONCAT42(uStack_26,CONCAT11(uStack_27,local_28)));
      *param_1 = local_38;
      param_1[1] = (long)dStack_30;
    }
  }
  else {
    *(undefined2 *)((long)param_1 + 0x16) = uStack_22;
    *(undefined4 *)((long)param_1 + 0x12) = uStack_26;
    *param_1 = local_38;
    param_1[1] = (long)dStack_30;
    *(undefined *)(param_1 + 2) = local_28;
    *(undefined *)((long)param_1 + 0x11) = uStack_27;
  }
  return;
}