void uu_base32::base_common::has_padding(void* a0, unsigned long long a1[2])
{
    void* v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    void* v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    unsigned long v4;  // [bp-0x20]
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    char *v9;  // rax
    char v10;  // bpl
    unsigned long long v11;  // rdx

    v0 = 0;
    v1 = 1;
    v2 = 0;
    if (((char)a1.read_to_end() & 1))
    {
        v7 = uu_base32::base_common::has_padding::{{closure}}(v6);
        v8 = &g_50cea8;
        goto LABEL_463825;
    }
    else
    {
        v3 = v1;
        v4 = 0 + v1;
        v9 = v3.try_rfold();
        if (v9)
            v10 = *(v9) == 61;
        if (((char)a1[0].seek(a1[1]) & 1))
        {
            v7 = v11.from();
LABEL_463825:
            *((unsigned long long *)a0) = v7;
            *((unsigned long long *)&a0[8]) = v8;
        }
        else
        {
            *((char *)&a0[8]) = v10;
            *((unsigned long long *)a0) = 0;
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(0, v1);
    return;
}
