
  fn uu_dircolors::generate_dircolors_config::hf75f23ebe3da3611(arg1: *mut i128) -> *mut i128

{
    let mut var_f0: i64 = 0;
    let var_e8: i64 = 1;
    let var_e0: i64 = 0;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, 
        "# Configuration file for dircolo…", 0x1e4);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, 
        "COLORTERM ?*\n# Below are the co…", 0xd);
    let mut var_108: *mut *mut [i8; 0xad] =
        &anon.84df56382e2e566cd8a063a5d0153d3b.47.llvm.4004663911042702431;
    let var_100: *mut *mut c_void =
        &anon.84df56382e2e566cd8a063a5d0153d3b.97.llvm.4004663911042702431;
    let mut i_3: i64;
    let mut var_d8: *mut *mut [i8; 0xf2];
    let mut var_a0: *mut i64;
    
    for let mut i: i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc9446a1cf5340f63(&var_108); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc9446a1cf5340f63(&var_108)
    {
        i_3 = i;
        var_a0 = &i_3;
        let var_98_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h58765c92fea73f10;
        var_d8 = &data_527238;
        let var_d0_1: i64 = 2;
        let var_b8_1: i64 = 0;
        let var_c8_1: *mut *mut i64 = &var_a0;
        let var_c0_1: i64 = 1;
        let mut var_78: i128;
        core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918(&var_78, &var_d8);
        var_d8 = var_78;
        let var_68: i64;
        let var_c8_2: i64 = var_68;
        let mut rax: i64;
        let mut rdx_1: u64;
        rax = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(var_d0_1, 
            var_68 + var_d0_1);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, rax, rdx_1);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&var_d8);
    }
    
    let mut rax_1: i64;
    let mut rdx_2: u64;
    rax_1 = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(
        "# Below are the color init strin…", "TERM # List any file extensions …");
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, rax_1, rdx_2);
    var_108 = &anon.84df56382e2e566cd8a063a5d0153d3b.97.llvm.4004663911042702431;
    let var_100_1: *mut *mut [i8; 0x18] =
        &anon.84df56382e2e566cd8a063a5d0153d3b.231.llvm.4004663911042702431;
    let mut i_4: i64;
    
    for let mut i_1: i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h65b3907fb5e0e3d7(&var_108); i_1 != 0; i_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h65b3907fb5e0e3d7(&var_108)
    {
        i_4 = i_1;
        i_3 = i_1 + 0x20;
        var_a0 = &i_4;
        let var_98_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h58765c92fea73f10;
        let var_90_1: *mut i64 = &i_3;
        let var_88_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h58765c92fea73f10;
        var_d8 = &data_527258;
        let var_d0_2: i64 = 3;
        let var_b8_2: i64 = 0;
        let var_c8_3: *mut *mut i64 = &var_a0;
        let var_c0_2: i64 = 2;
        let mut var_60: i128;
        core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918(&var_60, &var_d8);
        var_d8 = var_60;
        let var_50: i64;
        let var_c8_4: i64 = var_50;
        let mut rax_3: i64;
        let mut rdx_3: u64;
        rax_3 = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(var_d0_2, 
            var_50 + var_d0_2);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, rax_3, rdx_3);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&var_d8);
    }
    
    let mut rax_4: i64;
    let mut rdx_4: u64;
    rax_4 = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(
        "# List any file extensions like …", " # to color below. Put the exten…");
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, rax_4, rdx_4);
    let mut rax_5: i64;
    let mut rdx_5: u64;
    rax_5 = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(
        "# to color below. Put the extens…", "# Subsequent TERM or COLORTERM e…");
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, rax_5, rdx_5);
    var_108 = &anon.84df56382e2e566cd8a063a5d0153d3b.231.llvm.4004663911042702431;
    let var_100_2: *mut *mut [i8; 0xa7] = &data_5291b8;
    
    for let mut i_2: i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&var_108); i_2 != 0; i_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&var_108)
    {
        i_4 = i_2;
        i_3 = i_2 + 0x10;
        var_a0 = &i_4;
        let var_98_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h58765c92fea73f10;
        let var_90_2: *mut i64 = &i_3;
        let var_88_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h58765c92fea73f10;
        var_d8 = &data_527258;
        let var_d0_3: i64 = 3;
        let var_b8_3: i64 = 0;
        let var_c8_5: *mut *mut i64 = &var_a0;
        let var_c0_3: i64 = 2;
        let mut var_48: i128;
        core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918(&var_48, &var_d8);
        var_d8 = var_48;
        let var_38: i64;
        let var_c8_6: i64 = var_38;
        let mut rax_7: i64;
        let mut rdx_6: u64;
        rax_7 = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(var_d0_3, 
            var_38 + var_d0_3);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, rax_7, rdx_6);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&var_d8);
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, 
        "# Subsequent TERM or COLORTERM e…", 0x46);
    let mut rax_8: i64;
    let mut rdx_7: u64;
    rax_8 = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(
        "# config specific to those match…", &jump_table_423aa4);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, rax_8, rdx_7);
    arg1[1] = var_e0;
    *arg1 = var_f0;
    arg1
}
