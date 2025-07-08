
  fn uu_dd::parseargs::Parser::parse_status_level::h34642a5ebdfca327(arg1: *mut i64, arg2: i64, arg3: u64) -> i64

{
    let mut result: i64;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(arg2, arg3, "nonehelpNoneshimconvname\x1b[0m …", 4) == 0
    {
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(arg2, arg3, "noxferciodirectdirectorydsyncnoc…", 6) == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(arg2, arg3, "progressNoEquals", 8) == 0
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(
                    &arg1[1], arg2, arg3);
                result = 0xa;
            }
            else
            {
                arg1[1] = 0;
                result = 0xe;
            }
        }
        else
        {
            arg1[1] = 1;
            result = 0xe;
        }
    }
    else
    {
        arg1[1] = 2;
        result = 0xe;
    }
    
    *arg1 = result;
    result
}
