long long uu_join::Repr<Sep>::print_format(unsigned long long a0[5], unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    unsigned long long v3;  // rbx
    void* v4;  // rbp
    unsigned long long v5;  // rbp
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long v8;  // rax
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rbx
    unsigned long v13;  // rax, Other Possible Types: unsigned long long
    unsigned long long v14;  // rax

    v1 = a0[1];
    v0 = (char *)&a0[1] + 1;
    v3 = a0[4];
    v4 = 0;
    while (true)
    {
        v5 = v4;
        if (v5 >= a0[2])
            return 0;
        v6 = v5.forward_unchecked();
        if (v5)
        {
            v7 = a1.write_all(v0.output_separator(), 1);
            if (v7)
                return v7;
        }
        v8 = uu_join::State::combine::{{closure}}(a2, v5 * 16 + v1);
        if (!v8)
        {
            v13 = a0[3];
            v9 = v10;
            if (!(!v8))
                goto LABEL_4a1e0f;
            goto LABEL_4a1e0e;
        }
        else
        {
            v13 = v8;
            v9 = v10;
            if (!v8)
            {
LABEL_4a1e0e:
                v11 = v3;
                goto LABEL_4a1e11;
            }
            else
            {
LABEL_4a1e0f:
                v11 = v9;
LABEL_4a1e11:
                v14 = a1.write_all(v13, v11);
                v4 = v6;
                if (v14)
                    return v14;
            }
        }
    }
}
