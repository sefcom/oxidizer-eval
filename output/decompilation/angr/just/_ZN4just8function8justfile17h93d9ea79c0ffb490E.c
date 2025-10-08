long long just::function::justfile(struct_0 *a0, struct_1 **a1)
{
    char v0;  // [bp-0x28], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    unsigned long long v4;  // rax

    core::str::converts::from_utf8(&v0, *(a1)->field_18->field_8, *(a1)->field_18->field_10);
    if (*((int *)&v0) == 1)
    {
        just::function::justfile::{{closure}}(&a0->field_8, *(a1)->field_18->field_8, *(a1)->field_18->field_10);
        v4 = 1;
    }
    else
    {
        v0.to_vec(v1, *((long long *)&v2));
        a0->field_10 = *((int128_t *)&v1);
        a0->field_8 = v0;
        v4 = 0;
    }
    a0->field_0 = v4;
    return a0;
}
