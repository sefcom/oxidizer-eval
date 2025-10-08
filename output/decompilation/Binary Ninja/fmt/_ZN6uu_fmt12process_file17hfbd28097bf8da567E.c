
  uint64_t uu_fmt::process_file::hfbd28097bf8da567(int64_t arg1, uint64_t arg2, void* arg3, int64_t* arg4)

{
    uint64_t result;
    int32_t var_228;
    uint64_t result_1;
    int32_t var_190;
    void** var_188;
    int128_t var_e8;
    uint64_t rax_1;
    void* const rdx;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc5a01975fdb51be5(arg1, arg2, "-read errorcannot open  for read…", 1))
    {
        std::fs::File::open::h137777d641029dbe(&var_e8, arg1);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::heba7adc2095f0446(&result_1, &var_e8);
        result = result_1;
        
        if (!result)
        {
            var_228 = var_190;
            std::fs::File::metadata::h5e84e533705f8c98(&var_e8, &var_228);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h5d3d0e2f77a17a7f(&result_1, &var_e8);
            
            if (result_1 != 2)
            {
                int32_t var_160;
                
                if ((0xf000 & var_160) != 0x4000)
                {
                    rax_1 = alloc::boxed::Box$LT$T$GT$::new::h998bec50ca1e407a(var_228);
                    rdx = &data_4f0788;
                    goto label_464524;
                }
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7c69efe601866818(&result_1, "read errorcannot open  for readi…", 0xa);
                void** var_d8_2 = var_188;
                var_e8 = result_1;
                int32_t var_d0_1 = 1;
                result = alloc::boxed::Box$LT$T$GT$::new::h2c9a23957ea0966a(&var_e8);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h64583b23039ea895(&var_228);
            }
            else
            {
                result = var_190;
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h64583b23039ea895(&var_228);
            }
        }
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::h0a9e10fe9f2b8307(
            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
        rdx = &data_4f07e0;
        label_464524:
        void var_1d0;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h7ec671e489b617c0(
            &var_1d0, rax_1, rdx);
        var_228 = -0x7ffffffffffffffe;
        void* var_1f0_1 = arg3;
        void* var_1e8_1 = &var_1d0;
        void* var_1e0_1 = arg3;
        char var_1d8_1 = 1;
        
        while (true)
        {
            _$LT$uu_fmt..parasplit..ParagraphStream$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9892c27ee6853b6e(&result_1, &var_228);
            uint64_t result_5 = result_1;
            
            if (result_5 == -0x7fffffffffffffff)
            {
                core::ptr::drop_in_place$LT$uu_fmt..parasplit..ParagraphStream$GT$::h55657f9840f97216(&var_228);
                uint64_t result_4 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h004f836e07ea63f8(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h82cd95ebe785134e(arg4));
                result = result_4;
                
                if (result_4)
                    break;
                
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::hce5e0a4644b5e569(&var_1d0);
                return 0;
            }
            
            int64_t r14_1 = var_190;
            uint64_t var_180;
            
            if (result_5 != -0x8000000000000000)
            {
                var_e8 = result_5;
                *var_e8[8] = r14_1;
                void** var_d8_1 = var_188;
                int32_t var_d0;
                var_d0 = var_180;
                int128_t var_138;
                int128_t var_88_1 = var_138;
                int128_t var_148;
                int128_t var_98_1 = var_148;
                int128_t var_158;
                int128_t var_a8_1 = var_158;
                int128_t var_168;
                int128_t var_b8_1 = var_168;
                int128_t var_178;
                int128_t var_c8_1 = var_178;
                result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h004f836e07ea63f8(uu_fmt::linebreak::break_lines::hc2099fd01901faf2(&var_e8, arg3, arg4));
                core::ptr::drop_in_place$LT$uu_fmt..parasplit..Paragraph$GT$::h8b9159271f412e50(
                    &var_e8);
                
                if (!result)
                    continue;
            }
            else
            {
                int64_t rbp_1 = arg4[2];
                ssize_t rdi_4;
                
                if (var_180 >= *arg4 - rbp_1)
                    rdi_4 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(arg4, var_188, var_180);
                else
                {
                    memcpy(arg4[1] + rbp_1, var_188, var_180);
                    arg4[2] = rbp_1 + var_180;
                    rdi_4 = 0;
                }
                
                uint64_t result_2 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h004f836e07ea63f8(rdi_4);
                result = result_2;
                
                if (!result_2)
                {
                    int64_t rax_4 = arg4[2];
                    ssize_t rdi_5;
                    
                    if (*arg4 - rax_4 <= 1)
                        rdi_5 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(arg4, "\n   Found NoFormatLine when exp…", 1);
                    else
                    {
                        arg4[1][rax_4] = 0xa;
                        arg4[2] = rax_4 + 1;
                        rdi_5 = 0;
                    }
                    
                    uint64_t result_3 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h004f836e07ea63f8(rdi_5);
                    result = result_3;
                    
                    if (!result_3)
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5cd0f203c67fbbb7(
                            r14_1, var_188);
                        continue;
                    }
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5cd0f203c67fbbb7(r14_1, 
                    var_188);
            }
            core::ptr::drop_in_place$LT$uu_fmt..parasplit..ParagraphStream$GT$::h55657f9840f97216(
                &var_228);
            break;
        }
        
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::hce5e0a4644b5e569(&var_1d0);
    }
    return result;
}
