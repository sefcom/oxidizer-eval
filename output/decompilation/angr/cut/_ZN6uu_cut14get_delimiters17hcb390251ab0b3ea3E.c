long long uu_cut::get_delimiters(unsigned long long a0[5], unsigned long long a1)
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x50]
    unsigned long v2;  // [bp-0x48]
    unsigned int v3;  // [bp-0x40]
    char v5;  // bpl
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // rsi
    char *v8;  // r14
    unsigned long long v9;  // rdx
    unsigned long long v10[3];  // r15
    unsigned long long v11;  // r12
    void* v12;  // r15
    unsigned long long v13;  // rax
    unsigned long long v14;  // r12
    unsigned long long v15[3];  // rax
    unsigned long v16;  // rax
    unsigned long v17;  // rdx

    v5 = a1.get_flag("whitespace-delimiteddelimiter''", 20);
    v0.try_get_one(a1, "delimiter''", 9);
    v6 = "delimiter''".unwrap(9, &v0);
    if (!v6)
    {
        if (!v5)
            v12 = "\t-: \n: Is a directory\ninvalid input: Only one of --delimiter (-d) or -w option can be specifiedthe delimiter must be a single characterwhitespace-delimiteddelimiter''";
        else
            v12 = 0;
        goto LABEL_46a130;
    }
    if (v5)
    {
        v7 = "invalid input: Only one of --delimiter (-d) or -w option can be specifiedthe delimiter must be a single characterwhitespace-delimiteddelimiter''";
        v8 = &v0;
        v9 = 73;
        goto LABEL_46a1ea;
    }
    v10 = v6;
    v11 = v6[2];
    if (!v11 || (char)v6[1].eq(v11))
    {
        v12 = &g_41ed1f;
LABEL_46a130:
        v14 = 1;
        goto LABEL_46a136;
    }
    else
    {
        core::str::converts::from_utf8(&v0, v6[1], v11);
        if (*((int *)&v0) == 1 || v1.count(v2 + v1) <= 1)
        {
            core::str::converts::from_utf8(&v0, v10[1], v10[2]);
            if (v11 != 1 && v0)
                goto LABEL_46a1db;
            v12 = v10.from();
LABEL_46a136:
            v0.try_get_one(a1, "output-delimiterClapErrorWrapperPermissionDeniedStripPrefixError", 16);
            v15 = "output-delimiterClapErrorWrapperPermissionDeniedStripPrefixError".unwrap(16, &v0);
            v16 = (!v15 ? 0 : uu_cut::get_delimiters::{{closure}}(v15[1], v15[2]));
            a0[1] = v12;
            a0[2] = v14;
            a0[3] = v16;
            a0[4] = v17;
            v13 = 0;
        }
        else
        {
LABEL_46a1db:
            v7 = "the delimiter must be a single characterwhitespace-delimiteddelimiter''";
            v8 = &v0;
            v9 = 40;
LABEL_46a1ea:
            v8.to_vec(v7, v9);
            v3 = 1;
            *((double *)&a0[1]) = v8.new();
            a0[2] = &g_4f9218;
            v13 = 1;
        }
    }
    a0[0] = v13;
    return a0;
}
