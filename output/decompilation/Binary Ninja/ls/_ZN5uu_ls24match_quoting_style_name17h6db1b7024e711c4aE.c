
  uint64_t uu_ls::match_quoting_style_name::h6db1b7024e711c4a(int64_t arg1, uint64_t arg2, char arg3)

{
    char rbx = arg3;
    uint16_t rax_1;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(arg1, arg2, "literalshellshell-alwaysshell-es…", 7))
    {
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(arg1, arg2, "shellshell-alwaysshell-escapeshe…", 5))
        {
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(arg1, arg2, "shell-alwaysshell-escapeshell-es…", 0xc))
            {
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(arg1, arg2, "shell-escapeshell-escape-alwaysc…", 0xc))
                {
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(arg1, arg2, "shell-escape-alwayscescapeintern…", 0x13))
                    {
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(arg1, arg2, "cescapeinternal error: entered u…", 1))
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
                        rax_1 = 0x101;
                }
                else
                    rax_1 = 1;
            }
            else
                rax_1 = 0x100;
        }
        else
            rax_1 = 0;
    }
    else
    {
        rax_1 = rbx;
        rbx = 3;
    }
    
    return rax_1 | rbx << 0x10;
}
