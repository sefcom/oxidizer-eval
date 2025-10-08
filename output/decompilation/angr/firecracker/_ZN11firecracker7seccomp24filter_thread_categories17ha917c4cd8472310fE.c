void firecracker::seccomp::filter_thread_categories(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x128]
    unsigned long long v1;  // [bp-0x118]
    char v2;  // [bp-0x108]
    char v3;  // [bp-0x101]
    char v4;  // [bp-0xf9]
    char v5;  // [bp-0xf8]
    unsigned long long v6;  // [bp-0xf1]
    int v7;  // [bp-0xe8]
    int v8;  // [bp-0xd8]
    char v9;  // [bp-0xc8]
    int v10;  // [bp-0xb8]
    int v11;  // [bp-0xa8], Other Possible Types: char
    int v12;  // [bp-0x98], Other Possible Types: char
    int v13;  // [bp-0x88]
    int v14;  // [bp-0x78], Other Possible Types: char
    char v15;  // [bp-0x68]
    unsigned long v16;  // [bp-0x60]
    int v17;  // [bp-0x58]
    char v18;  // [bp-0x38]
    char v19;  // [bp-0x28]
    char *v21;  // rdi
    unsigned long long v22;  // rax

    v14.into_iter(a1);
    v2.partition(&v14);
    v13 = v7;
    memcpy(&v12, &v5, 16);
    memcpy(&v11, &v2, 16);
    v17 = v10;
    memcpy(&v15, &v9, 16);
    v14 = v8;
    if (v16)
    {
        v2.iter(&v14);
        v0.to_vec(1, 0);
        v18.fold(&v2, &v0);
        v18.pop();
        v6 = *((long long *)&v19);
        memcpy(&v3, &v18, 16);
        *((char *)&a0[8]) = 18;
    }
    else
    {
        v2.to_vec("vmm", 3);
        v1 = *((long long *)&v5);
        memcpy(&v0, &v2, 16);
        if (v11.get_inner(&v0))
        {
            core::ptr::drop_in_place<alloc::string::String>(&v0);
            v2.to_vec("api", 3);
            v1 = *((long long *)&v5);
            memcpy(&v0, &v2, 16);
            if (v11.get_inner(&v0))
            {
                core::ptr::drop_in_place<alloc::string::String>(&v0);
                v2.to_vec("vcpu", 4);
                v1 = *((long long *)&v5);
                memcpy(&v0, &v2, 16);
                if (v11.get_inner(&v0))
                {
                    core::ptr::drop_in_place<alloc::string::String>(&v0);
                    a0[32] = v13;
                    a0[16] = v12;
                    *(a0) = v11;
                    core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,alloc::sync::Arc<alloc::vec::Vec<u64>>>>(&v14);
                    return;
                }
            }
        }
        v6 = v1;
        memcpy(&v3, &v0, 16);
        *((char *)&a0[8]) = 19;
    }
    v22 = *((long long *)&v4);
    *((int128_t *)&a0[9]) = *((int128_t *)&v2);
    *((unsigned long long *)&a0[24]) = v22;
    *((unsigned long long *)&a0[32]) = v6;
    *((unsigned long long *)a0) = 0;
    core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,alloc::sync::Arc<alloc::vec::Vec<u64>>>>(&v14);
    v21 = &v11;
    core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,alloc::sync::Arc<alloc::vec::Vec<u64>>>>(v21);
    return;
}
