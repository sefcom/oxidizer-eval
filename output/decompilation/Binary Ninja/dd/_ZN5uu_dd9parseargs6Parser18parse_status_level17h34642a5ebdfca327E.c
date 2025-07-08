
  int64_t uu_dd::parseargs::Parser::parse_status_level::h34642a5ebdfca327(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t result;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(arg2, arg3, "nonehelpNoneshimconvname\x1b[0m …", 4))
    {
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(arg2, arg3, "noxferciodirectdirectorydsyncnoc…", 6))
        {
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(arg2, arg3, "progressNoEquals", 8))
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
    return result;
}
