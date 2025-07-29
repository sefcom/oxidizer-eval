long long uu_ls::extract_indicator_style(unsigned long long a0)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v2[3];  // rax
    unsigned long long v3;  // rbx
    unsigned long long v4;  // r14
    unsigned long long v5;  // rbp
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14

    v0.try_get_one(a0, _ZN5uu_ls7options15INDICATOR_STYLE17hdc2400a5209604c0E, g_6a0e90);
    v2 = _ZN5uu_ls7options15INDICATOR_STYLE17hdc2400a5209604c0E.unwrap(g_6a0e90, &v0);
    if (v2)
    {
        v3 = v2[1];
        v4 = v2[2];
        if (!(!(char)v3.equal(v4, "nonehelpmsecNonecallshimSlimname", 4)))
            goto LABEL_5231e3;
        v5 = vvar_43{reg 56} & 0xffffffffffffff00 | 2;
        if (!(char)v3.equal(v4, "file-typeslashCOLUMNS: ls-invalid-columns-widthsihuman-readable: warning: patternBLOCKSIZEBLOCK_SIZELS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-format", 9))
        {
            v5 = v5 & 0xffffffffffffff00 | 3;
            if (!(char)v3.equal(v4, "classify", 8))
                v5 = (unsigned int)v3.equal(v4, "slashCOLUMNS: ls-invalid-columns-widthsihuman-readable: warning: patternBLOCKSIZEBLOCK_SIZELS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-d", 5);
        }
    }
    else
    {
        v0.try_get_one(a0, _ZN5uu_ls7options15indicator_style8CLASSIFY17h59aea398f42e198aE, g_6a14c8);
        v6 = _ZN5uu_ls7options15indicator_style8CLASSIFY17h59aea398f42e198aE.unwrap(g_6a14c8, &v0);
        if (v6)
        {
            v7 = v6[1];
            v8 = v6[2];
            if ((char)v7.equal(v8, "nevernointernal error: entered unreachable code: should be handled by clap", 5) || (char)v7.equal(v8, "nointernal error: entered unreachable code: should be handled by clap", 2) || (char)v7.equal(v8, "nonehelpmsecNonecallshimSlimname", 4))
            {
LABEL_5231e3:
                v5 = 0;
            }
            else
            {
                v5 = vvar_43{reg 56} & 0xffffffffffffff00 | 3;
                if (!(char)v7.equal(v8, "alwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 6) && !(char)v7.equal(v8, "yesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3) && !(char)v7.equal(v8, "forcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 5))
                {
                    if (!((char)v7.equal(v8, "autoday=", 4) || (char)v7.equal(v8, "ttyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3) || (char)v7.equal(v8, "if-ttynevernointernal error: entered unreachable code: should be handled by clap", 6)))
                        goto LABEL_5231e3;
                    v0 = std::io::stdio::stdout();
                    v5 = (std::sys::pal::unix::io::is_terminal()) * 3;
                }
            }
        }
        else
        {
            v5 = vvar_43{reg 56} & 0xffffffffffffff00 | 1;
            if (!(char)a0.get_flag(_ZN5uu_ls7options15indicator_style5SLASH17he71a41d1cda724d8E, g_6a14a8))
                v5 = (int)a0.get_flag(_ZN5uu_ls7options15indicator_style9FILE_TYPE17h6567a1cc08b0ef9cE, g_6a14b8) & 0xffffff00 | (char)a0.get_flag(_ZN5uu_ls7options15indicator_style9FILE_TYPE17h6567a1cc08b0ef9cE, g_6a14b8) * 2;
        }
    }
    return v5 & 4294967295;
}
