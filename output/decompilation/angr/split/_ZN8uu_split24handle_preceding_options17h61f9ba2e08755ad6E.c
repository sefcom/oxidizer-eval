long long uu_split::handle_preceding_options(unsigned long long a0, unsigned long long a1, char *a2, char *a3)
{
    unsigned int v0;  // [bp-0x3c]
    char *v1;  // [bp-0x38]
    char *v3;  // r13
    unsigned long long v4;  // rax
    unsigned long long v5;  // r13
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax

    v3 = a2;
    if ((char)core::slice::<impl [T]>::starts_with(a0, a1, "---a-b-C-l-n-tsrc/uu/split/src/split.rs", 2))
    {
        v1 = a2;
        v4 = a0.get(a1);
        if (!v4)
            core::str::slice_error_fail(a0, a1, 2, a1, &g_5a6de0); /* do not return */
        v5 = v4;
        if (!(char)v4.equal(v6, "bytesline-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5) && !(char)v5.equal(v6, "line-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 10) && !(char)v5.equal(v6, "linesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5) && !(char)v5.equal(v6, "additional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 17) && !(char)v5.equal(v6, "filternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6) && !(char)v5.equal(v6, "number-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6) && !(char)v5.equal(v6, "suffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 13))
            v5.equal(v6, "separatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 9);
        v3 = v1;
        *(v1) = 1;
    }
    if (!(char)a0.equal(a1, "-b-C-l-n-tsrc/uu/split/src/split.rs", 2) && !(char)a0.equal(a1, "-C-l-n-tsrc/uu/split/src/split.rs", 2) && !(char)a0.equal(a1, "-l-n-tsrc/uu/split/src/split.rs", 2) && !(char)a0.equal(a1, "-n-tsrc/uu/split/src/split.rs", 2) && !(char)a0.equal(a1, "-a-b-C-l-n-tsrc/uu/split/src/split.rs", 2))
        a0.equal(a1, "-tsrc/uu/split/src/split.rs", 2);
    *(a3) = 1;
    v0 = 0;
    v7 = core::slice::<impl [T]>::starts_with(a0, a1, ::0x4ae4d0::core::char::methods::encode_utf8_raw(45, &v0), v6);
    if ((char)v7)
        return v7;
    *(a3) = 0;
    *(v3) = 0;
    return v7;
}
