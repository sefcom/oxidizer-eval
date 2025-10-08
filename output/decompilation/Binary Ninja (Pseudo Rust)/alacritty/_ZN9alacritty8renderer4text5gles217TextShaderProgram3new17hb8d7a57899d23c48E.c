
  fn alacritty::renderer::text::gles2::TextShaderProgram::new::hb8d7a57899d23c48(arg1: *mut i64, arg2: i32) -> i64

{
    let mut rcx: *const i8 = "varying mediump vec2 TexCoords;\n…";
    
    if arg2 != 0
    {
        rcx = "#if defined(GLES2_RENDERER)\n// …";
    }
    
    let mut r10: i32 = 0x4f8;
    
    if arg2 != 0
    {
        r10 = 0x6ef;
    }
    
    let mut result_1: i64;
    alacritty::renderer::shader::ShaderProgram::new::h209704e80cfd93af(&result_1, 1, 0, rcx, 
        "// Cell coords.\nattribute vec2 …", 0x497, rcx, r10);
    let mut result: i64 = result_1;
    let var_30: i32;
    let var_2c: i128;
    let var_1c: i32;
    
    if result != 3
    {
        *arg1.byte_offset(0x1c) = var_1c;
        *arg1.byte_offset(0xc) = var_2c;
        *arg1 = result;
        arg1[1] = var_30;
    }
    else
    {
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &result_1, var_30, "projection", 0xb);
        result = result_1;
        let mut r14_1: i32 = var_30;
        let mut zmm0_2: i128;
        
        if result != 3
        {
            *arg1.byte_offset(0x1c) = var_1c;
            zmm0_2 = var_2c;
            *arg1.byte_offset(0xc) = zmm0_2;
            'label_868d92:
            *arg1 = result;
            arg1[1] = r14_1;
            /* tailcall */
            return core::ptr::drop_in_place$LT$alacritty..renderer..shader..ShaderProgram$GT$::h64d42f895d6f13b2(var_30, zmm0_2);
        }
        
        alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(
            &result_1, var_30, "renderingPass", 0xe);
        result = result_1;
        
        if result != 3
        {
            *arg1.byte_offset(0x1c) = var_1c;
            zmm0_2 = var_2c;
            *arg1.byte_offset(0xc) = zmm0_2;
            r14_1 = var_30;
            goto 'label_868d92;
        }
        
        arg1[1] = var_30;
        *arg1.byte_offset(0xc) = r14_1;
        arg1[2] = var_30;
        *arg1 = 4;
    }
    result
}
