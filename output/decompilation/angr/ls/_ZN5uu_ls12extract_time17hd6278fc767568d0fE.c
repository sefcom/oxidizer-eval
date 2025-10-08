long long uu_ls::extract_time(unsigned long long a0)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x48]
    char *v3;  // [bp-0x40]
    uint128_t v4;  // [bp-0x38]
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14
    unsigned long long v9;  // rbp

    v1.try_get_one(a0, "timeHashW-SUtip:", 4);
    v6 = "timeHashW-SUtip:".unwrap(4, &v1);
    if (v6)
    {
        v7 = v6[1];
        v8 = v6[2];
        v9 = vvar_25{reg 56} & 0xffffffffffffff00 | 2;
        if (!(char)v7.equal(v8, "ctimestatusaccessatimeusemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 5) && !(char)v7.equal(v8, "statusaccessatimeusemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 6))
        {
            v9 = v9 & 0xffffffffffffff00 | 1;
            if (!(char)v7.equal(v8, "accessatimeusemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 6) && !(char)v7.equal(v8, "atimeusemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 5) && !(char)v7.equal(v8, "usemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 3))
            {
                if ((char)v7.equal(v8, "mtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 5) || (char)v7.equal(v8, "modificationbirthinternal error: entered unreachable code: Invalid field for --time", 12))
                {
                    v9 = 0;
                }
                else
                {
                    v9 = v9 & 0xffffffffffffff00 | 3;
                    if (!(char)v7.equal(v8, "birthinternal error: entered unreachable code: Invalid field for --time", 5) && !(char)v7.equal(v8, "creation@", 8))
                    {
                        v1 = &g_686820;
                        v2 = 1;
                        v3 = &v0;
                        v4 = 0;
                        core::panicking::panic_fmt(&v1, &g_686830); /* do not return */
                    }
                }
            }
        }
    }
    else
    {
        v9 = vvar_25{reg 56} & 0xffffffffffffff00 | 1;
        if (!(char)a0.get_flag("ucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursiveco", 1))
            v9 = (int)a0.get_flag("cblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecol", 1) & 0xffffff00 | (char)a0.get_flag("cblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecol", 1) * 2;
    }
    return v9 & 4294967295;
}
