long long fish::input_common::InputEventQueuer::readch_timed(void* a0, void* a1, unsigned long a2)
{
    unsigned long long v0[2];  // [bp-0x60]
    int v1;  // [bp-0x50]
    char v2;  // [bp-0x40]
    unsigned long long v4;  // rax
    unsigned int v5;  // eax
    unsigned long v6;  // rdx
    unsigned long long v7;  // rax

    v4 = v0.try_pop(*((long long *)a1));
    if (v0[0] != 9223372036854775812)
    {
        *((int128_t *)&a0[32]) = *((int128_t *)&v2);
        a0[16] = v1;
        *((unsigned long long [2])a0) = v0;
        return v4;
    }
    core::ptr::drop_in_place<core::option::Option<fish::input_common::CharEvent>>(&v0);
    v5 = *((long long *)a1).get_in_fd();
    0.unwrap(&g_14db400);
    v6 = (a2 >> 3) / 125;
    v7 = fish::input_common::check_fd_readable(v5, (a2 >> 3) / 125, (unsigned int)(a2 - (unsigned int)((a2 >> 3) / 125) * 1000) * 1000000);
    if (!(char)v7)
    {
        *((unsigned long long *)a0) = 9223372036854775812;
        return v7;
    }
    return a0.readch(a1);
}
