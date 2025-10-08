void _ZN18alacritty_terminal4term13Term_LT_T_GT_27vi_mode_recompute_selection17hf880b3a3d59b9937E
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x6de) & 1) != 0) {
    lVar2 = 0;
    if (*(char *)(param_1 + 0x280) != '\x02') {
      lVar2 = param_1 + 600;
    }
    lVar2 = _ZN4core6option15Option_LT_T_GT_6filter17h677345fe5c2d3828E(lVar2);
    if (lVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x298);
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_1 + 0x290);
      *(undefined4 *)(lVar2 + 0x20) = uVar1;
      *(undefined *)(lVar2 + 0x28) = 0;
      (*(code *)
        PTR__ZN18alacritty_terminal9selection9Selection11include_all17h7c6fde09d9c3054dE_009de580)
                (lVar2);
      return;
    }
  }
  return;
}