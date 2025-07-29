long long uu_env::split_iterator::SplitIterator::state_comment(struct_0 *a0, unsigned long a1)
{
    int v0;  // [bp-0x48], Other Possible Types: char
    int v1;  // [bp-0x38]
    char v2;  // [bp-0x28]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax

    if ((int)a1.get_current_char() != 10)
    {
        do
        {
            if ((unsigned int)v4 == 0x110000)
            {
                *((unsigned int *)&a0->field_0) = 9;
                return v4;
            }
            a1 + 24.skip_until_char_or_end(10);
            v4 = a1.get_current_char();
        } while ((unsigned int)v4 != 10);
    }
    v5 = v0.skip_one(a1);
    if (*((int *)&v0) != 12)
    {
        v6 = *((long long *)&v2);
        a0->field_20 = v6;
        *((void*)&a0->field_10) = v1;
        *((void*)&a0->field_0) = v0;
        return v6;
    }
    *((unsigned int *)&a0->field_0) = 12;
    return v5;
}
