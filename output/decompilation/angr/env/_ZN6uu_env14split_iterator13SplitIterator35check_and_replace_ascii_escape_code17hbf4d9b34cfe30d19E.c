long long uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(void* a0, unsigned long a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x54]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    int v3;  // [bp-0x40], Other Possible Types: char
    int v4;  // [bp-0x30]
    char v5;  // [bp-0x20]
    struct_0 *v7;  // rax
    unsigned long long v8;  // rax

    v0 = a2;
    v1 = "r";
    v2 = " ";
    v7 = v1.find(&v0);
    if (v7)
    {
        v3.skip_one(a1);
        if (*((int *)&v3) != 12)
        {
            v8 = *((long long *)&v5);
            *((unsigned long long *)&a0[32]) = v8;
            a0[16] = v4;
            *(a0) = v3;
            return v8;
        }
        v7 = (unsigned long long)a1.push_char_to_word(v7->field_4);
        *((char *)&a0[4]) = 1;
    }
    else
    {
        *((char *)&a0[4]) = 0;
    }
    *((unsigned int *)a0) = 12;
    return v7;
}
