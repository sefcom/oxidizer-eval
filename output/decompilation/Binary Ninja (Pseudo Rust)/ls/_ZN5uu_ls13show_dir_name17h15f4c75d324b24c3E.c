
  fn uu_ls::show_dir_name::h15f4c75d324b24c3(arg1: *mut c_void, arg2: i64, arg3: *mut c_void) -> i64

{
    let mut var_68: i128;
    uucore::features::quoting_style::escape_dir_name::he3befbde869a184b(&var_68, 
        *arg1.byte_offset(0x20), *arg1.byte_offset(0x28), arg3.byte_offset(0xf5));
    let mut rbp: i64;
    rbp = *arg3.byte_offset(0xee) == 0;
    rbp &= *arg3.byte_offset(0xef) != 0;
    let mut rdi_5: *mut i128;
    let mut var_98: *mut i128;
    let mut var_88: i128;
    let var_58: i64;
    let mut var_50: *mut c_void;
    
    if rbp == 0
    {
        let var_78_1: i64 = var_58;
        var_88 = var_68;
        var_98 = &var_88;
        let var_90_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_50 = &data_612550;
        let var_48_1: i64 = 2;
        let var_30_1: i64 = 0;
        let var_40_1: *mut *mut i128 = &var_98;
        let var_38_1: i64 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h007ed8789c93c2ab(
            std::io::Write::write_fmt::h51abc44b465d2e67(arg2, &var_50));
        rdi_5 = &var_88;
    }
    else
    {
        uu_ls::create_hyperlink::h72b30fed8b305b42(&var_88, *var_68[8], var_58, arg1);
        var_98 = &var_88;
        let var_90: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_50 = &data_612550;
        let var_48: i64 = 2;
        let var_30: i64 = 0;
        let var_40: *mut *mut i128 = &var_98;
        let var_38: i64 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h007ed8789c93c2ab(
            std::io::Write::write_fmt::h51abc44b465d2e67(arg2, &var_50));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_88);
        rdi_5 = &var_68;
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(rdi_5)
}
