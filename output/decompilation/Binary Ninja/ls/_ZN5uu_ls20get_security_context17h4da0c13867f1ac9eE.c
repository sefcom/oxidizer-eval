
  int64_t uu_ls::get_security_context::h4da0c13867f1ac9e(int128_t* arg1, int64_t arg2, uint64_t arg3, int32_t arg4)

{
    int128_t var_188;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_188, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1);
    
    if (arg4)
    {
        int32_t var_d8;
        uu_ls::get_metadata_with_deref_opt::h6fbf7688ce069f5f(&var_d8, arg2, arg3, 1);
        
        if (var_d8 == 2)
        {
            int64_t var_d0;
            int64_t var_170_1 = var_d0;
            int128_t var_168;
            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_168, arg2, 
                arg3);
            int64_t var_158;
            int64_t var_110_1 = var_158;
            int128_t var_120_1 = var_168;
            int64_t var_108_1 = var_d0;
            char var_100_1 = 0;
            int64_t var_128 = -0x7ffffffffffffffe;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            int64_t rax_2;
            int64_t rdx_2;
            rax_2 = uucore::util_name::h074417a1e6395129();
            int64_t var_138 = rax_2;
            int64_t var_130_1 = rdx_2;
            int64_t* var_f8 = &var_138;
            int64_t (* var_f0_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
            int64_t* var_e8_1 = &var_128;
            uint64_t (* var_e0_1)(void* arg1, int64_t* arg2) =
                _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::hdc9e99969c77fead;
            var_168 = &data_686b10;
            *var_168[8] = 3;
            int64_t var_148_1 = 0;
            int64_t** var_158_1 = &var_f8;
            int64_t var_150_1 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_168);
            core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::h1c73d4e6f6d6872e(&var_128);
        }
    }
    
    int64_t result;
    arg1[1] = result;
    *arg1 = var_188;
    return result;
}
