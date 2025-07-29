void uu_base32::base_common::has_padding(struct_0 *a0, unsigned long long a1[2])
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
    if ((unsigned long long)a1.read_to_end())
    {
        v7 = uu_base32::base_common::has_padding::{{closure}}(v6);
        v8 = &g_5a2170;
        goto LABEL_4a9857;
    }
    else
    {
        v3 = v1;
        v4 = 0 + v1;
        v9 = v3.try_rfold();
        if (v9)
            v10 = *(v9) == 61;
        if ((unsigned long long)a1[0].seek(a1[1]))
        {
            v7 = v11.from();
LABEL_4a9857:
            a0->field_0 = v7;
            *((unsigned long long *)&a0->field_8) = v8;
        }
        else
        {
            a0->field_8 = v10;
            a0->field_0 = 0;
        }
    }
    ::0x4a92c0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v0);
    return;
}
