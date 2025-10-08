long long fish::reader::ReaderData::update_commandline_state(struct_1 *a0)
{
    char v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x50]
    int v3;  // [bp-0x48], Other Possible Types: char
    int v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x38]
    struct_0 *v7;  // rax
    struct_0 *v8;  // r15
    struct_0 *v9;  // rbx
    char v10;  // al
    unsigned long v11;  // cc_dep1
    unsigned long v12;  // cc_ndep
    unsigned long long v13;  // r12
    unsigned long v14;  // r15
    unsigned long v15;  // r13
    char v16;  // dl

    v7 = fish::reader::commandline_state_snapshot();
    v8 = v7;
    v9 = v7;
    v10 = v7->field_20[0].equal(v7->field_20[1], a0->field_28, a0->field_30);
    v11 = v10;
    if (!v10)
    {
        v0.to_vec(a0->field_28, a0->field_30);
        v5 = v2;
        memcpy(&v3, &v0, 16);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v8->field_18);
        v9->field_20[1] = v5;
        *((void*)&v9->field_18) = v3;
    }
    *((unsigned long long *)((char *)&v9->field_40 + 8)) = a0->field_78;
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(a0->field_830) + 1, 0, _ccall(17, v11, 0, v12))))
    {
        v13 = 0x8000000000000000;
        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::history::History>>>(&v8->field_50);
        v9->field_50 = a0->field_830;
        v1.get_selection(a0);
        *((unsigned long long *)((char *)&v9->field_8 + 8)) = v2;
        *((int128_t *)&(&v9->padding_0)[1]) = *((int128_t *)&v1);
        *((char *)&v9->field_58) = a0->field_220;
        *((char *)&v9->field_58 + 1) = !a0->field_388;
        v14 = &v8->field_28;
        v15 = a0->field_271;
        if (((char)_ccall(1, 8, 0, v9->field_28, _ccall(17, v11, 0, v12)) ^ (char)v15) || v9->field_28 != 0x8000000000000000 && (char)fish::reader::ReaderData::update_commandline_state::{{closure}}(a0, v14))
        {
            v3 = v3;
            if ((char)v15)
            {
                v1.to_vec(a0->field_198, a0->field_1a0);
                v13 = v1;
                memcpy(&v3, &v0, 16);
                v15 = a0->field_1e8;
                v3 = v4;
            }
            core::ptr::drop_in_place<core::option::Option<fish::path::BaseDirectory>>(v14);
            v9->field_28 = v13;
            *((void*)&v9->field_30) = v3;
            *((unsigned long *)&v9->field_40) = v15;
        }
        *((char *)&v9->field_58 + 2) = a0->field_708;
        return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v9, v16 & 1);
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 20946324()
}
