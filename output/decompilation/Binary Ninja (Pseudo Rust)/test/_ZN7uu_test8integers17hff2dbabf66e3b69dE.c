
  fn uu_test::integers::hff2dbabf66e3b69d(arg1: *mut i64, arg2: *mut i8, arg3: i64, arg4: *mut i8, arg5: i64, arg6: *mut i8, arg7: i64) -> i64

{
    let mut var_78: i32;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_78, arg2, arg3);
    let mut result: i64;
    
    if var_78 == 1
    {
        'label_4592c7:
        var_78 = 1;
        let var_70_1: *mut i8 = arg2;
        let var_68_1: i64 = arg3;
        'label_4592d9:
        let var_60_1: i8 = 1;
        let mut var_48: i128;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h47d193bf63b6bc9a(
            &var_48, &var_78);
        let zmm0_1: i128 = var_48;
        let result_1: i64;
        result = result_1;
        *arg1 = 5;
        *arg1.byte_offset(8) = zmm0_1;
        arg1[3] = result;
    }
    else
    {
        let var_70: *mut i8;
        let var_68: u64;
        core::num::_$LT$impl$u20$i128$GT$::from_ascii_radix::h1d5c018759fadde2(&var_78, var_70, 
            var_68);
        
        if var_78 == 1
        {
            goto 'label_4592c7;
        }
        
        let var_60: i8;
        let rbp_1: i64 = var_60;
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_78, arg4, arg5);
        
        if var_78 == 1
        {
            'label_45934a:
            var_78 = 1;
            let var_70_2: *mut i8 = arg4;
            let var_68_2: i64 = arg5;
            goto 'label_4592d9;
        }
        
        core::num::_$LT$impl$u20$i128$GT$::from_ascii_radix::h1d5c018759fadde2(&var_78, var_70, 
            var_68);
        
        if var_78 == 1
        {
            goto 'label_45934a;
        }
        
        let r15_1: i64 = var_60;
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_78, arg6, arg7);
        
        if var_78 != 1
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_70, var_68, "-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-…", 3) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_70, var_68, "-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h…", 3) == 0
                {
                    let mut s_1: bool;
                    let mut o_1: bool;
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_70, var_68, "-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-…", 3) == 0
                    {
                        let mut s_2: bool;
                        let mut o_2: bool;
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_70, var_68, "-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c…", 3) == 0
                        {
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_70, var_68, "-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-…", 3) != 0
                            {
                                s_1 = rbp_1 - r15_1 < 0;
                                o_1 = /* o_1 = unimplemented  {sbb rbp, qword [rsp+0x28]} */;
                                goto 'label_45944f;
                            }
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_70, var_68, "-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f…", 3) == 0
                            {
                                goto 'label_459385;
                            }
                            
                            let c_4: bool = var_68 < var_68;
                            let var_50_3: i64 = r15_1 - rbp_1;
                            s_2 = r15_1 - rbp_1 < 0;
                            o_2 = /* o_2 = unimplemented  {sbb qword [rsp+0x28], rbp} */;
                        }
                        else
                        {
                            s_2 = rbp_1 - r15_1 < 0;
                            o_2 = /* o_2 = unimplemented  {sbb rbp, qword [rsp+0x28]} */;
                        }
                        
                        result = s_2 == o_2;
                        arg1[1] = result;
                        *arg1 = 7;
                    }
                    else
                    {
                        let c_1: bool = var_68 < var_68;
                        let var_50_2: i64 = r15_1 - rbp_1;
                        s_1 = r15_1 - rbp_1 < 0;
                        o_1 = /* o_1 = unimplemented  {sbb qword [rsp+0x28], rbp} */;
                        'label_45944f:
                        result = s_1 != o_1;
                        arg1[1] = result;
                        *arg1 = 7;
                    }
                }
                else
                {
                    result = rbp_1 != r15_1;
                    arg1[1] = result;
                    *arg1 = 7;
                }
            }
            else
            {
                result = rbp_1 == r15_1;
                arg1[1] = result;
                *arg1 = 7;
            }
        }
        else
        {
            'label_459385:
            var_78 = 1;
            let var_70_3: *mut i8 = arg6;
            let var_68_3: i64 = arg7;
            let var_60_2: i8 = 1;
            result = _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h47d193bf63b6bc9a(&arg1[1], &var_78);
            *arg1 = 4;
        }
    }
    
    result
}
