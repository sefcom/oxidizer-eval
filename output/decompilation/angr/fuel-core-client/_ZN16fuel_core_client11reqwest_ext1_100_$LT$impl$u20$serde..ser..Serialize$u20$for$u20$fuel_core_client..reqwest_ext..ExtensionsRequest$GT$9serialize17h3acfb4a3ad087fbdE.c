long long fuel_core_client::reqwest_ext::_::<impl serde::ser::Serialize for fuel_core_client::reqwest_ext::ExtensionsRequest>::serialize(unsigned int a0, unsigned int a1, unsigned long long a2)
{
    char v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x2f]
    unsigned int v2;  // [bp-0x2c]
    unsigned long long v3;  // [bp-0x28]
    char v4;  // [bp-0x20]
    char v5;  // [bp-0x1f]
    unsigned int v6;  // [bp-0x1c]
    char v7;  // [bp-0x18]
    unsigned long long v9;  // rax

    v4.serialize_struct(a2);
    if (v4 == 2)
        return *((long long *)&v7);
    v2 = v6;
    v1 = *((int *)&v5);
    v0 = v4;
    v3 = *((long long *)&v7);
    v9 = v0.serialize_field(a0, a1);
    if (!v9)
    {
        v0.end();
        return 0;
    }
    return v9;
}
