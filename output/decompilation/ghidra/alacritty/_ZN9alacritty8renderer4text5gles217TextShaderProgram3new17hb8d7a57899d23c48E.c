void _ZN9alacritty8renderer4text5gles217TextShaderProgram3new17hb8d7a57899d23c48E
               (long *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  pcVar3 = 
  "varying mediump vec2 TexCoords;\nvarying mediump vec3 fg;\nvarying highp float colored;\nvarying mediump vec4 bg;\n\nuniform highp int renderingPass;\nuniform sampler2D mask;\n\n#define COLORED 1\n\nmediump float max_rgb(mediump vec3 mask) {\n    return max(max(mask.r, mask.g), mask.b);\n}\n\nvoid render_text() {\n    mediump vec4 mask = texture2D(mask, TexCoords);\n    mediump float m_rgb = max_rgb(mask.rgb);\n\n    if (renderingPass == 1) {\n        gl_FragColor = vec4(mask.rgb, m_rgb);\n    } else if (renderingPass == 2) {\n        gl_FragColor = bg * (vec4(m_rgb) - vec4(mask.rgb, m_rgb));\n    } else {\n        gl_FragColor = vec4(fg, 1.) * vec4(mask.rgb, m_rgb);\n    }\n}\n\n// Render colored bitmaps.\nvoid render_bitmap() {\n    if (renderingPass == 2) {\n        discard;\n    }\n    mediump vec4 mask = texture2D(mask, TexCoords);\n    if (renderingPass == 1) {\n        gl_FragColor = mask.aaaa;\n    } else {\n        gl_FragColor = mask;\n    }\n}\n\nvoid main() {\n    // Handle background pass drawing before anything else.\n    if (renderingPass == 0) {\n        if (bg.a == 0.0) {\n            discard;\n        }\n\n        gl_FragColor = vec4(bg.rgb * bg.a, bg.a);\n        return;\n    }\n\n    if (int(colored) == COLORED) {\n        render_bitmap();\n    } else {\n        render_text();\n    }\n}\n"
  ;
  if (param_2 != 0) {
    pcVar3 = 
    "#if defined(GLES2_RENDERER)\n// Require extension for dual source blending to work on GLES2.\n#extension GL_EXT_blend_func_extended: require\n\n#define int_t highp int\n#define float_t highp float\n#define vec3_t mediump vec3\n#define texture texture2D\n\nvarying mediump vec2 TexCoords;\nvarying mediump vec3 fg;\nvarying highp float colored;\nvarying mediump vec4 bg;\n\n#define FRAG_COLOR gl_FragColor\n#define ALPHA_MASK gl_SecondaryFragColorEXT\n#else\n\n#define int_t int\n#define float_t float\n#define vec3_t vec3\n\nin vec2 TexCoords;\nflat in vec4 fg;\nflat in vec4 bg;\n\nlayout(location = 0, index = 0) out vec4 color;\nlayout(location = 0, index = 1) out vec4 alphaMask;\n\n#define FRAG_COLOR color\n#define ALPHA_MASK alphaMask\n#endif\n\n#define COLORED 1\n\nuniform int_t renderingPass;\nuniform sampler2D mask;\n\nvoid main() {\n    if (renderingPass == 0) {\n        if (bg.a == 0.0) {\n            discard;\n        }\n\n        ALPHA_MASK = vec4(1.0);\n        // Premultiply background color by alpha.\n        FRAG_COLOR = vec4(bg.rgb * bg.a, bg.a);\n        return;\n    }\n\n#if !defined(GLES2_RENDERER)\n    float_t colored = fg.a;\n#endif\n\n    // The wide char information is already stripped, so it\'s safe to check for equality here.\n    if (int(colored) == COLORED) {\n        // Color glyphs, like emojis.\n        FRAG_COLOR = texture(mask, TexCoords);\n        ALPHA_MASK = vec4(FRAG_COLOR.a);\n\n        // Revert alpha premultiplication.\n        if (FRAG_COLOR.a != 0.0) {\n            FRAG_COLOR.rgb = vec3(FRAG_COLOR.rgb / FRAG_COLOR.a);\n        }\n\n        FRAG_COLOR = vec4(FRAG_COLOR.rgb, 1.0);\n    } else {\n        // Regular text glyphs.\n        vec3_t textColor = texture(mask, TexCoords).rgb;\n        ALPHA_MASK = vec4(textColor, textColor.r);\n        FRAG_COLOR = vec4(fg.rgb, 1.0);\n    }\n}\n"
    ;
  }
  uVar4 = 0x4f8;
  if (param_2 != 0) {
    uVar4 = 0x6ef;
  }
  _ZN9alacritty8renderer6shader13ShaderProgram3new17h209704e80cfd93afE
            (&local_38,1,0,pcVar3,
             "// Cell coords.\nattribute vec2 cellCoords;\n\n// Glyph coords.\nattribute vec2 glyphCoords;\n\n// uv mapping.\nattribute vec2 uv;\n\n// Text foreground rgb packed together with cell flags. textColor.a\n// are the bitflags; consult RenderingGlyphFlags in renderer/mod.rs\n// for the possible values.\nattribute vec4 textColor;\n\n// Background color.\nattribute vec4 backgroundColor;\n\nvarying vec2 TexCoords;\nvarying vec3 fg;\nvarying float colored;\nvarying vec4 bg;\n\nuniform highp int renderingPass;\nuniform vec4 projection;\n\nvoid main() {\n    vec2 projectionOffset = projection.xy;\n    vec2 projectionScale = projection.zw;\n\n    vec2 position;\n    if (renderingPass == 0) {\n        TexCoords = vec2(0, 0);\n        position = cellCoords;\n    } else {\n        TexCoords = uv;\n        position = glyphCoords;\n    }\n\n    fg = vec3(float(textColor.r), float(textColor.g), float(textColor.b)) / 255.;\n    colored = float(textColor.a);\n    bg = vec4(float(backgroundColor.r), float(backgroundColor.g), float(backgroundColor.b),\n            float(backgroundColor.a)) / 255.;\n\n    vec2 finalPosition = projectionOffset + position * projectionScale;\n    gl_Position = vec4(finalPosition, 0., 1.);\n}\n"
             ,0x497,pcVar3,uVar4);
  uVar1 = local_30;
  if (local_38 != 3) {
    *(undefined4 *)((long)param_1 + 0x1c) = local_1c;
    *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack_28,local_2c);
    *(ulong *)((long)param_1 + 0x14) = CONCAT44(uStack_20,uStack_24);
    *param_1 = local_38;
    *(undefined4 *)(param_1 + 1) = local_30;
    return;
  }
                    /* try { // try from 00568cef to 00568d29 has its CatchHandler @ 00568da8 */
  _ZN9alacritty8renderer6shader13ShaderProgram20get_uniform_location17h89c89b44df60d4f2E
            (&local_38,local_30,"projection",0xb);
  uVar2 = local_30;
  if (local_38 == 3) {
    _ZN9alacritty8renderer6shader13ShaderProgram20get_uniform_location17h89c89b44df60d4f2E
              (&local_38,uVar1,"renderingPass",0xe);
    if (local_38 == 3) {
      *(undefined4 *)(param_1 + 1) = uVar1;
      *(undefined4 *)((long)param_1 + 0xc) = uVar2;
      *(undefined4 *)(param_1 + 2) = local_30;
      *param_1 = 4;
      return;
    }
    *(undefined4 *)((long)param_1 + 0x1c) = local_1c;
    *(undefined4 *)((long)param_1 + 0xc) = local_2c;
    *(undefined4 *)(param_1 + 2) = uStack_28;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_24;
    *(undefined4 *)(param_1 + 3) = uStack_20;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x1c) = local_1c;
    *(undefined4 *)((long)param_1 + 0xc) = local_2c;
    *(undefined4 *)(param_1 + 2) = uStack_28;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_24;
    *(undefined4 *)(param_1 + 3) = uStack_20;
  }
  *param_1 = local_38;
  *(undefined4 *)(param_1 + 1) = local_30;
  _ZN4core3ptr63drop_in_place_LT_alacritty__renderer__shader__ShaderProgram_GT_17h64d42f895d6f13b2E
            (uVar1);
  return;
}