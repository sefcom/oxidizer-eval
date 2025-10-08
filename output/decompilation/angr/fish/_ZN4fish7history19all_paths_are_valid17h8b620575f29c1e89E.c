long long fish::history::all_paths_are_valid(unsigned long long a0, unsigned long long a1, unsigned long long a2[4])
{
    unsigned long long v0[3];  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    char v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    int v8;  // [bp-0x48]
    char v9;  // [bp-0x38]
    unsigned long long v11;  // rdx
    unsigned long long v12;  // r12

    fish::threads::assert_is_background_thread();
    *((long long *)((!a2[0] ? &g_14c7518 : ((unsigned int)a2[0] == 1 ? a2[2] : a2[3])) + 48))(&v3);
    v6 = a0.map(a1);
    v7 = v11;
    while (true)
    {
        v8.next(&v6);
        if ((char)(((0 ^ (long long)v8) & (0 ^ -((long long)v8))) >> 63))
            break;
        v2 = *((long long *)&v9);
        *((void*)v0) = v8;
        if (!(char)a2.check_cancel() && (char)fish::expand::expand_one(&(char)v0, 5, a2, 0) && (char)fish::path::path_is_valid(v1, v2, v4, v5))
        {
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
        }
        else
        {
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
            break;
        }
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
    return (unsigned int)a2 & 0xffffff00 | (unsigned int)(((0 ^ v12) & (0 ^ -(v12))) >> 63) & 255;
}
