long long uu_ls::match_quoting_style_name::h6db1b7024e711c4a(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(a0, a1, "literalshellshell-alwaysshell-escapeshell-escape-alwayscescapeinternal error: entered unreachable code: Should have been caught by Clap", 7))
        return a2 | 0x30000;
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(a0, a1, "shellshell-alwaysshell-escapeshell-escape-alwayscescapeinternal error: entered unreachable code: Should have been caught by Clap", 5))
        return 0 | 0x30000;
    v1 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(a0, a1, "shell-alwaysshell-escapeshell-escape-alwayscescapeinternal error: entered unreachable code: Should have been caught by Clap", 12);
    if ((char)v1)
    {
        a2 = v1 & 0xffffffffffff0000 | 0x100;
        return a2 | 0x30000;
    }
    v2 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(a0, a1, "shell-escapeshell-escape-alwayscescapeinternal error: entered unreachable code: Should have been caught by Clap", 12);
    if ((char)v2)
    {
        a2 = v2 & 0xffffffffffff0000 | 1;
        return a2 | 0x30000;
    }
    v3 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(a0, a1, "shell-escape-alwayscescapeinternal error: entered unreachable code: Should have been caught by Clap", 19);
    if ((char)v3)
    {
        a2 = v3 & 0xffffffffffff0000 | 257;
        return a2 | 0x30000;
    }
    v4 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(a0, a1, "cescapeinternal error: entered unreachable code: Should have been caught by Clap", 1);
    if ((char)v4)
    {
        a2 = v4 & 0xffffffffffff0000 | 2;
        return a2 | 0x30000;
    }
    _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(a0, a1, "escapeinternal error: entered unreachable code: Should have been caught by Clap", 6);
}
