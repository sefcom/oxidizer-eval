
  int64_t uu_ls::display_item_name::h23801d128c21da3c(int128_t* arg1, void* arg2, uint64_t arg3, char arg4, int64_t arg5, int128_t* arg6, void* arg7, int64_t* arg8)

{
    int64_t var_2f8;
    uucore::features::quoting_style::escape_name::h942044e1943bd5af(&var_2f8, *(arg2 + 8), 
        *(arg2 + 0x10), arg3 + 0xfc);
    int64_t var_2f0;
    int64_t* var_2e8;
    int128_t var_178;
    int64_t* var_168;
    
    if (*(arg3 + 0xf7))
    {
        int32_t rax;
        rax = 1;
        int32_t var_2fc_1 = rax;
        uu_ls::create_hyperlink::h0a10a692235dc40b(&var_178, var_2f0, var_2e8, arg2);
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_2f8, 
            var_2f0);
        var_2e8 = var_168;
        var_2f8 = var_178;
    }
    
    int64_t* var_290 = arg7 + 0x68;
    
    if (*(arg7 + 0x85) != 2)
    {
        uu_ls::colors::color_name::hafb991a3ed925fc5(&var_178, &var_2f8, arg2, var_290, arg7, 
            nullptr, 
            uu_ls::display_item_name::_$u7b$$u7b$closure$u7d$$u7d$::h25fbdfd9e7387c2f(arg3, arg8, 
                var_2e8));
        var_2e8 = var_168;
        var_2f8 = var_178;
    }
    
    char rbx_3 = *(arg3 + 0x100);
    int64_t* rax_2;
    rax_2 = 1;
    char var_2fc_2 = rax_2;
    
    if (rbx_3 != 1 && arg6[1])
    {
        var_168 = var_2e8;
        var_178 = var_2f8;
        var_2f8 = *arg6;
        var_2e8 = arg6[1];
        std::ffi::os_str::OsString::push::h7acd85275a97cdac(&var_2f8, &var_178);
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_178, 
            *var_178[8]);
        var_2fc_2 = 0;
    }
    
    uint32_t r15_2 = *(arg3 + 0xff);
    int32_t var_2d8;
    int128_t var_228;
    
    if (r15_2)
    {
        int32_t rax_9 = uu_ls::classify_file::hfca466d8ec9ab1d0(arg2, arg7);
        
        if (r15_2 != 1)
        {
            if (r15_2 != 2)
            {
                if (rax_9 != 0x110000)
                    goto label_59e74e;
                
                goto label_59e73f;
            }
            
            if (rax_9 == 0x2a || rax_9 == 0x110000)
                goto label_59e73f;
            
            goto label_59e74e;
        }
        
        if (rax_9 != 0x2f)
            goto label_59e73f;
        
        label_59e74e:
        var_2d8 = 0;
        char* rax_10;
        uint64_t rdx_4;
        rax_10 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(rax_9, &var_2d8);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_178, rax_10, rdx_4);
        int64_t* var_218_1 = var_168;
        var_228 = var_178;
        std::ffi::os_str::OsString::push::had4c4c06171a790f(&var_2f8, *var_228[8], var_168);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_228);
        
        if (rbx_3 != 1)
            goto label_59e938;
        
        goto label_59e7c0;
    }
    
    label_59e73f:
    
    if (rbx_3 != 1)
        goto label_59e938;
    
    label_59e7c0:
    
    if (!uu_ls::PathData::file_type::h413d2014e9fb015b(arg2, arg7))
        goto label_59e938;
    
    void* rax_12 = uu_ls::PathData::file_type::h413d2014e9fb015b(arg2, arg7);
    
    if (!rax_12)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    if ((0xf000 & *rax_12) != 0xa000 || *(arg2 + 0x128) == 1)
        goto label_59e938;
    
    *(arg2 + 0x28);
    int64_t var_240;
    std::fs::read_link::h8fc09be18a8db6e8(&var_240, *(arg2 + 0x20));
    int128_t var_2b8;
    
    if (!(0 + -(var_240)))
    {
        var_2b8 = var_240;
        std::ffi::os_str::OsString::push::h8d27602952d812af(&var_2f8, " -", 4);
        uint64_t var_230;
        
        if (*(arg7 + 0x85) != 2)
        {
            char* rsi_21 = *var_2b8[8];
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h523154303afc7abc(&var_178, rsi_21, var_230);
            int64_t* var_278_1 = var_168;
            int128_t var_288 = var_178;
            
            if (!std::path::Path::is_absolute::hf2dacc49683e82ac(rsi_21, var_230))
            {
                char* rax_20;
                uint64_t rdx_12;
                rax_20 = std::path::Path::parent::hef287f60afa56900(*(arg2 + 0x20), *(arg2 + 0x28));
                
                if (rax_20)
                {
                    std::path::Path::join::h7af255de9de1491f(&var_178, rax_20, rdx_12, &var_288);
                    int64_t* var_278_2 = var_168;
                    var_288 = var_178;
                }
            }
            
            var_228 = 0;
            var_2d8 = -0x8000000000000000;
            uu_ls::PathData::new::h2697718e531487bc(&var_178, &var_288, &var_228, &var_2d8, 
                *(arg3 + 0xf3), *(arg3 + 0xfa), arg3, 0);
            
            if (uu_ls::PathData::get_metadata::h14c40f15e3077b4f(arg2, arg7))
                goto label_59ecb7;
            
            int64_t var_158;
            int64_t var_150;
            char var_50;
            uu_ls::get_metadata_with_deref_opt::h6fbf7688ce069f5f(&var_228, var_158, var_150, 
                var_50);
            
            if (var_228 != 2)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h4d6173845b848954(&var_228);
                label_59ecb7:
                uucore::features::quoting_style::escape_name::h942044e1943bd5af(&var_228, rsi_21, 
                    var_230, arg3 + 0xfc);
                uu_ls::colors::color_name::hafb991a3ed925fc5(&var_2d8, &var_228, arg2, var_290, 
                    arg7, &var_178, 
                    uu_ls::display_item_name::_$u7b$$u7b$closure$u7d$$u7d$::h25fbdfd9e7387c2f(arg3, 
                        arg8, var_2e8));
                std::ffi::os_str::OsString::push::h7ae4c515aa982082(&var_2f8, &var_2d8);
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h4d6173845b848954(&var_228);
                *(arg2 + 0x28);
                std::fs::read_link::h8fc09be18a8db6e8(&var_228, *(arg2 + 0x20));
                core::result::Result$LT$T$C$E$GT$::unwrap::h2ec348307e7b0fa4(&var_2d8, &var_228);
                std::ffi::os_str::OsString::push::h94a704c4a50176c7(&var_2f8, &var_2d8);
            }
            
            core::ptr::drop_in_place$LT$uu_ls..PathData$GT$::h76a87c73f87c0bb8(&var_178);
        }
        else
        {
            uucore::features::quoting_style::escape_name::h942044e1943bd5af(&var_178, *var_2b8[8], 
                var_230, arg3 + 0xfc);
            std::ffi::os_str::OsString::push::h7ae4c515aa982082(&var_2f8, &var_178);
        }
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h2dce88b0c646837f(&var_2b8);
        
        if (*(arg3 + 0xf3))
            goto label_59e946;
    }
    else
    {
        int64_t var_238;
        int64_t var_248_1 = var_238;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h523154303afc7abc(&var_178, *(arg2 + 0x20), *(arg2 + 0x28));
        int64_t* var_210_1 = var_168;
        var_228 = var_178;
        int64_t var_208_1 = var_238;
        char var_200_1 = 0;
        var_228 = -0x7ffffffffffffffe;
        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
        int64_t rax_14;
        int64_t rdx_8;
        rax_14 = uucore::util_name::h074417a1e6395129();
        var_2b8 = rax_14;
        *var_2b8[8] = rdx_8;
        var_2d8 = &var_2b8;
        int64_t (* var_2d0_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
        int128_t* var_2c8_1 = &var_228;
        uint64_t (* var_2c0_1)(void* arg1, int64_t* arg2) =
            _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::hdc9e99969c77fead;
        var_178 = &data_686b10;
        *var_178[8] = 3;
        int64_t var_158_1 = 0;
        int32_t* var_168_1 = &var_2d8;
        int64_t var_160_1 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_178);
        core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::h1c73d4e6f6d6872e(&var_228);
        label_59e938:
        
        if (*(arg3 + 0xf3))
        {
            label_59e946:
            
            if (arg4 & 1)
            {
                if (rbx_3 != 4)
                    uu_ls::pad_left::h9cc9c358e56c676a(&var_228, *(arg2 + 0x38), *(arg2 + 0x40), 
                        arg5);
                else
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_228, arg2 + 0x30);
                
                int64_t r12_1 = var_2f8;
                int64_t* rbx_4 = var_2e8;
                var_2d8 = &var_228;
                int64_t (* var_2d0_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_178 = &data_686678;
                *var_178[8] = 2;
                int64_t var_158_2 = 0;
                int32_t* var_168_2 = &var_2d8;
                int64_t var_160_2 = 1;
                int128_t var_48;
                core::option::Option$LT$T$GT$::map_or_else::h69a0b1154707aabf(&var_48, &var_178);
                var_2f8 = var_48;
                int64_t* var_38;
                var_2e8 = var_38;
                var_178 = r12_1;
                *var_178[8] = var_2f0;
                int64_t* var_168_3 = rbx_4;
                std::ffi::os_str::OsString::push::h7ae4c515aa982082(&var_2f8, &var_178);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_228);
            }
        }
    }
    arg1[1] = var_2e8;
    *arg1 = var_2f8;
    int64_t result = core::ptr::drop_in_place$LT$core..cell..lazy..LazyCell$LT$usize$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnOnce$LT$$LP$$RP$$GT$$u2b$Output$u20$$u3d$$u20$usize$GT$$GT$$GT$::h4c6a460533912afd(arg8);
    
    if (!var_2fc_2)
        return result;
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(arg6);
}
