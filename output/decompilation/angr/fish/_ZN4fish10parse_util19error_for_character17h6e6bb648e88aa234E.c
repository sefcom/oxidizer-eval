long long fish::parse_util::error_for_character(struct_0 *a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x54]
    char v1;  // [bp-0x50]
    unsigned long v2;  // [bp-0x48]
    char v3;  // [bp-0x40]
    void* v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    void* v6;  // [bp-0x20]
    char v7;  // [bp-0x18]
    unsigned long long v9[3];  // rdi
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax
    unsigned long long v14;  // rdx

    v0 = a1;
    switch (a1)
    {
    case 35:
        v9 = &g_14dda50[0];
        break;
    case 42:
        v9 = &g_14dda80[0];
        break;
    case 63:
        v9 = &g_14dda38[0];
        break;
    case 64:
        v9 = &g_14dda68[0];
        break;
    default:
        if (v0.slice_contains("$", 4))
        {
            v9 = &g_14ddae0[0];
            break;
        }
        else if (v0.slice_contains(&g_549a20, 4))
        {
            v9 = &g_14ddac8[0];
            break;
        }
        else
        {
            v4 = 0;
            v5 = 4;
            v6 = 0;
            v1 = 4;
            v2 = v0;
            fish_printf::printf_impl::sprintf_locale(&v7, &v4, g_14dda98[0].localize(), v14, ".", &v1, 1);
            v7.unwrap(&g_14ddab0);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v1);
            a0->field_10 = 0;
            a0->field_0 = *((int128_t *)&v4);
            return 0;
        }
    }
    v1.to_vec(v9.localize(), v11);
    v12 = *((long long *)&v3);
    a0->field_10 = v12;
    a0->field_0 = *((int128_t *)&v1);
    return v12;
}
