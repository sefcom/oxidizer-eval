double fish::ast::TokenStream::advance_1(long long a0, long long a1)
{
    char v0;  // [bp-0x88]
    char v1;  // [bp-0x80]
    char v2;  // [bp-0x7f]
    char v3;  // [bp-0x7e]
    char v4;  // [bp-0x7d]
    char v5;  // [bp-0x7c]
    char v6;  // [bp-0x7b]
    char v7;  // [bp-0x7a]
    char v8;  // [bp-0x78]
    unsigned int v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x58]
    char v11;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x40]
    char v13;  // [bp-0x38], Other Possible Types: unsigned long
    char v14;  // [bp-0x36]
    unsigned long long v15;  // [bp-0x30]
    unsigned long v17;  // r14
    unsigned long v18;  // xmm0lq
    struct_0 *v19;  // r12
    unsigned long long v20;  // rax
    unsigned long long v21;  // r14
    unsigned long long v22;  // rdx
    unsigned long long v23;  // r15
    char v24;  // al
    unsigned long long v27;  // r14
    int v30;  // xmm0

    v17 = a1 + 56;
    v11.next(v17);
    if (v14 == 2)
    {
        a0.new(11);
        return v18;
    }
    v9 = *((int *)&v13);
    memcpy(&v8, &v11, 16);
    v19 = *((char *)&v9 + 1);
    v0.new(*((char *)(v19 + &g_10e2078)));
    v20 = v17.text_of(&v8);
    v21 = v20;
    v23 = v22;
    v10 = v20;
    v1 = fish::ast::keyword_for_token(v19 & 255, v20, v22);
    v4 = v21.starts_with(v22, 45);
    v11 = "-";
    v12 = 2;
    v13 = "-";
    v15 = 6;
    v5 = v10.slice_contains(&v11, 2);
    if (v2 == 10)
    {
        v24 = v21.eq_by(v21 + v22 * 4, "\n%s: %s\nInvalid working directory, it must start and end with /", "%s: %s\nInvalid working directory, it must start and end with /");
        v21 = v10;
        v23 = v22;
    }
    else
    {
        v24 = 0;
    }
    v6 = v24;
    v7 = fish::tokenizer::variable_assignment_equals_pos(v21, v23) == 1;
    v3 = v9;
    if ((int)v8.offset() == -1)
        core::panicking::panic("assertion failed: token.offset() < SOURCE_OFFSET_INVALID%*swill_visit %ls\r", 56, &g_14c50c8); /* do not return */
    v0.set_source_start(v8.offset());
    v0.set_source_length(v8.length());
    if ((char)v9)
    {
        v27 = v8.error_offset_within_token();
        if (v27 < v0.source_length())
        {
            v0.set_source_start(v27 + v0.source_start());
            v0.set_source_length(v8.error_length());
        }
    }
    v30 = *((int128_t *)&v0);
    *((void*)a0) = v30;
    return (unsigned long long)v30;
}
