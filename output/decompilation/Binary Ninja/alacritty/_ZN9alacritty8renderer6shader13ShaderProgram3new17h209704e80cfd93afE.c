
  int64_t alacritty::renderer::shader::ShaderProgram::new::h209704e80cfd93af(int64_t* arg1, int32_t arg2, int64_t arg3, int32_t arg4, int64_t arg5, int32_t arg6, int64_t arg7, int32_t arg8)

{
    int64_t result_1;
    alacritty::renderer::shader::Shader::new::h6444538ec03c5914(&result_1, arg2, arg3, arg4, 
        0x8b31, arg5, arg6);
    int64_t result = result_1;
    int32_t var_40;
    int128_t var_3c;
    int32_t var_2c;
    
    if (result != 3)
    {
        *(arg1 + 0x1c) = var_2c;
        *(arg1 + 0xc) = var_3c;
        *arg1 = result;
        arg1[1] = var_40;
        return result;
    }
    
    alacritty::renderer::shader::Shader::new::h6444538ec03c5914(&result_1, arg2, arg3, arg4, 
        0x8b30, arg7, arg8);
    int64_t result_2 = result_1;
    
    if (result_2 != 3)
    {
        *(arg1 + 0x1c) = var_2c;
        *(arg1 + 0xc) = var_3c;
        *arg1 = result_2;
        arg1[1] = var_40;
    }
    else
    {
        int32_t rax_2 = *alacritty::gl::storage::CreateProgram::h2614cabd7678c2a9.0();
        int32_t var_4c = 0;
        *alacritty::gl::storage::AttachShader::h785b6ccfbbb3b8d2.0(rax_2, var_40);
        *alacritty::gl::storage::AttachShader::h785b6ccfbbb3b8d2.0(rax_2, var_40);
        *alacritty::gl::storage::LinkProgram::hbaa61d8d0ce34338.0(rax_2);
        *alacritty::gl::storage::GetProgramiv::h07b84d595768eb5e.0(rax_2, 0x8b82, &var_4c);
        
        if (var_4c != 1)
        {
            alacritty::renderer::shader::get_program_info_log::hc21cbe3cb5f50aa9(&result_1, rax_2);
            arg1[3] = *var_3c[4];
            *(arg1 + 8) = result_1;
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
    
    return core::ptr::drop_in_place$LT$alacritty..renderer..shader..Shader$GT$::hc79e3c62068da574(
        var_40);
}
