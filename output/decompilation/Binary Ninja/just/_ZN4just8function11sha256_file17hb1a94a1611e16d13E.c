
  int64_t* just::function::sha256_file::hb1a94a1611e16d13(int64_t* arg1, int64_t* arg2, int64_t arg3)

{
    void* rax = *arg2;
    char const* const var_158;
    just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(&var_158, 
        *(rax + 0x10), *(rax + 0x18));
    void var_170;
    int64_t var_150;
    uint64_t var_148;
    std::path::Path::join::h1eac0ae5e7efa361(&var_170, var_150, var_148, arg3);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_158);
    int128_t var_98;
    _$LT$digest..core_api..wrapper..CoreWrapper$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::h9a28c815d5f91f76(&var_98);
    int32_t var_d0;
    std::fs::File::open::h45fcbefa67649d55(&var_d0, &var_170);
    int64_t var_168;
    uint64_t var_160;
    
    if (var_d0 != 1)
    {
        int32_t fd_1;
        int32_t fd = fd_1;
        char rax_3;
        int64_t rdx_5;
        rax_3 = std::io::copy::generic_copy::h24f40be1ad75b38b(&fd, &var_98);
        
        if (!(rax_3 & 1))
        {
            int128_t var_38;
            int128_t var_f8_1 = var_38;
            int128_t var_48;
            int128_t var_108_1 = var_48;
            int128_t var_58;
            int128_t var_118_1 = var_58;
            int128_t var_68;
            int128_t var_128_1 = var_68;
            int128_t var_78;
            int128_t var_138_1 = var_78;
            int128_t var_88;
            var_148 = var_88;
            var_158 = var_98;
            uint64_t rdx_7 =
                digest::FixedOutput::finalize_fixed::hb4d87fe511f17e43(&var_d0, &var_158);
            int32_t* var_e0 = &var_d0;
            int64_t (* var_d8_1)(int64_t arg1, int64_t* arg2) = generic_array::hex::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$generic_array..GenericArray$LT$u8$C$T$GT$$GT$::fmt::hce58fbd6baa0c32b;
            var_158 = &data_465db0;
            int64_t var_150_1 = 1;
            var_138_1 = 0;
            int32_t** var_148_1 = &var_e0;
            int64_t var_140_1 = 1;
            int128_t var_b0;
            core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_b0, 0, rdx_7, 
                &var_158);
            int64_t var_a0;
            arg1[3] = var_a0;
            *(arg1 + 8) = var_b0;
            *arg1 = 0;
        }
        else
        {
            just::function::sha256_file::_$u7b$$u7b$closure$u7d$$u7d$::h450eee988ec28aa6(&var_158, 
                var_168, var_160, rdx_5);
            *(arg1 + 8) = var_158;
            arg1[3] = var_148;
            *arg1 = 1;
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h58ff0428143f7132(fd);
    }
    else
    {
        int64_t var_c8;
        just::function::sha256_file::_$u7b$$u7b$closure$u7d$$u7d$::h43210169c1a0a0a3(&var_158, 
            var_168, var_160, var_c8);
        char const* const rax_1 = var_158;
        *(arg1 + 0x1c) = *var_148[4];
        *(arg1 + 0x14) = var_150;
        arg1[1] = rax_1;
        arg1[2] = var_150;
        *arg1 = 1;
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_170);
    return arg1;
}
