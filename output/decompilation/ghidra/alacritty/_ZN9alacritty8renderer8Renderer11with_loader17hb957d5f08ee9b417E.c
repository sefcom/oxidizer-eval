void _ZN9alacritty8renderer8Renderer11with_loader17hb957d5f08ee9b417E
               (int *param_1,undefined8 param_2)

{
  undefined auStack_30 [24];
  
  if (*param_1 == 1) {
    _ZN9alacritty8renderer4text12TextRenderer11with_loader17h8a8fe1f0eb664307E();
    return;
  }
  (*(code *)_ZN9alacritty2gl7storage13ActiveTexture17h5918303c5b4133ecE_0)(0x84c0);
  _ZN107__LT_alacritty__renderer__text__gles2__Gles2Renderer_u20_as_u20_alacritty__renderer__text__TextRenderer_GT_10loader_api17h38d169cbf6105839E
            (auStack_30,param_1 + 2);
  _ZN9alacritty7display7Display17reset_glyph_cache28__u7b__u7b_closure_u7d__u7d_17h9b90d4c531c08119E
            (param_2,auStack_30);
  return;
}