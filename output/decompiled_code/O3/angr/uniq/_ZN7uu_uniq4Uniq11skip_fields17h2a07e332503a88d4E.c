long long uu_uniq::Uniq::skip_fields::h2a07e332503a88d4(unsigned long long a0[3], unsigned long a1, unsigned long a2, char *a3, unsigned long a4, unsigned long a5)
{
    char *v2;  // [sp-0x60]
    unsigned long long v3;  // [sp-0x58]
    unsigned long long v9[3];  // rdi
    char *v10;  // rbx
    unsigned long long v15;  // r14
    char *v16;  // rax

    v9 = a0;
    v10 = a3;
    if (!a1)
    {
        if (!a4)
        {
            v15 = 1;
            goto LABEL_4889f8;
        }
        else
        {
            if (a4 < 0)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v15 = __rust_alloc(a4, 1);
            if (v15)
            {
LABEL_4889f8:
                v16 = memcpy(v15, a3, a4);
                a0[0] = a4;
                a0[1] = v15;
                a0[2] = a4;
                return v16;
            }
        }
    }
    v2 = a3;
    v3 = &a3[a4];
    if (!a2)
        goto LABEL_0x4889d9;
    else
        goto LABEL_0x488886;
}
