long long ruff_python_formatter::string::docstring::Indentation::from_str(void* a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned int v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned int v4;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned int v5;  // [bp-0x38]
    unsigned long long v7;  // r15
    unsigned long long v8;  // rax
    void* v9;  // r12
    unsigned long long v10;  // r14
    unsigned long long v11;  // r15
    unsigned long v12;  // r14
    unsigned long long v13;  // r13
    unsigned long long v14;  // r14
    unsigned int v15;  // edx
    unsigned int v16;  // r12d
    unsigned int v17;  // ecx

    v0 = a1;
    v1 = a2 + a1;
    v2 = 1114113;
    v7 = v0.fold();
    v8 = v0.fold();
    v9 = 8;
    if (!v8)
    {
        *((unsigned long long *)&a0[8]) = v7;
        *((unsigned int *)a0) = 0;
        return v8;
    }
    v10 = v8;
    v8 = v0.fold();
    if (!v7)
    {
        if (v8)
        {
            v2.get_or_insert_with(&v0);
            v8 = v8;
            if (v2 == 9)
                goto LABEL_72658e;
            v17 = 2;
            v11 = v10;
            v12 = v8;
LABEL_7266b3:
            *((unsigned long long *)&a0[8]) = v11;
            v9 = 16;
        }
        else
        {
            v17 = 1;
        }
        *((unsigned long long *)(a0 + v9)) = v10;
        *((unsigned int *)a0) = v17;
        return v8;
    }
    else if (!v8)
    {
        v17 = 3;
        v11 = v7;
        goto LABEL_7266b3;
    }
    else
    {
LABEL_72658e:
        v13 = v7 + v10 * 8 + v8;
        v10 + v7 + v8 >> 32.unwrap(&g_97f548);
        v8 = *((long long *)&v2);
        v4 = *((long long *)&v2);
        memcpy(&v3, &v0, 16);
        while (true)
        {
            v5 = 1114113;
            if (v4 == 1114113)
            {
                v8 = core::str::validations::next_code_point(&v3);
                if (((char)v8 & 1))
                    v4 = v15;
            }
            v16 = v4;
            switch (v16)
            {
            case 9:
                v13 = (v13 & 18446744073709551608) + 8;
                v14 += 1;
                break;
            case 32:
LABEL_7265e0:
                v13 += 1;
                v14 += 1;
                continue;
            case 1114112:
                *((unsigned long long *)&a0[8]) = v13;
                *((unsigned int *)&a0[4]) = v14;
                goto LABEL_7266c1__2;
            default:
                v8 = v16 - 9;
                if ((unsigned int)v8 < 5)
                    goto LABEL_7265e0;
                if (v16 >= 128 && (char)::0x6eca90::core::unicode::unicode_data::white_space::lookup(v16))
                {
                    if (v16 < 0x800)
                    {
                        v13 += 2;
                        v8 = 2;
                        v14 += 2;
                        break;
                    }
                    else
                    {
                        v8 = v16 < 0x10000;
                        v13 = v13 - v8 + 4;
                        v14 += 4 - (unsigned int)v8;
                        break;
                    }
                }
            }
        }
LABEL_7266c1__2:
        *((unsigned int *)a0) = 4;
        return v8;
    }
}
