
  fn uu_tail::follow::files::FileHandling::needs_header::hff0f2b81d091aff6(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i32) -> i64

{
    if arg4 == 0
    {
        return 0;
    }
    
    let mut result: i64;
    result = 1;
    
    if !(0 + -(*arg1))
    {
        let result_1: i64 = result;
        result = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$LT$$RF$std..path..Path$GT$$GT$::eq::h2125dccf5663ce54(arg1[1], arg1[2], arg2, arg3) ^ 1;
    }
    
    result
}
