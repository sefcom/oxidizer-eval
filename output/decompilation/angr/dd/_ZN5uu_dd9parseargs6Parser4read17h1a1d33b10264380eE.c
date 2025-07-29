long long uu_dd::parseargs::Parser::read(struct_0 *a0, void* a1, unsigned long long a2)
{
    int v0;  // [bp-0x88]
    int v1;  // [bp-0x78]
    char v2;  // [bp-0x68]
    unsigned long long v4;  // rax
    unsigned long long v6;  // rdx

    v2.into_iter(a2);
    while (true)
    {
        v4 = v2.next();
        if (!v4)
            return memcpy(a0, a1, 216);
        v0.parse_operand(a1, v4.as_ref(), v6);
        if ((int)v0 != 14)
        {
            *((void*)((char *)&a0->field_8 + 8)) = v1;
            *((void*)&(&a0->field_0)[1]) = v0;
            a0->field_0 = 2;
            return (unsigned long long)::0x4c4740::core::ptr::drop_in_place<uu_dd::parseargs::Parser>(a1);
        }
    }
}
