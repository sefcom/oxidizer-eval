long long uu_env::split_iterator::SplitIterator::state_delimiter_backslash(void* a0, struct_0 *a1)
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned int
    char v1;  // [bp-0x3c]
    char v2;  // [bp-0x3b]
    char v3;  // [bp-0x30]
    char v4;  // [bp-0x2b]
    char v5;  // [bp-0x20]
    char v6;  // [bp-0x1c]
    unsigned int v8;  // r15d
    unsigned long v10;  // rax
    unsigned long long v11;  // r14
    unsigned long long v12;  // rax
    unsigned int v13;  // ecx
    unsigned long v14;  // rax
    unsigned long long v15;  // rax
    int v16;  // xmm0
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    int v19;  // xmm0

    v8 = a1.get_current_char();
    switch (v8)
    {
    case 34: case 35: case 36: case 39: case 92:
        v0.take_one(a1);
        if (v0 == 12)
            return a0.state_unquoted(a1);
        break;
    case 37: case 38: case 40: case 41: case 42: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 59: case 60: case 61: case 62: case 63: case 64: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 91: case 93: case 94: case 96: case 97: case 98:
        break;
    case 95:
        goto LABEL_470922;
    case 99:
        *((unsigned int *)a0) = 9;
        return v10;
    default:
        switch (v8)
        {
        case 10:
LABEL_470922:
            v17 = v0.skip_one(a1);
            if (v0 == 12)
            {
                *((unsigned int *)a0) = 12;
                return v17;
            }
        case 1114112:
            v11 = a1->field_38;
            v12 = a0 + 16.to_vec("Delimitersrc/uu/env/src/string_expander.rssrc/uu/env/src/string_parser.rs=src/uu/env/src/env.rs", 9);
            *((unsigned int *)a0) = 1;
            *((unsigned long long *)&a0[8]) = v11;
            return v12;
        default:
            v0.check_and_replace_ascii_escape_code(a1, v8);
            v13 = v0;
            v14 = v1;
            if (v13 != 12)
            {
                *((int *)&a0[36]) = *((int *)&v6);
                v16 = *((int128_t *)&v2);
                *((int128_t *)&a0[21]) = *((int128_t *)&v4);
                a0[5] = v16;
                *((unsigned int *)a0) = v13;
                *((char *)&a0[4]) = v14;
                return v14;
            }
            else if (((char)v14 & 1))
            {
                return a0.state_unquoted(a1);
            }
            else
            {
                v15 = a1->field_38;
                *((unsigned int *)a0) = 3;
                *((unsigned int *)&a0[4]) = v8;
                *((unsigned long long *)&a0[8]) = v15;
                return v15;
            }
        }
    }
    v18 = *((long long *)&v5);
    *((unsigned long long *)&a0[32]) = v18;
    v19 = *((int128_t *)&v0);
    *((int128_t *)&a0[16]) = *((int128_t *)&v3);
    *(a0) = v19;
    return v18;
}
