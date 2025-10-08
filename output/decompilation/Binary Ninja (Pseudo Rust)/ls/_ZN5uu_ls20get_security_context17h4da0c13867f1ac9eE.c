
  fn uu_ls::get_security_context::h4da0c13867f1ac9e(arg1: *mut i128, arg2: i64, arg3: u64, arg4: i32) -> i64

{
    let mut var_188: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_188, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1);
    
    if arg4 != 0
    {
        let mut var_d8: i32;
        uu_ls::get_metadata_with_deref_opt::h6fbf7688ce069f5f(&var_d8, arg2, arg3, 1);
        
        if var_d8 == 2
        {
            let var_d0: i64;
            let var_170_1: i64 = var_d0;
            let mut var_168: i128;
            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_168, arg2, 
                arg3);
            let var_158: i64;
            let var_110_1: i64 = var_158;
            let var_120_1: i128 = var_168;
            let var_108_1: i64 = var_d0;
            let var_100_1: i8 = 0;
            let mut var_128: i64 = -0x7ffffffffffffffe;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            let mut rax_2: i64;
            let mut rdx_2: i64;
            rax_2 = uucore::util_name::h074417a1e6395129();
            let mut var_138: i64 = rax_2;
            let var_130_1: i64 = rdx_2;
            let mut var_f8: *mut i64 = &var_138;
            let var_f0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
            let var_e8_1: *mut i64 = &var_128;
            let var_e0_1: fn(arg1: *mut c_void, arg2: *mut i64) -> u64 =
                _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::hdc9e99969c77fead;
            var_168 = &data_686b10;
            *var_168[8] = 3;
            let var_148_1: i64 = 0;
            let var_158_1: *mut *mut i64 = &var_f8;
            let var_150_1: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_168);
            core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::h1c73d4e6f6d6872e(&var_128);
        }
    }
    
    let result: i64;
    arg1[1] = result;
    *arg1 = var_188;
    result
}
