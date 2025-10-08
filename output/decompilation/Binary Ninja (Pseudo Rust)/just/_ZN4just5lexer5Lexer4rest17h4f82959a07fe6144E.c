
  fn just::lexer::Lexer::rest::h4f82959a07fe6144(arg1: *mut c_void) -> *mut c_void

{
    let r14: *mut i8 = *arg1.byte_offset(0x80);
    let rbx: i64 = *arg1.byte_offset(0x88);
    let r15: i64 = *arg1.byte_offset(0xa0);
    let result: *mut c_void = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15, r14, rbx);
    
    if result != 0
    {
        return result;
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(r14, rbx, r15, rbx);
    /* no return */
}
