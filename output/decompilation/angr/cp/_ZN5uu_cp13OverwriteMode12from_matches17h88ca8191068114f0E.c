long long uu_cp::OverwriteMode::from_matches(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbp

    v0 = v2;
    v3 = vvar_22{reg 56} & 0xffffffffffffff00 | 1;
    if (!(char)a0.get_flag("interactiveno-clobbercp-help-interactivesymbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcec", 11))
    {
        if ((char)a0.get_flag("no-clobbercp-help-interactivesymbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forc", 10))
            return ((vvar_22{reg 56} & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 2) & 4294967295;
        v3 = 0;
    }
    a0.from_matches();
    return v3 & 4294967295;
}
