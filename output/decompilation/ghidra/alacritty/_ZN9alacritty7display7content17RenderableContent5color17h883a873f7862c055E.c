ulong _ZN9alacritty7display7content17RenderableContent5color17h883a873f7862c055E
                (long param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  uint3 *puVar3;
  
  if (param_3 < 0x10d) {
    puVar3 = (uint3 *)(param_2 + param_3 * 3);
    if ((*(byte *)(param_1 + param_3 * 4) & 1) != 0) {
      puVar3 = (uint3 *)(param_1 + 1 + param_3 * 4);
    }
    return (ulong)*puVar3;
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
            (param_3,0x10d,&PTR_s_alacritty_src_display_content_rs_00982108);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}