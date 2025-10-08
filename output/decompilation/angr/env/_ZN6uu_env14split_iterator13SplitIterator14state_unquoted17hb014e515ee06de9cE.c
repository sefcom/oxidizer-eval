long long uu_env::split_iterator::SplitIterator::state_unquoted(void* a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x58]
    char v1;  // [bp-0x54]
    char v2;  // [bp-0x48]
    char v3;  // [bp-0x44]
    char v4;  // [bp-0x38]
    char v5;  // [bp-0x34]
    unsigned int v6;  // [bp-0x2c]
    unsigned long v8;  // rax
    int v9;  // xmm0
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    int v13;  // xmm0

    while (true)
    {
        v6 = a1.get_current_char();
        if (v6 > 38)
        {
            switch (v6)
            {
            case 39:
                v0.skip_one(a1);
                if (v0 != 12)
                {
                    v12 = *((long long *)&v4);
                    *((unsigned long long *)&a0[32]) = v12;
                    v13 = *((int128_t *)&v0);
                    *((int128_t *)&a0[16]) = *((int128_t *)&v2);
                    *(a0) = v13;
                    return v12;
                }
                v0.state_single_quoted(a1);
                break;
            case 92:
                v0.skip_one(a1);
                if (v0 != 12)
                {
                    v12 = *((long long *)&v4);
                    *((unsigned long long *)&a0[32]) = v12;
                    v13 = *((int128_t *)&v0);
                    *((int128_t *)&a0[16]) = *((int128_t *)&v2);
                    *(a0) = v13;
                    return v12;
                }
                v0.state_unquoted_backslash(a1);
                break;
            case 1114112:
                v10 = a1.push_word_to_words();
                *((unsigned int *)a0) = 9;
                return v10;
            default:
LABEL_470aae:
                goto LABEL_470aae;
            }
            goto LABEL_470a19;
        }
        switch (v6)
        {
        case 34:
            v0.skip_one(a1);
            if (v0 != 12)
            {
                v12 = *((long long *)&v4);
                *((unsigned long long *)&a0[32]) = v12;
                v13 = *((int128_t *)&v0);
                *((int128_t *)&a0[16]) = *((int128_t *)&v2);
                *(a0) = v13;
                return v12;
            }
            v0.state_double_quoted(a1);
LABEL_470a19:
            if (v0 != 12)
            {
                v12 = *((long long *)&v4);
                *((unsigned long long *)&a0[32]) = v12;
                v13 = *((int128_t *)&v0);
                *((int128_t *)&a0[16]) = *((int128_t *)&v2);
                *(a0) = v13;
                return v12;
            }
            continue;
        case 36:
            v0.substitute_variable(a1);
            goto LABEL_470a19;
        default:
LABEL_470aae:
            if (v6.slice_contains(" ", 6))
                goto LABEL_470b06;
            v0.take_one(a1);
            v8 = v0;
            if ((unsigned int)v8 != 12)
            {
                *((int *)&a0[36]) = *((int *)&v5);
                v9 = *((int128_t *)&v1);
                *((int128_t *)&a0[20]) = *((int128_t *)&v3);
                a0[4] = v9;
                *((unsigned int *)a0) = v8;
                return v8;
            }
            break;
        }
    }
LABEL_470b06:
    a1.push_word_to_words();
    v11 = v0.skip_one(a1);
    if (v0 != 12)
    {
        v12 = *((long long *)&v4);
        *((unsigned long long *)&a0[32]) = v12;
        v13 = *((int128_t *)&v0);
        *((int128_t *)&a0[16]) = *((int128_t *)&v2);
        *(a0) = v13;
        return v12;
    }
    *((unsigned int *)a0) = 12;
    return v11;
}
