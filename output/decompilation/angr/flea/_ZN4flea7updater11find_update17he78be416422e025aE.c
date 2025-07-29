long long flea::updater::find_update(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0xe8]
    unsigned long long v1;  // [bp-0xe0]
    unsigned long long v2;  // [bp-0xd8]
    char v3;  // [bp-0xd0], Other Possible Types: unsigned long
    unsigned long long v4;  // [bp-0xc8]
    char v5;  // [bp-0xc0]

    v0.to_owned(a1, a2);
    v0.push(a3, a4);
    std::fs::metadata(&v3, v1, v2);
    ::0x6858a0::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v3);
    if ((unsigned int)v3 == 2)
    {
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
    }
    else
    {
        v3.try_from(v1, v2);
        if ((v3 & 1))
            core::option::unwrap_failed(&g_af6268); /* do not return */
        v3.to_vec(v4, *((long long *)&v5));
        a0->field_10 = *((long long *)&v5);
        *((int128_t *)&a0->field_0) = *((int128_t *)&v3);
    }
    ::0x6854d0::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    return a0;
}
