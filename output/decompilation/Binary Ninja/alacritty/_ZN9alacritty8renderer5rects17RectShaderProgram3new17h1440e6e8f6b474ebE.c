
  int64_t alacritty::renderer::rects::RectShaderProgram::new::h1440e6e8f6b474eb(int32_t* arg1, int32_t arg2, char arg3)

{
    uint64_t rax_1 = arg3 << 3;
    int64_t var_78;
    alacritty::renderer::shader::ShaderProgram::new::h209704e80cfd93af(&var_78, arg2, 
        *(rax_1 + &data_c87838), *(rax_1 + &data_4f7850), "#if defined(GLES2_RENDERER)\natt…", 
        0x129, "#if defined(GLES2_RENDERER)\n#de…", 0x111e);
    int64_t rax_2 = var_78;
    int32_t result;
    int32_t var_70;
    
    if (rax_2 != 3)
    {
        int32_t var_5c;
        arg1[9] = var_5c;
        int128_t var_6c;
        *(arg1 + 0x14) = var_6c;
        *(arg1 + 8) = rax_2;
        arg1[4] = var_70;
        result = 1;
    }
    else
    {
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &var_78, var_70, "cellWidth", 0xa);
        int64_t rax_3 = var_78;
        
        if (rax_3 != 3)
            core::ptr::drop_in_place$LT$core..result..Result$LT$i32$C$alacritty..renderer..shader..ShaderError$GT$$GT$::hb7e2b27a7c29798a(&var_78);
        
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &var_78, var_70, "cellHeight", 0xb);
        int64_t rax_4 = var_78;
        int32_t var_4c_1 = 0;
        
        if (rax_4 != 3)
            core::ptr::drop_in_place$LT$core..result..Result$LT$i32$C$alacritty..renderer..shader..ShaderError$GT$$GT$::hb7e2b27a7c29798a(&var_78);
        
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &var_78, var_70, "paddingX", 9);
        int64_t rax_5 = var_78;
        int32_t var_50_1 = 0;
        
        if (rax_5 != 3)
            core::ptr::drop_in_place$LT$core..result..Result$LT$i32$C$alacritty..renderer..shader..ShaderError$GT$$GT$::hb7e2b27a7c29798a(&var_78);
        
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &var_78, var_70, "paddingY", 9);
        int64_t rax_6 = var_78;
        int32_t var_54_1 = 0;
        
        if (rax_6 != 3)
            core::ptr::drop_in_place$LT$core..result..Result$LT$i32$C$alacritty..renderer..shader..ShaderError$GT$$GT$::hb7e2b27a7c29798a(&var_78);
        
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &var_78, var_70, "underlinePosition", 0x12);
        int64_t rax_7 = var_78;
        int32_t var_58_1 = 0;
        
        if (rax_7 != 3)
            core::ptr::drop_in_place$LT$core..result..Result$LT$i32$C$alacritty..renderer..shader..ShaderError$GT$$GT$::hb7e2b27a7c29798a(&var_78);
        
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &var_78, var_70, "underlineThickness", 0x13);
        int64_t rax_8 = var_78;
        int64_t r13;
        r13 = rax_8 == 3;
        
        if (rax_8 != 3)
            core::ptr::drop_in_place$LT$core..result..Result$LT$i32$C$alacritty..renderer..shader..ShaderError$GT$$GT$::hb7e2b27a7c29798a(&var_78);
        
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &var_78, var_70, "undercurlPosition", 0x12);
        int32_t r15_1;
        r15_1 = rax_3 == 3;
        int32_t rax_9;
        rax_9 = rax_4 == 3;
        int32_t rax_10;
        rax_10 = rax_5 == 3;
        int32_t rax_11;
        rax_11 = rax_6 == 3;
        int32_t rax_12;
        rax_12 = rax_7 == 3;
        int32_t r12_1;
        r12_1 = r13;
        int64_t rax_13 = var_78;
        int32_t r13_1;
        r13_1 = rax_13 == 3;
        
        if (rax_13 != 3)
            core::ptr::drop_in_place$LT$core..result..Result$LT$i32$C$alacritty..renderer..shader..ShaderError$GT$$GT$::hb7e2b27a7c29798a(&var_78);
        
        arg1[1] = r15_1;
        arg1[2] = var_70;
        arg1[3] = rax_9;
        arg1[4] = var_70;
        arg1[5] = rax_10;
        arg1[6] = var_70;
        arg1[7] = rax_11;
        arg1[8] = var_70;
        arg1[9] = rax_12;
        arg1[0xa] = var_70;
        arg1[0xb] = r12_1;
        arg1[0xc] = var_70;
        arg1[0xd] = r13_1;
        arg1[0xe] = var_70;
        arg1[0xf] = var_70;
        result = 0;
    }
    *arg1 = result;
    return result;
}
