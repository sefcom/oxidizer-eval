long long fish::wutil::wcstoi::CharsIterator<Iter>::next(struct_0 *a0)
{
    unsigned long v1;  // rax
    unsigned long v2;  // rax

    v1 = a0->field_18;
    a0->field_18 = 1114113;
    if ((unsigned int)v1 == 1114113)
        v1 = a0->padding_8.next();
    if ((unsigned int)v1 == 0x110000)
        return v1;
    v2 = a0->field_0 + 1;
    if ((char)_ccall(4, 24, a0->field_0 + 1, 0, (unsigned long long)(char)((unsigned int)v1 < 0x110000)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14c13d8); /* do not return */
    a0->field_0 = v2;
    return v2;
}
