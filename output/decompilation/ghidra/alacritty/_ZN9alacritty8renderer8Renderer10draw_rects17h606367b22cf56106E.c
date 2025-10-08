void _ZN9alacritty8renderer8Renderer10draw_rects17h606367b22cf56106E
               (long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_4[2] != 0) {
    fVar1 = *(float *)(param_2 + 0x10);
    fVar2 = *(float *)(param_2 + 0x14);
    iVar3 = (int)fVar1;
    if (DAT_001edecc < fVar1) {
      iVar3 = 0x7fffffff;
    }
    if (NAN(fVar1)) {
      iVar3 = 0;
    }
    iVar4 = (int)fVar2;
    if (DAT_001edecc < fVar2) {
      iVar4 = 0x7fffffff;
    }
    if (NAN(fVar2)) {
      iVar4 = 0;
    }
    (*(code *)_ZN9alacritty2gl7storage8Viewport17h10fb47e81d67ad16E_0)(0,0,iVar3,iVar4);
    (*(code *)_ZN9alacritty2gl7storage17BlendFuncSeparate17h7d481c558c32e51cE_0)
              (0x302,0x303,0x302,1);
    _ZN9alacritty8renderer5rects12RectRenderer4draw17h05f0911b3e695cabE
              (param_1 + 0x68,param_2,param_3,param_4);
    (*(code *)_ZN9alacritty2gl7storage9BlendFunc17ha142700221b021d9E_0)(0x88f9,0x88fa);
    fVar1 = *(float *)(param_2 + 0x20);
    fVar2 = *(float *)(param_2 + 0x24);
    iVar6 = (int)fVar1;
    if (DAT_001edecc < fVar1) {
      iVar6 = 0x7fffffff;
    }
    if (NAN(fVar1)) {
      iVar6 = 0;
    }
    iVar5 = (int)fVar2;
    if (DAT_001edecc < fVar2) {
      iVar5 = 0x7fffffff;
    }
    if (NAN(fVar2)) {
      iVar5 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0056d297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)_ZN9alacritty2gl7storage8Viewport17h10fb47e81d67ad16E_0)
              (iVar6,iVar5,iVar3 + iVar6 * -2,iVar4 + iVar5 * -2);
    return;
  }
  _ZN4core3ptr82drop_in_place_LT_alloc__vec__Vec_LT_alacritty__renderer__rects__RenderRect_GT__GT_17h94ef7d2648f7c2a7E
            (*param_4,param_4[1]);
  return;
}