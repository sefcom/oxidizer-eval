long long uu_chcon::get_root_dev_ino(struct_0 *a0)
{
    char v0;  // [bp-0xb8]
    char v1;  // [bp-0xb0]
    char v2;  // [bp-0x98]

    std::fs::symlink_metadata(&v0);
    if (*((int *)&v0) == 2)
    {
        a0.from_io1(*((long long *)&v1));
    }
    else
    {
        *((int128_t *)&(&a0->padding_4)[1]) = *((int128_t *)&v2);
        a0->field_0 = 18;
    }
    return a0;
}
