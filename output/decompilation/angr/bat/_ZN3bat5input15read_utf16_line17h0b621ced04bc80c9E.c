long long bat::input::read_utf16_line(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3[3], unsigned int a4, char a5)
{
    void* v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    void* v2;  // [bp-0x48]
    struct_0 *v3;  // [bp-0x38]
    unsigned long v5;  // rdx
    unsigned long v6;  // rbp

    while (true)
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        if (((char)a1.read_until(a2, a4, &v0) & 1))
        {
            v3->field_8 = v5;
            v3->field_0 = 1;
            return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v0, v1);
        }
        if (v5)
        {
            a3.spec_extend(v1, 0 + v1);
            v6 = a3[2];
            if (v6 >= 2 && *((char *)(a3[1] + v6 - 2)) == a5 && *((char *)(a3[1] + v6 - 1)) == (char)a4)
                break;
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v0, v1);
        }
        else
        {
            v6 = a3[2];
            break;
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v0, v1);
    v3->field_1 = v6;
    v3->field_0 = 0;
    return a0;
}
