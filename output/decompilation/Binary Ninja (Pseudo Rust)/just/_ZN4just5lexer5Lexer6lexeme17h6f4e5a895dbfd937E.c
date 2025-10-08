
  fn just::lexer::Lexer::lexeme::h6f4e5a895dbfd937(arg1: *mut c_void) -> *mut c_void

{
    let rax: i64;
    let var_28: i64 = rax;
    let rbx: *mut i8 = *arg1.byte_offset(0x80);
    let r14: i64 = *arg1.byte_offset(0x88);
    let r15: i64 = *arg1.byte_offset(0xb8);
    let r12: i64 = *arg1.byte_offset(0xa0);
    let result: *mut c_void = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r15, r12, rbx, r14);
    
    if result != 0
    {
        return result;
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(rbx, r14, r15, r12);
    /* no return */
}
