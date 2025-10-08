long long fish::complete::complete_add_wrapper(struct_1 *a0, struct_0 *a1)
{
    int v0;  // [bp-0xa8], Other Possible Types: char
    char v1;  // [sp-0xa0]
    char v2;  // [bp-0x98], Other Possible Types: unsigned long
    char v3;  // [bp-0x88]
    int v4;  // [bp-0x78], Other Possible Types: unsigned long long
    int v5;  // [bp-0x70]
    char v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x58]
    int v8;  // [bp-0x48]
    unsigned long v9;  // [bp-0x38]
    unsigned long long v12;  // r14
    char v13;  // dl
    char v14;  // bpl
    unsigned long long v15[3];  // rax
    unsigned long long v16;  // rax

    if (a0->field_8 && a1->field_8 && !(char)a0->field_0[1].eq(a0->field_8, a1->field_0[1], a1->field_8))
    {
        v0.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
        v12 = v0.expect(&g_14d6428);
        v14 = v13 & 1;
        v9 = a0->field_8;
        *((unsigned long long [2])&v8) = a0->field_0;
        v0.rustc_entry(v12 + 8, &v8);
        if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
        {
            *((int128_t *)&v5) = *((int128_t *)&v1);
            v4 = 0x8000000000000000;
        }
        else
        {
            v7 = *((long long *)&v3);
            memcpy(&v6, &v2, 16);
            *((int128_t *)&v4) = *((int128_t *)&v0);
        }
        v15 = v4.or_default();
        if (a1.slice_contains(v15[1], v15[2]))
        {
            core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v12, v14);
            v16 = (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
        }
        else
        {
            v2 = a1->field_8;
            *((unsigned long long [2])&v0) = a1->field_0;
            v15.push(&v0, &g_14d6440);
            v16 = core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v12, v14);
        }
        return v16 & 0xffffffffffffff00 | 1;
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
    return 0;
}
