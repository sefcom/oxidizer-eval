void _ZN9alacritty8renderer4text13TextRenderApi9draw_cell17h0daebcce152ab83eE
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,long param_4,long param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined8 local_98;
  long local_88;
  undefined8 local_80;
  undefined local_70 [32];
  undefined local_50 [32];
  
  uVar1 = *(ushort *)(param_4 + 0x20);
  iVar2 = *(int *)(param_5 + *(long *)(&DAT_0020f760 + (ulong)(uVar1 & 6) * 8));
  local_a8 = *(int *)(param_4 + 0x1c);
  if ((uVar1 & 0x100) != 0 || local_a8 == 9) {
    *(undefined4 *)(param_4 + 0x1c) = 0x20;
    local_a8 = 0x20;
  }
  iVar3 = *(int *)(param_5 + 0x120);
                    /* try { // try from 0056bc75 to 0056bcaa has its CatchHandler @ 0056bdb3 */
  iStack_a4 = iVar2;
  iStack_a0 = iVar3;
  _ZN9alacritty8renderer4text11glyph_cache10GlyphCache3get17h242c6140ba4899e4E
            (local_50,param_5,&local_a8,param_3,1);
  _ZN9alacritty8renderer4text13TextRenderApi15add_render_item17hbff4cf76ce075603E
            (param_1,param_2,param_3,param_4,local_50);
  piVar4 = *(int **)(param_4 + 0x10);
  if (piVar4 == (int *)0x0) {
    _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_u32_GT__GT__GT_17h7ec37b218d3e4a7bE
              ();
  }
  else {
    local_98 = *(undefined8 *)(piVar4 + 4);
    local_a8 = *piVar4;
    iStack_a4 = piVar4[1];
    iStack_a0 = piVar4[2];
    iStack_9c = piVar4[3];
    piVar4[0] = 0;
    piVar4[1] = -0x80000000;
    _ZN4core6option15Option_LT_T_GT_6filter17h20bb2220dc02f5a7E(&local_88,&local_a8,uVar1 >> 8 & 1);
    if (local_88 == -0x8000000000000000) {
      _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_u32_GT__GT__GT_17h7ec37b218d3e4a7bE
                (0x8000000000000000,local_80);
    }
    else {
      _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h7cc233c07e85c72bE
                (local_70,&local_88);
      iVar5 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd29f82c79629adc9E
                        (local_70);
      if (iVar5 != 0x110000) {
        do {
          local_b4 = iVar5;
                    /* try { // try from 0056bd4d to 0056bd7b has its CatchHandler @ 0056bdc1 */
          local_b0 = iVar2;
          local_ac = iVar3;
          _ZN9alacritty8renderer4text11glyph_cache10GlyphCache3get17h242c6140ba4899e4E
                    (&local_a8,param_5,&local_b4,param_3,0);
          _ZN9alacritty8renderer4text13TextRenderApi15add_render_item17hbff4cf76ce075603E
                    (param_1,param_2,param_3,param_4,&local_a8);
          iVar5 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd29f82c79629adc9E
                            (local_70);
        } while (iVar5 != 0x110000);
      }
                    /* try { // try from 0056bd8d to 0056bd96 has its CatchHandler @ 0056bdb3 */
      _ZN4core3ptr64drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_char_GT__GT_17hee04c1ec02f5f23eE
                (local_70);
    }
  }
  _ZN4core3ptr64drop_in_place_LT_alacritty__display__content__RenderableCell_GT_17h4a6dd27aece06382E
            (piVar4);
  return;
}