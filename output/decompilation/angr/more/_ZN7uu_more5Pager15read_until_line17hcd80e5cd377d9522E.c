void uu_more::Pager::read_until_line(void* *a0, unsigned long long a1[8], unsigned long long a2)
{
    void* v0;  // [bp-0x88]
    int v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    void* v3;  // [bp-0x78], Other Possible Types: unsigned long long
    struct_0 *v4;  // [bp-0x70]
    int v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x58]
    int v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x38]
    unsigned long long v10;  // rdx
    void* *v12;  // rax

    v0 = 0;
    v2 = 1;
    v3 = 0;
    if (a1[4] <= a2)
    {
        do
        {
            if (a1[1 + 3].read_line(&v0))
            {
                v4->field_0 = v10.from();
                *((unsigned long long *)&v4->field_8) = v10;
                v0 = 0;
                ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v0);
                return;
            }
            if (!v10)
            {
                v4->field_8 = 0;
                v0 = 0;
                *(a0) = 0;
                ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v0);
                return;
            }
            a1[5].push((!a1[7] ? 0 : *((long long *)(a1[6] + a1[7] * 8 - 8))) + v10);
            v7.to_vec(core::str::<impl str>::trim_end_matches(1, 0), a2);
            v6 = v8;
            v5 = v7;
            ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v0);
            v3 = v6;
            v1 = v5;
            v8 = v3;
            v7 = v5;
            v0 = 0;
            v2 = 1;
            v3 = 0;
            a1[2].push(&v7);
        } while (a1[4] <= a2);
    }
    v12 = a0;
    v4->field_8 = 1;
    *(v12) = 0;
    ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return;
}
