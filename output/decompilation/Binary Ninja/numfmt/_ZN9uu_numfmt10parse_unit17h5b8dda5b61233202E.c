
  int64_t uu_numfmt::parse_unit::h5b8dda5b61233202(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    char result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h47d6932d4cc292c3(arg2, arg3, "autoBool", 4);
    
    if (!result)
    {
        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h47d6932d4cc292c3(arg2, arg3, "siieciec-i0invalid unit size: sr…", 2);
        
        if (!result)
        {
            result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h47d6932d4cc292c3(arg2, arg3, "ieciec-i0invalid unit size: src/…", 3);
            
            if (!result)
            {
                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h47d6932d4cc292c3(arg2, arg3, "iec-i0invalid unit size: src/uu/…", 5);
                
                if (!result)
                {
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h47d6932d4cc292c3(arg2, arg3, "nonedownhelpNoneshim\x1b[0mnameC…", 4);
                    
                    if (!result)
                        /* tailcall */
                        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4c3223c430555e40(arg1, "Unsupported unit is specifiedsii…", 0x1d);
                    
                    arg1[1] = 5;
                }
                else
                    arg1[1] = 1;
            }
            else
                arg1[1] = 0;
        }
        else
            arg1[1] = 3;
    }
    else
        arg1[1] = 2;
    
    *arg1 = -0x8000000000000000;
    return result;
}
