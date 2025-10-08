
  int64_t uu_dd::parseargs::Parser::parse_status_level::hea4c02f91140d667(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t result;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(arg2, arg3, "nonehelpNoneshimconv\x1b[0mnames…", 4))
    {
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(arg2, arg3, "noxferciodirectdirectorydsyncnoc…", 6))
        {
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(arg2, arg3, "progressNoEqualsargumentFileDesc…", 8))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h074386e79a8fa9e7(&arg1[1], arg2, arg3);
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
