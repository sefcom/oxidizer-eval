long long bat::line_range::LineRanges::all(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x20]
    struct_0 *v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    struct_0 *v4;  // rax

    v4 = 8.alloc_impl(32, 0);
    if (!v4)
        alloc::alloc::handle_alloc_error(8, 32); /* do not return */
    v4->field_0 = 0;
    v4->field_10 = 0;
    v4->field_18 = 18446744073709551615;
    v0 = 1;
    v1 = v4;
    v2 = 1;
    a0.from(&v0);
    return a0;
}
