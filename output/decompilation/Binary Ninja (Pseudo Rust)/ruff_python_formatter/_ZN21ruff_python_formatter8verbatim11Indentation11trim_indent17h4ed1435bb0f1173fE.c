
  fn ruff_python_formatter::verbatim::Indentation::trim_indent::h4ed1435bb0f1173f(arg1: i32, arg2: *mut i32, arg3: *mut i8, arg4: i64) -> u64

{
    let mut rax: i32;
    let mut rdx: i32;
    rax = _$LT$$RF$T$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h21ba564204b53270(arg2);
    let rbx: u64 = rdx;
    let mut rax_1: u64;
    let mut rdx_1: i64;
    rax_1 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rax, rdx);
    let mut rax_2: *mut c_void;
    let mut rdx_3: *mut c_void;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_1, rdx_1, arg3, arg4);
    
    if rax_2 == 0
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg3, arg4, rax_1, rdx_1);
        /* no return */
    }
    
    let mut var_48: *mut c_void = rax_2;
    let var_40: *mut c_void = rdx_3.byte_offset(rax_2);
    let mut r14_1: i32;
    
    if arg1 == 0
    {
        r14_1 = 0;
    }
    else
    {
        let mut i: u64 = arg1;
        r14_1 = 0;
        
        do
        {
            let mut rax_4: i8;
            let mut rdx_5: i32;
            rax_4 = core::str::validations::next_code_point::hfc8b8c1898281fd8(&var_48, rbx);
            
            if (rax_4 & 1) == 0
            {
                break;
            }
            
            if rdx_5 != 0x20 && rdx_5 != 9
            {
                break;
            }
            
            r14_1 += 1;
            i -= 1;
        } while i != 0;
    }
    
    let r14_2: i32 = r14_1 + rax;
    
    if r14_2 <= rbx
    {
        return r14_2;
    }
    
    core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
    /* no return */
}
