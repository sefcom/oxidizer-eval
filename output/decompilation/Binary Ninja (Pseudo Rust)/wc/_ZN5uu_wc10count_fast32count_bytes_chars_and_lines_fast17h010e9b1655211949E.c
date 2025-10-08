
  fn uu_wc::count_fast::count_bytes_chars_and_lines_fast::h010e9b1655211949(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let var_1030: i64 = 0;
    let var_2030: i64 = 0;
    let var_3030: i64 = 0;
    let mut var_4030: i64 = 0;
    let mut rbx: i64 = 0;
    memset(&var_4030, 0, 0x4000);
    let mut var_4040: i64 = 0;
    let mut result: *mut i64;
    
    loop
    {
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 =
            _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read::ha94ed9861f25a8f0(
            arg2, &var_4030, 0x4000);
        
        if (rax_1 & 1) == 0
        {
            if rdx_1 == 0
            {
                result = arg1;
                *result = 0;
                result[1] = rbx;
                result[2] = var_4040;
                __builtin_memset(&result[3], 0, 0x18);
                break;
            }
            
            let mut rax_3: *mut i8;
            let mut rdx_3: *mut c_void;
            rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h7028662c39c50e0f(0, rdx_1, &var_4030, 0x4000);
            let rax_4: i64 = bytecount::num_chars::hb6a8e991551eb7ac(rax_3, rdx_3);
            let mut rax_5: *mut i64;
            let mut rdx_5: *mut c_void;
            rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h7028662c39c50e0f(0, rdx_1, &var_4030, 0x4000);
            rbx += rax_4;
            var_4040 += bytecount::count::ha8ef7b6513bc7b05(rax_5, rdx_5, 0xa);
        }
        else
        {
            if std::io::error::Error::kind::h135fe00c4e7365f3(rdx_1) != 0x23
            {
                result = arg1;
                *result = 0;
                result[1] = rbx;
                result[2] = var_4040;
                *result.byte_offset(0x18) = {0};
                result[5] = rdx_1;
                break;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h06d3f45961b15e39(rax_1, rdx_1);
        }
    }
    
    result
}
