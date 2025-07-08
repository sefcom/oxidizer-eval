
  fn uu_test::parser::Symbol::new::ha5314f5fa26867b7(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    if *arg2 != -0x8000000000000000
    {
        let mut var_58: i128 = *arg2;
        let rdx_1: i64 = arg2[2];
        let mut var_38: i64;
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_38, *var_58[8], rdx_1);
        let var_30: i64;
        let var_28: u64;
        
        if var_38 == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "(!-a-o===!=-eq-ge-gt-le-lt-ne-ef…", 1) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "!-a-o===!=-eq-ge-gt-le-lt-ne-ef-…", 1) == 0
                {
                    let rax_5: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "-a-o===!=-eq-ge-gt-le-lt-ne-ef-n…", 2);
                    let mut rax_6: i8;
                    
                    if rax_5 == 0
                    {
                        rax_6 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "-o===!=-eq-ge-gt-le-lt-ne-ef-nt-…", 2);
                    }
                    
                    if rax_5 == 0 && rax_6 == 0
                    {
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "===!=-eq-ge-gt-le-lt-ne-ef-nt-ot…", 1) != 0
                        {
                            'label_4ae6a6:
                            arg1[4] = rdx_1;
                            *arg1.byte_offset(0x10) = var_58;
                            arg1[1] = 0;
                            *arg1 = 4;
                        }
                        else
                        {
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "==!=-eq-ge-gt-le-lt-ne-ef-nt-ot-…", 2) != 0
                            {
                                goto 'label_4ae6a6;
                            }
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "!=-eq-ge-gt-le-lt-ne-ef-nt-ot-n-…", 2) != 0
                            {
                                goto 'label_4ae6a6;
                            }
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-…", 3) != 0
                            {
                                'label_4ae771:
                                arg1[4] = rdx_1;
                                *arg1.byte_offset(0x10) = var_58;
                                arg1[1] = 1;
                                *arg1 = 4;
                            }
                            else
                            {
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c…", 3) != 0
                                {
                                    goto 'label_4ae771;
                                }
                                
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-…", 3) != 0
                                {
                                    goto 'label_4ae771;
                                }
                                
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f…", 3) != 0
                                {
                                    goto 'label_4ae771;
                                }
                                
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-…", 3) != 0
                                {
                                    goto 'label_4ae771;
                                }
                                
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h…", 3) != 0
                                {
                                    goto 'label_4ae771;
                                }
                                
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-…", 3) != 0
                                {
                                    'label_4ae7e7:
                                    arg1[4] = rdx_1;
                                    *arg1.byte_offset(0x10) = var_58;
                                    arg1[1] = 2;
                                    *arg1 = 4;
                                }
                                else
                                {
                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N…", 3) != 0
                                    {
                                        goto 'label_4ae7e7;
                                    }
                                    
                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-…", 3) != 0
                                    {
                                        goto 'label_4ae7e7;
                                    }
                                    
                                    let rax_23: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, 
                                        "-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r…", 2);
                                    let mut rax_24: i8;
                                    
                                    if rax_23 == 0
                                    {
                                        rax_24 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, 
                                            "-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s…", 2);
                                    }
                                    
                                    if rax_23 == 0 && rax_24 == 0
                                    {
                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S…", 2)
                                            == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, 
                                            "-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, 
                                            var_28, "-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(
                                            var_30, var_28, "-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w…", 2) == 0
                                            && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, 
                                            "-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-x…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, 
                                            var_28, "-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsr…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(
                                            var_30, var_28, "-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/…", 2) == 0
                                            && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, 
                                            "-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, 
                                            var_28, "-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/t…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(
                                            var_30, var_28, "-L-N-O-p-r-s-S-t-u-w-xsrc/uu/tes…", 2) == 0
                                            && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, 
                                            "-N-O-p-r-s-S-t-u-w-xsrc/uu/test/…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, 
                                            var_28, "-O-p-r-s-S-t-u-w-xsrc/uu/test/sr…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(
                                            var_30, var_28, "-p-r-s-S-t-u-w-xsrc/uu/test/src/…", 2) == 0
                                            && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, 
                                            "-r-s-S-t-u-w-xsrc/uu/test/src/pa…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, 
                                            var_28, "-s-S-t-u-w-xsrc/uu/test/src/pars…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(
                                            var_30, var_28, "-S-t-u-w-xsrc/uu/test/src/parser…", 2) == 0
                                            && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, 
                                            "-t-u-w-xsrc/uu/test/src/parser.r…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, 
                                            var_28, "-u-w-xsrc/uu/test/src/parser.rs)", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(
                                            var_30, var_28, "-w-xsrc/uu/test/src/parser.rs)", 2) == 0
                                            && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_30, var_28, "-xsrc/uu/test/src/parser.rs)", 2) == 0
                                        {
                                            goto 'label_4ae586;
                                        }
                                        
                                        arg1[4] = rdx_1;
                                        *arg1.byte_offset(0x10) = var_58;
                                        arg1[1] = 1;
                                        *arg1 = 5;
                                    }
                                    else
                                    {
                                        arg1[4] = rdx_1;
                                        *arg1.byte_offset(0x10) = var_58;
                                        arg1[1] = 0;
                                        *arg1 = 5;
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        arg1[3] = rdx_1;
                        *arg1.byte_offset(8) = var_58;
                        *arg1 = 2;
                    }
                }
                else
                {
                    *arg1 = 1;
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(
                        &var_58);
                }
            }
            else
            {
                *arg1 = 0;
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(
                    &var_58);
            }
        }
        else
        {
            'label_4ae586:
            arg1[3] = rdx_1;
            *arg1.byte_offset(8) = var_58;
            *arg1 = 3;
        }
    }
    else
    {
        *arg1 = 6;
    }
    
    arg1
}
