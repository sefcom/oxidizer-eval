void _ZN9alacritty7display6damage11FrameDamage11damage_line17hb967af29845291d1E
               (long param_1,ulong param_2,ulong *param_3,undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong extraout_RDX;
  ulong uVar4;
  
  uVar4 = *param_3;
  if (uVar4 < param_2) {
    uVar1 = param_3[2];
    uVar3 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E
                      (*(undefined8 *)(param_1 + 8 + uVar4 * 0x18),param_3[1]);
    *(undefined8 *)(param_1 + 8 + uVar4 * 0x18) = uVar3;
    uVar3 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E
                      (*(undefined8 *)(param_1 + 0x10 + uVar4 * 0x18),uVar1);
    *(undefined8 *)(param_1 + 0x10 + uVar4 * 0x18) = uVar3;
    return;
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
            (uVar4,param_2,&PTR_s_alacritty_src_display_damage_rs_00982330);
  if (extraout_RDX < param_2) {
    uVar3 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E
                      (*(undefined8 *)(uVar4 + 8 + extraout_RDX * 0x18),param_4);
    *(undefined8 *)(uVar4 + 8 + extraout_RDX * 0x18) = uVar3;
    uVar3 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E
                      (*(undefined8 *)(uVar4 + 0x10 + extraout_RDX * 0x18),param_4);
    *(undefined8 *)(uVar4 + 0x10 + extraout_RDX * 0x18) = uVar3;
    return;
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)(extraout_RDX);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}