
  int64_t alacritty::renderer::text::glsl3::TextShaderProgram::new::h33d0a0950f87c578(int64_t* arg1)

{
    int64_t result_1;
    int32_t rcx;
    alacritty::renderer::shader::ShaderProgram::new::h209704e80cfd93af(&result_1, 0, 0, rcx, 
        "// Cell properties.\nlayout(loca…", 0x89f, "#if defined(GLES2_RENDERER)\n// …", 0x6ef);
    int64_t result = result_1;
    int32_t var_38;
    int128_t var_34;
    int32_t var_24;
    
    if (result != 3)
    {
        *(arg1 + 0x1c) = var_24;
        *(arg1 + 0xc) = var_34;
        *arg1 = result;
        arg1[1] = var_38;
    }
    else
    {
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &result_1, var_38, "projection", 0xb);
        result = result_1;
        int32_t r14_1 = var_38;
        int128_t zmm0_2;
        
        if (result != 3)
        {
            *(arg1 + 0x1c) = var_24;
            zmm0_2 = var_34;
            *(arg1 + 0xc) = zmm0_2;
            label_86988c:
            *arg1 = result;
            arg1[1] = r14_1;
            /* tailcall */
            return core::ptr::drop_in_place$LT$alacritty..renderer..shader..ShaderProgram$GT$::h64d42f895d6f13b2(var_38, zmm0_2);
        }
        
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &result_1, var_38, "cellDim", 8);
        result = result_1;
        
        if (result != 3)
        {
            *(arg1 + 0x1c) = var_24;
            zmm0_2 = var_34;
            *(arg1 + 0xc) = zmm0_2;
            r14_1 = var_38;
            goto label_86988c;
        }
        
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &result_1, var_38, "renderingPass", 0xe);
        result = result_1;
        
        if (result != 3)
        {
            *(arg1 + 0x1c) = var_24;
            zmm0_2 = var_34;
            *(arg1 + 0xc) = zmm0_2;
            r14_1 = var_38;
            goto label_86988c;
        }
        
        arg1[1] = var_38;
        *(arg1 + 0xc) = r14_1;
        arg1[2] = var_38;
        *(arg1 + 0x14) = var_38;
        *arg1 = 4;
    }
    return result;
}
