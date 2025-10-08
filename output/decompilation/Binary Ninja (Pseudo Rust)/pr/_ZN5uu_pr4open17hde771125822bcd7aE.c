
  fn uu_pr::open::hde771125822bcd7a(arg1: *mut i64, arg2: i64, arg3: u64) -> u64

{
    let mut result: u64;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h15fe555904e25436(arg2, arg3, "-cannot specify number of column…", 1) == 0
    {
        let mut var_c8: i32;
        std::fs::metadata::h17f73c8d2a6d1ec6(&var_c8, arg2);
        let var_c0: i64;
        
        if var_c8 == 2
        {
            /* tailcall */
            return uu_pr::open::_$u7b$$u7b$closure$u7d$$u7d$::h7683165c4528a574(arg1, arg2, arg3, 
                var_c0);
        }
        let mut var_e8: i128;
        let var_90: i32;
        result = uu_pr::open::_$u7b$$u7b$closure$u7d$$u7d$::h1b10105b0f52e18c(&var_e8, arg2, arg3, 
            var_90);
        let zmm0_2: i128 = var_e8;
        let var_d8: i128;
        *arg1.byte_offset(0x10) = var_d8;
        *arg1 = zmm0_2;
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        result = alloc::boxed::Box$LT$T$GT$::new::h11ea097a94fc15a0(
            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
        arg1[1] = result;
        arg1[2] = &data_6693b8;
        *arg1 = -0x7ffffffffffffffb;
    }
    
    result
}
