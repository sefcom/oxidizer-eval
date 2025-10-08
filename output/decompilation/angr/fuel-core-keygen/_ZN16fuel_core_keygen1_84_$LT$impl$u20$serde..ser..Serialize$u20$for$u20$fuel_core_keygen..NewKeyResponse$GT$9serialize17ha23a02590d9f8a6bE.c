long long fuel_core_keygen::_::<impl serde::ser::Serialize for fuel_core_keygen::NewKeyResponse>::serialize(struct_1 *a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    int v2;  // [bp-0x78]
    char v3;  // [bp-0x68]
    int v4;  // [bp-0x58], Other Possible Types: unsigned long long
    struct_0 *v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    int v7;  // [bp-0x48]
    char v8;  // [bp-0x38]
    unsigned long long v10;  // rax

    (char)v4.serialize_struct("NewKeyResponsesecretaddresspeer_idParseSecretResponsea formatting trait implementation returned an error when the underlying stream did not/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/io/mod.rsfailed to write whole buffer", 14);
    if (v4 == 9223372036854775810)
    {
        a0->field_8 = v1;
        a0->field_0 = 6;
        return v6;
    }
    memcpy(&v3, &v8, 16);
    v2 = v7;
    v0 = v4;
    v1 = v6;
    v10 = v0.serialize_field(&a1->padding_8[80]);
    if (!v10)
    {
        if (a1->field_78)
        {
            v10 = v0.serialize_field(&a1->field_78);
            if (!v10)
                goto LABEL_481c06;
        }
        else
        {
LABEL_481c06:
            if (a1->field_0)
            {
                v5 = a1;
                v10 = v0.serialize_field(&v5);
                if (!v10)
                    goto LABEL_481c22;
            }
            else
            {
LABEL_481c22:
                v10 = v0.serialize_field(&a1[1].padding_8[24]);
                if (!v10)
                {
                    memcpy(&v8, &v3, 16);
                    v7 = v2;
                    *((int128_t *)&v4) = *((int128_t *)&v0);
                    return a0.end(&(char)v4);
                }
            }
        }
    }
    a0->field_8 = v10;
    a0->field_0 = 6;
    return core::ptr::drop_in_place<serde_json::value::ser::SerializeMap>(&v0);
}
