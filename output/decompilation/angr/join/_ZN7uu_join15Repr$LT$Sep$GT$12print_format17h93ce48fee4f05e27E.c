long long uu_join::Repr<Sep>::print_format(unsigned long long a0[41], unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x50]
    unsigned long v2;  // [bp-0x48]
    unsigned long long v4;  // rbx
    void* v5;  // r14
    unsigned long long v6;  // r14
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long v9;  // rax
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rbx
    unsigned long v14;  // rax, Other Possible Types: unsigned long long
    unsigned long long v15;  // rax

    v1 = a0[33];
    v0 = a0[34];
    v2 = a0[39];
    v4 = a0[37];
    v5 = 0;
    while (true)
    {
        v6 = v5;
        if (v6 >= a0[40])
            return 0;
        v7 = v6.forward_unchecked();
        if (v6)
        {
            v8 = a1.write_all(v1.output_separator(v0), a2);
            if (v8)
                return v8;
        }
        v9 = uu_join::State::print_line::{{closure}}(a2, a3, v6 * 16 + v2);
        if (!v9)
        {
            v14 = a0[36];
            v10 = v11;
            if (!(!v9))
                goto LABEL_4a21f4;
            goto LABEL_4a21f3;
        }
        else
        {
            v14 = v9;
            v10 = v11;
            if (!v9)
            {
LABEL_4a21f3:
                v12 = v4;
                goto LABEL_4a21f6;
            }
            else
            {
LABEL_4a21f4:
                v12 = v10;
LABEL_4a21f6:
                v15 = a1.write_all(v14, v12);
                v5 = v7;
                if (v15)
                    return v15;
            }
        }
    }
}
