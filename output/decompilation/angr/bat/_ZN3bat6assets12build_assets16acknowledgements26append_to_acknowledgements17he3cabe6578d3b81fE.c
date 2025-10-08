long long bat::assets::build_assets::acknowledgements::append_to_acknowledgements(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    unsigned long v4;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x50]
    char *v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    void* v8;  // [bp-0x38]
    char *v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x20]
    char *v11;  // [bp-0x18]
    unsigned long long v12;  // [bp-0x10]
    unsigned int v14;  // edx

    v0 = a1;
    v1 = a2;
    v2 = a3;
    v3 = a4;
    v9 = &v0;
    v10 = <&T as core::fmt::Display>::fmt;
    v11 = &v2;
    v12 = <&T as core::fmt::Display>::fmt;
    v4 = &g_acdfb8;
    v5 = 2;
    v8 = 0;
    v6 = &v9;
    v7 = 2;
    a0.spec_write_fmt(&v4);
    v4 = a0[1];
    v5 = a0[2] + a0[1];
    if (!((char)core::str::validations::next_code_point_reverse(&v4) & 1))
        core::option::expect_failed("acknowledgements is not the empty stringsrc/assets/build_assets/acknowledgements.rs", 40, &g_acdfd8); /* do not return */
    if (v14 == 10)
        return a0.spec_extend("\n\nacknowledgements is not the empty stringsrc/assets/build_assets/acknowledgements.rs", "acknowledgements is not the empty stringsrc/assets/build_assets/acknowledgements.rs");
    a0.push(10);
    return a0.spec_extend("\n\nacknowledgements is not the empty stringsrc/assets/build_assets/acknowledgements.rs", "acknowledgements is not the empty stringsrc/assets/build_assets/acknowledgements.rs");
}
