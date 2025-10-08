
  int64_t** uu_shred::wipe_name::he9016127f4be3579(int128_t* arg1, int64_t arg2, uint64_t arg3, char arg4, char arg5)

{
    char* rax;
    int64_t rdx;
    rax = std::path::Path::file_name::h6d40d88bf3fb287a(arg2, arg3);
    
    if (!rax)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    char var_138;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_138, rax, rdx);
    
    if (var_138 & 1)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc7ad242b1d3efe8e(&var_138, arg2, arg3);
    int64_t** result_1;
    int64_t** result = result_1;
    int128_t var_1f8 = var_138;
    int64_t var_150 = 1;
    int64_t** result_4 = result_1;
    char var_140 = 0;
    char rax_2;
    int64_t rdx_2;
    rax_2 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next_back::h4ff96a92f286cfe4(&var_150);
    
    if (rax_2 & 1)
    {
        char rax_5;
        
        do
        {
            int128_t var_68;
            uu_shred::FilenameIter::new::hd6443cd1750eb6da(&var_68, rdx_2);
            int128_t var_58;
            int128_t var_168_1 = var_58;
            int128_t var_178 = var_68;
            
            while (true)
            {
                int64_t var_48;
                _$LT$uu_shred..FilenameIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7014cc2a98dde122(&var_48, &var_178);
                
                if (0 + -(var_48))
                    break;
                
                int64_t var_1d8;
                std::path::Path::with_file_name::h8d4e31eec5c8dbb1(&var_1d8, arg2, arg3, &var_48);
                int64_t var_1d0;
                std::fs::metadata::ha5a1382d2d84ac19(&var_138, var_1d0);
                int32_t r14_1 = var_138;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf505446dc2c0cf57(&var_138);
                
                if (r14_1 == 2)
                {
                    int64_t rax_6 = std::fs::rename::h627f7751548d14cb(&var_1f8, &var_1d8);
                    int64_t* var_218;
                    void* const var_1b8;
                    int64_t var_88;
                    
                    if (rax_6)
                    {
                        int64_t var_188 = rax_6;
                        void* rax_12;
                        int64_t rdx_8;
                        rax_12 = uucore::util_name::h074417a1e6395129();
                        var_1b8 = rax_12;
                        int64_t var_1b0_2 = rdx_8;
                        var_218 = &var_1b8;
                        int64_t (* var_210_2)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3641e459b5f3d84f;
                        var_138 = &data_4f9f98;
                        int64_t var_130_3 = 2;
                        int64_t var_118_3 = 0;
                        int64_t** var_128_1 = &var_218;
                        int64_t var_120_3 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_138);
                        int128_t zmm0_6 = var_1f8;
                        var_88 = 1;
                        int128_t var_80 = zmm0_6;
                        char var_70 = 0;
                        var_218 = 1;
                        var_210_2 = var_1d0;
                        char var_200_1 = 1;
                        var_138 = &var_88;
                        int64_t (* var_130_4)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        int64_t** var_128_2 = &var_218;
                        int64_t (* var_120_4)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        int64_t* var_118_4 = &var_188;
                        int64_t (* var_110)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                        var_1b8 = &data_4fa250;
                        int64_t var_1b0_3 = 4;
                        int64_t var_198 = 0;
                        char* var_1a8_1 = &var_138;
                        int64_t var_1a0_1 = 3;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_1b8);
                        std::process::exit::hcda678ff272dfed1(1);
                        /* no return */
                    }
                    
                    int64_t (* var_210)(int32_t* arg1, int64_t* arg2);
                    
                    if (arg4)
                    {
                        void* rax_7;
                        int64_t rdx_5;
                        rax_7 = uucore::util_name::h074417a1e6395129();
                        var_1b8 = rax_7;
                        int64_t var_1b0_1 = rdx_5;
                        var_218 = &var_1b8;
                        int64_t (* var_210_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3641e459b5f3d84f;
                        var_138 = &data_4f9f98;
                        int64_t var_130_1 = 2;
                        int64_t var_118_1 = 0;
                        int64_t** var_128 = &var_218;
                        int64_t var_120_1 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_138);
                        int128_t zmm0_4 = var_1f8;
                        var_1b8 = 1;
                        var_1b0_1 = zmm0_4;
                        int64_t var_1a0;
                        var_1a0 = 0;
                        var_88 = var_1d0;
                        var_218 = &var_1b8;
                        var_210 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        int64_t* var_208_1 = &var_88;
                        char var_200;
                        var_200 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                        var_138 = &data_4fa220;
                        int64_t var_130_2 = 3;
                        int64_t var_118_2 = 0;
                        result_1 = &var_218;
                        int64_t var_120_2 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_138);
                    }
                    
                    uint64_t result_2;
                    
                    if (arg5 == 3)
                    {
                        var_218 = 0x1b600000000;
                        *var_210[4] = 0;
                        var_210 = 0;
                        *var_210[1] = 1;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h3081668db5704993(&var_138, var_1d0, result_2);
                        int64_t** result_3 = result_1;
                        var_1b8 = var_138;
                        std::fs::OpenOptions::open::h4118912c5a12bddb(&var_138, &var_218, &var_1b8);
                        var_1b8 =
                            core::result::Result$LT$T$C$E$GT$::expect::h34b28eb743e6c5c9(&var_138);
                        core::result::Result$LT$T$C$E$GT$::expect::h240243edbda98b4a(
                            std::fs::File::sync_all::hd9ac1cd9a387b5e9(&var_1b8));
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h242f54cc5db43aa8(var_1b8);
                    }
                    
                    result_1 = result_2;
                    var_138 = var_1d8;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha28b79d3b0f8016b(var_1f8, 
                        *var_1f8[8]);
                    result = result_1;
                    var_1f8 = var_138;
                    break;
                }
                
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha28b79d3b0f8016b(var_1d8, 
                    var_1d0);
            }
            
            core::ptr::drop_in_place$LT$uu_shred..FilenameIter$GT$::h677fc060bd465f8f(var_178, 
                *var_178[8]);
            rax_5 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next_back::h4ff96a92f286cfe4(&var_150);
        } while (rax_5 & 1);
    }
    
    arg1[1] = result;
    *arg1 = var_1f8;
    return result;
}
