long long forc_publish::credentials::_::<impl serde::ser::Serialize for forc_publish::credentials::Credentials>::serialize(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x218], Other Possible Types: char
    unsigned long long v1;  // [bp-0x208]
    char v2;  // [bp-0x1f8], Other Possible Types: unsigned long long
    char v3;  // [bp-0x1f0]
    unsigned long long v4;  // [bp-0x1e8]
    unsigned long long v5;  // [bp-0x1e0]
    char v6;  // [bp-0x1d8]
    unsigned long long v7;  // [bp-0x110]
    char v8;  // [bp-0x108]
    unsigned long long v9;  // [bp-0xf8]
    char v10;  // [bp-0xf0]

    v2.serialize_struct(a3, "CredentialsFieldSet corrupted (this is a bug)Paste your auth token found on https://forc.pub/tokens below: Auth token saved to forc-plugins/forc-publish/src/credentials.rs", 11, 1);
    memcpy(&v0, &v3, 16);
    v1 = v5;
    if (v2 == 9223372036854775809)
    {
        a0->field_10 = v1;
        *((void*)&a0->field_0) = v0;
        return v1;
    }
    ::libc.so.0::memcpy(&v10, &v6, 200);
    memcpy(&v8, &v0, 16);
    v9 = v1;
    v7 = v2;
    v2.serialize_field(&v7, a1, a2);
    if (v2 != 9223372036854775813)
    {
        a0->field_10 = v4;
        a0->field_0 = *((int128_t *)&v2);
        return (unsigned long long)core::ptr::drop_in_place<toml::ser::map::SerializeDocumentTable>(&v7);
    }
    ::libc.so.0::memcpy(&v2, &v7, 232);
    return a0.end(&v2);
}
