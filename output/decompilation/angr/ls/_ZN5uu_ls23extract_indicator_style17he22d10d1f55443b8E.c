long long uu_ls::extract_indicator_style(unsigned long long a0)
{
    char v0;  // [bp-0x48]
    unsigned long long v2[3];  // rax
    unsigned long long v3;  // rbx
    unsigned long long v4;  // r14
    unsigned long long v5;  // rbp
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14

    v0.try_get_one(a0, "indicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.cr", 15);
    v2 = "indicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.cr".unwrap(15, &v0);
    if (v2)
    {
        v3 = v2[1];
        v4 = v2[2];
        if ((char)v3.equal(v4, "noneSDMTHKWTNonecallNZDTshimSlimAHSTPKSTMDST", 4))
            goto LABEL_5925d7;
        v5 = vvar_41{reg 56} & 0xffffffffffffff00 | 2;
        if (!(char)v3.equal(v4, "file-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-", 9))
        {
            v5 = v5 & 0xffffffffffffff00 | 3;
            if (!(char)v3.equal(v4, "classify", 8))
                v5 = (unsigned int)v3.equal(v4, "slashCOLUMNS: ignoring invalid width in environment variable COLUMNS: : warning: Invalid pattern for ignore: Invalid pattern for hide: ", 5);
        }
    }
    else
    {
        v0.try_get_one(a0, "classify", 8);
        v6 = "classify".unwrap(8, &v0);
        if (v6)
        {
            v7 = v6[1];
            v8 = v6[2];
            if ((char)v7.equal(v8, "nevernointernal error: entered unreachable code: should be handled by clap", 5) || (char)v7.equal(v8, "nointernal error: entered unreachable code: should be handled by clap", 2) || (char)v7.equal(v8, "noneSDMTHKWTNonecallNZDTshimSlimAHSTPKSTMDST", 4))
            {
LABEL_5925d7:
                v5 = 0;
            }
            else
            {
                v5 = vvar_41{reg 56} & 0xffffffffffffff00 | 3;
                if (!(char)v7.equal(v8, "alwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 6) && !(char)v7.equal(v8, "yesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3) && !(char)v7.equal(v8, "forcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 5))
                {
                    if (!(char)v7.equal(v8, "auto", 4) && !(char)v7.equal(v8, "ttyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3) && !(char)v7.equal(v8, "if-ttynevernointernal error: entered unreachable code: should be handled by clap", 6))
                        goto LABEL_5925d7;
                    std::io::stdio::stdout();
                    v5 = (std::sys::io::is_terminal::isatty::is_terminal()) * 3;
                }
            }
        }
        else
        {
            v5 = vvar_41{reg 56} & 0xffffffffffffff00 | 1;
            if (!(char)a0.get_flag("pfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup", 1))
                v5 = (int)a0.get_flag("file-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-", 9) & 0xffffff00 | (char)a0.get_flag("file-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-", 9) * 2;
        }
    }
    return v5 & 4294967295;
}
