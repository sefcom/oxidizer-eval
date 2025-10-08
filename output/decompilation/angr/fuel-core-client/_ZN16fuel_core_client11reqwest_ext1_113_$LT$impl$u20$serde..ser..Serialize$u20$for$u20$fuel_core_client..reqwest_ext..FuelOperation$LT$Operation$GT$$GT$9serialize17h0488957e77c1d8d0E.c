long long fuel_core_client::reqwest_ext::_::<impl serde::ser::Serialize for fuel_core_client::reqwest_ext::FuelOperation<Operation>>::serialize(unsigned int a0[22], unsigned long long a1)
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x27]
    unsigned int v2;  // [bp-0x24]
    unsigned long v3;  // [bp-0x20], Other Possible Types: unsigned long long
    char v4;  // [bp-0x18]
    unsigned int v5;  // [bp-0x17]
    unsigned int v6;  // [bp-0x14]
    unsigned long long v7;  // [bp-0x10]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax

    v0.serialize_map(a1);
    if (v0 == 2)
        return v3;
    v6 = v2;
    v5 = *((int *)&v1);
    v4 = v0;
    v7 = v3;
    v9 = a0.serialize(&v4);
    if (v9)
        return v9;
    v10 = v4.serialize_entry(a0[20], a0[21]);
    if (!v10)
    {
        memcpy(&v0, &v4, 16);
        v0.end();
        return 0;
    }
    return v10;
}
