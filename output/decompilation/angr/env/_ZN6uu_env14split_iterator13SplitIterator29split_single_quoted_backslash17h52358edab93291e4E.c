long long uu_env::split_iterator::SplitIterator::split_single_quoted_backslash(struct_1 *a0, struct_0 *a1)
{
    unsigned int v0;  // [bp-0x44]
    char v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    int v4;  // [bp-0x30]
    char v5;  // [bp-0x20]
    unsigned long long v7;  // rax
    unsigned long v8;  // rax
    unsigned long long v9;  // rax
    int v10;  // xmm0

    v0 = a1.get_current_char();
    if (v0 <= 91)
    {
        switch (v0)
        {
        case 10:
            v7 = v1.skip_one(a1);
            if (*((int *)&v1) != 12)
            {
                v9 = *((long long *)&v5);
                a0->field_20 = v9;
                v10 = *((int128_t *)&v2);
                *((void*)&a0->field_10) = v4;
                *((void*)&a0->field_0) = v10;
                return v9;
            }
            *((unsigned int *)&a0->field_0) = 12;
            return v7;
        case 39:
LABEL_4be987:
            v7 = v2.take_one(a1);
            if ((int)v2 != 12)
            {
                v9 = *((long long *)&v5);
                a0->field_20 = v9;
                v10 = *((int128_t *)&v2);
                *((void*)&a0->field_10) = v4;
                *((void*)&a0->field_0) = v10;
                return v9;
            }
            break;
        default:
            v2 = "r";
            v3 = " ";
        }
        goto LABEL_4be976;
    }
    else
    {
        switch (v0)
        {
        case 92:
            goto LABEL_4be987;
        case 1114112:
            v8 = a1->field_38;
            *((unsigned long long *)&a0->field_0) = 0x2700000000;
            break;
        default:
            v2 = "r";
            v3 = " ";
LABEL_4be976:
            if (v2.any(&v0))
            {
                a1.push_char_to_word(92);
            }
            else
            {
                v8 = a1->field_38;
                *((unsigned int *)&a0->field_0) = 3;
                *((unsigned int *)&a0->padding_1[3]) = v0;
                break;
            }
        }
        *((unsigned long *)&a0->padding_1[7]) = v8;
        return v8;
    }
}
