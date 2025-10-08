
  fn uu_date::parse_date::h2d85aa8f4d63ce67(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let r15: i64 = arg2[1];
    let r12: i64 = arg2[2];
    let mut var_68: i64;
    parse_datetime::parse_datetime::hb5f5dc534e334c2f(&var_68, 
        _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$str$GT$$GT$::as_ref::h0a9eb36fc0b98c5f(r15));
    
    if var_68 != -0x7ffffffffffffffe
    {
        let mut var_50: i128;
        uu_date::parse_date::_$u7b$$u7b$closure$u7d$$u7d$::h9ac90a1b49ad5773(&var_50, r15, r12, 
            &var_68);
        let zmm0_1: i128 = var_50;
        let var_30: i128;
        *arg1.byte_offset(0x20) = var_30;
        let var_40: i128;
        *arg1.byte_offset(0x10) = var_40;
        *arg1 = zmm0_1;
    }
    else
    {
        let var_60: i128;
        *arg1.byte_offset(8) = var_60;
        *arg1 = -0x8000000000000000;
    }
    
    /* tailcall */
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hca9b678a5ae7a7e7(arg2)
}
