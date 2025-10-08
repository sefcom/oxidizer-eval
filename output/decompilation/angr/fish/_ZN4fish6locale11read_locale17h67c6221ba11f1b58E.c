long long fish::locale::read_locale(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x34]
    char v4;  // [bp-0x2c]
    unsigned long long v6;  // rax
    void* v7;  // rax
    unsigned int v8;  // r15d
    char v9;  // dl

    v2.lock(&_ZN4fish6locale11LOCALE_LOCK17h1a92918ed7e88021E);
    v6 = v2.unwrap(&g_14dbf20);
    setlocale(1, &g_9f6b7a);
    v7 = localeconv();
    if (v7)
    {
        fish::locale::lconv_to_locale(&v2, v7);
        v0 = v3;
        v1 = *((int *)&v4);
    }
    else
    {
        v8 = 0x110000;
    }
    setlocale(1, "C");
    a0->field_0 = v8;
    *((unsigned long long *)&(&a0->field_0)[1]) = v0;
    *((unsigned int *)((char *)&a0->field_4 + 4)) = v1;
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v6, v9 & 1);
}
