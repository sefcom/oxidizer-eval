long long starship_battery::types::manager::Manager::new(void* a0)
{
    int v0;  // [bp-0x58], Other Possible Types: char
    unsigned long long v1;  // [bp-0x48]
    char v2;  // [bp-0x38], Other Possible Types: unsigned long
    unsigned long long v3;  // [bp-0x38]
    char v4;  // [bp-0x30], Other Possible Types: unsigned long long
    char v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]

    v2.new();
    memcpy(&v0, &v4, 16);
    v1 = v6;
    if (v2 == 9223372036854775810)
    {
        v7 = v1;
        memcpy(&v5, &v0, 16);
        v3 = 1;
        v4 = 1;
        *((double *)&a0[8]) = v3.new();
    }
    else
    {
        *((unsigned long long *)&a0[24]) = v1;
        a0[8] = v0;
    }
    *((unsigned long *)a0) = v2;
    return a0;
}
