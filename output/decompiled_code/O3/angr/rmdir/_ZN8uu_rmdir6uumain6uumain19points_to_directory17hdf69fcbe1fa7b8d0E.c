long long uu_rmdir::uumain::uumain::points_to_directory::hdf69fcbe1fa7b8d0(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xb8]
    char v1;  // [bp-0xb0]
    char v2;  // [bp-0x80]

    std::fs::metadata::hfe9ee8a94a05f62b(&v0, a1, a2);
    if (*((int *)&v0) != 2)
        a0->field_1 = (0xf000 & *((int *)&v2)) == 0x4000;
    else
        a0->field_8 = *((long long *)&v1);
    a0->field_0 = 1;
    return a0;
}
