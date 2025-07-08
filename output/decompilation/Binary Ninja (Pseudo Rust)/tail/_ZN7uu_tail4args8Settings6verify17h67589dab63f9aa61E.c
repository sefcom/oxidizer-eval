
  fn uu_tail::args::Settings::verify::h67589dab63f9aa61(arg1: *mut i64) -> *mut c_void

{
    let rax: i64 = arg1[4];
    let rcx: i64 = arg1[5];
    let mut var_18: i64 = rax;
    let var_10: i64 = rcx * 0x30 + rax;
    let mut result: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h4b3a6ea672657da1(&var_18);
    let rcx_4: i8 = *arg1.byte_offset(0x4c);
    
    if result == 0
    {
        'label_4f9cdd:
        
        if rcx_4 != 2
        {
            return nullptr;
        }
        
        result = *arg1;
        
        if result == 4
        {
            result = arg1[1];
        }
        
        result = result == 3;
        result *= 2;
    }
    else
    {
        result = 1;
        
        if (rcx_4 & 1) == 0
        {
            goto 'label_4f9cdd;
        }
    }
    
    result
}
