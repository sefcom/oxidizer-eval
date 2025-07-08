
  int128_t* uu_fmt::process_file::h286817e23c9d96bb(int64_t arg1, uint64_t arg2, void* arg3, int64_t* arg4)

{
    int128_t* result;
    int32_t var_220;
    int128_t var_1c8;
    int128_t* result_1;
    int32_t var_110;
    void* const rcx;
    int64_t* rdx;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h49c5b64196a2a340(arg1, arg2, "-read error\nfileswidthinvalid w…", 1))
    {
        std::fs::File::open::hd2fbbd470609400e(&var_1c8, arg1);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h432ca70cabaeacd8(&result_1, &var_1c8);
        result = result_1;
        
        if (!result)
        {
            var_220 = var_110;
            std::fs::File::metadata::he899a18112e6f19e(&var_1c8, &var_220);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::he0390d0a07b9e259(&result_1, &var_1c8);
            
            if (result_1 != 2)
            {
                int32_t var_e0;
                
                if ((0xf000 & var_e0) != 0x4000)
                {
                    rdx = alloc::boxed::Box$LT$T$GT$::new::h95508db5fa9d8c2f(var_220);
                    rcx = &data_526470;
                    goto label_4b539f;
                }
                
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5bbd8c4ce611c1c9(
                    &result_1, "read error\nfileswidthinvalid wi…", 0xa);
                void* var_108;
                void* var_1b8_2 = var_108;
                var_1c8 = result_1;
                int32_t var_1b0_1 = 1;
                result = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&var_1c8);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h6154f541d864a002(&var_220);
            }
            else
            {
                result = var_110;
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h6154f541d864a002(&var_220);
            }
        }
    }
    else
    {
        std::io::stdio::stdin::h7215cc131abb55d8();
        rdx = alloc::boxed::Box$LT$T$GT$::new::h1ab2cedcdb833c55(
            &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
        rcx = &data_5264c8;
        label_4b539f:
        void var_68;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h0f92bd0684144666(&var_68, 
            0x2000, rdx, rcx);
        var_220 = -0x7ffffffffffffffe;
        void* var_1e8_1 = arg3;
        void* var_1e0_1 = &var_68;
        void* var_1d8_1 = arg3;
        char var_1d0_1 = 1;
        
        while (true)
        {
            _$LT$uu_fmt..parasplit..ParagraphStream$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6ed28343c896a546(&result_1, &var_220);
            int128_t* result_6 = result_1;
            int64_t var_1c0;
            void* var_100;
            
            if (result_6 == -0x8000000000000000)
            {
                var_1c8 = var_110;
                void* var_1b8_1 = var_100;
                void* rbp_1 = arg4[2];
                void** rax_7;
                
                if (var_100 >= *arg4 - rbp_1)
                    rax_7 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(arg4, var_1c0, var_100);
                else
                {
                    memcpy(arg4[1] + rbp_1, var_1c0, var_100);
                    arg4[2] = rbp_1 + var_100;
                    rax_7 = nullptr;
                }
                
                int128_t* result_3 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd26104e1c49ad79d(rax_7);
                result = result_3;
                
                if (!result_3)
                {
                    int64_t rax_8 = arg4[2];
                    void** rax_10;
                    
                    if (*arg4 - rax_8 <= 1)
                        rax_10 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(arg4, "\nfileswidthinvalid width: src/u…", 1);
                    else
                    {
                        arg4[1][rax_8] = 0xa;
                        arg4[2] = rax_8 + 1;
                        rax_10 = nullptr;
                    }
                    
                    int128_t* result_4 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hb12cfa95b25ccb95(rax_10);
                    result = result_4;
                    
                    if (!result_4)
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h99cf2aa6339f3e38(
                            &var_1c8);
                        continue;
                    }
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h99cf2aa6339f3e38(&var_1c8);
            }
            else
            {
                if (result_6 == -0x7fffffffffffffff)
                {
                    core::ptr::drop_in_place$LT$uu_fmt..parasplit..ParagraphStream$GT$::h55f4efc3b7686e22(&var_220);
                    int128_t* result_5 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hf81386728380d136(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h4270cc0ec3c16399(arg4));
                    result = result_5;
                    
                    if (result_5)
                        break;
                    
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::ha2681e07678ff023(&var_68);
                    return nullptr;
                }
                
                var_1c8 = result_6;
                int32_t var_1b0;
                var_1b0 = var_100;
                var_1c0 = var_110;
                int128_t var_b8;
                int128_t var_168_1 = var_b8;
                int128_t var_c8;
                int128_t var_178_1 = var_c8;
                int128_t var_d8;
                int128_t var_188_1 = var_d8;
                int128_t var_e8;
                int128_t var_198_1 = var_e8;
                int128_t var_f8;
                int128_t var_1a8_1 = var_f8;
                int128_t* result_2 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::haf36b358a89fa26f(uu_fmt::linebreak::break_lines::h90fda31618924b44(&var_1c8, 
                    arg3, arg4));
                result = result_2;
                
                if (result_2)
                    core::ptr::drop_in_place$LT$uu_fmt..parasplit..Paragraph$GT$::ha3be4e98cabf6d8c(
                        &var_1c8);
                else
                {
                    core::ptr::drop_in_place$LT$uu_fmt..parasplit..Paragraph$GT$::ha3be4e98cabf6d8c(
                        &var_1c8);
                    continue;
                }
            }
            core::ptr::drop_in_place$LT$uu_fmt..parasplit..ParagraphStream$GT$::h55f4efc3b7686e22(
                &var_220);
            break;
        }
        
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::ha2681e07678ff023(&var_68);
    }
    return result;
}
