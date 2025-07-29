long long uu_unlink::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x318], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x310]
    int v2;  // [bp-0x308]
    char v3;  // [bp-0x2f8]
    unsigned long long v4;  // [bp-0x2e8]
    char v5;  // [bp-0x2e0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x2d8]
    int v7;  // [bp-0x2d0]
    char v8;  // [bp-0x2c0]
    unsigned long long v9;  // [bp-0x2b0]
    unsigned long long v11;  // rdi
    unsigned long long v12[3];  // rax
    unsigned long long v13;  // rax

    uu_unlink::uu_app(&v5);
    v0.try_get_matches_from(&v5, a0, a1);
    v11 = v1;
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return v6.from();
    v9 = v4;
    memcpy(&v8, &v3, 16);
    v7 = v2;
    v5 = v0;
    v6 = v1;
    v0.try_get_one(&v5, _ZN9uu_unlink8OPT_PATH17h61d7011c1135b5a2E, g_5688b0);
    v12 = _ZN9uu_unlink8OPT_PATH17h61d7011c1135b5a2E.unwrap(g_5688b0, &v0);
    if (!v12)
        core::option::unwrap_failed(&g_568828); /* do not return */
    v13 = std::fs::remove_file(v12[1], v12[2]).map_err_context(v12[1], v12[2]);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v5);
    return v13;
}
