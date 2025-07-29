long long uu_env::split_iterator::SplitIterator::state_single_quoted(struct_0 *a0, struct_1 *a1)
{
    int v0;  // [bp-0x40]
    int v1;  // [bp-0x30]
    char v2;  // [bp-0x20]
    unsigned int v4;  // eax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax

    do
    {
        v4 = a1.get_current_char();
        if (v4 == 92)
        {
            v0.skip_one(a1);
            if ((int)v0 != 12)
                break;
            v0.split_single_quoted_backslash(a1);
        }
        else if (v4 == 39)
        {
            v6 = v0.skip_one(a1);
            if ((int)v0 == 12)
            {
                *((unsigned int *)&a0->field_0) = 12;
                return v6;
            }
        }
        else if (v4 != 0x110000)
        {
            v0.take_one(a1);
        }
        else
        {
            v5 = a1->field_38;
            *((unsigned long long *)&a0->field_0) = 0x2700000000;
            *((unsigned long long *)&a0->padding_1[7]) = v5;
            return v5;
        }
    } while ((int)v0 == 12);
    v7 = *((long long *)&v2);
    a0->field_20 = v7;
    *((void*)&a0->field_10) = v1;
    *((void*)&a0->field_0) = v0;
    return v7;
}
