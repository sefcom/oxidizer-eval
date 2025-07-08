
  fn uu_numfmt::parse_unit::hdfe14114e84c44e9(arg1: *mut i64, arg2: i64, arg3: u64) -> i64

{
    let mut result: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(arg2, arg3, "autoBoolcodetip:\x1b[3mu128for<f…", 4);
    
    if result == 0
    {
        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(arg2, arg3, "siieciec-iinvalid unit size: src…", 2);
        
        if result == 0
        {
            result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(arg2, arg3, "ieciec-iinvalid unit size: src/u…", 3);
            
            if result == 0
            {
                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(arg2, arg3, "iec-iinvalid unit size: src/uu/n…", 5);
                
                if result == 0
                {
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(arg2, arg3, "nonedownhelpNoneshimname\x1b[0m …", 4);
                    
                    if result == 0
                    {
                        /* tailcall */
                        return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h523a2f825c855b37(arg1, "Unsupported unit is specifiedsii…", 0x1d);
                    }
                    
                    arg1[1] = 5;
                }
                else
                {
                    arg1[1] = 1;
                }
            }
            else
            {
                arg1[1] = 0;
            }
        }
        else
        {
            arg1[1] = 3;
        }
    }
    else
    {
        arg1[1] = 2;
    }
    
    *arg1 = -0x8000000000000000;
    result
}
