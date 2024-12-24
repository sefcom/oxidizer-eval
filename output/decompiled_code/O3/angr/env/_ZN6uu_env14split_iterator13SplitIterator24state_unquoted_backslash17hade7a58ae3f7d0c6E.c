long long uu_env::split_iterator::SplitIterator::state_unquoted_backslash::hade7a58ae3f7d0c6(struct_1 *a0, struct_0 *a1, unsigned long a2)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x3c]
    char v2;  // [bp-0x3b]
    char v3;  // [bp-0x30]
    char v4;  // [bp-0x2b]
    char v5;  // [bp-0x20]
    char v6;  // [bp-0x1c]
    unsigned int v8;  // eax
    unsigned long v9;  // r15
    unsigned long long v10;  // rax
    unsigned int v11;  // rdx
    unsigned int v12;  // rsi
    unsigned long long v13;  // rdx
    unsigned long long v14;  // r14
    unsigned int v15;  // ecx
    unsigned int v16;  // rsi
    unsigned long long v17;  // rdx
    int v18;  // xmm0
    int v19;  // xmm0

    v8 = uu_env::split_iterator::SplitIterator::get_current_char::h2af8d73cb3f5950a(a1);
    v9 = v8;
    if (v8 > 91)
    {
        if ((unsigned int)v9 > 98)
        {
            switch ((unsigned int)v9)
            {
            case 99:
                v10 = uu_env::split_iterator::SplitIterator::push_word_to_words::hca11ba53a2367eb0(a1, v12, v13);
                a0->field_0 = 6;
                return v10;
            case 1114112:
                v14 = a1->field_38;
                v10 = ::0x4d95d0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h58b87609619f8c5b(&a0->field_5, "Unquoted", 8);
                a0->field_0 = 1;
                *((unsigned long long *)&(&a0->field_4)[4]) = v14;
                return v10;
            default:
                uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::h1351fe90aa1872b3(&v0, a1, v9 & 4294967295);
            }
        }
        else
        {
            switch ((unsigned int)v9)
            {
            case 92:
                break;
            case 95:
                uu_env::split_iterator::SplitIterator::skip_one::h71a98384b0179ac9(&v0, a1);
                if (*((int *)&v0) != 8)
                {
                    v10 = *((long long *)&v5);
                    *((unsigned long long *)&a0->field_10) = v10;
                    v18 = *((int128_t *)&v0);
                    a0->field_5 = *((int128_t *)&v3);
                    *((void*)&a0->field_0) = v18;
                    return v10;
                }
                v10 = uu_env::split_iterator::SplitIterator::push_word_to_words::hca11ba53a2367eb0(a1, v16, v17);
                a0->field_0 = 7;
                return v10;
            default:
                uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::h1351fe90aa1872b3(&v0, a1, v9 & 4294967295);
            }
        }
        v15 = *((int *)&v0);
        v10 = v1;
        if (v15 != 8)
        {
            *((int *)((char *)&a0->field_10 + 4)) = *((int *)&v6);
            v19 = *((int128_t *)&v2);
            *((int128_t *)((char *)&a0->field_5 + 5)) = *((int128_t *)&v4);
            *((void*)&(&a0->field_4)[1]) = v19;
            a0->field_0 = v15;
            a0->field_4 = v10;
            return v10;
        }
        else if (!(char)v10)
        {
            v10 = a1->field_38;
            a0->field_0 = 3;
            *((unsigned int *)&a0->field_4) = v9;
            *((unsigned long long *)&(&a0->field_4)[4]) = v10;
            return v10;
        }
    }
    else
    {
        switch ((unsigned int)v9)
        {
        case 10:
            v10 = uu_env::split_iterator::SplitIterator::skip_one::h71a98384b0179ac9(&v0, a1);
            if (*((int *)&v0) != 8)
            {
                *((long long *)&a0->field_10) = *((long long *)&v5);
                vvar_213{reg 224} = *((int128_t *)&v0);
                a0->field_5 = *((int128_t *)&v3);
                *((void*)&a0->field_0) = v18;
                return v10;
            }
        case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 35: case 37: case 38:
            uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::h1351fe90aa1872b3(&v0, a1, v9 & 4294967295);
            break;
        case 34: case 36: case 39:
            v10 = uu_env::split_iterator::SplitIterator::take_one::h3b27d33213b316aa(&v0, a1, v11);
            if (*((int *)&v0) != 8)
            {
                *((long long *)&a0->field_10) = *((long long *)&v5);
                vvar_218{reg 224} = *((int128_t *)&v0);
                a0->field_5 = *((int128_t *)&v3);
                *((void*)&a0->field_0) = v18;
                return v10;
            }
        default:
            uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::h1351fe90aa1872b3(&v0, a1, v9 & 4294967295);
            break;
        }
    }
    a0->field_0 = 8;
    return v10;
}
