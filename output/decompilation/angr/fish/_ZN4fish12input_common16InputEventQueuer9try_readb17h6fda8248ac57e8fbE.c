long long fish::input_common::InputEventQueuer::try_readb(unsigned long long a0, struct_0 *a1)
{
    void* v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    void* v2;  // [bp-0xa0]
    int v3;  // [bp-0x98], Other Possible Types: char
    char *v4;  // [bp-0x88], Other Possible Types: unsigned long long
    int v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x68]
    char v7;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x58]
    char *v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    void* v11;  // [bp-0x40]
    char *v12;  // [bp-0x30]
    unsigned long long v13;  // [bp-0x28]
    unsigned int v15;  // ebp
    char *v16;  // rax
    unsigned int v17;  // edx
    unsigned int v18;  // edx

    v15 = a0.get_in_fd();
    if (!a0.paste_is_buffering() && !(char)a0.is_blocked_querying())
    {
        v16 = fish::tty_handoff::get_kitty_keyboard_capability();
        v17 = 1000000;
        if (!v16 || !*(v16))
            goto LABEL_13cb83c;
    }
    v17 = 0x11e1a300;
LABEL_13cb83c:
    if (fish::input_common::check_fd_readable(v15, 0, v17))
    {
        if (((char)fish::input_common::readb(v15) & 1))
        {
            a1.push(v18, &g_14db168);
            return (unsigned int)a0 & 0xffffff00 | 1;
        }
    }
    else
    {
        if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v3.to_flog_str(&g_15a99a0);
            v7.into_iter(&v3);
            v0.spec_extend(&v7);
            v0.push(58, &g_14db150);
            v0.push(32, &g_14db150);
            *((int128_t *)&v5) = *((int128_t *)&(&a1->padding_0)[1]);
            v12 = &v5;
            v13 = <fish::input_common::DisplayBytes as core::fmt::Display>::fmt;
            v7 = &g_14db140;
            v8 = 1;
            v11 = 0;
            v9 = &v12;
            v10 = 1;
            v3.map_or_else(&v7);
            v5 = v3;
            v6 = v4;
            v7.clone(&v5);
            v4 = v9;
            memcpy(&v3, &v7, 16);
            v7.into_iter(&v3);
            v0.spec_extend(&v7);
            core::ptr::drop_in_place<alloc::string::String>(&v5);
            v0.push(10, &g_14db150);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        else
        {
            return 0;
        }
    }
    return 0;
}
