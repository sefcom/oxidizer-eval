long long uu_tr::operation::TranslateOperation::new(struct_1 *a0, struct_0 *a1, unsigned long long a2[3])
{
    char v0;  // [bp-0xd0]
    char v1;  // [bp-0x70]
    char v2;  // [bp-0x50]
    unsigned long long v4;  // rax
    unsigned long v5;  // rdx

    if (a2[2])
    {
        v1.into_iter(a1);
        v0.into_iter(a2);
        v2.chain(&v0, *((char *)(a2[1] + a2[2] - 1)));
        v0.zip(&v1, &v2);
        a0.from_iter(&v0);
        return a0;
    }
    if (a1->field_10)
    {
        *((unsigned int *)&a0->padding_1[7]) = 5;
        *((unsigned long long *)&a0->field_0) = 0;
    }
    else
    {
        v0.try_with();
        v4 = v0.expect();
        a0->field_10 = g_590ef8;
        *((uint128_t *)&a0->field_0) = g_590ee8;
        a0->field_20 = v4;
        a0->field_28 = v5;
    }
    ::0x4ad730::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a2);
    ::0x4ad730::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a1);
    return a0;
}
