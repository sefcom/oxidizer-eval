
  fn uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h0a7ede5c0f7af91b(arg1: *mut i64, arg2: *mut c_void, arg3: u64) -> *mut i64

{
    let mut var_70: i64;
    _$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$uucore..features..parser..num_parser..ExtendedParser$GT$::extended_parse::hb787f774fac0045c(&var_70, arg2, arg3);
    let rax: i64 = var_70;
    let var_68: i64;
    let mut var_60: i64;
    let mut var_58: i128;
    let var_48: i64;
    let mut rsi: i64;
    let mut rdi_1: i64;
    
    if rax == -0x7ffffffffffffff7
    {
        rdi_1 = var_68;
        rsi = var_60;
        let mut rcx_1: i64 = 0;
        
        if rdi_1 < -0x7ffffffffffffffb
        {
            rcx_1 = rdi_1 - 0x7fffffffffffffff;
        }
        
        if TEST_BITQ(6, rcx_1)
        {
            arg1[6] = var_48;
            *arg1.byte_offset(0x20) = var_58;
            *arg1 = 1;
            arg1[1] = 0;
            arg1[2] = rdi_1;
            arg1[3] = rsi;
            arg1[7] = 0;
        }
        else
        {
            if TEST_BITQ(9, rcx_1)
            {
                goto 'label_471785;
            }
            
            arg1[1] = 1;
            *arg1 = 2;
            core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hb99107a2a8b00042(rdi_1, rsi);
        }
    }
    else if rax != -0x7ffffffffffffff8
    {
        arg1[1] = 0;
        *arg1 = 2;
        core::ptr::drop_in_place$LT$uucore..features..parser..num_parser..ExtendedParserError$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$$GT$::hb361ebd9deba089a(&var_70);
    }
    else
    {
        rdi_1 = var_68;
        rsi = var_60;
        'label_471785:
        let var_28_1: i64 = var_48;
        let var_38_1: i128 = var_58;
        var_70 = rdi_1;
        let var_68_1: i64 = rsi;
        var_60 = var_58;
        *var_58[8] = var_48;
        uu_seq::numberparse::compute_num_digits::h50b73e0ed5b48e8c(arg1, arg2, arg3, &var_70);
    }
    arg1
}
