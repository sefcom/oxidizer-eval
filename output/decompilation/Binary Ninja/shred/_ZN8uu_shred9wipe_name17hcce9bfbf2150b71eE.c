
  int64_t** uu_shred::wipe_name::hcce9bfbf2150b71e(int128_t* arg1, int64_t arg2, size_t arg3, char arg4, char arg5)

{
    char* rax;
    int64_t rdx;
    rax = std::path::Path::file_name::h79ecbb7850a9c7f3(arg2, arg3);
    
    if (!rax)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    void* const var_188;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_188, rax, rdx);
    
    if (var_188)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_188, arg2, arg3);
    int64_t** result_1;
    int64_t** result = result_1;
    int128_t var_208 = var_188;
    int64_t var_d8 = 1;
    int64_t** result_4 = result_1;
    char var_c8 = 0;
    int64_t rax_2;
    int64_t rdx_2;
    rax_2 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next_back::h81b9c6b41e365607(&var_d8);
    
    if (rax_2)
    {
        int64_t i;
        
        do
        {
            int128_t var_50;
            uu_shred::FilenameIter::new::h75c47570d6e41809(&var_50, rdx_2);
            int128_t var_40;
            int128_t var_78_1 = var_40;
            int128_t var_88 = var_50;
            
            while (true)
            {
                int64_t var_a0;
                _$LT$uu_shred..FilenameIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8e8e3d724658b94f(&var_a0, &var_88);
                
                if (var_a0 == -0x8000000000000000)
                    break;
                
                int64_t var_90;
                int64_t var_58_1 = var_90;
                int128_t var_68 = var_a0;
                int128_t var_1b0;
                std::path::Path::with_file_name::h6ad9755a55c53ad4(&var_1b0, arg2, arg3, &var_68);
                int64_t var_1a8;
                std::fs::metadata::h605f1ca78403f0bd(&var_188, var_1a8);
                
                if (var_188 == 2)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h057e93f1d1d682ca(&var_188);
                    int64_t rax_4 = std::fs::rename::he0e2ca4a2337599c(&var_208, &var_1b0);
                    int64_t* var_228;
                    void* const var_1e8;
                    int64_t var_c0;
                    
                    if (rax_4)
                    {
                        int64_t var_198 = rax_4;
                        void* rax_12;
                        int64_t rdx_7;
                        rax_12 = uucore::util_name::h60d842bf27b05e82();
                        var_1e8 = rax_12;
                        int64_t var_1e0_2 = rdx_7;
                        var_228 = &var_1e8;
                        int64_t (* var_220_2)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
                        var_188 = &data_538698;
                        int64_t var_180_3 = 2;
                        int64_t var_168_3 = 0;
                        int64_t** var_178_1 = &var_228;
                        int64_t var_170_3 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_188);
                        int128_t zmm0_7 = var_208;
                        var_c0 = 1;
                        int128_t var_b8 = zmm0_7;
                        char var_a8 = 0;
                        var_228 = 1;
                        var_220_2 = var_1a8;
                        char var_210_1 = 1;
                        var_188 = &var_c0;
                        int64_t (* var_180_4)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        int64_t** var_178_2 = &var_228;
                        int64_t (* var_170_4)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        int64_t* var_168_4 = &var_198;
                        int64_t (* var_160)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        var_1e8 = &data_538888;
                        int64_t var_1e0_3 = 4;
                        int64_t var_1c8 = 0;
                        void* const* var_1d8_1 = &var_188;
                        int64_t var_1d0_1 = 3;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1e8);
                        std::process::exit::hf8c1b9d00a2a86fd(1);
                        /* no return */
                    }
                    
                    int64_t (* var_220)(void* arg1, void* arg2);
                    
                    if (arg4)
                    {
                        void* rax_5;
                        int64_t rdx_5;
                        rax_5 = uucore::util_name::h60d842bf27b05e82();
                        var_1e8 = rax_5;
                        int64_t var_1e0_1 = rdx_5;
                        var_228 = &var_1e8;
                        int64_t (* var_220_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
                        var_188 = &data_538698;
                        int64_t var_180_1 = 2;
                        int64_t var_168_1 = 0;
                        int64_t** var_178 = &var_228;
                        int64_t var_170_1 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_188);
                        int128_t zmm0_4 = var_208;
                        var_1e8 = 1;
                        var_1e0_1 = zmm0_4;
                        int64_t var_1d0;
                        var_1d0 = 0;
                        var_c0 = var_1a8;
                        var_228 = &var_1e8;
                        var_220 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        int64_t* var_218_1 = &var_c0;
                        char var_210;
                        var_210 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        var_188 = &data_538858;
                        int64_t var_180_2 = 3;
                        int64_t var_168_2 = 0;
                        result_1 = &var_228;
                        int64_t var_170_2 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_188);
                    }
                    
                    if (arg5 == 3)
                    {
                        var_228 = 0x1b600000000;
                        *var_220[4] = 0;
                        var_220 = 0;
                        *var_220[1] = 1;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hd63d5d024cbc8ccc(&var_188, &var_1b0);
                        int64_t** result_2 = result_1;
                        var_1e8 = var_188;
                        std::fs::OpenOptions::open::h006d788eda6d20b4(&var_188, &var_228, &var_1e8);
                        var_1e8 =
                            core::result::Result$LT$T$C$E$GT$::expect::hbf7455566ffa5658(&var_188);
                        core::result::Result$LT$T$C$E$GT$::expect::hccf86eaae5770f98(
                            std::fs::File::sync_all::ha0e03da750e69f90(&var_1e8));
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h7f7a30b7b330e79b(var_1e8);
                    }
                    
                    int64_t** result_3;
                    result_1 = result_3;
                    var_188 = var_1b0;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha6413bedadae7a14(&var_208);
                    result = result_1;
                    var_208 = var_188;
                    break;
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h057e93f1d1d682ca(&var_188);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha6413bedadae7a14(&var_1b0);
            }
            
            core::ptr::drop_in_place$LT$uu_shred..FilenameIter$GT$::h234a690002371487(&var_88);
            i = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next_back::h81b9c6b41e365607(&var_d8);
        } while (i);
    }
    
    arg1[1] = result;
    *arg1 = var_208;
    return result;
}
