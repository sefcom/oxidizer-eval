void uu_chroot::supplemental_gids(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x108], Other Possible Types: char
    int v1;  // [bp-0xf8]
    int v2;  // [bp-0xe8]
    char v3;  // [bp-0xd8]
    int v4;  // [bp-0xc8]
    char v5;  // [bp-0xb8]
    int v6;  // [bp-0xa8]
    char v7;  // [bp-0x98]
    int v8;  // [bp-0x88]
    int v9;  // [bp-0x78]
    int v10;  // [bp-0x68]
    char v11;  // [bp-0x58]
    int v12;  // [bp-0x48]
    char v13;  // [bp-0x38]
    int v14;  // [bp-0x28]
    char v15;  // [bp-0x18]

    v0.locate(a1);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
    {
        a0->field_0 = 0;
        a0->field_8 = 4;
        a0->field_10 = 0;
        core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(&v0);
    }
    else
    {
        memcpy(&v15, &v7, 16);
        v14 = v6;
        memcpy(&v13, &v5, 16);
        v12 = v4;
        memcpy(&v11, &v3, 16);
        v10 = v2;
        v9 = v1;
        v8 = v0;
        a0.belongs_to(&v8);
        core::ptr::drop_in_place<uucore::features::entries::Passwd>(&v0);
    }
    return;
}
