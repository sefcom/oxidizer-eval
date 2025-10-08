
  fn uu_more::Pager::should_squeeze_line::hcc3a424a86437f5a(arg1: *mut c_void, arg2: i64, arg3: i64) -> i64

{
    if *arg1.byte_offset(0x81) != 1
    {
        return 0;
    }
    
    let rax: i64;
    let var_18: i64 = rax;
    let rax_1: i64 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h829d259aa4156da6(arg2, arg3);
    let mut result: i64 = *arg1.byte_offset(0x20);
    let mut rcx_1: bool;
    
    if result == 0
    {
        rcx_1 = false;
    }
    else
    {
        let rcx: i64 = *arg1.byte_offset(0x18);
        let rax_2: i64 = result * 3;
        rcx_1 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h829d259aa4156da6(
            *(rcx + (rax_2 << 3) - 0x10), *(rcx + (rax_2 << 3) - 8)) == 0;
    }
    
    result = rax_1 == 0;
    result &= rcx_1;
    result
}
