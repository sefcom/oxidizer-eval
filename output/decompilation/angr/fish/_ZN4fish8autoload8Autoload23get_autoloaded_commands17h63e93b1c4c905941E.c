long long fish::autoload::Autoload::get_autoloaded_commands(struct_1 *a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0xa0]
    void* v1;  // [bp-0x90]
    int v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x78]
    int v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x60]
    char v6;  // [bp-0x58]
    unsigned long long v8[3];  // rax
    unsigned long long v9;  // r14

    v0 = a1->field_28.with_capacity_in(8, 24, &g_14c5870);
    v1 = 0;
    v6.iter(&a1->padding_0[16]);
    if (v6.next())
    {
        do
        {
            fish::builtins::fish_indent::fish_indent::{{closure}}(&v4, v8[1], v8[2]);
            v3 = v5;
            v2 = v4;
            v0.push(&v2, &g_14c5888);
            v8 = v6.next();
        } while (v8);
    }
    alloc::slice::stable_sort(v9, 0);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    return a0;
}
