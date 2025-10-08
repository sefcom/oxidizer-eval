
  uint64_t uu_install::copy_file::h9c5ec538cb19a460(int64_t arg1, uint64_t arg2, int64_t arg3, uint64_t arg4)

{
    uint64_t var_168;
    std::fs::canonicalize::h1b4e1f9abe878e79(&var_168, arg3);
    uint64_t rax_14;
    int64_t var_160;
    uint64_t var_158;
    int128_t var_150;
    uint64_t var_140;
    int128_t* var_138;
    uint64_t* var_128;
    void* const var_e0;
    uint64_t var_d8;
    uint64_t* var_d0;
    void* const rbx_1;
    
    if (!(0 + -(var_168)))
    {
        std::fs::canonicalize::h1b4e1f9abe878e79(&var_e0, arg1);
        int128_t* rax_6 = var_e0;
        
        if (rax_6 != -0x8000000000000000)
        {
            var_138 = rax_6;
            uint64_t var_130_3 = var_d8;
            var_128 = var_d0;
            char rax_8 =
                _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h35303d53f5dfabe5(
                var_d8, var_d0, var_160, var_158);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_138);
            
            if (!rax_8)
            {
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_168);
                goto label_468ba8;
            }
            
            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_150, arg1, 
                arg2);
            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_138, arg3, 
                arg4);
            uint64_t var_c8_3 = var_140;
            var_d8 = var_150;
            int128_t var_c0_1 = var_138;
            uint64_t* var_b0_1 = var_128;
            var_e0 = 0x10;
            rbx_1 = alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_e0);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_168);
            rax_14 = rbx_1;
        }
        else
        {
            rbx_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_168);
            rax_14 = rbx_1;
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc098393cd1495f04(&var_168);
        label_468ba8:
        uint64_t var_f8;
        
        if (std::path::Path::is_dir::h02edbc48c38d7d9e(arg3, arg4)
            && !std::path::Path::is_dir::h02edbc48c38d7d9e(arg1, arg2))
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_168, arg3, 
                arg4);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0734b0984fa3fab3(&var_e0, var_160, var_158);
            var_f8 = var_e0;
            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_150, arg1, 
                arg2);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0734b0984fa3fab3(&var_138, *var_150[8], var_140);
            uint64_t* var_b0_2 = var_128;
            int128_t var_c0_2 = var_138;
            var_d8 = var_f8;
            uint64_t* var_c8_4 = var_d0;
            var_e0 = 0xf;
            uint64_t rax_19 = alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_e0);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_150);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_168);
            return rax_19;
        }
        
        uint64_t rax_3 = std::fs::remove_file::ha0580a66a1a287af(arg3);
        var_f8 = rax_3;
        
        if (!rax_3)
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hb3cb1d78c02156cf(&var_f8);
        else
        {
            var_168 = rax_3;
            
            if (std::io::error::Error::kind::h135fe00c4e7365f3(rax_3))
            {
                int128_t* rax_5;
                int64_t rdx_1;
                rax_5 = uucore::util_name::h074417a1e6395129();
                var_138 = rax_5;
                int64_t var_130_1 = rdx_1;
                var_150 = &var_138;
                *var_150[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c432d6311a3dda;
                var_e0 = &data_502188;
                int64_t var_d8_1 = 2;
                int128_t var_c0;
                var_c0 = 0;
                int128_t* var_d0_1 = &var_150;
                int64_t var_c8_1 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                var_150 = arg3;
                *var_150[8] = arg4;
                var_138 = &var_150;
                uint64_t (* var_130_2)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                var_128 = &var_168;
                int64_t (* var_120_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Debug$GT$::fmt::he152f8cbd3e2b5ef;
                var_e0 = &data_5024b8;
                var_d8 = 3;
                var_c0 = 0;
                int128_t** var_d0_2 = &var_138;
                int64_t var_c8_2 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc7e2d86a53eff0ef(&var_168);
        }
        
        std::fs::metadata::hd1e2f191d36a0fa4(&var_e0, arg1);
        
        if (var_e0 != 2)
        {
            int32_t var_a8;
            int32_t rax_15 = 0xf000 & var_a8;
            
            if (rax_15 == 0x1000 || rax_15 == 0x6000 || rax_15 == 0x2000)
            {
                std::fs::File::open::haf8980391cdd87a0(&var_e0, arg1);
                
                if (var_e0 & 1)
                    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                
                int32_t fd = *var_e0[4];
                var_150 = fd;
                std::fs::File::create::h3f5ad570d4e8c68e(&var_e0, arg3);
                
                if (var_e0 != 1)
                {
                    var_138 = *var_e0[4];
                    uucore::features::buf_copy::linux::copy_stream::h7c33e1490bcc37f5(&var_e0, 
                        &var_150, &var_138);
                    rbx_1 = var_e0;
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::h695e44815743ae8f(var_138);
                    fd = var_150;
                }
                else
                    rbx_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h695e44815743ae8f(fd);
                rax_14 = rbx_1;
            }
            else
                rax_14 = uu_install::copy_normal_file::h632dca94ec623107(arg1, arg2, arg3, arg4);
        }
        else
        {
            var_f8 = var_d8;
            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_168, arg1, 
                arg2);
            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_150, arg3, 
                arg4);
            uint64_t var_118_1 = var_158;
            var_128 = var_168;
            int128_t var_110_1 = var_150;
            uint64_t var_100_1 = var_140;
            uint64_t var_130_4 = var_d8;
            var_138 = 8;
            rax_14 = alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_138);
        }
    }
    return rax_14;
}
