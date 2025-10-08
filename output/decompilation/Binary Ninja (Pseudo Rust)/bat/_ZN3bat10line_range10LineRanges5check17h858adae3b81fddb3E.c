
  fn bat::line_range::LineRanges::check::h858adae3b81fddb3(arg1: *mut c_void, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut var_48: i64 = arg2;
    let mut var_40: i64 = arg3;
    let var_38: i64 = arg4;
    let rax: i64 = *arg1.byte_offset(8);
    let rcx_2: i64 = (*arg1.byte_offset(0x10) << 5) + rax;
    let mut var_30: i64 = rax;
    let var_28: i64 = rcx_2;
    
    if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hc4f64b89ed9775b4(&var_30, &var_48, &var_40) != 0
    {
        return 0;
    }
    
    if (arg3 & 1) != 0
    {
        let mut rcx_3: i64 = 0;
        
        if arg4 >= *arg1.byte_offset(0x20)
        {
            rcx_3 = arg4 - *arg1.byte_offset(0x20);
        }
        
        if arg2 > rcx_3
        {
            return 2;
        }
    }
    
    2 - 0
}
