
  fn uu_test::integers::he37c408d0a55d011(arg1: *mut i64, arg2: *mut i8, arg3: i64, arg4: *mut i8, arg5: i64, arg6: *mut i8, arg7: i64) -> i64

{
    let mut var_78: i64;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_78, arg2, arg3);
    let mut result: i64;
    
    if var_78 != 0
    {
        'label_4ace99:
        var_78 = 1;
        let var_70_1: *mut i8 = arg2;
        let var_68_1: i64 = arg3;
        'label_4aceab:
        let var_60_1: i8 = 1;
        let mut var_48: i128;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&var_48, 
            &var_78);
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
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i128$GT$::from_str::hc8dce56db4b142c5(&var_78, var_70, var_68);
        
        if var_78 != 0
        {
            goto 'label_4ace99;
        }
        
        let var_60: i8;
        let rbp_1: i64 = var_60;
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_78, arg4, arg5);
        
        if var_78 != 0
        {
            'label_4acf1e:
            var_78 = 1;
            let var_70_2: *mut i8 = arg4;
            let var_68_2: i64 = arg5;
            goto 'label_4aceab;
        }
        
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i128$GT$::from_str::hc8dce56db4b142c5(&var_78, var_70, var_68);
        
        if var_78 != 0
        {
            goto 'label_4acf1e;
        }
        
        let r15_1: i64 = var_60;
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_78, arg6, arg7);
        
        if var_78 == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_70, var_68, "-eq-ne-gt-ge-lt-le-ef-nt-ot", 3) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_70, var_68, "-ne-gt-ge-lt-le-ef-nt-ot", 3) == 0
                {
                    let mut s_1: bool;
                    let mut o_1: bool;
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_70, var_68, "-gt-ge-lt-le-ef-nt-ot", 3) == 0
                    {
                        let mut s_2: bool;
                        let mut o_2: bool;
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_70, var_68, "-ge-lt-le-ef-nt-ot", 3) == 0
                        {
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_70, var_68, "-lt-le-ef-nt-ot", 3) != 0
                            {
                                s_1 = rbp_1 - r15_1 < 0;
                                o_1 = /* o_1 = unimplemented  {sbb rbp, qword [rsp+0x28]} */;
                                goto 'label_4ad024;
                            }
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_70, var_68, "-le-ef-nt-ot", 3) == 0
                            {
                                goto 'label_4acf5a;
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
                        'label_4ad024:
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
            'label_4acf5a:
            var_78 = 1;
            let var_70_3: *mut i8 = arg6;
            let var_68_3: i64 = arg7;
            let var_60_2: i8 = 1;
            result = _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(
                &arg1[1], &var_78);
            *arg1 = 4;
        }
    }
    
    result
}
