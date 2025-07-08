
  fn uu_ls::match_quoting_style_name::h6db1b7024e711c4a(arg1: i64, arg2: u64, arg3: i8) -> u64

{
    let mut rbx: i8 = arg3;
    let mut rax_1: u16;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(arg1, arg2, "literalshellshell-alwaysshell-es…", 7) == 0
    {
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(arg1, arg2, "shellshell-alwaysshell-escapeshe…", 5) == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(arg1, arg2, "shell-alwaysshell-escapeshell-es…", 0xc) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(arg1, arg2, "shell-escapeshell-escape-alwaysc…", 0xc) == 0
                {
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(arg1, arg2, "shell-escape-alwayscescapeintern…", 0x13) == 0
                    {
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(arg1, arg2, "cescapeinternal error: entered u…", 1) == 0
                        {
                            rbx = (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(arg1, arg2, "escapeinternal error: entered un…", 6) ^ 1) * 2 + 2;
                            rax_1 = 0;
                        }
                        else
                        {
                            rbx = 2;
                            rax_1 = 2;
                        }
                    }
                    else
                    {
                        rax_1 = 0x101;
                    }
                }
                else
                {
                    rax_1 = 1;
                }
            }
            else
            {
                rax_1 = 0x100;
            }
        }
        else
        {
            rax_1 = 0;
        }
    }
    else
    {
        rax_1 = rbx;
        rbx = 3;
    }
    
    rax_1 | rbx << 0x10
}
