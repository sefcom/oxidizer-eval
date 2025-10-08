long long just::function::module_directory(struct_0 *a0, struct_1 **a1)
{
    char v0;  // [bp-0x30], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax

    v4 = *(a1)->field_10->field_50.parent(*(a1)->field_10->field_58);
    if (!v4)
        core::option::unwrap_failed(&g_82ff68); /* do not return */
    core::str::converts::from_utf8(&v0, v4, v5);
    if ((v0 & 1))
    {
        just::function::module_directory::{{closure}}(&a0->field_8, v4, v5);
        v6 = 1;
    }
    else
    {
        v0.to_vec(v1, *((long long *)&v2));
        a0->field_10 = *((int128_t *)&v1);
        a0->field_8 = v0;
        v6 = 0;
    }
    a0->field_0 = v6;
    return a0;
}
