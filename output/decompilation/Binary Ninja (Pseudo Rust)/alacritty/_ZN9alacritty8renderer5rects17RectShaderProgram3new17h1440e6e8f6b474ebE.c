
  fn alacritty::renderer::rects::RectShaderProgram::new::h1440e6e8f6b474eb(arg1: *mut i32, arg2: i32, arg3: i8) -> i64

{
    let rax_1: u64 = arg3 << 3;
    let mut var_78: i64;
    alacritty::renderer::shader::ShaderProgram::new::h209704e80cfd93af(&var_78, arg2, 
        *(rax_1 + &data_c87838), *(rax_1 + &data_4f7850), "#if defined(GLES2_RENDERER)\natt…", 
        0x129, "#if defined(GLES2_RENDERER)\n#de…", 0x111e);
    let rax_2: i64 = var_78;
    let mut result: i32;
    let var_70: i32;
    
    if rax_2 != 3
    {
        let var_5c: i32;
        arg1[9] = var_5c;
        let var_6c: i128;
        *arg1.byte_offset(0x14) = var_6c;
        *arg1.byte_offset(8) = rax_2;
        arg1[4] = var_70;
        result = 1;
    }
    else
    {
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &var_78, var_70, "cellWidth", 0xa);
        let rax_3: i64 = var_78;
        
        if rax_3 != 3
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$i32$C$alacritty..renderer..shader..ShaderError$GT$$GT$::hb7e2b27a7c29798a(&var_78);
        }
        
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &var_78, var_70, "cellHeight", 0xb);
        let rax_4: i64 = var_78;
        let var_4c_1: i32 = 0;
        
        if rax_4 != 3
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$i32$C$alacritty..renderer..shader..ShaderError$GT$$GT$::hb7e2b27a7c29798a(&var_78);
        }
        
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &var_78, var_70, "paddingX", 9);
        let rax_5: i64 = var_78;
        let var_50_1: i32 = 0;
        
        if rax_5 != 3
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$i32$C$alacritty..renderer..shader..ShaderError$GT$$GT$::hb7e2b27a7c29798a(&var_78);
        }
        
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &var_78, var_70, "paddingY", 9);
        let rax_6: i64 = var_78;
        let var_54_1: i32 = 0;
        
        if rax_6 != 3
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$i32$C$alacritty..renderer..shader..ShaderError$GT$$GT$::hb7e2b27a7c29798a(&var_78);
        }
        
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &var_78, var_70, "underlinePosition", 0x12);
        let rax_7: i64 = var_78;
        let var_58_1: i32 = 0;
        
        if rax_7 != 3
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$i32$C$alacritty..renderer..shader..ShaderError$GT$$GT$::hb7e2b27a7c29798a(&var_78);
        }
        
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &var_78, var_70, "underlineThickness", 0x13);
        let rax_8: i64 = var_78;
        let mut r13: i64;
        r13 = rax_8 == 3;
        
        if rax_8 != 3
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$i32$C$alacritty..renderer..shader..ShaderError$GT$$GT$::hb7e2b27a7c29798a(&var_78);
        }
        
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &var_78, var_70, "undercurlPosition", 0x12);
        let mut r15_1: i32;
        r15_1 = rax_3 == 3;
        let mut rax_9: i32;
        rax_9 = rax_4 == 3;
        let mut rax_10: i32;
        rax_10 = rax_5 == 3;
        let mut rax_11: i32;
        rax_11 = rax_6 == 3;
        let mut rax_12: i32;
        rax_12 = rax_7 == 3;
        let mut r12_1: i32;
        r12_1 = r13;
        let rax_13: i64 = var_78;
        let mut r13_1: i32;
        r13_1 = rax_13 == 3;
        
        if rax_13 != 3
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$i32$C$alacritty..renderer..shader..ShaderError$GT$$GT$::hb7e2b27a7c29798a(&var_78);
        }
        
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
    result
}
