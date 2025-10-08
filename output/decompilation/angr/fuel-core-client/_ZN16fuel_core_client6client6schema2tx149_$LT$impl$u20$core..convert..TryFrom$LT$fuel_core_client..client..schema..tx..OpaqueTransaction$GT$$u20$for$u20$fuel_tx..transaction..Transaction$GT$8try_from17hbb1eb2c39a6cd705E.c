long long fuel_core_client::client::schema::tx::<impl core::convert::TryFrom<fuel_core_client::client::schema::tx::OpaqueTransaction> for fuel_tx::transaction::Transaction>::try_from(struct_0 *a0, unsigned long long a1[3])
{
    unsigned long v0;  // [bp-0x1d8]
    unsigned long v1;  // [bp-0x1d0]
    char v2;  // [bp-0x1c8], Other Possible Types: unsigned long
    int v3;  // [bp-0x1c0]
    char v4;  // [bp-0x1b0]
    unsigned long long v5;  // [bp-0x18]
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r15

    v5 = v7;
    v8 = a1[0];
    v0 = a1[1];
    v1 = a1[2];
    v2.decode(&v0);
    if (v2 == 9223372036854775814)
    {
        a0->field_20 = *((long long *)&v4);
        *((void*)&a0->field_10) = v3;
        a0->field_8 = 6;
        a0->field_0 = 9223372036854775814;
    }
    else
    {
        memcpy(a0, &v2, 432);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v8, v0);
    return a0;
}
