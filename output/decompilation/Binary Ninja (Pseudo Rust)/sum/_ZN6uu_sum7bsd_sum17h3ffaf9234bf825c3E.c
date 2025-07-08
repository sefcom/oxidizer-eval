
  fn uu_sum::bsd_sum::h3ffaf9234bf825c3(arg1: i64, arg2: *mut i64) -> i64

{
    let mut var_1030: i64 = 0;
    let mut r15: i32 = 0;
    memset(&var_1030, 0, 0x1000);
    let r14: i64 = arg2[3];
    let mut r13: i64 = 0;
    
    loop
    {
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 = r14(arg1, &var_1030, 0x1000);
        
        if rax_1 != 0 || rdx_1 == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h1f7ee64c99c66cf3(rax_1, rdx_1);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$::h5da1723ca861270e(arg1, arg2);
            return (r13 >> 0xa) + 1;
        }
        
        let mut rax_2: i64;
        let mut rdx_3: i64;
        rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h4f7c6d1d3194fc05(rdx_1, &var_1030);
        let mut var_1040: i64 = rax_2;
        let var_1038_1: i64 = rdx_3 + rax_2;
        
        loop
        {
            let rax_3: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h000bc77802a7698a(&var_1040);
            
            if rax_3 == 0
            {
                break;
            }
            
            r15 = r15.rotate_right(1);
            r15 += *rax_3;
        }
        
        r13 += rdx_1;
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h1f7ee64c99c66cf3(0, rdx_1);
    }
}
