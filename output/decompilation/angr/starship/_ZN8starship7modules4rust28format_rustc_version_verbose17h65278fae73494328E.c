long long starship::modules::rust::format_rustc_version_verbose(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    int v2;  // [bp-0xa8], Other Possible Types: void*
    unsigned long long v3;  // [bp-0xa0]
    char v4;  // [bp-0x98], Other Possible Types: unsigned long long
    char v5;  // [bp-0x90], Other Possible Types: unsigned long
    unsigned long v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x80]
    unsigned short v8;  // [bp-0x68]
    int v9;  // [bp-0x60], Other Possible Types: char
    unsigned long long v10;  // [bp-0x50]
    char v11;  // [bp-0x48]
    char v12;  // [bp-0x38]
    unsigned long long v14;  // rax
    void* v15;  // r12
    void* v16;  // r13
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rbx
    unsigned long long v19;  // rdx

    v4.into_searcher(10, a1, a2);
    v2 = 0;
    v3 = a2;
    v8 = 0;
    if (v2.next_inclusive())
    {
        v15 = 0;
        v16 = 0;
        do
        {
            v18 = v14.call(v17);
            if ((char)core::slice::<impl [T]>::starts_with(v18, v19, "release: host: settings.tomlRustup settings version is , expected \"12\"", 9))
            {
                v15 = core::str::<impl str>::trim_start_matches(v18, v19, "release: host: settings.tomlRustup settings version is , expected \"12\"", 9);
                v0 = v19;
            }
            if ((char)core::slice::<impl [T]>::starts_with(v18, v19, "host: settings.tomlRustup settings version is , expected \"12\"", 6))
            {
                v16 = core::str::<impl str>::trim_start_matches(v18, v19, "host: settings.tomlRustup settings version is , expected \"12\"", 6);
                v1 = v19;
            }
            v14 = v2.next_inclusive();
        } while (v14);
        if ((!v16 | !v15) != 1)
        {
            starship::modules::rust::format_semver(&v9, v15, v0);
            v11.map_or_else(a3, a4, v16, v1);
            v4 = v10;
            v2 = v9;
            v7 = *((long long *)&v12);
            memcpy(&v5, &v11, 16);
            *(a0) = v9;
            *((unsigned long *)&a0[32]) = v6;
            *((unsigned long long *)&a0[40]) = v7;
            *((unsigned long long *)&a0[16]) = v4;
            *((unsigned long *)&a0[24]) = v5;
            return v5;
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
