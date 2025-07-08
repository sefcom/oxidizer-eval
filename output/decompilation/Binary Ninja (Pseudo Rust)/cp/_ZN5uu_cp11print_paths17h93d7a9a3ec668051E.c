
  fn uu_cp::print_paths::h93d7a9a3ec668051(arg1: i32, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut i_1: *mut *mut i64;
    let mut var_e0: *mut c_void;
    let mut var_90: *mut i64;
    
    if arg1 != 0
    {
        let var_98_1: i64 = arg2;
        let var_a0_1: i64 = arg3;
        let var_a8_1: i64 = arg4;
        uu_cp::aligned_ancestors::h4cf131ef21f6aa74(&var_e0, arg2, arg3, arg4);
        let mut var_60: ();
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6511090ed0ef25d3(&var_60, &var_e0);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&i_1, &var_60);
        
        for let mut i: *mut *mut i64 = i_1; i != 0; i = i_1
        {
            let mut i_2: *mut *mut i64 = i;
            let var_f8: i64;
            let var_68_1: i64 = var_f8;
            let var_f0: i128;
            let mut var_40: i128 = var_f0;
            var_90 = &i_2;
            let var_88_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            let var_80_1: *mut i128 = &var_40;
            let var_78_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            var_e0 = &data_5b5f48;
            let var_d8_1: i64 = 3;
            let var_c0_1: i64 = 0;
            let var_d0_1: *mut *mut i64 = &var_90;
            let var_c8_1: i64 = 2;
            std::io::stdio::_print::he918bceb0c89db46(&var_e0);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&i_1, &var_60);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&var_60);
    }
    
    uu_cp::context_for::h98549e35fded8509(&var_90);
    i_1 = &var_90;
    let var_f8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    var_e0 = &data_5b5ce8;
    let var_d8_2: i64 = 2;
    let var_c0_2: i64 = 0;
    let var_d0_2: *mut *mut *mut i64 = &i_1;
    let var_c8_2: i64 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&var_e0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&var_90)
}
