long long uu_cp::OverwriteMode::from_matches(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbp

    v0 = v2;
    v3 = vvar_22{reg 56} & 0xffffffffffffff00 | 1;
    if (!(char)a0.get_flag("interactiveno-clobberask before overwriting filesreflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slas", 11))
    {
        if ((char)a0.get_flag("no-clobberask before overwriting filesreflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from ea", 10))
            return ((vvar_22{reg 56} & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 2) & 4294967295;
        v3 = 0;
    }
    a0.from_matches();
    return v3 & 4294967295;
}
