void _ZN9alacritty8renderer4text5glsl317TextShaderProgram3new17h33d0a0950f87c578E
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  _ZN9alacritty8renderer6shader13ShaderProgram3new17h209704e80cfd93afE
            (&local_40,0,0,param_4,
             "// Cell properties.\nlayout(location = 0) in vec2 gridCoords;\n\n// Glyph properties.\nlayout(location = 1) in vec4 glyph;\n\n// uv mapping.\nlayout(location = 2) in vec4 uv;\n\n// Text foreground rgb packed together with cell flags. textColor.a\n// are the bitflags; consult RenderingGlyphFlags in renderer/mod.rs\n// for the possible values.\nlayout(location = 3) in vec4 textColor;\n\n// Background color.\nlayout(location = 4) in vec4 backgroundColor;\n\nout vec2 TexCoords;\nflat out vec4 fg;\nflat out vec4 bg;\n\n// Terminal properties\nuniform vec2 cellDim;\nuniform vec4 projection;\n\nuniform int renderingPass;\n\n#define WIDE_CHAR 2\n\nvoid main() {\n    vec2 projectionOffset = projection.xy;\n    vec2 projectionScale = projection.zw;\n\n    // Compute vertex corner position\n    vec2 position;\n    position.x = (gl_VertexID == 0 || gl_VertexID == 1) ? 1. : 0.;\n    position.y = (gl_VertexID == 0 || gl_VertexID == 3) ? 0. : 1.;\n\n    // Position of cell from top-left\n    vec2 cellPosition = cellDim * gridCoords;\n\n    fg = vec4(textColor.rgb / 255.0, textColor.a);\n    bg = backgroundColor / 255.0;\n\n    float occupiedCells = 1;\n    if ((int(fg.a) >= WIDE_CHAR)) {\n        // Update wide char x dimension so it\'ll cover the following spacer.\n        occupiedCells = 2;\n\n        // Since we don\'t perform bitwise operations due to limitations of\n        // the GLES2 renderer,we subtract wide char bits keeping only colored.\n        fg.a = round(fg.a - WIDE_CHAR);\n    }\n\n    if (renderingPass == 0) {\n        vec2 backgroundDim = cellDim;\n        backgroundDim.x *= occupiedCells;\n\n        vec2 finalPosition = cellPosition + backgroundDim * position;\n        gl_Position =\n            vec4(projectionOffset + projectionScale * finalPosition, 0.0, 1.0);\n\n        TexCoords = vec2(0, 0);\n    } else {\n        vec2 glyphSize = glyph.zw;\n        vec2 glyphOffset = glyph.xy;\n        glyphOffset.y = cellDim.y - glyphOffset.y;\n\n        vec2 finalPosition = cellPosition + glyphSize * position + glyphOffset;\n        gl_Position =\n            vec4(projectionOffset + proj..." /* TRUNCATED STRING LITERAL */
             ,0x89f,
             "#if defined(GLES2_RENDERER)\n// Require extension for dual source blending to work on GLES2.\n#extension GL_EXT_blend_func_extended: require\n\n#define int_t highp int\n#define float_t highp float\n#define vec3_t mediump vec3\n#define texture texture2D\n\nvarying mediump vec2 TexCoords;\nvarying mediump vec3 fg;\nvarying highp float colored;\nvarying mediump vec4 bg;\n\n#define FRAG_COLOR gl_FragColor\n#define ALPHA_MASK gl_SecondaryFragColorEXT\n#else\n\n#define int_t int\n#define float_t float\n#define vec3_t vec3\n\nin vec2 TexCoords;\nflat in vec4 fg;\nflat in vec4 bg;\n\nlayout(location = 0, index = 0) out vec4 color;\nlayout(location = 0, index = 1) out vec4 alphaMask;\n\n#define FRAG_COLOR color\n#define ALPHA_MASK alphaMask\n#endif\n\n#define COLORED 1\n\nuniform int_t renderingPass;\nuniform sampler2D mask;\n\nvoid main() {\n    if (renderingPass == 0) {\n        if (bg.a == 0.0) {\n            discard;\n        }\n\n        ALPHA_MASK = vec4(1.0);\n        // Premultiply background color by alpha.\n        FRAG_COLOR = vec4(bg.rgb * bg.a, bg.a);\n        return;\n    }\n\n#if !defined(GLES2_RENDERER)\n    float_t colored = fg.a;\n#endif\n\n    // The wide char information is already stripped, so it\'s safe to check for equality here.\n    if (int(colored) == COLORED) {\n        // Color glyphs, like emojis.\n        FRAG_COLOR = texture(mask, TexCoords);\n        ALPHA_MASK = vec4(FRAG_COLOR.a);\n\n        // Revert alpha premultiplication.\n        if (FRAG_COLOR.a != 0.0) {\n            FRAG_COLOR.rgb = vec3(FRAG_COLOR.rgb / FRAG_COLOR.a);\n        }\n\n        FRAG_COLOR = vec4(FRAG_COLOR.rgb, 1.0);\n    } else {\n        // Regular text glyphs.\n        vec3_t textColor = texture(mask, TexCoords).rgb;\n        ALPHA_MASK = vec4(textColor, textColor.r);\n        FRAG_COLOR = vec4(fg.rgb, 1.0);\n    }\n}\n"
             ,0x6ef);
  uVar1 = local_38;
  if (local_40 != 3) {
    *(undefined4 *)((long)param_1 + 0x1c) = local_24;
    *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack_30,local_34);
    *(ulong *)((long)param_1 + 0x14) = CONCAT44(uStack_28,uStack_2c);
    *param_1 = local_40;
    *(undefined4 *)(param_1 + 1) = local_38;
    return;
  }
                    /* try { // try from 0056979c to 00569807 has its CatchHandler @ 005698a4 */
  _ZN9alacritty8renderer6shader13ShaderProgram20get_uniform_location17h89c89b44df60d4f2E
            (&local_40,local_38,"projection",0xb);
  uVar2 = local_38;
  if (local_40 == 3) {
    _ZN9alacritty8renderer6shader13ShaderProgram20get_uniform_location17h89c89b44df60d4f2E
              (&local_40,uVar1,"cellDim",8);
    uVar3 = local_38;
    if (local_40 == 3) {
      _ZN9alacritty8renderer6shader13ShaderProgram20get_uniform_location17h89c89b44df60d4f2E
                (&local_40,uVar1,"renderingPass",0xe);
      if (local_40 == 3) {
        *(undefined4 *)(param_1 + 1) = uVar1;
        *(undefined4 *)((long)param_1 + 0xc) = uVar2;
        *(undefined4 *)(param_1 + 2) = uVar3;
        *(undefined4 *)((long)param_1 + 0x14) = local_38;
        *param_1 = 4;
        return;
      }
      *(undefined4 *)((long)param_1 + 0x1c) = local_24;
      *(undefined4 *)((long)param_1 + 0xc) = local_34;
      *(undefined4 *)(param_1 + 2) = uStack_30;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_2c;
      *(undefined4 *)(param_1 + 3) = uStack_28;
    }
    else {
      *(undefined4 *)((long)param_1 + 0x1c) = local_24;
      *(undefined4 *)((long)param_1 + 0xc) = local_34;
      *(undefined4 *)(param_1 + 2) = uStack_30;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_2c;
      *(undefined4 *)(param_1 + 3) = uStack_28;
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x1c) = local_24;
    *(undefined4 *)((long)param_1 + 0xc) = local_34;
    *(undefined4 *)(param_1 + 2) = uStack_30;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_2c;
    *(undefined4 *)(param_1 + 3) = uStack_28;
  }
  *param_1 = local_40;
  *(undefined4 *)(param_1 + 1) = local_38;
  _ZN4core3ptr63drop_in_place_LT_alacritty__renderer__shader__ShaderProgram_GT_17h64d42f895d6f13b2E
            (uVar1);
  return;
}