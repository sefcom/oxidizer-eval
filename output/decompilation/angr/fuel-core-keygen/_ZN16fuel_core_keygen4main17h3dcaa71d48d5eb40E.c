long long fuel_core_keygen::main()
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned long long
    int v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x58]
    char v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    int v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x30]
    char v7;  // [bp-0x28]

    v7.parse();
    v0.exec(&v7);
    if (v3 != 2)
    {
        v6 = v2;
        v5 = v1;
        v4 = v0;
        v4 = fuel_core_keygen::print_value(&v4, v3);
    }
    core::ptr::drop_in_place<fuel_core_keygen::Command>(&v7);
    return v4;
}
