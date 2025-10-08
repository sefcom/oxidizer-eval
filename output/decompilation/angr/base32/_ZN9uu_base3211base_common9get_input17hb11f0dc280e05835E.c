long long uu_base32::base_common::get_input(struct_0 *a0, unsigned long long a1[5])
{
    void* v0;  // [bp-0x50], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    void* v4;  // [bp-0x28]
    void* v5;  // [bp-0x20]
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rax

    if ((char)(((0 ^ a1[2]) & (0 ^ -(a1[2]))) >> 63))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3 = std::io::stdio::stdin();
        if (((char)v3.read_to_end(&v0) & 1))
        {
            a0->field_8 = v7.from();
            a0->field_10 = v7;
            a0->field_0 = 1;
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v0, 1);
            return a0;
        }
        v4 = 0;
        memcpy(&v3, &v0, 16);
        v5 = 0;
        *((double *)&a0->field_8) = v3.new();
        v8 = &g_50dee0;
    }
    else
    {
        (char)v3.open(&a1[2]);
        (char)v0.map_err_context(&(char)v3, a1[3], a1[4]);
        if (v0)
        {
            a0->field_8 = v0;
            a0->field_10 = v1;
            a0->field_0 = 1;
            return a0;
        }
        a0->field_8 = (unsigned int)v1.new();
        v8 = &g_50dfa8;
    }
    a0->field_10 = v8;
    a0->field_0 = 0;
    return a0;
}
