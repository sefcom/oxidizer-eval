void _ZN9alacritty8renderer5rects12RectRenderer4draw17h05f0911b3e695cabE
               (long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  (*(code *)_ZN9alacritty2gl7storage15BindVertexArray17h3d998acb574d7edfE_0)
            (*(undefined4 *)(param_1 + 0x150));
  (*(code *)_ZN9alacritty2gl7storage10BindBuffer17h43fb2d60276f0a9bE_0)
            (0x8892,*(undefined4 *)(param_1 + 0x154));
  fVar6 = *(float *)(param_2 + 0x10) * DAT_001ec2f4;
  fVar5 = DAT_001ec2f4 * *(float *)(param_2 + 0x14);
  _ZN94__LT_core__slice__iter__IterMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8for_each17h63f0595415f0a681E
            (param_1);
  lVar1 = param_4[1];
  lVar2 = param_4[2];
  lVar4 = lVar1;
  while( true ) {
    if (lVar4 == lVar1 + lVar2 * 0x18) {
      if (*(long *)(param_1 + 0x58) != 0) {
        (*(code *)_ZN9alacritty2gl7storage10UseProgram17h8c17565e1cab04caE_0)
                  (*(undefined4 *)(param_1 + 0x14c));
                    /* try { // try from 00562dd3 to 00562de0 has its CatchHandler @ 00562f6f */
        _ZN9alacritty8renderer5rects17RectShaderProgram15update_uniforms17hd47b20415d4b0768E
                  (param_1 + 0x114,param_2,param_3);
        (*(code *)_ZN9alacritty2gl7storage10BufferData17hb67d49aaaf64b9deE_0)
                  (0x8892,*(long *)(param_1 + 0x58) * 0xc,*(undefined8 *)(param_1 + 0x50),0x88e0);
        (*(code *)_ZN9alacritty2gl7storage10DrawArrays17ha51bda91551dee03E_0)
                  (4,0,*(undefined4 *)(param_1 + 0x58));
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        (*(code *)_ZN9alacritty2gl7storage10UseProgram17h8c17565e1cab04caE_0)
                  (*(undefined4 *)(param_1 + 0x110));
                    /* try { // try from 00562e2d to 00562e3a has its CatchHandler @ 00562f6f */
        _ZN9alacritty8renderer5rects17RectShaderProgram15update_uniforms17hd47b20415d4b0768E
                  (param_1 + 0xd8,param_2,param_3);
        (*(code *)_ZN9alacritty2gl7storage10BufferData17hb67d49aaaf64b9deE_0)
                  (0x8892,*(long *)(param_1 + 0x40) * 0xc,*(undefined8 *)(param_1 + 0x38),0x88e0);
        (*(code *)_ZN9alacritty2gl7storage10DrawArrays17ha51bda91551dee03E_0)
                  (4,0,*(undefined4 *)(param_1 + 0x40));
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        (*(code *)_ZN9alacritty2gl7storage10UseProgram17h8c17565e1cab04caE_0)
                  (*(undefined4 *)(param_1 + 0xd4));
                    /* try { // try from 00562e87 to 00562e94 has its CatchHandler @ 00562f6f */
        _ZN9alacritty8renderer5rects17RectShaderProgram15update_uniforms17hd47b20415d4b0768E
                  (param_1 + 0x9c,param_2,param_3);
        (*(code *)_ZN9alacritty2gl7storage10BufferData17hb67d49aaaf64b9deE_0)
                  (0x8892,*(long *)(param_1 + 0x28) * 0xc,*(undefined8 *)(param_1 + 0x20),0x88e0);
        (*(code *)_ZN9alacritty2gl7storage10DrawArrays17ha51bda91551dee03E_0)
                  (4,0,*(undefined4 *)(param_1 + 0x28));
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        (*(code *)_ZN9alacritty2gl7storage10UseProgram17h8c17565e1cab04caE_0)
                  (*(undefined4 *)(param_1 + 0x98));
                    /* try { // try from 00562eda to 00562ee9 has its CatchHandler @ 00562f6f */
        _ZN9alacritty8renderer5rects17RectShaderProgram15update_uniforms17hd47b20415d4b0768E
                  (param_1 + 0x60,param_2,param_3);
        (*(code *)_ZN9alacritty2gl7storage10BufferData17hb67d49aaaf64b9deE_0)
                  (0x8892,*(long *)(param_1 + 0x10) * 0xc,*(undefined8 *)(param_1 + 8),0x88e0);
        (*(code *)_ZN9alacritty2gl7storage10DrawArrays17ha51bda91551dee03E_0)
                  (4,0,*(undefined4 *)(param_1 + 0x10));
      }
      (*(code *)_ZN9alacritty2gl7storage10UseProgram17h8c17565e1cab04caE_0)(0);
      (*(code *)_ZN9alacritty2gl7storage10BindBuffer17h43fb2d60276f0a9bE_0)(0x8892,0);
      (*(code *)_ZN9alacritty2gl7storage15BindVertexArray17h3d998acb574d7edfE_0)(0);
      _ZN4core3ptr82drop_in_place_LT_alloc__vec__Vec_LT_alacritty__renderer__rects__RenderRect_GT__GT_17h94ef7d2648f7c2a7E
                (*param_4,lVar1);
      return;
    }
    if (3 < *(byte *)(lVar4 + 0x17)) break;
                    /* try { // try from 00562da3 to 00562db2 has its CatchHandler @ 00562f73 */
    _ZN9alacritty8renderer5rects12RectRenderer8add_rect17h35912be66eb425f4E(fVar6,fVar5);
    lVar4 = lVar4 + 0x18;
  }
                    /* try { // try from 00562f56 to 00562f6c has its CatchHandler @ 00562f71 */
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
            (4,4,&PTR_s_alacritty_src_renderer_rects_rs_009839f8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}