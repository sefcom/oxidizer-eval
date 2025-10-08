long long forc_publish::md_pre_process::MarkdownFile::parse(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x208]
    unsigned long long v1;  // [bp-0x200]
    unsigned long long v2;  // [bp-0x1f8]
    int v3;  // [bp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x1e0]
    unsigned long long v5;  // [bp-0x1d8]
    int v6;  // [bp-0x1c8], Other Possible Types: unsigned long long
    int v7;  // [bp-0x1c0]
    unsigned long long v8;  // [bp-0x1b8]
    unsigned long long v9;  // [bp-0x1b0]
    int v10;  // [bp-0x1a8], Other Possible Types: char
    char v11;  // [bp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x198]
    int v13;  // [bp-0x190], Other Possible Types: char
    int v14;  // [bp-0x180]
    int v15;  // [bp-0x178]
    char v16;  // [bp-0x170]
    char v17;  // [bp-0x168]
    unsigned long long v18;  // [bp-0x118]
    unsigned long long v19;  // [bp-0x110]
    unsigned long v20;  // [bp-0x108]
    unsigned long long v21;  // [bp-0x100]
    unsigned long long v22;  // [bp-0xf8]
    unsigned long long v23;  // [bp-0xf0]
    unsigned long long v24;  // [bp-0xe8]
    int v25;  // [bp-0x60], Other Possible Types: char
    int v26;  // [bp-0x50]
    char v27;  // [bp-0x40]
    unsigned long long v30;  // rax
    int v31;  // xmm0
    unsigned long long v32;  // rax
    unsigned long long v33;  // r12
    unsigned long long v34;  // rax
    int v35;  // xmm0

    std::fs::canonicalize(&(char)v22, a1.as_ref(a2), a2);
    if ((char)(((0 ^ v22) & (0 ^ -(v22))) >> 63))
    {
        forc_publish::md_pre_process::MarkdownFile::parse::{{closure}}(&v10, a1, a2, v23);
        v30 = *((long long *)&v10);
        v31 = *((int128_t *)&v11);
        v6 = v31;
        v8 = *((long long *)&v13);
        v5 = v8;
        v3 = v31;
        *((unsigned long long *)&a0[32]) = v8;
        a0[16] = v31;
        *((unsigned long long *)&a0[8]) = v30;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return v30;
    }
    *((int128_t *)&v0) = *((int128_t *)&v22);
    v2 = v24;
    std::fs::read_to_string(&v10, &(char)v0);
    if (*((long long *)&v10) == 0x8000000000000000)
    {
        *((unsigned long long *)&a0[8]) = 0;
        *((unsigned long long *)&a0[16]) = v4;
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v3 = *((long long *)&v10);
        v4 = v11;
        v5 = v12;
        v32 = v1.parent(v2);
        if (!v32)
            v33 = 1;
        v10.new("\\{\\{#include\\s+([^\\}]+)\\}\\}forc-plugins/forc-publish/src/md_pre_process/mod.rs", 27);
        v34 = *((long long *)&v10);
        memcpy(&(char)v22, &v11, 16);
        v24 = *((long long *)&v13);
        if (v34)
        {
            v9 = v24;
            *((int128_t *)&v7) = *((int128_t *)&v22);
            v6 = v34;
            (char)v22.captures_iter(&v6, v4, v5);
            ::libc.so.0::memcpy(&v10, &(char)v22, 144);
            v18 = v4;
            v19 = v5;
            *((int *)&v20) = (v32 ? v32 : ".\\{\\{#include\\s+([^\\}]+)\\}\\}forc-plugins/forc-publish/src/md_pre_process/mod.rs");
            v21 = v33;
            v25.collect(&v10);
            v12 = v2;
            v35 = (int128_t)v0;
            v10 = v35;
            memcpy(&v16, &v27, 16);
            v14 = v26;
            v13 = v25;
            *(a0) = v35;
            *((long long *)&a0[64]) = *((long long *)&v17);
            a0[48] = v15;
            *((int128_t *)&a0[32]) = (int128_t)(&v13)[8];
            *((unsigned long long *)&a0[16]) = v12;
            *((long long *)&a0[24]) = (long long)v13;
            core::ptr::drop_in_place<regex::regex::string::Regex>(&v6);
            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v3);
        }
        *((unsigned long long *)&a0[32]) = v24;
        *((int128_t *)&a0[16]) = *((int128_t *)&v22);
        *((unsigned long long *)&a0[8]) = 1;
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<alloc::string::String>(&v3);
    }
    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>((long long)v0, v1);
}
