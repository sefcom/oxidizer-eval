long long fuel_core_client::client::types::_::<impl serde::ser::Serialize for fuel_core_client::client::types::TransactionResponse>::serialize(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    int v2;  // [bp-0x68]
    char v3;  // [bp-0x58]
    int v4;  // [bp-0x48], Other Possible Types: char
    unsigned long long v5;  // [bp-0x40]
    int v6;  // [bp-0x38]
    char v7;  // [bp-0x28]
    unsigned long long v9;  // rax

    v4.serialize_struct("TransactionResponseResolvedOutputexpected a header name, but got None/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/http-1.3.1/src/header/map.rs", 19);
    if (*((long long *)&v4) == 9223372036854775810)
    {
        a0->field_8 = v5;
        a0->field_0 = 6;
        return v5;
    }
    memcpy(&v3, &v7, 16);
    v2 = v6;
    v0 = *((long long *)&v4);
    v1 = v5;
    v9 = v0.serialize_field(a1 + 136);
    if (!v9)
    {
        v9 = v0.serialize_field(a1);
        if (!v9)
        {
            memcpy(&v7, &v3, 16);
            v6 = v2;
            *((int128_t *)&v4) = *((int128_t *)&v0);
            return a0.end(&v4);
        }
    }
    a0->field_8 = v9;
    a0->field_0 = 6;
    return core::ptr::drop_in_place<serde_json::value::ser::SerializeMap>(&v0);
}
