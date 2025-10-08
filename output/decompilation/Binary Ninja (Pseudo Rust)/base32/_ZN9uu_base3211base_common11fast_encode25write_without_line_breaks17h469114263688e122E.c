
  fn uu_base32::base_common::fast_encode::write_without_line_breaks::h469114263688e122(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i8, arg5: i8) -> i64

{
    let result: i64 = arg3(arg2, 
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hf17d47ca8c7d0746(
            arg1));
    
    if result != 0
    {
        return result;
    }
    
    if arg4 == 0
    {
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::truncate::had30ab5ba989df72(arg1);
        arg1[2] = 0;
    }
    else if arg5 == 0
    {
        /* jump -> arg3 */
    }
    
    0
}
