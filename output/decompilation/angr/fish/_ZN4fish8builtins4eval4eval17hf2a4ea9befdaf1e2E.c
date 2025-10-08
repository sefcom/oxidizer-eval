long long fish::builtins::eval::eval(struct_2 *a0, struct_0 *a1, unsigned long a2, unsigned long a3)
{
    unsigned int v0;  // [bp-0xbc]
    void* v1;  // [bp-0xb8]
    void* v2;  // [bp-0xb0]
    char v3;  // [bp-0xa8], Other Possible Types: unsigned long long
    void* v4;  // [bp-0xa0]
    char v5;  // [bp-0x98]
    char v6;  // [bp-0x78]
    unsigned long long v7;  // [bp-0x68]
    char v8;  // [bp-0x54]
    char v9;  // [bp-0x4b]
    char v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x40]
    char v12;  // [bp-0x38]
    unsigned long long v14;  // cc_ndep
    unsigned int v15;  // eax
    void* v16;  // rdx
    unsigned long v17;  // cc_dep1
    unsigned long long v18;  // cc_ndep
    unsigned long long v19;  // cc_ndep
    void* v20;  // rbx
    unsigned long long v21;  // r13
    unsigned long long v22;  // r12
    void* v23;  // r15
    struct_0 *v24;  // 4096
    unsigned int v26;  // eax
    unsigned int v27;  // eax
    unsigned int v28;  // eax
    char v29;  // al

    if (a3 < 2)
        return 0;
    v14 = a3 < 2;
    fish::wcstringutil::join_strings(&v10, a2 + 16, a3 - 1, 32);
    v3.clone(a1->field_18->field_8, a1->field_18->field_10);
    v15 = *((long long *)&v5);
    v7 = *((long long *)&v5);
    memcpy(&v6, &v3, 16);
    v1 = 0;
    if (!a1->field_25)
    {
        v20 = 0;
        v19 = v14;
        goto LABEL_134a267;
    }
    v3 = a0->field_48.create_opts(1);
    v4 = v16;
    v17 = (char)v3 & 1;
    if (((char)v3 & 1))
    {
        core::ptr::drop_in_place<core::result::Result<alloc::sync::Arc<fish::io::IoBufferfill>,std::io::error::Error>>(&v3);
        goto LABEL_134a2c0;
    }
    v18 = _ccall(17, v17, 0, v14);
    if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v16) + 1, 0, _ccall(17, v17, 0, v14)))
        [D] Unsupported jumpkind Ijk_NoDecode at address 20227252()
    core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::io::IoBufferfill>>>(&v1);
    v1 = v16;
    v15 = v6.push(v16, &g_14c8e18);
    v19 = v18;
    if ((int)v3 == 1)
    {
        v15 = core::ptr::drop_in_place<core::result::Result<alloc::sync::Arc<fish::io::IoBufferfill>,std::io::error::Error>>(&v3);
        v19 = v18;
    }
LABEL_134a267:
    v2 = 0;
    if (a1->field_26)
    {
        v0 = v15 & 0xffffff00 | 1;
        v3 = a0->field_48.create_opts(2);
        v4 = v16;
        if (((char)v3 & 1))
        {
            core::ptr::drop_in_place<core::result::Result<alloc::sync::Arc<fish::io::IoBufferfill>,std::io::error::Error>>(&v3);
            core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::io::IoBufferfill>>>(&v2);
LABEL_134a2c0:
            core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::io::IoBufferfill>>>(&v1);
            core::ptr::drop_in_place<fish::io::IoChain>(&v6);
            v21 = 1;
            v22 = 0x100000000;
        }
        else
        {
            if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v16) + 1, 0, _ccall(17, (unsigned long long)((char)v3 & 1), 0, v19)))
                [D] Unsupported jumpkind Ijk_NoDecode at address 20227252()
            core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::io::IoBufferfill>>>(&v2);
            v2 = v16;
            v15 = v6.push(v16, &g_14c8e18);
            if ((int)v3 == 1)
                v15 = core::ptr::drop_in_place<core::result::Result<alloc::sync::Arc<fish::io::IoBufferfill>,std::io::error::Error>>(&v3);
LABEL_134a384:
            if (a1->field_0)
                v24 = a1;
            else
                v24 = 0;
            v0 = v15 & 0xffffff00 | 1;
            v8.eval_with(a0, v11, *((long long *)&v12), &v6, v24, 8);
            if (!v9)
            {
                v26 = v8.status_value();
                if (!v26)
                    goto LABEL_134a3e7;
                v22 = v26 * 0x100000000;
                v21 = 1;
            }
            else
            {
LABEL_134a3e7:
                v22 = 0;
                v21 = 0;
            }
            v27 = v6.clear();
            if (v20)
            {
                v0 = 0;
                v3.finish(v20);
                a1->field_8.append_narrow_buffer(&v3);
                core::ptr::drop_in_place<fish::io::SeparatedBuffer>(&v3);
                v28 = 0;
                if (v23)
                    goto LABEL_134a440;
            }
            else
            {
                v29 = 1;
                v28 = v27 & 0xffffff00 | 1;
                if (v23)
                {
LABEL_134a440:
                    v0 = v28;
                    v3.finish(v23);
                    a1->field_10.append_narrow_buffer(&v3);
                    core::ptr::drop_in_place<fish::io::SeparatedBuffer>(&v3);
                }
            }
            if (v20 && v29)
                core::ptr::drop_in_place<alloc::sync::Arc<fish::io::IoBufferfill>>(&v1);
            core::ptr::drop_in_place<fish::io::IoChain>(&v6);
        }
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v10);
        return v22 | v21;
    }
    v23 = 0;
    goto LABEL_134a384;
}
