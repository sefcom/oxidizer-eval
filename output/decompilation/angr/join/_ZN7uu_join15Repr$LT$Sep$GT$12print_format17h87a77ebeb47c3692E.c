long long uu_join::Repr<Sep>::print_format(unsigned long long a0[5], unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v0;  // [bp-0x48]
    unsigned long long v2;  // rbx
    void* v3;  // rbp
    unsigned long long v4;  // rbp
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long v7;  // rax
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rbx
    unsigned long v12;  // rax, Other Possible Types: unsigned long long
    unsigned long long v13;  // rax

    v0 = a0[1];
    v2 = a0[4];
    v3 = 0;
    while (true)
    {
        v4 = v3;
        if (v4 >= a0[2])
            return 0;
        v5 = v4.forward_unchecked();
        if (v4)
        {
            v6 = a1.write_all(1, 0);
            if (v6)
                return v6;
        }
        v7 = uu_join::State::print_line::{{closure}}(a2, a3, v4 * 16 + v0);
        if (!v7)
        {
            v12 = a0[3];
            v8 = v9;
            if (!(!v7))
                goto LABEL_4a2113;
            goto LABEL_4a2112;
        }
        else
        {
            v12 = v7;
            v8 = v9;
            if (!v7)
            {
LABEL_4a2112:
                v10 = v2;
                goto LABEL_4a2115;
            }
            else
            {
LABEL_4a2113:
                v10 = v8;
LABEL_4a2115:
                v13 = a1.write_all(v12, v10);
                v3 = v5;
                if (v13)
                    return v13;
            }
        }
    }
}
