
  fn just::function::sha256_file::hb1a94a1611e16d13(arg1: *mut i64, arg2: *mut i64, arg3: i64) -> *mut i64

{
    let rax: *mut c_void = *arg2;
    let mut var_158: *const i8;
    just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(&var_158, 
        *rax.byte_offset(0x10), *rax.byte_offset(0x18));
    let mut var_170: ();
    let var_150: i64;
    let mut var_148: u64;
    std::path::Path::join::h1eac0ae5e7efa361(&var_170, var_150, var_148, arg3);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_158);
    let mut var_98: i128;
    _$LT$digest..core_api..wrapper..CoreWrapper$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::h9a28c815d5f91f76(&var_98);
    let mut var_d0: i32;
    std::fs::File::open::h45fcbefa67649d55(&var_d0, &var_170);
    let var_168: i64;
    let var_160: u64;
    
    if var_d0 != 1
    {
        let fd_1: i32;
        let mut fd: i32 = fd_1;
        let mut rax_3: i8;
        let mut rdx_5: i64;
        rax_3 = std::io::copy::generic_copy::h24f40be1ad75b38b(&fd, &var_98);
        
        if (rax_3 & 1) == 0
        {
            let var_38: i128;
            let var_f8_1: i128 = var_38;
            let var_48: i128;
            let var_108_1: i128 = var_48;
            let var_58: i128;
            let var_118_1: i128 = var_58;
            let var_68: i128;
            let var_128_1: i128 = var_68;
            let var_78: i128;
            let mut var_138_1: i128 = var_78;
            let var_88: i128;
            var_148 = var_88;
            var_158 = var_98;
            let rdx_7: u64 =
                digest::FixedOutput::finalize_fixed::hb4d87fe511f17e43(&var_d0, &var_158);
            let mut var_e0: *mut i32 = &var_d0;
            let var_d8_1: fn(arg1: i64, arg2: *mut i64) -> i64 = generic_array::hex::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$generic_array..GenericArray$LT$u8$C$T$GT$$GT$::fmt::hce58fbd6baa0c32b;
            var_158 = &data_465db0;
            let var_150_1: i64 = 1;
            var_138_1 = 0;
            let var_148_1: *mut *mut i32 = &var_e0;
            let var_140_1: i64 = 1;
            let mut var_b0: i128;
            core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_b0, 0, rdx_7, 
                &var_158);
            let var_a0: i64;
            arg1[3] = var_a0;
            *arg1.byte_offset(8) = var_b0;
            *arg1 = 0;
        }
        else
        {
            just::function::sha256_file::_$u7b$$u7b$closure$u7d$$u7d$::h450eee988ec28aa6(&var_158, 
                var_168, var_160, rdx_5);
            *arg1.byte_offset(8) = var_158;
            arg1[3] = var_148;
            *arg1 = 1;
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h58ff0428143f7132(fd);
    }
    else
    {
        let var_c8: i64;
        just::function::sha256_file::_$u7b$$u7b$closure$u7d$$u7d$::h43210169c1a0a0a3(&var_158, 
            var_168, var_160, var_c8);
        let rax_1: *const i8 = var_158;
        *arg1.byte_offset(0x1c) = *var_148[4];
        *arg1.byte_offset(0x14) = var_150;
        arg1[1] = rax_1;
        arg1[2] = var_150;
        *arg1 = 1;
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_170);
    arg1
}
