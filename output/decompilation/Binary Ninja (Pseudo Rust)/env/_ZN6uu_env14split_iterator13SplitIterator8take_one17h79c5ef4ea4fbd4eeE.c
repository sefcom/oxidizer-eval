
  fn uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(arg1: *mut i32, arg2: *mut i64) -> i64

{
    let mut result: i64;
    let mut rdx: i8;
    result = uu_env::string_expander::StringExpander::take_one::haa545a6e4e1a581c(arg2);
    let mut rcx: i32 = 8;
    
    if rdx != 2
    {
        *arg1.byte_offset(8) = result;
        *arg1.byte_offset(0x10) = result;
        arg1[6] = rdx & 1;
        rcx = 5;
    }
    
    *arg1 = rcx;
    result
}
