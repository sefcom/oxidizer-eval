long long harry::verify_sha3(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x2c0]
    unsigned long long v1;  // [bp-0x2b0]
    char *v2;  // [bp-0x2a8]
    unsigned long long v3;  // [bp-0x2a0]
    char v4;  // [bp-0x298]
    char v5;  // [bp-0x258]
    char v6;  // [bp-0x138]
    unsigned int v8;  // eax

    v6.default();
    v6.update(a0, a1);
    memcpy(&v5, &v6, 288);
    v4.finalize_fixed(&v5);
    v2 = &v4;
    v3 = generic_array::hex::<impl core::fmt::LowerHex for generic_array::GenericArray<u8,T>>::fmt;
    v5.new_v1(&g_473ff0, 1, &v2, 1);
    alloc::fmt::format(&v0, &v5);
    v8 = *((long long *)&v0).equal(v1, "83ed150dbcc9700521ccc2f7d67243c3d4000c8228281488dccd6c6753f48515dcb24714d5a294df27eeda834e9242e1ce4014fc38df3e0439b999fe3efa0765Wrong password or too quick: Auth success\n", 128);
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return v8;
}
