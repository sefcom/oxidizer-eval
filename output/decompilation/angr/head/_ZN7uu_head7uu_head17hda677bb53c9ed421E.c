long long uu_head::uu_head(struct_0 *a0)
{
    char v0;  // [bp-0xd6]
    char v1;  // [bp-0xd5]
    char v2;  // [bp-0xd4], Other Possible Types: unsigned int
    char *v3;  // [bp-0xd0]
    char *v4;  // [bp-0xc8]
    unsigned int v5;  // [bp-0xc8]
    unsigned int v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xc0]
    char *v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xb0]
    unsigned long long v10;  // [bp-0xa8]
    unsigned long long v11;  // [bp-0xa0]
    char *v12;  // [bp-0x98], Other Possible Types: unsigned long long
    int v13;  // [bp-0x90]
    unsigned long long v14;  // [bp-0x90]
    void* v15;  // [bp-0x88]
    unsigned long long v16;  // [bp-0x70]
    void* v17;  // [bp-0x68]
    unsigned long v18;  // [bp-0x60]
    unsigned long v19;  // [bp-0x58]
    unsigned int v20;  // [bp-0x50]
    unsigned int v21;  // [bp-0x4c]
    unsigned long long v22;  // [bp-0x48]
    unsigned long long v23;  // [bp-0x40]
    unsigned long long v24;  // [bp-0x38]
    unsigned long long v26;  // rax
    unsigned long long v27[3];  // r14, Other Possible Types: unsigned long
    unsigned long long v28;  // rbp
    unsigned long v29;  // r14
    unsigned long v30;  // r15
    unsigned long long v31;  // rdx
    char v32;  // al
    unsigned long long v33;  // rdx
    unsigned long long v34;  // rbx
    unsigned int v35;  // edi

    v26 = a0->field_20;
    if (!v26)
        return 0;
    v27 = a0->field_18;
    v28 = &v27[v26];
    v27 += 1;
    v1 = a0->field_2a;
    v0 = (a0->field_28 ^ 1) & v26 != 1 | a0->field_29;
    v3 = &v2;
    do
    {
        if (!v1)
        {
LABEL_467a90:
            v29 = *((long long *)(v27 + 8));
            v30 = *((long long *)(v27 + 16));
            if (!(char)v29.equal(v30, "-error writing 'standard output': src/uu/head/src/head.rs==> standard input <==\n:  <==\nerror reading parse error: : number of -bytes or -lines is too largeclap error: ", 1))
            {
                v18 = v29;
                v19 = v30;
                v20.open(v29, v30);
                if (v20 == 1)
                {
                    v16 = v22.map_err_context(v18, v19);
                    uucore::mods::error::set_exit_code(1);
                    v23 = uucore::util_name();
                    v24 = v31;
                    v4 = &v23;
                    v7 = <&T as core::fmt::Display>::fmt;
                    v8 = &v16;
                    v9 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v10 = &g_4f7d58;
                    v11 = 3;
                    v15 = 0;
                    v12 = &v4;
                    v14 = 2;
                    std::io::stdio::_eprint(&v10);
                    core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v16);
                    v27 += 24;
                    if (v27 == v28)
                        break;
                    else
                        goto LABEL_467a90;
                }
                else
                {
                    v2 = v21;
                    if ((v0 & 1))
                    {
                        v4 = &v18;
                        v7 = <&T as core::fmt::Display>::fmt;
                        v10 = &g_4f7d88;
                        v11 = 2;
                        v15 = 0;
                        v12 = &v4;
                        v14 = 1;
                        std::io::stdio::_print(&v10);
                    }
                    if (!((char)uu_head::head_file(&v2, a0) & 1))
                    {
                        v17 = 0;
                        core::ptr::drop_in_place<std::fs::File>(v2);
                        goto LABEL_467d77;
                    }
                    else
                    {
                        v31.from();
                        goto LABEL_0x467dbc;
                    }
                }
            }
        }
        if ((v0 & 1))
        {
            v10 = &g_4f7d48;
            v11 = 1;
            v12 = 8;
            *((uint128_t *)&v13) = 0;
            std::io::stdio::_print(&v10);
        }
        std::io::stdio::stdin();
        v5 = 0;
        v10 = v5.stream_position();
        v11 = v31;
        if (((char)v10 & 1))
        {
            v32 = (char)uu_head::head_file(&v5, a0);
        }
        else
        {
            if (((char)uu_head::head_file(&v5, a0) & 1))
                goto LABEL_467d9f;
            v32 = v5.seek(0, v31 + v31);
        }
        if (!(v32 & 1))
        {
            core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v10);
            core::ptr::drop_in_place<std::fs::File>(v6);
            v17 = 0;
        }
        else
        {
LABEL_467d9f:
            v33.from();
            core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v10);
            goto LABEL_0x467dbc;
        }
LABEL_467d77:
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v17);
        v27 += 24;
        if (v27 == v28)
        {
            v27 = v27;
            if (v27 != v28)
                continue;
        }
    } while (v27 != v28);
    return 0;
    core::ptr::drop_in_place<std::fs::File>(v35);
    return v34;
}
