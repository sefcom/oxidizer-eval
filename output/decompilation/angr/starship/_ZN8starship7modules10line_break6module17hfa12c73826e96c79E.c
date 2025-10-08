double starship::modules::line_break::module(long long a0, long long a1)
{
    char v0;  // [bp-0x98], Other Possible Types: unsigned long long
    struct_0 *v1;  // [bp-0x90]
    char v2;  // [bp-0x88], Other Possible Types: unsigned long long
    int v3;  // [bp-0x78]
    int v4;  // [bp-0x68], Other Possible Types: char
    int v5;  // [bp-0x58]
    int v6;  // [bp-0x48]
    int v7;  // [bp-0x38]
    int v8;  // [bp-0x28]
    char v9;  // [bp-0x18]
    struct_0 *v11;  // rax
    int v12;  // xmm0
    int v13;  // xmm1

    v4.new_module(a1, "line_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 10);
    v11 = 8.alloc_impl(56, 0);
    if (!v11)
        alloc::alloc::handle_alloc_error(8, 56); /* do not return */
    v11->field_0 = 2;
    v12 = *((int128_t *)&v0);
    v13 = *((int128_t *)&v2);
    *((void*)((char *)&v11->field_18 + 8)) = v3;
    *((void*)((char *)&v11->field_8 + 8)) = v13;
    *((void*)&(&v11->field_0)[1]) = v12;
    v0 = 1;
    v1 = v11;
    v2 = 1;
    v4.set_segments(&v0);
    a0[5] = *((int128_t *)&v9);
    *((void*)&a0[4]) = v8;
    *((void*)&a0[3]) = v7;
    *((void*)&a0[2]) = v6;
    *((void*)&a0[1]) = v5;
    *((void*)&a0[0]) = v4;
    return (unsigned long long)v4;
}
