long long uu_ls::dired::is_dired_arg_present::hfa47651b9ad37160()
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned long long v5;  // rbx
    unsigned long long v6;  // r14
    void* v7;  // rcx
    unsigned int v8;  // ebp
    unsigned short *v9;  // rdi
    unsigned long long v10;  // r8
    struct_0 *v11;  // r15
    unsigned long long v13;  // r14

    std::env::args::hcc0787e3c3e9e7bb(&v3);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h1bf152c81312134c(&v0, &v3);
    v5 = *((long long *)&v1);
    v6 = *((long long *)&v2);
    if (!v6)
    {
        v8 = 0;
    }
    else
    {
        v7 = 0;
LABEL_4e7054:
        v9 = *((long long *)(8 + v5 + (char *)v7));
        switch (v10)
        {
        case 2:
            if (!(*(v9) == 17453))
                goto LABEL_4e704b;
LABEL_4e707a:
            v8 = vvar_62{reg 56} | -0x100 | 1;
            break;
        case 7:
            if (!(!(*((int *)((char *)&v9[1] + 1)) ^ 1684370025)) || !(!(*((int *)&v9) ^ 1768172845)))
                goto LABEL_4e704b;
            goto LABEL_4e707a;
        default:
LABEL_4e704b:
            v7 += 24;
            if ((v6 << 3) + (v6 << 3 << 1) == v7)
                goto LABEL_4e70b0;
            else
                goto LABEL_4e7054;
            goto LABEL_4e7054;
        }
LABEL_4e70b0:
        v8 = 0;
        v11 = v5 + 8;
        do
        {
            if (v11->field_0)
                __rust_dealloc(v11->field_-8);
        } while ((v11 += 24, v13 = v6 - 1, v6 != 1));
    }
    if (*((long long *)&v0))
        __rust_dealloc(v5);
    return v8;
}
