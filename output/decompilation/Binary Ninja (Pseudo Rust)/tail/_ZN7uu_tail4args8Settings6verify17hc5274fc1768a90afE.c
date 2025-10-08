
  fn uu_tail::args::Settings::verify::hc5274fc1768a90af(arg1: *mut i64) -> i64

{
    let rax: i64 = arg1[4];
    let rcx: i64 = arg1[5];
    let mut var_18: i64 = rax;
    let var_10: i64 = rcx * 0x30 + rax;
    let rax_1: i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h6490742e89b15d1d(&var_18);
    let rax_2: i8 = *arg1.byte_offset(0x4c);
    
    if rax_1 == 0
    {
        if rax_2 != 2
        {
            return 0;
        }
    }
    else if rax_2 != 2
    {
        return rax_2 & 1;
    }
    
    let mut result: i64 = *arg1;
    
    if result == 4
    {
        result = arg1[1];
    }
    
    result = result == 3;
    result *= 2;
    result
}
