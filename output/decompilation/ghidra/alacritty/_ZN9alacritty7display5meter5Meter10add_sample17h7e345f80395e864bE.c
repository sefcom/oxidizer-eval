void _ZN9alacritty7display5meter5Meter10add_sample17h7e345f80395e864bE
               (long param_1,undefined8 param_2,int param_3)

{
  double dVar1;
  ulong uVar2;
  code *pcVar3;
  undefined auVar4 [16];
  double dVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x58);
  if (uVar2 < 10) {
    auVar4._8_4_ = (int)((ulong)param_2 >> 0x20);
    auVar4._0_8_ = param_2;
    auVar4._12_4_ = _UNK_001e7d94;
    dVar1 = *(double *)(param_1 + uVar2 * 8);
    dVar5 = ((auVar4._8_8_ - _UNK_001e77f8) +
            ((double)CONCAT44(_s__001e7d90,(int)param_2) - _DAT_001e77f0)) * _s__001ead48 +
            (double)param_3 / _s__001eae40;
    *(double *)(param_1 + uVar2 * 8) = dVar5;
    *(double *)(param_1 + 0x50) =
         dVar5 / DAT_001ea750 + (*(double *)(param_1 + 0x50) - dVar1 / DAT_001ea750);
    *(ulong *)(param_1 + 0x58) =
         ((*(long *)(param_1 + 0x58) + 1U) / 5 & 0xfffffffffffffffe) * -5 +
         *(long *)(param_1 + 0x58) + 1;
    return;
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
            (uVar2,10,&PTR_s_alacritty_src_display_meter_rs_009823c0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}