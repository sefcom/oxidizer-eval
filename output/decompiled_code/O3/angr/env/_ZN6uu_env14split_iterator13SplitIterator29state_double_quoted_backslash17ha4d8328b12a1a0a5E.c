long long uu_env::split_iterator::SplitIterator::state_double_quoted_backslash::ha4d8328b12a1a0a5(struct_0 *a0, struct_1 *a1, unsigned long a2)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x3c]
    char v2;  // [bp-0x3b]
    char v3;  // [bp-0x30]
    char v4;  // [bp-0x2b]
    char v5;  // [bp-0x20]
    char v6;  // [bp-0x1c]
    unsigned int v8;  // eax
    unsigned long long v9;  // rax
    unsigned int v10;  // rdx
    unsigned int v11;  // ecx
    int v12;  // xmm0
    int v13;  // xmm0

    v8 = uu_env::split_iterator::SplitIterator::get_current_char::h2af8d73cb3f5950a(a1);
    if (v8 > 91)
    {
        if (v8 == 92)
            goto LABEL_4da2d4;
        if (v8 == 99)
        {
            v9 = a1->field_38;
            a0->field_0 = 2;
        }
        else
        {
            if (!(v8 == 0x110000))
                goto LABEL_4da31a;
            v9 = a1->field_38;
            *((long long *)&a0->field_0) = 0x2200000000;
        }
        *((unsigned long long *)&(&a0->field_4)[4]) = v9;
        return v9;
    }
    else
    {
        if (v8 == 10)
        {
            v9 = uu_env::split_iterator::SplitIterator::skip_one::h71a98384b0179ac9(&v0, a1);
            if (*((int *)&v0) != 8)
            {
                v9 = *((long long *)&v5);
                *((unsigned long long *)&a0->field_10) = v9;
                v12 = *((int128_t *)&v0);
                a0->field_5 = *((int128_t *)&v3);
                *((void*)&a0->field_0) = v12;
                return v9;
            }
        }
        else if (!(v8 != 34) || !(v8 != 36))
        {
LABEL_4da2d4:
            v9 = uu_env::split_iterator::SplitIterator::take_one::h3b27d33213b316aa(&v0, a1, v10);
            if (*((int *)&v0) != 8)
            {
                *((long long *)&a0->field_10) = *((long long *)&v5);
                vvar_169{reg 224} = *((int128_t *)&v0);
                a0->field_5 = *((int128_t *)&v3);
                *((void*)&a0->field_0) = v12;
                return v9;
            }
        }
        else
        {
LABEL_4da31a:
            uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::h1351fe90aa1872b3(&v0, a1, v8);
            v11 = *((int *)&v0);
            v9 = v1;
            if (v11 != 8)
            {
                *((int *)((char *)&a0->field_10 + 4)) = *((int *)&v6);
                v13 = *((int128_t *)&v2);
                *((int128_t *)((char *)&a0->field_5 + 5)) = *((int128_t *)&v4);
                *((void*)&(&a0->field_4)[1]) = v13;
                a0->field_0 = v11;
                a0->field_4 = v9;
                return v9;
            }
            else if (!(char)v9)
            {
                v9 = a1->field_38;
                a0->field_0 = 3;
                *((unsigned int *)&a0->field_4) = v8;
                *((unsigned long long *)&(&a0->field_4)[4]) = v9;
                return v9;
            }
        }
        a0->field_0 = 8;
        return v9;
    }
}
