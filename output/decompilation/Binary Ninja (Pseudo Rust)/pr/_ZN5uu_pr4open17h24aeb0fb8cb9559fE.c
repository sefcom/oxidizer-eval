
  fn uu_pr::open::h24aeb0fb8cb9559f(arg1: *mut i64, arg2: i64, arg3: u64) -> *mut i64

{
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbb47e2b296de4d69(arg2, arg3, "-cannot specify number of column…", 1) == 0
    {
        let mut var_c8: i32;
        std::fs::metadata::hd60c15ad96e2cad2(&var_c8, arg2);
        let var_c0: i64;
        
        if var_c8 != 2
        {
            let mut var_e8: i128;
            let var_90: i32;
            uu_pr::open::_$u7b$$u7b$closure$u7d$$u7d$::h1ec6c60c8fa19c78(&var_e8, arg2, arg3, 
                var_90);
            let zmm0_1: i128 = var_e8;
            let var_d8: i128;
            *arg1.byte_offset(0x10) = var_d8;
            *arg1 = zmm0_1;
        }
        else
        {
            uu_pr::open::_$u7b$$u7b$closure$u7d$$u7d$::ha6d2afc95f3a7e84(arg1, arg2, arg3, var_c0);
        }
    }
    else
    {
        std::io::stdio::stdin::h7215cc131abb55d8();
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h312f2a9b49c8c6a7(
            &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
        arg1[2] = &data_709430;
        *arg1 = -0x7ffffffffffffffb;
    }
    
    arg1
}
