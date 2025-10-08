long long fish::color::Color::named_color_names(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    void* v2;  // [bp-0x10]
    unsigned long long v4;  // rdx

    v0 = 22.with_capacity_in(8, 16, &g_14d56f0);
    v1 = v4;
    v2 = 0;
    v0.extend_desugared();
    v0.push("n", 6, &g_14d5918);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    return a0;
}
