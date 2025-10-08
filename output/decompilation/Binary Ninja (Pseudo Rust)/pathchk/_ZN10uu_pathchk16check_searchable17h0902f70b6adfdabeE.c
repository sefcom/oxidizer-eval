
  fn uu_pathchk::check_searchable::h0902f70b6adfdabe(arg1: i64) -> u64

{
    let mut var_c0: i32;
    std::fs::symlink_metadata::h5a680290b0bc4f9b(&var_c0, arg1);
    let mut rbx: i64;
    rbx = 1;
    
    if var_c0 == 2
    {
        let var_b8: i64;
        let mut r14_1: i64 = var_b8;
        let mut var_110: i64 = r14_1;
        let rax_1: i8 = std::io::error::Error::kind::h135fe00c4e7365f3(r14_1);
        rbx = rax_1 == 0;
        
        if rax_1 != 0
        {
            let mut var_108: *mut c_void = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            let mut var_100: *mut i64 = &var_110;
            let var_f8_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            let mut var_f0: *mut c_void = &data_4deae8;
            let var_e8_1: i64 = 2;
            let var_d0_1: i64 = 0;
            let var_e0_1: *mut *mut i64 = &var_100;
            let var_d8_1: i64 = 1;
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(
                &var_108, &var_f0));
            r14_1 = var_110;
        }
        
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3c82bf2075f98b13(r14_1);
    }
    
    rbx
}
