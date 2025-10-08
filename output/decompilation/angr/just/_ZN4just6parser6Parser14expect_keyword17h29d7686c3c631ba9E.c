long long just::parser::Parser::expect_keyword(struct_0 *a0, unsigned long long a1, char a2)
{
    char v0;  // [bp-0x161]
    unsigned int v1;  // [bp-0x160]
    unsigned int v2;  // [bp-0x15d]
    unsigned int v3;  // [bp-0x158]
    unsigned int v4;  // [bp-0x155]
    char v5;  // [bp-0x150], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x148]
    char *v7;  // [bp-0x140], Other Possible Types: char
    unsigned long long v8;  // [bp-0x138]
    int v9;  // [bp-0x130]
    int v10;  // [bp-0x120]
    int v11;  // [bp-0x110], Other Possible Types: char
    char v12;  // [bp-0x10f]
    unsigned int v13;  // [bp-0x10c]
    char v14;  // [bp-0x108]
    char v15;  // [bp-0x107]
    unsigned int v16;  // [bp-0x104]
    int v17;  // [bp-0x100]
    char v18;  // [bp-0xf0]
    unsigned int v19;  // [bp-0xef]
    unsigned int v20;  // [bp-0xec]
    int v21;  // [bp-0xe8], Other Possible Types: char
    int v22;  // [bp-0xd8], Other Possible Types: char
    int v23;  // [bp-0xc8]
    int v24;  // [bp-0xb8]
    int v25;  // [bp-0xa8]
    int v26;  // [bp-0x98]
    int v27;  // [bp-0x88]
    int v28;  // [bp-0x78]
    char v29;  // [bp-0x68]
    unsigned int v30;  // [bp-0x67]
    unsigned int v31;  // [bp-0x64]
    int v32;  // [bp-0x58]
    int v33;  // [bp-0x48]
    int v34;  // [bp-0x38]
    int v35;  // [bp-0x28]
    unsigned long v37;  // rax
    char v38;  // r14b
    unsigned long long v39;  // rdx
    unsigned long long v40;  // rax
    char *v41;  // rax
    unsigned int v42;  // ecx
    unsigned int v43;  // ecx

    v0 = a2;
    v5.advance(a1);
    v37 = v14;
    memcpy(&v21, &v5, 16);
    memcpy(&v22, &v7, 16);
    v23 = v9;
    v24 = v10;
    v38 = v11;
    v1 = *((int *)&v12);
    v2 = v13;
    if ((char)v37 != 37)
    {
        v42 = *((int *)&v15);
        *((unsigned int *)&a0->field_48) = v16;
        *((unsigned int *)((char *)&a0->field_44 + 1)) = v42;
        *((void*)&a0->field_30) = v24;
        *((void*)&a0->field_20) = v23;
        *((void*)&a0->field_10) = v22;
        *((void*)&a0->field_0) = v21;
        v43 = v1;
        a0->field_41 = v2;
        *((unsigned int *)&(&a0->field_40)[1]) = v43;
        a0->field_40 = v38;
        *((char *)&a0->field_44) = v37;
        return v37;
    }
    v32 = v21;
    v33 = v22;
    v34 = v23;
    v35 = v24;
    v3 = v1;
    v4 = v2;
    v25 = v32;
    v26 = v33;
    v27 = v34;
    v28 = v35;
    v29 = v38;
    v30 = v1;
    v31 = v2;
    if (v38 == 24)
    {
        v5 = v25.lexeme();
        v6 = v39;
        v40 = v0.eq(&v5);
        if ((char)v40)
        {
            *((char *)&a0->field_44) = 37;
            return v40;
        }
    }
    v41 = 1.alloc_impl(1);
    if (!v41)
        alloc::alloc::handle_alloc_error(1, 1); /* do not return */
    *(v41) = v0;
    v6 = 1;
    v7 = v41;
    v8 = 1;
    memcpy(&v9, &v32, 16);
    v10 = v33;
    v11 = v34;
    v17 = v35;
    v18 = v38;
    v19 = v3;
    v20 = v4;
    v5 = 9223372036854775841;
    return a0.error(&v25, &v5);
}
