long long uu_ls::extract_format(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x50]
    char *v3;  // [bp-0x48]
    uint128_t v4;  // [bp-0x40]
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // r15
    unsigned long long v8;  // r12
    unsigned long long v9;  // rax
    char v10;  // bpl
    unsigned long long v11;  // rax
    unsigned long long v12;  // r14
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax

    v1.try_get_one(a1, "formatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsr", 6);
    v6 = "formatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsr".unwrap(6, &v1);
    if (v6)
    {
        v7 = v6[1];
        v8 = v6[2];
        v9 = v7.equal(v8, "long', 'FFMTZero", 4);
        v10 = 1;
        if (!(char)v9)
        {
            v9 = v7.equal(v8, "verbosesingle-columncolumnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format", 7);
            if (!(char)v9)
            {
                v9 = v7.equal(v8, "single-columncolumnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format", 13);
                v10 = 2;
                if (!(char)v9)
                {
                    v9 = v7.equal(v8, "columnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format", 7);
                    if (!(char)v9)
                    {
                        v9 = v7.equal(v8, "vertical", 8);
                        if ((v9 & 255))
                            goto LABEL_591540;
                        v9 = v7.equal(v8, "acrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format", 6);
                        v10 = 3;
                        if (!(char)v9)
                        {
                            v9 = v7.equal(v8, "horizontalcommasinternal error: entered unreachable code: Invalid field for --format", 10);
                            if (!(char)v9)
                            {
                                v9 = v7.equal(v8, "commasinternal error: entered unreachable code: Invalid field for --format", 6);
                                v10 = 4;
                                if (!(char)v9)
                                {
                                    v1 = &g_6867d0;
                                    v2 = 1;
                                    v3 = &v0;
                                    v4 = 0;
                                    core::panicking::panic_fmt(&v1, &g_6867e0); /* do not return */
                                }
                            }
                        }
                    }
                    else
                    {
LABEL_591540:
                    }
                }
            }
        }
        a0->field_0 = v10;
        a0->field_8 = "formatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsr";
        a0->field_10 = 6;
        return v9;
    }
    else
    {
        v11 = a1.get_flag("long', 'FFMTZero", 4);
        if ((char)v11)
        {
            a0->field_0 = 1;
            a0->field_8 = "long', 'FFMTZero";
            a0->field_10 = 4;
            return v11;
        }
        v12 = "xtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatig";
        v13 = a1.get_flag("xtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatig", 1);
        if ((char)v13)
        {
            a0->field_0 = 3;
        }
        else
        {
            v12 = "mgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-bac";
            v13 = a1.get_flag("mgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-bac", 1);
            if ((char)v13)
            {
                a0->field_0 = 4;
            }
            else
            {
                v12 = "Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformati";
                v13 = a1.get_flag("Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformati", 1);
                if ((char)v13)
                {
                    a0->field_0 = 0;
                }
                else
                {
                    std::io::stdio::stdout();
                    v14 = std::sys::io::is_terminal::isatty::is_terminal();
                    if ((char)v14)
                        a0->field_0 = 0;
                    else
                        a0->field_0 = 2;
                    a0->field_8 = 0;
                    return v14;
                }
            }
        }
        a0->field_8 = v12;
        a0->field_10 = 1;
        return v13;
    }
}
