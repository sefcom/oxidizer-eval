
  fn uu_tail::follow::files::FileHandling::needs_header::h44ee2212a23b7f03(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i32) -> i64

{
    if arg4 == 0
    {
        return 0;
    }
    
    let mut result: i64;
    result = 1;
    
    if *arg1 != -0x8000000000000000
    {
        let result_1: i64 = result;
        result = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$LT$$RF$std..path..Path$GT$$GT$::eq::h18d1c3f7aa59eb02(arg1[1], arg1[2], arg2, arg3) ^ 1;
    }
    
    result
}
