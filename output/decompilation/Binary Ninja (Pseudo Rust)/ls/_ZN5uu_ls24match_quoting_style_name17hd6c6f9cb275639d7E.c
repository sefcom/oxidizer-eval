
  fn uu_ls::match_quoting_style_name::hd6c6f9cb275639d7(arg1: i64, arg2: u64, arg3: i8) -> u64

{
    let mut rax: i8;
    let mut rcx: u32;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(arg1, arg2, "literalquote-namepfile-typederef…", 7) == 0
    {
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(arg1, arg2, "shellshell-alwaysshell-escapeshe…", 5) == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(arg1, arg2, "shell-alwaysshell-escapeshell-es…", 0xc) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(arg1, arg2, "shell-escapeshell-escape-alwaysi…", 0xc) == 0
                {
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(arg1, arg2, "shell-escape-alwaysinternal erro…", 0x13) == 0
                    {
                        rax = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(arg1, arg2, "cblock-sizehuman-readablesikibib…", 1);
                        
                        if rax == 0
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
    
    rax | rcx << 8
}
