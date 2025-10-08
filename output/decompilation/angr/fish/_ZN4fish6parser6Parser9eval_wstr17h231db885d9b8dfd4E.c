long long fish::parser::Parser::eval_wstr(void* a0, unsigned long long a1, struct_0 *a2, unsigned long long a3, unsigned long long a4, unsigned int a5)
{
    unsigned long long v0;  // [bp-0x1d8]
    void* v1;  // [bp-0x1d0]
    unsigned long long v2;  // [bp-0x1c8]
    void* v3;  // [bp-0x1c0]
    int v4;  // [bp-0x1a8]
    unsigned long v5;  // [bp-0x198]
    int v6;  // [bp-0x190]
    int v7;  // [bp-0x180]
    int v8;  // [bp-0x170]
    int v9;  // [bp-0x168]
    char v10;  // [bp-0x160]
    char v11;  // [bp-0x158]
    char v12;  // [bp-0x150]
    char v13;  // [bp-0x148]
    int v14;  // [bp-0x140]
    unsigned long long v15;  // [bp-0x138]
    int v16;  // [bp-0x130], Other Possible Types: char
    unsigned long v17;  // [bp-0x120]
    int v18;  // [bp-0x118], Other Possible Types: char
    int v19;  // [bp-0x108]
    int v20;  // [bp-0xf8]
    char v21;  // [bp-0xe8]
    char v22;  // [bp-0xd8]
    char v23;  // [bp-0xc8]
    char v24;  // [bp-0xc0]
    unsigned long long v25;  // [bp-0xb8]
    unsigned long long v26;  // [bp-0xb0]
    char v27;  // [bp-0xa8]
    unsigned long v28;  // [bp-0x98]
    unsigned long long v29;  // [bp-0x90]
    char v30;  // [bp-0x88]
    char v31;  // [bp-0x78]
    int v32;  // [bp-0x68]
    char v33;  // [bp-0x58]
    char v34;  // [bp-0x48]
    unsigned long long v35;  // [bp-0x38]
    unsigned long long v37;  // r12
    unsigned long v38;  // r13
    char v39;  // al

    v1 = 0;
    v2 = 8;
    v3 = 0;
    v37 = a2->field_0[1];
    v38 = a2->field_8;
    fish::ast::parse(&v18, v37, v38, 0, &v1);
    if (!v24)
        v39 = (char)fish::parse_util::parse_util_detect_errors_in_ast(&v18, v37, v38, &v1) & 1;
    if (!v39)
    {
        *((int128_t *)&v14) = *((int128_t *)&v23);
        memcpy(&v12, &v22, 16);
        memcpy(&v10, &v21, 16);
        v8 = v20;
        v7 = v19;
        v6 = v18;
        *((unsigned long long [2])&v4) = a2->field_0;
        v5 = a2->field_8;
        v25 = 1;
        v26 = 1;
        memcpy(&v30, &v6, 16);
        memcpy(&v31, &(char)v7, 16);
        v32 = v9;
        memcpy(&v33, &v11, 16);
        memcpy(&v34, &v13, 16);
        memcpy(&v27, &v4, 16);
        v28 = v5;
        v29 = (long long)v6;
        v35 = v15;
        v0 = v25.new();
        v25.eval_parsed_source(a1, &v0, a3, a4, a5);
        *((int *)&a0[16]) = v26;
        *((unsigned long long *)&a0[8]) = v25;
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<alloc::sync::Arc<fish::parse_tree::ParsedSource>>(&v0);
        core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&v1);
        return a0;
    }
    v16.get_backtrace(a1, v37, v38, &v1);
    *((unsigned long *)&a0[16]) = v17;
    *(a0) = v16;
    core::ptr::drop_in_place<fish::ast::Ast>(&v18);
    core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&v1);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a2);
    return a0;
}
