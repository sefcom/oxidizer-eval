
  fn uu_sort::Output::new::h911849d79fe47e41(arg1: *mut i64, arg2: i64, arg3: u64, arg4: u64 @ rbp) -> *mut i64

{
    let var_8: u64 = arg4;
    let mut r12: i64 = -0x8000000000000000;
    
    if arg2 == 0
    {
        goto 'label_4d041f;
    }
    
    let mut var_d8: i64 = 0x1b600000000;
    let mut var_d0_1: i32 = 0;
    let mut var_cc_1: i16 = 0;
    *var_d0_1[1] = 1;
    var_cc_1 = 1;
    let mut var_c8: i32;
    std::fs::OpenOptions::open::h0d3ef205fa11a490(&var_c8, &var_d8, arg2);
    let mut var_b8: i64;
    let mut var_b0: i128;
    
    if var_c8 != 1
    {
        let var_c4: i32;
        arg4 = var_c4;
        let var_dc_1: i32 = arg4;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(&var_b8, arg2, arg3);
        r12 = var_b8;
        let var_78: i128 = var_b0;
        'label_4d041f:
        *arg1 = r12;
        *arg1.byte_offset(8) = var_78;
        arg1[3] = arg4;
    }
    else
    {
        let var_c0: i64;
        let mut var_68: i64;
        uu_sort::Output::new::_$u7b$$u7b$closure$u7d$$u7d$::ha523fa15eec4008d(&var_68, arg2, arg3, 
            var_c0);
        let var_2c: i32;
        let var_7c_1: i32 = var_2c;
        let var_3c: i128;
        let var_8c_1: i128 = var_3c;
        let var_4c: i128;
        let var_9c_1: i128 = var_4c;
        let var_5c: i128;
        var_b0 = var_5c;
        var_b8 = var_68;
        let var_60: i32;
        var_b0 = var_60;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h4da5af3d8a2f6642(&var_b8);
        arg1[2] = &data_58c448;
        *arg1 = -0x7fffffffffffffff;
    }
    arg1
}
