long long uu_rmdir::uumain::uumain::points_to_directory(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xb8]
    char v1;  // [bp-0xb0]
    char v2;  // [bp-0x80]
    char v4;  // al

    std::fs::metadata(&v0, a1, a2);
    if (*((int *)&v0) == 2)
    {
        a0->field_8 = *((long long *)&v1);
        v4 = 1;
    }
    else
    {
        a0->field_1 = (0xf000 & *((int *)&v2)) == 0x4000;
    }
    a0->field_0 = v4;
    return a0;
}
