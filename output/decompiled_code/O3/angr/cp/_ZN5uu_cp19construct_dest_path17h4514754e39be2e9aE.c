long long uu_cp::construct_dest_path::h4514754e39be2e9a(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5)
{
    int v0;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xa0]
    unsigned long long v2;  // [sp-0x98]
    char v3;  // [sp-0x90]
    int v4;  // [sp-0x88], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [sp-0x80]
    unsigned long long v6;  // [sp-0x78]
    unsigned long long v7;  // [sp-0x70], Other Possible Types: unsigned long
    unsigned long long v8;  // [sp-0x68]
    char v9;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long v10;  // [sp-0x58], Other Possible Types: unsigned long long
    void* v11;  // [sp-0x50]
    char v12;  // [bp-0x40]
    char v13;  // [bp-0x36]
    unsigned long v14;  // [bp+0x8]
    char v15;  // [bp+0x10]
    char v16;  // r12b
    unsigned long long v17;  // rax
    unsigned long long v18;  // r12
    unsigned long long v19;  // rax
    unsigned long long v21;  // rsi
    unsigned long long v22;  // rdx
    int v25;  // xmm0

    v16 = v15;
    if ((char)v14 && (char)std::path::Path::is_dir::h9ac0db933706da51(a3, a4))
    {
        v0 = 1;
        v1 = a3;
        v2 = a4;
        v3 = 1;
        v4 = &v0;
        v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v7 = &g_5b56e8;
        v8 = 2;
        v11 = 0;
        v9 = &v4;
        v10 = 1;
        v17 = ::0x4fd6d0::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&(&a0->field_0)[1], &v7);
        a0->field_0 = 4;
        return v17;
    }
    if (!v16)
    {
        if (a5)
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v4, a3, a4);
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = v6;
            *((int128_t *)&(&a0->field_0)[1]) = (int128_t)v4;
            a0->field_0 = 13;
            return v17;
        }
        v18 = a2;
        v19 = std::path::Path::parent::h65c9a340a6266f2d(a1, v18, a2, a3);
    }
    else
    {
        if (!(char)std::path::Path::is_dir::h9ac0db933706da51(a3, a4))
            return _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::hcb169799d716d029(a0, "with --parents, the destination must be a directory", 51);
        if (a5)
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v4, a3, a4);
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = v6;
            *((int128_t *)&(&a0->field_0)[1]) = (int128_t)v4;
            a0->field_0 = 13;
            return v17;
        }
        v18 = a2;
        std::path::Path::components::h4f3217acf0fc8653(&v7, a1, v18);
        if (v13)
        {
            v21 = "/cannot overwrite directory  with non-directory, overriding mode  ()?overwrite ?";
            v22 = 1;
        }
        else
        {
            v22 = -0x100 | v9 < 5;
            v21 = (v9 < 5 ? "/cannot overwrite directory  with non-directory, overriding mode  ()?overwrite ?" : 1);
        }
    }
    uu_cp::localize_to_target::he3bb1f2d006bb031(&v7, v21, v22, a1, v18, a3, a4);
    v17 = v7;
    *((int128_t *)&v0) = *((int128_t *)&v8);
    v2 = v10;
    if (v17 == 13)
    {
        *((int128_t *)&v4) = (int128_t)v0;
        v6 = v2;
        v17 = v6;
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v17;
        *((int128_t *)&(&a0->field_0)[1]) = (int128_t)v4;
        a0->field_0 = 13;
        return v17;
    }
    v25 = *((int128_t *)&v11);
    a0->field_20 = *((int128_t *)&v12);
    *((void*)&a0->field_18) = v25;
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = v2;
    *((int128_t *)&(&a0->field_0)[1]) = (int128_t)v0;
    a0->field_0 = v17;
    return v17;
}
