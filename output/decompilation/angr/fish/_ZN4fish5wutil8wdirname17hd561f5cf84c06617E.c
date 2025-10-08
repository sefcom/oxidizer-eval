long long fish::wutil::wdirname(unsigned long long a0, void* a1)
{
    unsigned long long v0;  // [bp-0x28]
    void* v1;  // [bp-0x20]
    void* v3;  // r14
    unsigned long long v4;  // rbx
    void* v5;  // r15
    unsigned long long v6;  // rbx
    void* v7;  // rax
    unsigned long v8;  // rax
    void* v9;  // rdx
    char v10;  // al
    unsigned long v11;  // cc_ndep
    unsigned long long v12;  // rbx
    char v13;  // al
    void* v14;  // rcx
    unsigned long v15;  // rcx
    void* v16;  // r14
    void* v17;  // r14

    v3 = a1;
    v4 = a0;
    v5 = a0 + a1 * 4;
    if (a0.eq_by(v5, "//Wrote more than requestedcursor should be a subslice of baseoffset should be non-negativesrc/abbrs.rs", "Wrote more than requestedcursor should be a subslice of baseoffset should be non-negativesrc/abbrs.rs"))
        return v4;
    if (a1)
    {
        v0 = a0;
        v1 = v5;
        if (v0.try_fold().eq(0))
        {
            v6 = "/";
        }
        else
        {
            v7 = v5;
            v8 = v7 - 4;
            if (v7 != 4)
            {
                while (*((int *)v8) == 47)
                {
                    v4 = v4.slice_to(v3, v3 - 1);
                    v3 = v9;
                    v5 = v4 + v9 * 4;
                    if (!v9)
                        break;
                    if (!v4 + v9 * 4 - 4)
                        break;
                }
            }
LABEL_12ee650:
            v0 = v4;
            v1 = v5;
            v10 = v0.rposition();
            if ((v10 & 1))
            {
                if (!((char)_ccall(4, 24, v9 + 1, 0, _ccall(17, (unsigned long long)(v10 & 1), 0, v11))))
                {
                    v12 = v4.slice_to(v3, v9 + 1);
                    v13 = !v9;
                    v14 = v12 + v9 * 4;
                    v15 = v14 - 4;
                    if (!!v14 - 4 && !!v9)
                    {
                        while (true)
                        {
                            v17 = v16;
                            if (*((int *)v15) != 47)
                                return v12;
                            v12 = v12.slice_to(v17, v17 - 1);
                            v13 = !v9;
                            if (!v9)
                                break;
                            v15 = v12 + v9 * 4 - 4;
                            if (!v15)
                                break;
                        }
                    }
                    if ((v13 & 1))
                        v12 = "/";
                    return v12;
                }
                else
                {
                    core::panicking::panic_const::panic_const_add_overflow(&g_14c16c0); /* do not return */
                }
            }
            v6 = ".";
        }
        return v6;
    }
    v3 = 0;
    goto LABEL_12ee650;
}
