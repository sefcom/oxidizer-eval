long long just::parser::Parser::error(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xa8], Other Possible Types: char
    int v1;  // [bp-0x98]
    int v2;  // [bp-0x88]
    int v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x68]
    char v5;  // [bp-0x60]
    int v6;  // [bp-0x50]
    int v7;  // [bp-0x40]
    int v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x20]
    char v10;  // [bp-0x18]
    char v11;  // [bp-0x17]
    unsigned int v12;  // [bp-0x14]
    unsigned long long v14;  // rax
    unsigned int v15;  // ecx

    v5.next(a1);
    memcpy(&v0, &v5, 16);
    v1 = v6;
    v2 = v7;
    v3 = v8;
    v4 = v9;
    if (v10 == 37)
    {
        (&a0->field_0)[1].error(&v0, a2);
        v14 = 0;
    }
    else
    {
        v15 = *((int *)&v11);
        *((unsigned int *)((char *)&a0->field_48 + 4)) = v12;
        *((unsigned int *)((char *)&a0->field_48 + 1)) = v15;
        *((unsigned long long *)((char *)&a0->field_38 + 8)) = v4;
        *((void*)((char *)&a0->field_28 + 8)) = v3;
        *((void*)((char *)&a0->field_18 + 8)) = v2;
        *((void*)((char *)&a0->field_8 + 8)) = v1;
        *((void*)&(&a0->field_0)[1]) = v0;
        *((char *)&a0->field_48) = v10;
        core::ptr::drop_in_place<just::compile_error_kind::CompileErrorKind>(a2);
        v14 = 1;
    }
    a0->field_0 = v14;
    return v14;
}
