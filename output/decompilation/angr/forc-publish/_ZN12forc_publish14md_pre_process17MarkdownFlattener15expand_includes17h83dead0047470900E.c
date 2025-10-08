long long forc_publish::md_pre_process::MarkdownFlattener::expand_includes(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    int v0;  // [bp-0x238], Other Possible Types: char
    unsigned long long v1;  // [bp-0x230]
    struct_0 *v2;  // [bp-0x220]
    unsigned long long v3;  // [bp-0x218]
    unsigned long long v4;  // [bp-0x210]
    void* v5;  // [bp-0x208]
    unsigned long long v6;  // [bp-0x200]
    void* v7;  // [bp-0x1f8]
    unsigned long long v8;  // [bp-0x1f0]
    unsigned long long v9;  // [bp-0x1e8]
    void* v10;  // [bp-0x1e0]
    unsigned long long v11;  // [bp-0x1d0]
    int v12;  // [bp-0x1c8]
    void* v13;  // [bp-0x1b8]
    int v14;  // [bp-0x1b0]
    int v15;  // [bp-0x1a0]
    int v16;  // [bp-0x190]
    int v17;  // [bp-0x180]
    unsigned long long v18;  // [bp-0x170]
    int v19;  // [bp-0x168], Other Possible Types: char
    int v20;  // [bp-0x158]
    int v21;  // [bp-0x148]
    int v22;  // [bp-0x138]
    unsigned long long v23;  // [bp-0x128]
    char v24;  // [bp-0xd0]
    unsigned long long v25;  // [bp-0x40]
    unsigned long long v26;  // [bp-0x38]
    unsigned long long v27;  // rax
    unsigned long long v28;  // rcx
    char *v29;  // rbx
    void* v31;  // r15
    char *v32;  // r12
    unsigned long long v33;  // rax
    unsigned long long v34;  // rdx
    unsigned long long v36[6];  // rax
    unsigned long long v37;  // rax

    v27 = a3.parent(a4);
    if (!v27)
        v28 = 1;
    v11 = v28;
    if (!v27)
        v27 = ".\\{\\{#include\\s+([^\\}]+)\\}\\}forc-plugins/forc-publish/src/md_pre_process/mod.rs";
    v5 = 0;
    v6 = 1;
    v7 = 0;
    v19.captures_iter(a6, a1, a2);
    v29 = &v19;
    ::libc.so.0::memcpy(&v24, &v19, 144);
    v4 = a1;
    v25 = a1;
    v3 = a2;
    v26 = a2;
    v31 = 0;
    while (true)
    {
        v14.next(&v24);
        if ((int)v14 == 2)
        {
            core::ptr::drop_in_place<regex::regex::string::CaptureMatches>(&v24);
            v37 = v31.get(v4, v3);
            if (!v37)
                core::str::slice_error_fail(v4, v3, v31, v3, &g_1253f40); /* do not return */
            v5.spec_extend(v37, v34 + v37);
            *((unsigned long long *)((char *)&v2->field_8 + 8)) = 0;
            *((int128_t *)&(&v2->field_0)[1]) = *((int128_t *)&v5);
            v2->field_0 = 6;
            break;
        }
        v23 = v18;
        v22 = v17;
        v21 = v16;
        v20 = v15;
        v19 = v14;
        v0.get_group(&v20);
        if (!(v0 & 1))
            core::option::unwrap_failed(&g_1253f58); /* do not return */
        v32 = v29;
        v33 = v31.get(v1, v4, v3);
        if (!v33)
            core::str::slice_error_fail(v4, v3, v31, v1, &g_1253f70); /* do not return */
        v5.spec_extend(v33, v34 + v33);
        v29 = v32;
        v8.join(v27, v11, core::str::<impl str>::trim_matches(v32.index(1), v34), v34);
        std::fs::canonicalize(&v12, v9, v10);
        if (!((char)(((0 ^ (long long)v12) & (0 ^ -((long long)v12))) >> 63)))
        {
            v31 = v13;
            v0 = v12;
            v36 = a5.get_inner(&v0);
            if (!v36)
            {
                *((void* *)((char *)&v2->field_8 + 8)) = v31;
                *((int128_t *)&(&v2->field_0)[1]) = (int128_t)v0;
                v2->field_0 = 2;
                core::ptr::drop_in_place<std::path::PathBuf>(v8, v9);
LABEL_a64795:
                core::ptr::drop_in_place<regex::regex::string::Captures>(&v19);
                core::ptr::drop_in_place<regex::regex::string::CaptureMatches>(&v24);
                return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v5);
            }
            v5.spec_extend(v36[4], v36[5] + v36[4]);
            core::ptr::drop_in_place<std::path::PathBuf>((long long)v0, v1);
            core::ptr::drop_in_place<std::path::PathBuf>(v8, v9);
            core::ptr::drop_in_place<regex::regex::string::Captures>(v29);
        }
        else
        {
            *((void* *)((char *)&v2->field_8 + 8)) = v10;
            *((int128_t *)&(&v2->field_0)[1]) = *((int128_t *)&v8);
            v2->field_0 = 4;
            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v12);
            goto LABEL_a64795;
        }
    }
    return 0;
}
