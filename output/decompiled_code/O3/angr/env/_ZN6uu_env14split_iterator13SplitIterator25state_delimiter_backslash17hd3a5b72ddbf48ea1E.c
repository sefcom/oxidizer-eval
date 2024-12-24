long long uu_env::split_iterator::SplitIterator::state_delimiter_backslash::hd3a5b72ddbf48ea1(struct_0 *a0, struct_1 *a1, unsigned long a2)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x3c]
    char v2;  // [bp-0x3b]
    char v3;  // [bp-0x30]
    char v4;  // [bp-0x2b]
    char v5;  // [bp-0x20]
    char v6;  // [bp-0x1c]
    unsigned long v8;  // r15
    unsigned long long v11;  // rax
    unsigned int v12;  // rdx
    unsigned long long v13;  // r14
    unsigned int v14;  // ecx
    int v15;  // xmm0
    int v16;  // xmm0
    unsigned long long v17;  // rdx

    v8 = (unsigned int)uu_env::split_iterator::SplitIterator::get_current_char::h2af8d73cb3f5950a(a1);
    switch ((unsigned int)(v8 - 34 & 4294967295))
    {
    case 0: case 1: case 2: case 5: case 58:
        uu_env::split_iterator::SplitIterator::take_one::h3b27d33213b316aa(&v0, a1, v12);
        if (*((int *)&v0) == 8)
            goto LABEL_4d9bf7;
        break;
    case 3: case 4: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 39: case 40: case 41: case 42: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 59: case 60: case 62: case 63: case 64:
        uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::h1351fe90aa1872b3(&v0, a1, v8 & 4294967295);
        v14 = *((int *)&v0);
        v11 = v1;
        if (v14 != 8)
        {
            *((int *)((char *)&a0->field_10 + 4)) = *((int *)&v6);
            v16 = *((int128_t *)&v2);
            *((int128_t *)((char *)&a0->field_5 + 5)) = *((int128_t *)&v4);
            *((void*)&(&a0->field_4)[1]) = v16;
            a0->field_0 = v14;
            a0->field_4 = v11;
            return v11;
        }
        else if (!(char)v11)
        {
            v11 = a1->field_38;
            a0->field_0 = 3;
            *((unsigned int *)&a0->field_4) = v8;
            *((unsigned long long *)&(&a0->field_4)[4]) = v11;
            return v11;
        }
LABEL_4d9bf7:
        return uu_env::split_iterator::SplitIterator::state_unquoted::haba1d13360dad12e(a0, a1, v17);
    case 61:
LABEL_4d9c42:
        v11 = uu_env::split_iterator::SplitIterator::skip_one::h71a98384b0179ac9(&v0, a1);
        if (*((int *)&v0) == 8)
        {
            a0->field_0 = 8;
            return v11;
        }
    case 65:
        a0->field_0 = 6;
        return v11;
    default:
        if ((unsigned int)v8 == 10)
            goto LABEL_4d9c42;
        if ((unsigned int)v8 == 0x110000)
        {
            v13 = a1->field_38;
            v11 = ::0x4d95d0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h58b87609619f8c5b(&a0->field_5, "Delimiter", 9);
            a0->field_0 = 1;
            *((unsigned long long *)&(&a0->field_4)[4]) = v13;
            return v11;
        }
    }
    v11 = *((long long *)&v5);
    *((unsigned long long *)&a0->field_10) = v11;
    v15 = *((int128_t *)&v0);
    a0->field_5 = *((int128_t *)&v3);
    *((void*)&a0->field_0) = v15;
    return v11;
}
