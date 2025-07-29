long long flealib::commandparser::CommandParser::get_command(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x1c8], Other Possible Types: char *, unsigned long long
    unsigned long long v1;  // [bp-0x1c0]
    char *v2;  // [bp-0x1b8], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v3;  // [bp-0x1b8]
    int v4;  // [bp-0x1b0], Other Possible Types: unsigned long, unsigned long long
    void* v5;  // [bp-0x1a8], Other Possible Types: unsigned long
    unsigned long long v6;  // [bp-0x1a0]
    int v7;  // [bp-0x198], Other Possible Types: char
    unsigned long long v8;  // [bp-0x188]
    char *v9;  // [bp-0x180], Other Possible Types: char
    unsigned long long v10;  // [bp-0x178]
    int v11;  // [bp-0x158], Other Possible Types: char
    unsigned long long v12;  // [bp-0x148]
    unsigned long long v14;  // [bp-0x140]
    unsigned long long v15;  // [bp-0x138]
    unsigned long v16;  // [bp-0x130]
    int v17;  // [bp-0x128]
    int v18;  // [bp-0x118]
    char v19;  // [bp-0x108]
    char v20;  // [bp-0xb8]
    int v21;  // [bp-0xa8]
    int v22;  // [bp-0x98]
    unsigned long long v23;  // [bp-0x88]
    char *v25;  // r13
    unsigned long long v26;  // r14
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rax
    unsigned long long v30;  // rdx

    roxmltree::parse::parse(&v20, a2, a3, 4294967295, 0);
    if (!((char)(((0 ^ *((long long *)&v20)) & (0 ^ -(*((long long *)&v20)))) >> 63)))
    {
        ::libc.so.0::memcpy(&(char)v14, &v20, 136);
        if (!v16)
            core::panicking::panic_bounds_check(0, 0, &g_b08f38); /* do not return */
        v0 = &(char)v14;
        v1 = v15;
        v2 = 1;
        v9.new(&v0);
        v0.try_fold(&v9);
        v25 = v0;
        if (v25)
        {
            v26 = v1;
            v27 = v25.attribute(v26, "name B\r\nLAltreprAhomCham", 4);
            if (!v27)
                v28 = 28;
            if (!v27)
                v27 = "'name' attribute not exists.'value' attribute not exists.\nvalueCommand xml corruptedCommandExecuting bash command:";
            v0.to_vec(v27, v28);
            v8 = v3;
            memcpy(&v7, &v0, 16);
            v29 = v25.attribute(v26, "valueCommand xml corruptedCommandExecuting bash command:", 5);
            if (!v29)
                v30 = 29;
            if (!v29)
                v29 = "'value' attribute not exists.\nvalueCommand xml corruptedCommandExecuting bash command:";
            v11.to_vec(v29, v30);
            v6 = v12;
            v4 = v11;
            v2 = v8;
            v0 = v7;
            a0->field_20 = v5;
            a0->field_28 = v6;
            a0->field_10 = v2;
            a0->field_18 = v4;
            *((void*)&a0->field_0) = v7;
            core::ptr::drop_in_place<roxmltree::Document>(&(char)v14);
            if (*((long long *)&v20) == 0x8000000000000000)
            {
                core::ptr::drop_in_place<core::result::Result<roxmltree::Document,roxmltree::parse::Error>>(&v20);
                return a0;
            }
            return a0;
        }
        core::ptr::drop_in_place<roxmltree::Document>(&(char)v14);
        if (!(*((long long *)&v20) == 0x8000000000000000))
            goto LABEL_772cd1;
    }
    core::ptr::drop_in_place<core::result::Result<roxmltree::Document,roxmltree::parse::Error>>(&v20);
LABEL_772cd1:
    roxmltree::parse::parse(&(char)v14, a2, a3, 4294967295, 0);
    if (v14 == 0x8000000000000000)
    {
        v23 = *((long long *)&v19);
        v22 = v18;
        v21 = v17;
        memcpy(&v20, &v15, 16);
        v9 = &v20;
        v10 = <roxmltree::parse::Error as core::fmt::Display>::fmt;
        v0 = &g_b08f18;
        v1 = 2;
        v5 = 0;
        v2 = &v9;
        v4 = 1;
        std::io::stdio::_print(&v0);
        core::ptr::drop_in_place<roxmltree::parse::Error>(&v20);
        if (v14 == 0x8000000000000000)
        {
            *((char **)&a0->padding_1[7]) = "Command xml corruptedCommandExecuting bash command:";
            a0->field_10 = 21;
            *((long long *)&a0->field_0) = 0x8000000000000000;
            return a0;
        }
    }
    core::ptr::drop_in_place<core::result::Result<roxmltree::Document,roxmltree::parse::Error>>(&(char)v14);
    *((char **)&a0->padding_1[7]) = "Command xml corruptedCommandExecuting bash command:";
    a0->field_10 = 21;
    *((long long *)&a0->field_0) = 0x8000000000000000;
    return a0;
}
