
  fn uu_date::parse_date::h3e04b396edc04cd0(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let r15: i64 = arg2[1];
    let r12: i64 = arg2[2];
    let mut var_80: i64;
    parse_datetime::parse_datetime::h31f6ee9f0c9ea07f(&var_80, 
        _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$str$GT$$GT$::as_ref::h98391d7b071887d9(r15));
    
    if var_80 != -0x7ffffffffffffffe
    {
        let var_70: i64;
        let var_58_1: i64 = var_70;
        let mut var_68: i128 = var_80;
        let mut var_50: i128;
        uu_date::parse_date::_$u7b$$u7b$closure$u7d$$u7d$::h67e856eb4e5a9f91(&var_50, r15, r12, 
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
        let var_78: i128;
        *arg1.byte_offset(8) = var_78;
        *arg1 = -0x8000000000000000;
    }
    
    /* tailcall */
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46caac69925be4b1(arg2)
}
