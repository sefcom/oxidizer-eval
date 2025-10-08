
  fn alacritty_terminal::term::Term$LT$T$GT$::bounds_to_string::h4abdcbf42c50785a(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i32, arg5: i64, arg6: i32) -> i64

{
    let rbx: u64;
    let var_30: u64 = rbx;
    let mut var_80: i64 = 0;
    let var_78: i64 = 1;
    let result: i64 = 0;
    let mut var_64: i32 = arg4;
    let var_60: i32 = arg6;
    let var_5c: i8 = 0;
    let mut rax: i8;
    let mut rdx: i32;
    rax = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::hb267890a26ead5dc(&var_64, rbx);
    let mut var_50: i32;
    let var_48: i128;
    let mut rbx_2: i64;
    let mut result_1: i64;
    
    if (rax & 1) == 0
    {
        rbx_2 = 1;
        result_1 = 0;
    }
    else
    {
        let r14_1: i64 = *arg2.byte_offset(0xb8) - 1;
        let mut rax_1: i8;
        
        do
        {
            let mut rcx: i64 = 0;
            
            if rdx == arg4
            {
                rcx = arg3;
            }
            
            let mut r8: i64 = r14_1;
            
            if rdx == arg6
            {
                r8 = arg5;
            }
            
            alacritty_terminal::term::Term$LT$T$GT$::line_to_string::h817f918a5b9412b8(&var_50, 
                arg2, rdx, rcx, r8, rdx == arg6);
            let rsi_1: i64 = var_48;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(&var_80, rsi_1, *var_48[8] + rsi_1);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_50);
            rax_1 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::hb267890a26ead5dc(&var_64, &var_50);
        } while (rax_1 & 1) != 0;
        rbx_2 = var_78;
        result_1 = result;
    }
    
    var_50 = 0;
    let mut rax_2: *mut i8;
    let mut rdx_3: u64;
    rax_2 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0xa, &var_50);
    let mut rax_3: i64;
    let mut rdx_5: u64;
    rax_3 =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::ha48df28aef4c1d38(
        rax_2, rdx_3, rbx_2, result_1);
    
    if rax_3 == 0
    {
        arg1[2] = result;
        *arg1 = var_80;
        return result;
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_50, rax_3, rdx_5);
    let rax_4: i64 = var_50;
    *arg1.byte_offset(8) = var_48;
    *arg1 = rax_4;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_80)
}
