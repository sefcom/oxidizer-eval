long long just::function::module_file(struct_0 *a0, struct_1 **a1)
{
    char v0;  // [bp-0x28], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    unsigned long long v4[12];  // r14
    unsigned long long v5;  // rax

    v4 = *(a1)->field_10;
    core::str::converts::from_utf8(&v0, v4[10], v4[11]);
    if (*((int *)&v0) == 1)
    {
        just::function::module_file::{{closure}}(&a0->field_8, v4[10], v4[11]);
        v5 = 1;
    }
    else
    {
        v0.to_vec(v1, *((long long *)&v2));
        a0->field_10 = *((int128_t *)&v1);
        a0->field_8 = v0;
        v5 = 0;
    }
    a0->field_0 = v5;
    return a0;
}
