
  fn uu_env::split_iterator::SplitIterator::take_one::h1e0059af94c5f623(arg1: *mut i32, arg2: *mut i64) -> i64

{
    let mut result: i64;
    let mut rdx: i8;
    result = uu_env::string_expander::StringExpander::take_one::hd9c3a6abe6131b4d(arg2);
    let mut rcx: i32 = 0xc;
    
    if rdx != 2
    {
        *arg1.byte_offset(8) = result;
        *arg1.byte_offset(0x10) = result;
        arg1[6] = rdx & 1;
        rcx = 0xb;
    }
    
    *arg1 = rcx;
    result
}
