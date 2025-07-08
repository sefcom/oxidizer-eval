
  int64_t uu_ls::get_security_context::h71225af2e5fdb4dd(int128_t* arg1, int64_t arg2, size_t arg3, int32_t arg4)

{
    int128_t var_188;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&var_188, 
        "? ,\n,   \t?????????+bd-cannot a…", 1);
    
    if (arg4)
    {
        int32_t var_d8;
        uu_ls::get_metadata_with_deref_opt::h471baa3ff4b7ae17(&var_d8, arg2, arg3, 1);
        
        if (var_d8 == 2)
        {
            int64_t* var_d0;
            int64_t* var_170 = var_d0;
            int128_t var_150;
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_150, arg2, 
                arg3);
            int64_t* var_108_1 = var_d0;
            int128_t var_100_1 = var_150;
            int64_t var_140;
            int64_t var_f0_1 = var_140;
            int16_t var_110 = 2;
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
            int64_t rax_2;
            int64_t rdx_2;
            rax_2 = uucore::util_name::h60d842bf27b05e82();
            int64_t var_120 = rax_2;
            int64_t var_118_1 = rdx_2;
            var_170 = &var_120;
            int64_t (* var_168_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
            int16_t* var_160_1 = &var_110;
            uint64_t (* var_158_1)(char* arg1, void* arg2) =
                _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
            var_150 = &data_612588;
            *var_150[8] = 3;
            int64_t var_130_1 = 0;
            int64_t** var_140_1 = &var_170;
            int64_t var_138_1 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_150);
            core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(&var_110);
        }
    }
    
    int64_t result;
    arg1[1] = result;
    *arg1 = var_188;
    return result;
}
