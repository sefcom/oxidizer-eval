
  fn alacritty::renderer::shader::ShaderProgram::new::h209704e80cfd93af(arg1: *mut i64, arg2: i32, arg3: i64, arg4: i32, arg5: i64, arg6: i32, arg7: i64, arg8: i32) -> i64

{
    let mut result_1: i64;
    alacritty::renderer::shader::Shader::new::h6444538ec03c5914(&result_1, arg2, arg3, arg4, 
        0x8b31, arg5, arg6);
    let result: i64 = result_1;
    let var_40: i32;
    let var_3c: i128;
    let var_2c: i32;
    
    if result != 3
    {
        *arg1.byte_offset(0x1c) = var_2c;
        *arg1.byte_offset(0xc) = var_3c;
        *arg1 = result;
        arg1[1] = var_40;
        return result;
    }
    
    alacritty::renderer::shader::Shader::new::h6444538ec03c5914(&result_1, arg2, arg3, arg4, 
        0x8b30, arg7, arg8);
    let result_2: i64 = result_1;
    
    if result_2 != 3
    {
        *arg1.byte_offset(0x1c) = var_2c;
        *arg1.byte_offset(0xc) = var_3c;
        *arg1 = result_2;
        arg1[1] = var_40;
    }
    else
    {
        let rax_2: i32 = *alacritty::gl::storage::CreateProgram::h2614cabd7678c2a9.0();
        let mut var_4c: i32 = 0;
        *alacritty::gl::storage::AttachShader::h785b6ccfbbb3b8d2.0(rax_2, var_40);
        *alacritty::gl::storage::AttachShader::h785b6ccfbbb3b8d2.0(rax_2, var_40);
        *alacritty::gl::storage::LinkProgram::hbaa61d8d0ce34338.0(rax_2);
        *alacritty::gl::storage::GetProgramiv::h07b84d595768eb5e.0(rax_2, 0x8b82, &var_4c);
        
        if var_4c != 1
        {
            alacritty::renderer::shader::get_program_info_log::hc21cbe3cb5f50aa9(&result_1, rax_2);
            arg1[3] = *var_3c[4];
            *arg1.byte_offset(8) = result_1;
            *arg1 = 1;
            core::ptr::drop_in_place$LT$alacritty..renderer..shader..ShaderProgram$GT$::h64d42f895d6f13b2(rax_2);
            core::ptr::drop_in_place$LT$alacritty..renderer..shader..Shader$GT$::hc79e3c62068da574(
                var_40);
        }
        else
        {
            arg1[1] = rax_2;
            *arg1 = 3;
            core::ptr::drop_in_place$LT$alacritty..renderer..shader..Shader$GT$::hc79e3c62068da574(
                var_40);
        }
    }
    
    core::ptr::drop_in_place$LT$alacritty..renderer..shader..Shader$GT$::hc79e3c62068da574(var_40)
}
