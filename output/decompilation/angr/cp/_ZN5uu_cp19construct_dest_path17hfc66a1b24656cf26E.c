long long uu_cp::construct_dest_path::hfc66a1b24656cf26(struct_1 *a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long long a4, char a5, char a6, char a7)
{
    struct struct_0 **v0;  // [sp-0xa8]
    unsigned long long v1;  // [sp-0xa0]
    unsigned long long v2;  // [sp-0x98]
    char v3;  // [sp-0x90]
    struct struct_0 **v4;  // [bp-0x88]
    struct struct_0 **v5;  // [bp-0x88]
    unsigned long long v6;  // [sp-0x80]
    unsigned long long v7;  // [sp-0x78]
    unsigned long v8;  // [bp-0x70]
    unsigned long long v9;  // [sp-0x68]
    struct struct_0 **v10;  // [sp-0x60], Other Possible Types: char
    unsigned long v11;  // [sp-0x58], Other Possible Types: unsigned long long
    void* v12;  // [sp-0x50]
    char v13;  // [bp-0x40]
    char v14;  // [bp-0x36]
    unsigned long long v15;  // rax
    unsigned long long v16;  // r12
    unsigned long long v17;  // rsi
    unsigned long long v19;  // rsi
    unsigned long long v20;  // rsi
    unsigned long long v21;  // rdx
    struct struct_0 **v22;  // xmm0

    if (a6 && (char)std::path::Path::is_dir::h9ac0db933706da51(a3, a4))
    {
        v0 = 1;
        v1 = a3;
        v2 = a4;
        v3 = 1;
        v5 = &v0;
        v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v8 = &g_5b5db8;
        v9 = 2;
        v12 = 0;
        v10 = &v5;
        v11 = 1;
        v15 = ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&(&a0->field_0)[1], &v8);
        a0->field_0 = 4;
        return v15;
    }
    if (!a7)
    {
        if (a5)
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v5, a3, a4);
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = v7;
            *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v4);
            a0->field_0 = 13;
            return v15;
        }
        v16 = a2;
        v17 = std::path::Path::parent::h65c9a340a6266f2d(a1, v16);
        if (!v17)
            v19 = a1;
        if (!v17)
            v21 = v16;
    }
    else
    {
        if (!(char)std::path::Path::is_dir::h9ac0db933706da51(a3, a4))
            return _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h3a818a2f4f98d944(a0, "with --parents, the destination must be a directory", 51);
        if (a5)
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v5, a3, a4);
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = v7;
            *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v4);
            a0->field_0 = 13;
            return v15;
        }
        v16 = a2;
        std::path::Path::components::h4f3217acf0fc8653(&v8, a1, v16);
        if (v14)
        {
            v21 = 1;
            v20 = "/, overriding mode  ()?overwrite ?";
        }
        else
        {
            v21 = v10 < 5;
            v20 = (v10 < 5 ? "/, overriding mode  ()?overwrite ?" : 1);
        }
    }
    uu_cp::localize_to_target::hdd63077be4e3b6f7(&v8, v19, v21, a1, v16, a3, a4);
    v15 = v8;
    *((int128_t *)&v0) = *((int128_t *)&v9);
    v2 = v11;
    if (v15 == 13)
    {
        *((int128_t *)&v4) = *((int128_t *)&v0);
        v7 = v2;
        v15 = v7;
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v15;
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v4);
        a0->field_0 = 13;
        return v15;
    }
    v22 = *((int128_t *)&v12);
    a0->field_20 = *((int128_t *)&v13);
    a0->field_18 = v22;
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = v2;
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v0);
    a0->field_0 = v15;
    return v15;
}
