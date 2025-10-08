long long fish::reader::ReaderData::clear(struct_0 *a0, unsigned int a1)
{
    struct_0 *v1;  // rax
    struct_0 *v2;  // 4096
    struct_0 *v3;  // rax

    v1 = &a0[6].padding_0[32];
    if (!a1)
        v2 = a0;
    else
        v2 = v1;
    v3 = v2;
    if (!v3->field_30)
        return v3;
    return a0.erase_substring(a1, 0, v3->field_30);
}
