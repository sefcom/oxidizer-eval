long long fish::parse_constants::token_type_user_presentable_description(struct_0 *a0, char a1, char a2)
{
    void* v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    void* v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    char v6;  // [bp-0x28]
    unsigned long long v8;  // rdx

    if (a2)
    {
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v3 = 1;
        v4 = a2.to_wstr();
        v5 = v8;
        fish_printf::printf_impl::sprintf_locale(&v6, &v0, "keyword: '%ls'a %lsa", 14, &v3, 1);
        v6.unwrap(&g_14dcb90);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v3);
        a0->field_10 = 0;
        a0->field_0 = *((int128_t *)&v0);
        return a0;
    }
    goto (long long)(g_9f5120[1 + a1] + (char *)&g_9f5120[0]);
}
