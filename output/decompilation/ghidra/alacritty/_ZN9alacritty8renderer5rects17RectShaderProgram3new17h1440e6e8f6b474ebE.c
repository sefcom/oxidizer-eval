void _ZN9alacritty8renderer5rects17RectShaderProgram3new17h1440e6e8f6b474ebE
               (undefined4 *param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  _ZN9alacritty8renderer6shader13ShaderProgram3new17h209704e80cfd93afE
            (&local_78,param_2,*(undefined8 *)(&DAT_00987838 + (ulong)param_3 * 8),
             *(undefined8 *)(&DAT_001f7850 + (ulong)param_3 * 8),
             "#if defined(GLES2_RENDERER)\nattribute vec2 aPos;\nattribute vec4 aColor;\n\nvarying mediump vec4 color;\n#else\nlayout (location = 0) in vec2 aPos;\nlayout (location = 1) in vec4 aColor;\n\nflat out vec4 color;\n#endif\n\nvoid main() {\n    color = aColor;\n    gl_Position = vec4(aPos.x, aPos.y, 0.0, 1.0);\n}\n"
             ,0x129,
             "#if defined(GLES2_RENDERER)\n#define float_t mediump float\n#define color_t mediump vec4\n#define FRAG_COLOR gl_FragColor\n\nvarying color_t color;\n\n#else\n#define float_t float\n#define color_t vec4\n\nout vec4 FragColor;\n#define FRAG_COLOR FragColor\n\nflat in color_t color;\n\n#endif\n\nuniform float_t cellWidth;\nuniform float_t cellHeight;\nuniform float_t paddingY;\nuniform float_t paddingX;\n\nuniform float_t underlinePosition;\nuniform float_t underlineThickness;\n\nuniform float_t undercurlPosition;\n\n#define PI 3.1415926538\n\n#if defined(DRAW_UNDERCURL)\ncolor_t draw_undercurl(float_t x, float_t y) {\n  // We use `undercurlPosition` as an amplitude, since it\'s half of the descent\n  // value.\n  //\n  // The `x` represents the left bound of pixel we should add `1/2` to it, so\n  // we compute the undercurl position for the center of the pixel.\n  float_t undercurl = undercurlPosition / 2. * cos((x + 0.5) * 2.\n                    * PI / cellWidth) + undercurlPosition - 1.;\n\n  float_t undercurlTop = undercurl + max((underlineThickness - 1.), 0.) / 2.;\n  float_t undercurlBottom = undercurl - max((underlineThickness - 1.), 0.) / 2.;\n\n  // The distance to the curve boundary is always positive when it should\n  // be used for AA. When both `y - undercurlTop` and `undercurlBottom - y`\n  // expressions are negative, it means that the point is inside the curve\n  // and we should just use alpha 1. To do so, we max one value with 0\n  // so it\'ll use the alpha 1 in the end.\n  float_t dst = max(y - undercurlTop, max(undercurlBottom - y, 0.));\n\n  // Doing proper SDF is complicated for this shader, so just make AA\n  // stronger by 1/x^2, which renders preserving underline thickness and\n  // being bold enough.\n  float_t alpha = 1. - dst * dst;\n\n  // The result is an alpha mask on a rect, which leaves only curve opaque.\n  return vec4(color.rgb, alpha);\n}\n#endif\n\n#if defined(DRAW_DOTTED)\n// When the dot size increases we can use AA to make spacing look even and the\n// dots rounded.\ncolor_t draw_dotted_aliased(float_t x, float_t y) {\n  float_t dotNumber ..." /* TRUNCATED STRING LITERAL */
             ,0x111e);
  uVar2 = local_70;
  if (local_78 == 3) {
                    /* try { // try from 005631a8 to 0056334f has its CatchHandler @ 0056343e */
    _ZN9alacritty8renderer6shader13ShaderProgram20get_uniform_location17h89c89b44df60d4f2E
              (&local_78,local_70,"cellWidth",10);
    uVar1 = local_70;
    bVar3 = local_78 == 3;
    if ((int)local_78 != 3) {
      _ZN4core3ptr95drop_in_place_LT_core__result__Result_LT_i32_C_alacritty__renderer__shader__ShaderError_GT__GT_17hb7e2b27a7c29798aE
                (&local_78);
    }
    _ZN9alacritty8renderer6shader13ShaderProgram20get_uniform_location17h89c89b44df60d4f2E
              (&local_78,uVar2,"cellHeight",0xb);
    local_4c = 0;
    bVar4 = local_78 == 3;
    local_34 = local_70;
    if ((int)local_78 != 3) {
      _ZN4core3ptr95drop_in_place_LT_core__result__Result_LT_i32_C_alacritty__renderer__shader__ShaderError_GT__GT_17hb7e2b27a7c29798aE
                (&local_78);
    }
    _ZN9alacritty8renderer6shader13ShaderProgram20get_uniform_location17h89c89b44df60d4f2E
              (&local_78,uVar2,"paddingX",9);
    local_50 = 0;
    bVar5 = local_78 == 3;
    local_38 = local_70;
    if ((int)local_78 != 3) {
      _ZN4core3ptr95drop_in_place_LT_core__result__Result_LT_i32_C_alacritty__renderer__shader__ShaderError_GT__GT_17hb7e2b27a7c29798aE
                (&local_78);
    }
    _ZN9alacritty8renderer6shader13ShaderProgram20get_uniform_location17h89c89b44df60d4f2E
              (&local_78,uVar2,"paddingY",9);
    local_54 = 0;
    bVar6 = local_78 == 3;
    local_3c = local_70;
    if ((int)local_78 != 3) {
      _ZN4core3ptr95drop_in_place_LT_core__result__Result_LT_i32_C_alacritty__renderer__shader__ShaderError_GT__GT_17hb7e2b27a7c29798aE
                (&local_78);
    }
    _ZN9alacritty8renderer6shader13ShaderProgram20get_uniform_location17h89c89b44df60d4f2E
              (&local_78,uVar2,"underlinePosition",0x12);
    local_58 = 0;
    bVar7 = local_78 == 3;
    local_40 = local_70;
    if ((int)local_78 != 3) {
      _ZN4core3ptr95drop_in_place_LT_core__result__Result_LT_i32_C_alacritty__renderer__shader__ShaderError_GT__GT_17hb7e2b27a7c29798aE
                (&local_78);
    }
    _ZN9alacritty8renderer6shader13ShaderProgram20get_uniform_location17h89c89b44df60d4f2E
              (&local_78,uVar2,"underlineThickness",0x13);
    bVar8 = local_78 == 3;
    local_44 = local_70;
    if ((int)local_78 != 3) {
      _ZN4core3ptr95drop_in_place_LT_core__result__Result_LT_i32_C_alacritty__renderer__shader__ShaderError_GT__GT_17hb7e2b27a7c29798aE
                (&local_78);
    }
    _ZN9alacritty8renderer6shader13ShaderProgram20get_uniform_location17h89c89b44df60d4f2E
              (&local_78,uVar2,"undercurlPosition",0x12);
    local_48 = uVar1;
    local_4c = CONCAT31((int3)((uint)local_4c >> 8),bVar4);
    local_50 = CONCAT31((int3)((uint)local_50 >> 8),bVar5);
    local_54 = CONCAT31((int3)((uint)local_54 >> 8),bVar6);
    local_58 = CONCAT31((int3)((uint)local_58 >> 8),bVar7);
    if ((int)local_78 != 3) {
      _ZN4core3ptr95drop_in_place_LT_core__result__Result_LT_i32_C_alacritty__renderer__shader__ShaderError_GT__GT_17hb7e2b27a7c29798aE
                (&local_78);
    }
    param_1[1] = (uint)bVar3;
    param_1[2] = local_48;
    param_1[3] = local_4c;
    param_1[4] = local_34;
    param_1[5] = local_50;
    param_1[6] = local_38;
    param_1[7] = local_54;
    param_1[8] = local_3c;
    param_1[9] = local_58;
    param_1[10] = local_40;
    param_1[0xb] = (uint)bVar8;
    param_1[0xc] = local_44;
    param_1[0xd] = (uint)(local_78 == 3);
    param_1[0xe] = local_70;
    param_1[0xf] = uVar2;
    uVar2 = 0;
  }
  else {
    param_1[9] = local_5c;
    *(undefined8 *)(param_1 + 5) = local_6c;
    *(undefined8 *)(param_1 + 7) = uStack_64;
    *(long *)(param_1 + 2) = local_78;
    param_1[4] = local_70;
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return;
}