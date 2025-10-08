long long fish::reader::commandline_set_buffer(struct_0 *a0, void* a1, char a2, unsigned long a3)
{
    unsigned long v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned long v3;  // rax
    struct_1 *v4;  // r15
    unsigned long v5;  // r13
    unsigned int v6;  // ecx
    unsigned int v7;  // ecx
    char v8;  // dl
    unsigned long long v9;  // rax

    v0 = v3;
    if (a0->field_5b)
        return (unsigned long long)core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(a1);
    v1 = (unsigned int)v3 & 0xffffff00 | 1;
    v4 = fish::reader::commandline_state_snapshot();
    v5 = *((long long *)a1);
    v7 = v6 & 0xffffff00 | 1;
    if (v5 != 0x8000000000000000)
    {
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4->field_20);
        v4->field_30 = (long long)a1[16];
        v4->field_20 = *((int128_t *)a1);
        v7 = 0;
    }
    v1 = v7;
    v4->field_58 = -((a2 & 1) < 1) | a3.min(v4->field_30);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v4, v8 & 1);
    v9 = fish::reader::current_data();
    if (v9)
        v9.apply_commandline_state_changes();
    if (v5 == 0x8000000000000000)
    {
        return 0x8000000000000000;
    }
    else if ((char)v1)
    {
        return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
    }
    else
    {
        return 0x8000000000000000;
    }
}
