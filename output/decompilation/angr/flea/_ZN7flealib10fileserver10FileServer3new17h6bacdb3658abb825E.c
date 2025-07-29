long long flealib::fileserver::FileServer::new(struct_0 *a0)
{
    char v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    char v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    char v5;  // [bp-0x18]

    std::env::current_dir(&v0);
    v3.unwrap(&v0);
    v0.try_from(v4, *((long long *)&v5));
    if ((v0 & 1))
        core::option::unwrap_failed(&g_b09898); /* do not return */
    v0.to_vec(v1, v2);
    a0->field_10 = v2;
    a0->field_0 = *((int128_t *)&v0);
    ::0x7789a0::core::ptr::drop_in_place<std::path::PathBuf>(&v3);
    return a0;
}
