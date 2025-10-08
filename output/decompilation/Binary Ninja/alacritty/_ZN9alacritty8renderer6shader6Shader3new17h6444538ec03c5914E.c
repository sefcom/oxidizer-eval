
  int64_t alacritty::renderer::shader::Shader::new::h6444538ec03c5914(int64_t* arg1, int32_t arg2, int64_t arg3, int32_t arg4, int32_t arg5, int64_t arg6, int32_t arg7)

{
    int32_t r13 = 0x12;
    
    if (arg2)
        r13 = 0x24;
    
    int64_t rax;
    int64_t rdx;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(3, 8, 8);
    int64_t var_70 = rax;
    int64_t var_60 = 0;
    int64_t rax_1;
    int64_t rdx_1;
    rax_1 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(3, 4, 4);
    char const* const rsi = "#version 330 core\n#version 100\n…";
    
    if (arg2)
        rsi = "#version 100\n#define GLES2_REND…";
    
    int64_t var_90 = rax_1;
    int32_t var_80 = 0;
    alloc::vec::Vec$LT$T$C$A$GT$::push::h36581b1288600654(&var_70, rsi);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h0e3402a5d050e4a8(&var_90, r13);
    
    if (arg3)
    {
        alloc::vec::Vec$LT$T$C$A$GT$::push::h36581b1288600654(&var_70, arg3);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h0e3402a5d050e4a8(&var_90, arg4);
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::push::h36581b1288600654(&var_70, arg6);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h0e3402a5d050e4a8(&var_90, arg7);
    int32_t rax_2 = *alacritty::gl::storage::CreateShader::hcd73aa42dce6e632.0(arg5);
    int32_t var_94 = 0;
    *alacritty::gl::storage::ShaderSource::h36e3f9f07e0e8e33.0(rax_2, var_80, rdx, rdx_1);
    *alacritty::gl::storage::CompileShader::hc7ca431ea497331d.0(rax_2);
    *alacritty::gl::storage::GetShaderiv::h69c95f7d61f52dac.0(rax_2, 0x8b81, &var_94);
    
    if (var_94 != 1)
    {
        int128_t var_48;
        alacritty::renderer::shader::get_shader_info_log::hdea51570b7be2ae5(&var_48, rax_2);
        int64_t var_38;
        arg1[3] = var_38;
        *(arg1 + 8) = var_48;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$alacritty..renderer..shader..Shader$GT$::hc79e3c62068da574(
            rax_2);
    }
    else
    {
        arg1[1] = rax_2;
        *arg1 = 3;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$i32$GT$$GT$::hfe34e1f207b818df(var_90, rdx_1);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h15d634af1a53dcfc(var_70, 
        rdx);
}
