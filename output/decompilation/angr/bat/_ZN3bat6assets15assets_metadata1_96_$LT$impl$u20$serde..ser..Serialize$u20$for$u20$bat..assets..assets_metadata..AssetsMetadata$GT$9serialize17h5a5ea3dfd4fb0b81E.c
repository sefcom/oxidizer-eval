long long bat::assets::assets_metadata::_::<impl serde::ser::Serialize for bat::assets::assets_metadata::AssetsMetadata>::serialize(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v4;  // rax
    unsigned long v5;  // rdx

    v0 = v2;
    if (((char)a1.serialize_struct() & 1))
        return v5;
    v4 = v5.serialize_field(a0);
    if (!v4)
    {
        v4 = v5.serialize_field(a0 + 24);
        if (!v4)
            return v5.end();
    }
    return v4;
}
