long long forc_publish::md_pre_process::MarkdownFlattener::flatten_files(void* a0, unsigned long long a1, unsigned long a2)
{
    int v0;  // [bp-0xf8]
    int v1;  // [bp-0xf8]
    int v2;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xe0]
    unsigned long long v6;  // [bp-0xd8]
    char v7;  // [bp-0xd8]
    unsigned long long v8;  // [bp-0xd0]
    unsigned long long v9;  // [bp-0xc8]
    unsigned long long v10;  // [bp-0xc0]
    unsigned long long v11;  // [bp-0xb8]
    unsigned long long v12;  // [bp-0xb0]
    unsigned long long v13;  // [bp-0xa8]
    unsigned long long v14;  // [bp-0xa0]
    unsigned long long v15;  // [bp-0x98]
    int v16;  // [bp-0x90]
    unsigned long long v17;  // [bp-0x80]
    int v18;  // [bp-0x78]
    int v19;  // [bp-0x68]
    unsigned long long v20;  // [bp-0x58]
    unsigned long long v21;  // [bp-0x50]
    int v22;  // [bp-0x48]
    unsigned long long v23;  // [bp-0x38]
    unsigned long long v25;  // rax
    unsigned long long v26;  // rdx
    unsigned long long v27[3];  // rax

    v25 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v18) = g_1253140;
    *((uint128_t *)&v19) = g_1253150;
    v20 = v25;
    v21 = v26;
    (char)v4.new("\\{\\{#include\\s+([^\\}]+)\\}\\}forc-plugins/forc-publish/src/md_pre_process/mod.rs", 27);
    memcpy(&v2, &v7, 16);
    v3 = v9;
    if (!v4)
    {
        *((unsigned long long *)&a0[32]) = v3;
        a0[16] = v0;
        *((unsigned long long *)&a0[8]) = 1;
        *((unsigned long long *)a0) = 0;
        return (unsigned long long)core::ptr::drop_in_place<std::collections::hash::map::HashMap<std::path::PathBuf,alloc::string::String>>(&v18);
    }
    v17 = v3;
    v16 = v0;
    v15 = v4;
    v10 = a1;
    v11 = a1 + a2 * 24;
    if (v10.next_back())
    {
        do
        {
            v1 = v0;
            std::fs::read_to_string(&(char)v4, v27);
            if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
            {
                *((unsigned long long *)&a0[16]) = v6;
                *((uint128_t *)a0) = 0;
                core::ptr::drop_in_place<regex::regex::string::Regex>(&v15);
                return (unsigned long long)core::ptr::drop_in_place<std::collections::hash::map::HashMap<std::path::PathBuf,alloc::string::String>>(&v18);
            }
            v12 = v4;
            v13 = v6;
            v14 = v8;
            (char)v4.expand_includes(v6, v8, v27[1], v27[2], &v18, &v15);
            memcpy(&v2, &v7, 16);
            v3 = v9;
            if (v4 != 6)
            {
                *((unsigned long long *)&a0[32]) = v3;
                a0[16] = v1;
                *((unsigned long long *)&a0[8]) = v4;
                *((unsigned long long *)a0) = 0;
                core::ptr::drop_in_place<alloc::string::String>(&v12);
                core::ptr::drop_in_place<regex::regex::string::Regex>(&v15);
                return (unsigned long long)core::ptr::drop_in_place<std::collections::hash::map::HashMap<std::path::PathBuf,alloc::string::String>>(&v18);
            }
            v23 = v3;
            v22 = v1;
            (char)v4.clone(v27[1], v27[2]);
            v3 = v8;
            memcpy(&v1, &v4, 16);
            (char)v4.insert(&v18, &v1, &v22);
            core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&(char)v4);
            core::ptr::drop_in_place<alloc::string::String>(&v12);
            v27 = v10.next_back();
            v0 = v2;
        } while (v27);
    }
    *((int128_t *)&a0[32]) = *((int128_t *)&v20);
    a0[16] = v19;
    *(a0) = v18;
    return core::ptr::drop_in_place<regex::regex::string::Regex>(&v15);
}
