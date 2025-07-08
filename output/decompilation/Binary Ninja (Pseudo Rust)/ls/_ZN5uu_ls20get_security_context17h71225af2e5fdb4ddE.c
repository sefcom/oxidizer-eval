
  fn uu_ls::get_security_context::h71225af2e5fdb4dd(arg1: *mut i128, arg2: i64, arg3: size_t, arg4: i32) -> i64

{
    let mut var_188: i128;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&var_188, 
        "? ,\n,   \t?????????+bd-cannot a…", 1);
    
    if arg4 != 0
    {
        let mut var_d8: i32;
        uu_ls::get_metadata_with_deref_opt::h471baa3ff4b7ae17(&var_d8, arg2, arg3, 1);
        
        if var_d8 == 2
        {
            let var_d0: *mut i64;
            let mut var_170: *mut i64 = var_d0;
            let mut var_150: i128;
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_150, arg2, 
                arg3);
            let var_108_1: *mut i64 = var_d0;
            let var_100_1: i128 = var_150;
            let var_140: i64;
            let var_f0_1: i64 = var_140;
            let mut var_110: i16 = 2;
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
            let mut rax_2: i64;
            let mut rdx_2: i64;
            rax_2 = uucore::util_name::h60d842bf27b05e82();
            let mut var_120: i64 = rax_2;
            let var_118_1: i64 = rdx_2;
            var_170 = &var_120;
            let var_168_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
            let var_160_1: *mut i16 = &var_110;
            let var_158_1: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 =
                _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
            var_150 = &data_612588;
            *var_150[8] = 3;
            let var_130_1: i64 = 0;
            let var_140_1: *mut *mut i64 = &var_170;
            let var_138_1: i64 = 2;
            let mut rdx_3: i64;
            let mut rsi_2: i64;
            rdx_3 = std::io::stdio::_eprint::hcdfeec148c7134f7(&var_150);
            core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(&var_110, rsi_2, 
                rdx_3);
        }
    }
    
    let result: i64;
    arg1[1] = result;
    *arg1 = var_188;
    result
}
