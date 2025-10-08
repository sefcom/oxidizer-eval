long long fish::complete::complete_remove_wrapper(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xa1]
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    unsigned long v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    char v6;  // [bp-0x70]
    char v7;  // [bp-0x58]
    char v10;  // dl
    unsigned long long v11;  // r15
    unsigned long long v12[3];  // rdx
    unsigned long long v13[3];  // r14
    char v14;  // r15b
    unsigned long long v15[3];  // r14

    v2 = a1;
    v3 = a2;
    if (a2 && a0->field_10)
    {
        v6.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
        v0 = v10 & 1;
        v1 = v6.expect(&g_14d6458);
        v7.iter(v1 + 8);
        if (v7.next())
        {
            v11 = 0;
            do
            {
                v15 = v13;
                v4 = v15[1];
                v5 = v15[1] + v15[2] * 24;
                if (((char)v4.position(&v2) & 1))
                {
                    v6.remove(v15, a2, &g_14d6470);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
                    v14 = 1;
                    v11 = v11 & 0xffffffffffffff00 | 1;
                }
                v12 = v12;
            } while (v7.next());
        }
        else
        {
            v11 = 0;
        }
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v1, v0);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
    }
    else
    {
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
        v11 = 0;
    }
    return (unsigned int)v11 & 0xffffff00 | v14 & 1;
}
