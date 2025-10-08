
  char uu_test::parser::Symbol::new::habde89fb8e284063(int64_t* arg1, int64_t* arg2)

{
    int64_t r15 = *arg2;
    char result = -(r15);
    
    if (-(r15) != -0x8000000000000000)
    {
        char* r14_1 = arg2[1];
        int64_t r12_1 = arg2[2];
        char var_48;
        result = core::str::converts::from_utf8::h8a6dc80f786921e0(&var_48, r14_1, r12_1);
        
        if (!(var_48 & 1))
        {
            int64_t var_40;
            uint64_t var_38;
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "(!-a-o===!=<>-eq-ge-gt-le-lt-ne-…", 1))
            {
                *arg1 = 0;
                /* tailcall */
                return
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(
                    r15, r14_1);
            }
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "!-a-o===!=<>-eq-ge-gt-le-lt-ne-e…", 1))
            {
                *arg1 = 1;
                /* tailcall */
                return
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(
                    r15, r14_1);
            }
            
            result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "-a-o===!=<>-eq-ge-gt-le-lt-ne-ef…", 2);
            
            if (result)
            {
                label_456dec:
                arg1[1] = r15;
                arg1[2] = r14_1;
                arg1[3] = r12_1;
                *arg1 = 2;
            }
            else
            {
                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "-o===!=<>-eq-ge-gt-le-lt-ne-ef-n…", 2);
                
                if (result)
                    goto label_456dec;
                
                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "===!=<>-eq-ge-gt-le-lt-ne-ef-nt-…", 1);
                
                if (result)
                {
                    label_456e95:
                    arg1[1] = 0;
                    label_456e9d:
                    arg1[2] = r15;
                    arg1[3] = r14_1;
                    arg1[4] = r12_1;
                    *arg1 = 4;
                }
                else
                {
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "==!=<>-eq-ge-gt-le-lt-ne-ef-nt-o…", 2);
                    
                    if (result)
                        goto label_456e95;
                    
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-…", 2);
                    
                    if (result)
                        goto label_456e95;
                    
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-…", 1);
                    
                    if (result)
                        goto label_456e95;
                    
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, ">-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z…", 1);
                    
                    if (result)
                        goto label_456e95;
                    
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-…", 3);
                    
                    if (result)
                    {
                        arg1[1] = 1;
                        goto label_456e9d;
                    }
                    
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c…", 3);
                    
                    if (result)
                    {
                        arg1[1] = 1;
                        goto label_456e9d;
                    }
                    
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-…", 3);
                    
                    if (result)
                    {
                        arg1[1] = 1;
                        goto label_456e9d;
                    }
                    
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f…", 3);
                    
                    if (result)
                    {
                        arg1[1] = 1;
                        goto label_456e9d;
                    }
                    
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-…", 3);
                    
                    if (result)
                    {
                        arg1[1] = 1;
                        goto label_456e9d;
                    }
                    
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h…", 3);
                    
                    if (result)
                    {
                        arg1[1] = 1;
                        goto label_456e9d;
                    }
                    
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-…", 3);
                    
                    if (result)
                    {
                        arg1[1] = 2;
                        goto label_456e9d;
                    }
                    
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N…", 3);
                    
                    if (result)
                    {
                        arg1[1] = 2;
                        goto label_456e9d;
                    }
                    
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-…", 3);
                    
                    if (result)
                    {
                        arg1[1] = 2;
                        goto label_456e9d;
                    }
                    
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r…", 2);
                    
                    if (result)
                        arg1[1] = 0;
                    else
                    {
                        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s…", 2);
                        
                        if (!result)
                        {
                            result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S…", 2);
                            
                            if (!result)
                            {
                                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t…", 2);
                                
                                if (!result)
                                {
                                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, "-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u…", 
                                        2);
                                    
                                    if (!result)
                                    {
                                        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, 
                                            "-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w…", 2);
                                        
                                        if (!result)
                                        {
                                            result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, 
                                                "-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-x…", 2);
                                            
                                            if (!result)
                                            {
                                                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, 
                                                    "-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsr…", 2);
                                                
                                                if (!result)
                                                {
                                                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, 
                                                        "-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/…", 2);
                                                    
                                                    if (!result)
                                                    {
                                                        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, 
                                                            "-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu…", 2);
                                                        
                                                        if (!result)
                                                        {
                                                            result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, 
                                                                "-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/t…", 2);
                                                            
                                                            if (!result)
                                                            {
                                                                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, 
                                                                    "-L-N-O-p-r-s-S-t-u-w-xsrc/uu/tes…", 2);
                                                                
                                                                if (!result)
                                                                {
                                                                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, 
                                                                        "-N-O-p-r-s-S-t-u-w-xsrc/uu/test/…", 2);
                                                                    
                                                                    if (!result)
                                                                    {
                                                                        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, 
                                                                            "-O-p-r-s-S-t-u-w-xsrc/uu/test/sr…", 2);
                                                                        
                                                                        if (!result)
                                                                        {
                                                                            result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, 
                                                                                "-p-r-s-S-t-u-w-xsrc/uu/test/src/…", 2);
                                                                            
                                                                            if (!result)
                                                                            {
                                                                                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, 
                                                                                    "-r-s-S-t-u-w-xsrc/uu/test/src/pa…", 2);
                                                                                
                                                                                if (!result)
                                                                                {
                                                                                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, 
                                                                                        "-s-S-t-u-w-xsrc/uu/test/src/pars…", 2);
                                                                                    
                                                                                    if (!result)
                                                                                    {
                                                                                        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, 
                                                                                            "-S-t-u-w-xsrc/uu/test/src/parser…", 2);
                                                                                        
                                                                                        if (!result)
                                                                                        {
                                                                                            result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, 
                                                                                                "-t-u-w-xsrc/uu/test/src/parser.r…", 2);
                                                                                            
                                                                                            if (!result)
                                                                                            {
                                                                                                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, 
                                                                                                    "-u-w-xsrc/uu/test/src/parser.rs)…", 2);
                                                                                                
                                                                                                if (!result)
                                                                                                {
                                                                                                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, 
                                                                                                        "-w-xsrc/uu/test/src/parser.rs)(u…", 2);
                                                                                                    
                                                                                                    if (!result)
                                                                                                    {
                                                                                                        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_40, var_38, 
                                                                                                            "-xsrc/uu/test/src/parser.rs)(uut…", 2);
                                                                                                        
                                                                                                        if (!result)
                                                                                                            goto label_456d25;
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            
                            arg1[1] = 1;
                        }
                        else
                            arg1[1] = 0;
                    }
                    
                    arg1[2] = r15;
                    arg1[3] = r14_1;
                    arg1[4] = r12_1;
                    *arg1 = 5;
                }
            }
        }
        else
        {
            label_456d25:
            arg1[1] = r15;
            arg1[2] = r14_1;
            arg1[3] = r12_1;
            *arg1 = 3;
        }
    }
    else
        *arg1 = 6;
    
    return result;
}
