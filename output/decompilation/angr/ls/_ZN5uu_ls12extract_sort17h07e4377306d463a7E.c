long long uu_ls::extract_sort(unsigned long long a0)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x40]
    char *v3;  // [bp-0x38]
    uint128_t v4;  // [bp-0x30]
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax

    v1.try_get_one(a0, "sortCESTWEMT", 4);
    v6 = "sortCESTWEMT".unwrap(4, &v1);
    if (v6)
    {
        v7 = v6[1];
        v8 = v6[2];
        if (!(char)v7.equal(v8, "noneSDMTHKWTNonecallNZDTshimSlimAHSTPKSTMDST", 4))
        {
            v9 = v7.equal(v8, "nameSJMTYDDTACDTBDSTCyanWAST    footGMT0ADDT\"`$\\Utf8EADVsortCESTWEMT", 4);
            if ((char)v9)
                return v9 & 0xffffffffffffff00 | 1;
            v10 = v7.equal(v8, "timeHashW-SUtip:", 4);
            if ((char)v10)
                return v10 & 0xffffffffffffff00 | 3;
            v11 = v7.equal(v8, "sizeIranWESTAKSTHKSTACSTi128 as dyn MaskCASTERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGzonenameESTRPIPEsearcherNotFoundTimedOutpatternsUS/SamoaENETDOWNThursday\n       FebruaryHongkongEtc/Zulu", 4);
            if ((char)v11)
                return v11 & 0xffffffffffffff00 | 2;
            v12 = v7.equal(v8, "versionextensioninternal error: entered unreachable code: Invalid field for --sort", 7);
            if ((char)v12)
                return v12 & 0xffffffffffffff00 | 4;
            v13 = v7.equal(v8, "extensioninternal error: entered unreachable code: Invalid field for --sort", 9);
            if ((char)v13)
                return v13 & 0xffffffffffffff00 | 5;
            v14 = v7.equal(v8, "widthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` o", 5);
            if (!(char)v14)
            {
                v1 = &g_6867f8;
                v2 = 1;
                v3 = &v0;
                v4 = 0;
                core::panicking::panic_fmt(&v1, &g_686808); /* do not return */
            }
            return v14 & 0xffffffffffffff00 | 6;
        }
    }
    else
    {
        v15 = a0.get_flag("tUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursi", 1);
        if ((char)v15)
            return v15 & 0xffffffffffffff00 | 3;
        v16 = a0.get_flag("StUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecurs", 1);
        if ((char)v16)
        {
            return v16 & 0xffffffffffffff00 | 2;
        }
        else if (!(char)a0.get_flag("UvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursiv", 1))
        {
            v17 = a0.get_flag("vXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursive", 1);
            if ((char)v17)
                return v17 & 0xffffffffffffff00 | 4;
            v18 = a0.get_flag("Xucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivec", 1);
            return v18 & 0xffffffffffffff00 | (char)v18 * 4 + 1;
        }
    }
    return 0;
}
