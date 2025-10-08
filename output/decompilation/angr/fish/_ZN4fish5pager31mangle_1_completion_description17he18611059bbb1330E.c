void fish::pager::mangle_1_completion_description(unsigned long long a0[3])
{
    unsigned long long v0[3];  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax
    unsigned long long v3[3];  // rbx
    void* v4;  // r14
    void* v5;  // r13
    unsigned int v6;  // eax
    unsigned long long v7;  // r13
    void* v8;  // r12
    char v9;  // bl
    void* v10;  // r15
    unsigned int v11;  // ebp
    unsigned long v12;  // rax
    unsigned long long v13;  // rax
    unsigned int v14;  // eax

    v0 = v2;
    v3 = a0;
    v4 = a0[2];
    if (v4)
    {
        v10 = 0;
        while (true)
        {
            v6 = a0[1].char_at(v4, v10);
            if (v6 - 9 >= 5 && v6 != 32 && (v6 < 128 || !(char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v6)))
                break;
            v10 += 1;
            if (v4 == v10)
            {
                v3[2] = 0;
                return;
            }
        }
        if (v10 < v4)
            goto LABEL_13d9590;
    }
    else
    {
        v10 = 0;
        if (false)
        {
LABEL_13d9590:
            v0[0] = a0;
            v7 = a0[1];
            v8 = 0;
            v9 = 0;
            do
            {
                v11 = v7.char_at(v4, v10);
                v12 = v11 - 9;
                if ((unsigned int)v12 < 5 || v11 == 32)
                {
LABEL_13d95da:
                    v13 = v12 & 0xffffffffffffff00 | 1;
                    if ((v9 & 1))
                        continue;
                    if (v8 >= v4)
                        core::panicking::panic_bounds_check(v8, v4, &g_14dc770); /* do not return */
                    v13 = v13 & 0xffffffffffffff00 | 1;
                    v11 = 32;
LABEL_13d95b0:
                    *((unsigned int *)(v7 + v8 * 4)) = v11;
                    v8 += 1;
                }
                else
                {
                    if (v11 >= 128)
                    {
                        v12 = ::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v11);
                        if ((v12 & 255))
                            goto LABEL_13d95da;
                    }
                    if (v8 >= v4)
                        core::panicking::panic_bounds_check(v8, v4, &g_14dc758); /* do not return */
                    v13 = 0;
                    goto LABEL_13d95b0;
                }
                v10 += 1;
                v9 = v13;
            } while (v4 != v10);
            if (!v8)
            {
                v0[2] = 0;
                return;
            }
            v3 = v0;
            do
            {
                v5 = v8;
                v8 -= 1;
                v14 = v3[1].char_at(v4, v8);
                if (v14 - 9 >= 5 && v14 != 32 && (v14 < 128 || !(char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v14)))
                {
                    if (v5 <= v4)
                    {
                        v3[2] = v5;
                        return;
                    }
                    return;
                }
            } while (v8);
        }
    }
    v3[2] = 0;
    return;
}
