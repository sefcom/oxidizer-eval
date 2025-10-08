long long fish::builtins::status::Docs::get(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x78]
    int v1;  // [bp-0x70]
    int v2;  // [bp-0x60]
    int v3;  // [bp-0x50]
    int v4;  // [bp-0x40]
    int v5;  // [bp-0x30]
    int v6;  // [bp-0x20]
    char v7;  // [bp-0x10]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx

    v9 = "man/man1/_.1.\\\" Man page generated from reStructuredText.\n.\n.\n.nr rst2man-indent-level 0\n.\n.de1 rstReportMargin\n\\\\$1 \\\\n[an-margin]\nlevel \\\\n[rst2man-indent-level]\nlevel margin: \\\\n[rst2man-indent\\\\n[rst2man-indent-level]]\n-\n\\\\n[rst2man-indent0]\n\\\\n[rst2man-indent1]\n\\\\n[rst2man-indent2]\n..\n.de1 INDENT\n.\\\" .rstReportMargin pre:\n. RS \\\\$1\n. nr rst2man-indent\\\\n[rst2man-indent-level] \\\\n[an-margin]\n. nr rst2man-indent-level +1\n.\\\" .rstReportMargin post:\n..\n.de UNINDENT\n. RE\n.\\\" indent \\\\n[an-margin]\n.\\\" old: \\\\n[rst2man-indent\\\\n[rst2man-indent-level]]\n.nr rst2man-indent-level -1\n.\\\" new: \\\\n[rst2man-indent\\\\n[rst2man-indent-level]]\n.in \\\\n[rst2man-indent\\\\n[rst2man-indent-level]]u\n..\n.TH \"_\" \"1\" \"Oct 01, 2025\" \"4.1\" \"fish-shell\"\n.SH NAME\n_ \\- call fish\'s translations\n.SH SYNOPSIS\n.nf\n\\fB_\\fP \\fISTRING\\fP\n.fi\n.sp\n.SH DESCRIPTION\n.sp\n\\fB_\\fP translates its arguments into the current language, if possible.\n.sp\nThis only works with messages which are translated as part of fish\\(aqs own sources, so using it as part ".strip_prefix_of(9, a1, a2);
    if (!v9)
    {
        *((unsigned long long *)a0) = 2;
        return 0;
    }
    alloc::str::<impl str>::replace(&v0, v9, a2);
    v2 = v1;
    if (((char)core::slice::<impl [T]>::binary_search_by_key(&v2) & 1))
    {
        *((unsigned long long *)a0) = 2;
    }
    else
    {
        fish::builtins::status::Docs::get::{{closure}}(&v2, v10);
        *((long long *)&a0[80]) = *((long long *)&v7);
        a0[64] = v6;
        a0[48] = v5;
        a0[32] = v4;
        a0[16] = v3;
        *(a0) = v2;
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
}
