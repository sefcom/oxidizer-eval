
  uint64_t uu_stat::Stater::do_stat::he2e3ae60926a8076(void* arg1, int64_t arg2, uint64_t arg3, char arg4)

{
    void var_f8;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_f8, arg2, arg3);
    int64_t var_f0;
    uint64_t var_e8;
    int32_t rbx_1;
    int128_t var_228;
    int64_t var_218_1;
    int64_t* var_208;
    int128_t var_1a8;
    int64_t var_198;
    void* const var_e0;
    
    if (!alloc::string::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$alloc..borrow..Cow$LT$str$GT$$GT$::eq::hd1cc9c84389cf4ad(var_f0, var_e8))
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_1a8, arg2, arg3);
        var_218_1 = var_198;
        var_228 = var_1a8;
        int64_t** var_1e8;
        int128_t var_1c8;
        
        if (!(*(arg1 + 0x61) & 1))
        {
            label_47720c:
            char rax_6;
            
            if (!*(arg1 + 0x60) && arg4)
                rax_6 = alloc::string::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$alloc..borrow..Cow$LT$str$GT$$GT$::eq::hd1cc9c84389cf4ad(var_f0, var_e8);
            
            if (*(arg1 + 0x60) || (arg4 && rax_6))
                std::fs::metadata::h072f4c1a892eb28c(&var_e0, &var_228);
            else
                std::fs::symlink_metadata::h2513065fab3b6eaa(&var_e0, &var_228);
            
            if (var_e0 != 2)
            {
                memcpy(&var_1a8, &var_e0, 0xb0);
                char rax_11 = *(arg1 + 0x62);
                int64_t rcx_2 = 0x30;
                int32_t var_170;
                
                if ((var_170 - 0x2000) & 0xb000)
                    rcx_2 = 0x18;
                
                if (rax_11)
                    rcx_2 = 0x18;
                
                int64_t* rsi_9 = *(arg1 + rcx_2 + 8);
                void* r12_3 = &rsi_9[*(arg1 + rcx_2 + 0x10) * 5];
                int32_t rdx_8;
                char rax_12;
                
                do
                {
                    int64_t* r13_2 = &rsi_9[5];
                    
                    if (rsi_9 == r12_3)
                        r13_2 = rsi_9;
                    
                    if (rsi_9 == r12_3)
                        goto label_477466;
                    
                    rax_12 = uu_stat::Stater::process_token_files::hdd01ebca8999d86b(arg1, rsi_9, 
                        &var_1a8, var_f0, var_e8, &var_228, var_170, rax_11);
                    rsi_9 = r13_2;
                } while (!(rax_12 & 1));
                rbx_1 = rdx_8;
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc59876b3a9eab6e0(
                    var_228, *var_228[8]);
            }
            else
            {
                int64_t var_d8;
                var_1c8 = var_d8;
                int64_t* rax_8;
                int64_t rdx_5;
                rax_8 = uucore::util_name::h074417a1e6395129();
                var_208 = rax_8;
                int64_t var_200_4 = rdx_5;
                var_1e8 = &var_208;
                int64_t (* var_1e0_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
                var_1a8 = &data_519c28;
                *var_1a8[8] = 2;
                int64_t var_188_2 = 0;
                int64_t*** var_198_3 = &var_1e8;
                int64_t var_190_2 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_1a8);
                var_208 = nullptr;
                int64_t var_200_5 = var_f0;
                uint64_t var_1f8_2 = var_e8;
                char var_1f0_2 = 1;
                var_1e8 = &var_208;
                int64_t (* var_1e0_4)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                int128_t* var_1d8_2 = &var_1c8;
                int64_t (* var_1d0_2)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                var_1a8 = &data_51a010;
                *var_1a8[8] = 3;
                int64_t var_188_3 = 0;
                int64_t*** var_198_4 = &var_1e8;
                int64_t var_190_3 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_1a8);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h436c7c335a4a9568(&var_1c8);
                rbx_1 = 1;
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc59876b3a9eab6e0(
                    var_228, *var_228[8]);
            }
        }
        else
        {
            label_47705f:
            uucore::features::fsext::statfs::h5579f27baf6b5c75(&var_1a8, *var_228[8]);
            
            if (var_1a8 != 1)
            {
                int64_t* rdi_19 = *(arg1 + 0x20);
                int64_t i = *(arg1 + 0x28) * 0x28;
                
                while (i)
                {
                    i -= 0x28;
                    uu_stat::process_token_filesystem::h67597bda6d6ea400(rdi_19, &*var_1a8[8], 
                        var_f0, var_e8);
                    rdi_19 = &rdi_19[5];
                }
                
                label_477466:
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc59876b3a9eab6e0(
                    var_228, *var_228[8]);
                rbx_1 = 0;
            }
            else
            {
                int64_t var_190;
                int64_t var_1b8_1 = var_190;
                var_1c8 = var_1a8;
                int64_t* rax_4;
                int64_t rdx_3;
                rax_4 = uucore::util_name::h074417a1e6395129();
                var_208 = rax_4;
                int64_t var_200_2 = rdx_3;
                var_1e8 = &var_208;
                int64_t (* var_1e0_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
                var_e0 = &data_519c28;
                int64_t var_d8_2 = 2;
                int64_t var_c0_1 = 0;
                int64_t*** var_d0_1 = &var_1e8;
                int64_t var_c8_1 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                var_208 = nullptr;
                int64_t var_200_3 = var_f0;
                uint64_t var_1f8_1 = var_e8;
                char var_1f0_1 = 1;
                var_1e8 = &var_208;
                int64_t (* var_1e0_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                int128_t* var_1d8_1 = &var_1c8;
                int64_t (* var_1d0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_e0 = &data_519fe0;
                int64_t var_d8_3 = 3;
                int64_t var_c0_2 = 0;
                int64_t*** var_d0_2 = &var_1e8;
                int64_t var_c8_2 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_1c8);
                rbx_1 = 1;
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc59876b3a9eab6e0(
                    var_228, *var_228[8]);
            }
        }
    }
    else
    {
        char r12_1 = *(arg1 + 0x61);
        
        if (!r12_1)
        {
            std::fs::canonicalize::h666f0a788dd30df7(&var_1a8, "/dev/stdinunsupported for this o…");
            
            if (0 + -(var_1a8))
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h2e8638ca9d3a432a(&var_1a8);
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_1a8, "/dev/stdinunsupported for this o…", 0xa);
            }
            
            var_218_1 = var_198;
            var_228 = var_1a8;
            
            if (r12_1 & 1)
                goto label_47705f;
            
            goto label_47720c;
        }
        
        void* rax_1;
        int64_t rdx;
        rax_1 = uucore::util_name::h074417a1e6395129();
        var_e0 = rax_1;
        int64_t var_d8_1 = rdx;
        var_208 = &var_e0;
        int64_t (* var_200_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        var_1a8 = &data_519c28;
        *var_1a8[8] = 2;
        int64_t var_188_1 = 0;
        int64_t** var_198_1 = &var_208;
        int64_t var_190_1 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_1a8);
        var_1a8 = &data_519fd0;
        *var_1a8[8] = 1;
        int64_t var_198_2 = 8;
        var_190_1 = {0};
        std::io::stdio::_eprint::h57899770eacec2ad(&var_1a8);
        rbx_1 = 1;
    }
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha7af664bba1b7bff(&var_f8);
    return rbx_1;
}
