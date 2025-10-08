long long fish_printf::printf_impl::get_int(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    void* v3;  // r15
    unsigned int v4;  // eax
    unsigned long long v5;  // cc_ndep
    void* v6;  // rax
    unsigned long v7;  // rax
    unsigned long v8;  // r15
    unsigned int v9;  // edx
    char v10;  // al

    v0 = v2;
    v3 = 0;
    if ((int)a1.at(0) != 0x110000)
    {
        v3 = 0;
        while (((char)::0x125f140::core::char::methods::<impl char>::to_digit(v4) & 1))
        {
            v6 = v3;
            v7 = v6 * 10;
            if ((char)_ccall(0, 48, v6, 10, v5))
            {
                a0->field_1 = 4;
                a0->field_0 = 1;
                return v7 & 0xffffffffffffff00 | 1;
            }
            v8 = v7;
            v7 = v9;
            v3 = v8 + v7;
            if ((char)__CFADD__(v8, v7))
            {
                a0->field_1 = 4;
                a0->field_0 = 1;
                return v7 & 0xffffff00 | 1;
            }
            a1.advance_by(1);
            if ((int)a1.at(0) == 0x110000)
                break;
        }
    }
    a0->field_8 = v3;
    a0->field_0 = v10;
    return 0;
}
