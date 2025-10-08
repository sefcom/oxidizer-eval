
  uint64_t uu_ls::match_quoting_style_name::hd6c6f9cb275639d7(int64_t arg1, uint64_t arg2, char arg3)

{
    char rax;
    uint32_t rcx;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(arg1, arg2, "literalquote-namepfile-typederef…", 7))
    {
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(arg1, arg2, "shellshell-alwaysshell-escapeshe…", 5))
        {
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(arg1, arg2, "shell-alwaysshell-escapeshell-es…", 0xc))
            {
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(arg1, arg2, "shell-escapeshell-escape-alwaysi…", 0xc))
                {
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(arg1, arg2, "shell-escape-alwaysinternal erro…", 0x13))
                    {
                        rax = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(arg1, arg2, "cblock-sizehuman-readablesikibib…", 1);
                        
                        if (!rax)
                        {
                            rax = (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(arg1, arg2, "escapeliteralquote-namepfile-typ…", 6) ^ 1) * 2 + 2;
                            rcx = 0;
                        }
                        else
                        {
                            rax = 2;
                            rcx = 2;
                        }
                    }
                    else
                    {
                        rcx = (arg3 << 8) + 1;
                        rax = 1;
                    }
                }
                else
                {
                    rcx = arg3 << 8;
                    rax = 1;
                }
            }
            else
            {
                rcx = (arg3 << 8) + 1;
                rax = 0;
            }
        }
        else
        {
            rcx = arg3 << 8;
            rax = 0;
        }
    }
    else
    {
        rcx = arg3;
        rax = 3;
    }
    
    return rax | rcx << 8;
}
