long long fish::input_common::decode_input_byte(unsigned long long a0, char a1, mbstate_t *a2, unsigned long long a3, unsigned long long a4, unsigned long long *a5)
{
    char v0;  // [bp-0x56]
    char v1[1];  // [bp-0x55]
    unsigned int v2;  // [bp-0x54]
    char *v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long *v6;  // [bp-0x38]
    unsigned long v8;  // rsi
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx
    unsigned int v11;  // eax
    unsigned int v12;  // ecx
    unsigned long v13;  // cc_ndep

    v0 = a1;
    if (!a4)
        core::option::unwrap_failed(&g_14db520); /* do not return */
    if ((unsigned long long)fish::libc::MB_CUR_MAX() == 1)
    {
        v8 = *((char *)(a3 + a4 - 1));
    }
    else
    {
        v3 = &v0;
        v4 = a3;
        v5 = a4;
        v6 = a5;
        v2 = 0;
        v9 = mbrtowc(&v2, &v1, 1, a2);
        if (v9 == -2)
            return 0;
        if (v9 == -1)
        {
            v10 = core::ops::function::FnOnce::call_once;
            return fish::input_common::decode_input_byte::{{closure}}(&v3, a0, core::ops::function::FnOnce::call_once);
        }
        v8 = v2;
        if (((unsigned int)v8 ^ 0xd800) - 0x110000 < -0x10f800)
        {
            v10 = core::ops::function::FnOnce::call_once;
            return fish::input_common::decode_input_byte::{{closure}}(&v3, a0, core::ops::function::FnOnce::call_once);
        }
        v11 = v8 - 64976;
        v12 = v8 - 0xf500;
        if (v12 < 0x200 || v11 < 32)
        {
            return fish::input_common::decode_input_byte::{{closure}}(&v3, a0, core::ops::function::FnOnce::call_once);
        }
        if ((char)_ccall(4, 24, *(a5) + 1, 0, _ccall(17, (unsigned long long)((char)(char)(v12 < 0x200) | (char)(char)(v11 < 32)), 0, v13)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14db538); /* do not return */
        *(a5) = *(a5) + 1;
    }
    return a0.push(v8) & 0xffffffffffffff00 | 1;
}
