long long uu_pr::split_lines_if_form_feed(struct_0 *a0, unsigned long long a1[2])
{
    int v0;  // [bp-0x20], Other Possible Types: char
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // rbx

    if (!((char)(((0 ^ a1[0]) & (0 ^ -(a1[0]))) >> 63)))
    {
        v2 = v4;
        uu_pr::split_lines_if_form_feed::{{closure}}(&v0, a1);
        *((void*)&a0->field_0) = v0;
        a0->field_10 = v1;
        return v1;
    }
    return (unsigned long long)uu_pr::split_lines_if_form_feed::{{closure}}(a0, a1[1]);
}
