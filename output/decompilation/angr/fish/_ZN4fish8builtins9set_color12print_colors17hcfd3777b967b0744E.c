void fish::builtins::set_color::print_colors(struct_0 *a0, unsigned long long *a1, unsigned long long a2, unsigned long a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // [bp-0xa8]
    char v1;  // [sp-0xa8]
    char v2;  // [bp-0xa4]
    unsigned int v3;  // [bp-0xa3]
    char v4;  // [bp-0xa0]
    unsigned int v5;  // [bp-0x9f]
    unsigned int v6;  // [bp-0x9b]
    unsigned long long v7;  // [bp-0x98]
    unsigned int v8;  // [bp-0x90]
    unsigned int v9;  // [bp-0x8c]
    unsigned long long v10;  // [bp-0x80]
    unsigned long long v11;  // [bp-0x78]
    void* v12;  // [bp-0x68]
    unsigned long long v13;  // [bp-0x60]
    void* v14;  // [bp-0x58]
    unsigned long long v15;  // [bp-0x50]
    unsigned int v16;  // [bp-0x48]
    unsigned short v17;  // [bp-0x44]
    char v18;  // [bp-0x3f]
    unsigned int v19;  // [bp-0x3b]
    unsigned long v21;  // r12
    unsigned long long v22;  // 4096
    unsigned long long v23;  // r15
    unsigned long long *v24;  // rbp
    unsigned long long v25;  // rax
    unsigned long long *v26;  // r12
    unsigned long long v27;  // rax

    v21 = a4;
    v12 = 0;
    v13 = 1;
    v14 = 0;
    v15 = 0xffffffff00000000;
    v16 = 0;
    v17 = 773;
    v18 = 3;
    v19 = 0;
    if (a2)
    {
        v22 = a2;
    }
    else
    {
        v1.named_color_names();
        v11 = *((long long *)&v1);
        a1 = *((long long *)&v4);
        v22 = v7;
    }
    v23 = v22;
    v8 = ((char)v21 == 4 ? 0 : (unsigned int)v21);
    if ((char)v21 == 4)
    {
        v10 = a3 >> 32;
        v24 = 0;
        while (v23 * 16 != v24)
        {
            if ((char)a0.out_is_terminal())
            {
                v25 = *((long long *)(a1 + v24)).from_wstr(*((long long *)(a1 + v24 + 8)));
                v3 = ((char)v25 == 4 ? 0 : (unsigned int)v25);
                v5 = v8;
                v6 = v9;
                v0 = a3;
                v2 = v10;
                v12.set_text_face(&v0);
            }
            v12.write_wstr(*((long long *)(a1 + v24)), *((long long *)(a1 + v24 + 8)));
            a0.out_is_terminal();
            v24 += 2;
            v12.writech(10);
        }
    }
    else
    {
        v10 = a3 >> 32;
        v26 = 0;
        while (v23 * 16 != v26)
        {
            if ((char)a0.out_is_terminal())
            {
                v27 = *((long long *)(a1 + v26)).from_wstr(*((long long *)(a1 + v26 + 8)));
                v3 = ((char)v27 == 4 ? 0 : (unsigned int)v27);
                v5 = v8;
                v6 = v9;
                v0 = a3;
                v2 = v10;
                v12.set_text_face(&v0);
            }
            v12.write_wstr(*((long long *)(a1 + v26)), *((long long *)(a1 + v26 + 8)));
            if ((char)a0.out_is_terminal())
                v12.reset_text_face();
            v26 += 2;
            v12.writech(10);
        }
    }
    fish::common::str2wcstring(&v0, v13, 0);
    a0->field_8.append(&v0);
    if (!a2)
        core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v11, a1);
    core::ptr::drop_in_place<fish::io::BufferElement>(v12, v13);
    return;
}
