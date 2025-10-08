long long fish::wutil::wcstod::wcstod_underscores(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long *a3)
{
    unsigned long long v0;  // [bp-0x1d8]
    char v1;  // [bp-0xb0]
    unsigned int v3;  // [bp-0xa0]
    char v8;  // [bp-0x88]
    char v9;  // [bp-0x78]
    unsigned int v10;  // [bp-0x78]
    void* v20;  // r13
    unsigned long v21;  // rax
    void* v22;  // r13
    void* v23;  // r13

    v8.peekable(a1.into_iter(a2), a2);
    v9.get_or_insert_with(&v8);
    v20 = 0;
    if (v10 != 0x110000)
    {
        while (true)
        {
            if (v10 > 32)
                break;
            v21 = v10;
            v0 = 0x100003600;
            if (!(*((char *)&v0 + ((v21 & 63) >> 3)) >> ((char)v21 & 63 & 7) & 1))
                break;
            v22 = v20 + 1;
            if ((char)_ccall(4, 24, v20 + 1, 0, _ccall(0, (unsigned long long)(char)*((char *)&v0 + ((v21 & 63) >> 3)) >> ((char)v21 & 63 & 7) & 1, 0, 0)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14c1390); /* do not return */
            v10 = 1114113;
            v10.get_or_insert_with(&v8);
            v20 = v22;
            if (v10 == 0x110000)
                break;
        }
    }
    v23 = v20;
    v1.clone(&v8);
    (char)v3.get_or_insert_with(&v1);
    if (v3 == 95)
    {
        do
        {
            v3 = 1114113;
            v3.get_or_insert_with(&v1);
        } while (v3 == 95);
    }
    (char)v3.get_or_insert_with(&v1);
}
