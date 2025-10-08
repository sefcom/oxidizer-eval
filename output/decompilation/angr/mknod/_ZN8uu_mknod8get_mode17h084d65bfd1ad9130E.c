long long uu_mknod::get_mode(struct_0 *a0, unsigned long long a1[3])
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned long
    char v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    char v3;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned int v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x44]
    unsigned int v6;  // [bp-0x3c]
    unsigned long long v7;  // [bp-0x38]
    unsigned int v8;  // [bp-0x30]
    char v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x18]

    if (a1)
    {
        uucore::features::mode::parse_mode(&v0, a1[1], a1[2]);
        if (v0 != 0x8000000000000000)
        {
            v10 = v2;
            memcpy(&v9, &v0, 16);
            uu_mknod::get_mode::{{closure}}(&v3, &v9);
            v8 = v6;
            v7 = v5;
            *((unsigned int *)((char *)&a0->field_c + 4)) = v6;
            *((unsigned long long *)&(&a0->field_8)[1]) = v5;
            a0->field_0 = v3;
            a0->field_8 = v4;
            return a0;
        }
        if (*((int *)&v1) > 511)
        {
            a0.to_vec("mode must specify only file permission bitsinvalid mode ()", 43);
            return a0;
        }
        a0->field_8 = *((int *)&v1);
    }
    else
    {
        a0->field_8 = 438;
    }
    a0->field_0 = 0x8000000000000000;
    return a0;
}
