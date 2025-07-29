long long uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(struct_0 *a0, unsigned long a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x54]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    int v3;  // [bp-0x40], Other Possible Types: char
    int v4;  // [bp-0x30]
    char v5;  // [bp-0x20]
    struct_1 *v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    v0 = a2;
    v1 = "r";
    v2 = " ";
    v7 = v1.find(&v0);
    if (!v7)
    {
        a0->padding_1[3] = 0;
        *((unsigned int *)&a0->field_0) = 12;
        return v7;
    }
    v3.skip_one(a1);
    if (*((int *)&v3) != 12)
    {
        v9 = *((long long *)&v5);
        a0->field_20 = v9;
        *((void*)&a0->field_10) = v4;
        *((void*)&a0->field_0) = v3;
        return v9;
    }
    v8 = (unsigned long long)a1.push_char_to_word(v7->field_4);
    a0->padding_1[3] = 1;
    *((unsigned int *)&a0->field_0) = 12;
    return v8;
}
