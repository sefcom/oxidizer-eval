long long fd::hyperlink::PathUrl::new(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0[3];  // [bp-0x28]
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rax

    fd::filesystem::absolute_path(&v0, a1, a2);
    v3 = -(v0);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        v3 = core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v0);
    else
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v1);
    *((unsigned long long [3])&a0->field_0) = v0;
    return v3;
}
