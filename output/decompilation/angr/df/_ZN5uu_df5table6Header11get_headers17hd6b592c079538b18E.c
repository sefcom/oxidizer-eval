long long uu_df::table::Header::get_headers(unsigned long a0, struct_1 *a1)
{
    void* v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    void* v2;  // [bp-0x80]
    struct_0 *v3;  // [bp-0x78]
    unsigned long v4;  // [bp-0x70]
    unsigned long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    unsigned long long v9;  // rdx
    char *v10;  // rax

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v6 = a1.into_iter();
    v7 = v9;
    v10 = v6.next();
    if (!v10)
    {
        v3->field_10 = 0;
        v3->field_0 = *((int128_t *)&v0);
        return 0;
    }
    *((int *)&v5) = (a1->field_55 == 2 ? "df-header-capacitydf-header-use-percentdf-header-mounted-ondf-header-iuseddf-header-iuse-percentdf-header-filedf-header-type/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs \n" : "df-header-use-percentdf-header-mounted-ondf-header-iuseddf-header-iuse-percentdf-header-filedf-header-type/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs \n");
    v4 = (a1->field_55 != 2) * 3 + 18;
    goto (long long)(g_417588[*(v10)] + (char *)&g_417588[0]);
}
