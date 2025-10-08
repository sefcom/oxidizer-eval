long long uu_join::Repr<Sep>::print_format(unsigned long long a0[5], unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax
    unsigned long long v3;  // r13
    unsigned long long v4;  // r15
    unsigned long long v5;  // rax
    unsigned long v6;  // rax, Other Possible Types: unsigned long long
    unsigned long long v7;  // r15
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long v11;  // r12
    unsigned long v12;  // r13
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long v15;  // rax, Other Possible Types: unsigned long long
    unsigned long long v16;  // rdx
    unsigned long long v17;  // r15
    unsigned long long v19;  // rax

    v0 = v2;
    v3 = a0[2];
    if (!a0[2])
        return 0;
    v4 = a0[4];
    v5 = uu_join::State::combine::{{closure}}(a2, a0[1]);
    if (!v5)
    {
        v6 = a0[3];
        if (v5)
            goto LABEL_45e72e;
LABEL_45e72d:
        v7 = v4;
    }
    else
    {
        v6 = v5;
        if (!v5)
            goto LABEL_45e72d;
LABEL_45e72e:
        v7 = v9;
    }
    v10 = a1.write_all(v6, v7);
    if (v10)
        return v10;
    v0 = a0[3];
    v11 = a0[1] + 16;
    while (true)
    {
        v12 = v3 - 1;
        if (v3 == 1)
            break;
        v13 = a1.write_all(1, 0);
        if (v13)
            return v13;
        v14 = uu_join::State::combine::{{closure}}(a2, v11);
        if (!v14)
        {
            v15 = v0;
            v16 = v8;
            if (v14)
                goto LABEL_45e783;
            goto LABEL_45e782;
        }
        else
        {
            v15 = v14;
            v16 = v8;
            if (!v14)
            {
LABEL_45e782:
                v17 = v4;
                goto LABEL_45e785;
            }
            else
            {
LABEL_45e783:
                v17 = v16;
LABEL_45e785:
                v19 = a1.write_all(v15, v17);
                v11 += 16;
                v3 = v12;
                if (v19)
                    return v19;
            }
        }
    }
    return 0;
}
