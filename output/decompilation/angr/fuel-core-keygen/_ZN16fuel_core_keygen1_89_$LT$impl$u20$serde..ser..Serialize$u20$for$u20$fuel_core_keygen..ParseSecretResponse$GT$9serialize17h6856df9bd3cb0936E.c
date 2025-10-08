long long fuel_core_keygen::_::<impl serde::ser::Serialize for fuel_core_keygen::ParseSecretResponse>::serialize(struct_0 *a0, struct_1 *a1)
{
    int v0;  // [bp-0x88], Other Possible Types: unsigned long long
    struct_1 *v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    int v3;  // [bp-0x78]
    char v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    int v7;  // [bp-0x40]
    char v8;  // [bp-0x30]
    unsigned long long v10;  // rax

    (char)v0.serialize_struct("ParseSecretResponsea formatting trait implementation returned an error when the underlying stream did not/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/io/mod.rsfailed to write whole buffer", 19);
    if (v0 == 9223372036854775810)
    {
        a0->field_8 = v2;
        a0->field_0 = 6;
        return v2;
    }
    v7 = v3;
    memcpy(&v8, &v4, 16);
    v5 = v0;
    v6 = v2;
    if (a1->field_58)
    {
        v10 = v5.serialize_field(&a1->field_58);
        if (v10)
        {
            a0->field_8 = v10;
            a0->field_0 = 6;
            return core::ptr::drop_in_place<serde_json::value::ser::SerializeMap>(&v5);
        }
    }
    if (a1->field_0)
    {
        v1 = a1;
        v10 = v5.serialize_field(&v1);
        if (v10)
        {
            a0->field_8 = v10;
            a0->field_0 = 6;
            return core::ptr::drop_in_place<serde_json::value::ser::SerializeMap>(&v5);
        }
    }
    v10 = v5.serialize_field(&a1[1].padding_8[24]);
    if (!v10)
    {
        memcpy(&v4, &v8, 16);
        v3 = v7;
        *((int128_t *)&v0) = *((int128_t *)&v5);
        return a0.end(&(char)v0);
    }
    a0->field_8 = v10;
    a0->field_0 = 6;
    return core::ptr::drop_in_place<serde_json::value::ser::SerializeMap>(&v5);
}
