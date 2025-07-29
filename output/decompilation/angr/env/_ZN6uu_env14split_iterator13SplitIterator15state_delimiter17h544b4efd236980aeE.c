long long uu_env::split_iterator::SplitIterator::state_delimiter(struct_0 *a0, unsigned long a1)
{
    int v0;  // [bp-0x58]
    int v1;  // [bp-0x48]
    char v2;  // [bp-0x38]
    unsigned int v3;  // [bp-0x2c]
    char *v5;  // rdi
    unsigned long long v6;  // rax

    while (true)
    {
        v3 = a1.get_current_char();
        switch (v3)
        {
        case 35:
            v0.skip_one(a1);
            if ((int)v0 != 12)
            {
                v6 = *((long long *)&v2);
                a0->field_20 = v6;
                *((void*)&a0->field_10) = v1;
                *((void*)&a0->field_0) = v0;
                return v6;
            }
            v0.state_comment(a1);
            break;
        case 92:
            v0.skip_one(a1);
            if ((int)v0 != 12)
            {
                v6 = *((long long *)&v2);
                a0->field_20 = v6;
                *((void*)&a0->field_10) = v1;
                *((void*)&a0->field_0) = v0;
                return v6;
            }
            v0.state_delimiter_backslash(a1);
            break;
        case 1114112:
            *((unsigned int *)&a0->field_0) = 12;
            return v3;
        default:
            v5 = &v0;
            if (!v3.slice_contains(" ", 6))
            {
                v5.state_unquoted(a1);
                break;
            }
            else
            {
                v5.skip_one(a1);
                break;
            }
        }
        if ((int)v0 != 12)
        {
            v6 = *((long long *)&v2);
            a0->field_20 = v6;
            *((void*)&a0->field_10) = v1;
            *((void*)&a0->field_0) = v0;
            return v6;
        }
    }
}
