ulong _ZN9alacritty7display7content14RenderableCell14compute_bg_rgb17h1db88f8de20295e8E
                (undefined8 param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  
  if ((char)param_3 == '\0') {
    uVar1 = _ZN9alacritty7display7content17RenderableContent5color17h883a873f7862c055E
                      (param_1,param_2,param_3 >> 0x10);
    return uVar1;
  }
  if ((param_3 & 0xff) == 1) {
    return (ulong)(param_3 >> 8 & 0xff | (param_3 >> 0x10) << 8);
  }
  uVar1 = _ZN9alacritty7display7content17RenderableContent5color17h883a873f7862c055E
                    (param_1,param_2,param_3 >> 8 & 0xff);
  return uVar1;
}