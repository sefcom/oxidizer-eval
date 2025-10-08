long long uu_chcon::fts::FTS::new(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    int v0;  // [bp-0x98], Other Possible Types: char
    char v1;  // [bp-0x90]
    char v2;  // [bp-0x8c]
    char v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    char v6;  // [bp-0x60], Other Possible Types: unsigned int
    char v7;  // [bp-0x5c]
    char v8;  // [bp-0x58]
    char v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    int v11;  // [bp-0x40]
    int v12;  // [bp-0x30]
    char v13;  // [bp-0x20]
    unsigned long long v15;  // rdx
    unsigned long v17;  // rax
    unsigned long long v18;  // r14
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax

    v6.collect(a1.map(a2).map(v15), a2);
    v17 = v6;
    if ((unsigned int)v17 != 18)
    {
        memcpy(&v2, &v9, 16);
        *((int128_t *)&v0) = *((int128_t *)&v7);
        *((long long *)&a0[64]) = *((long long *)&v13);
        a0[48] = v12;
        a0[32] = v11;
        *((int128_t *)&a0[16]) = *((int128_t *)&v2);
        *((int128_t *)&a0[4]) = (int128_t)v0;
        *((unsigned int *)a0) = v17;
        return v17;
    }
    memcpy(&v3, &v8, 16);
    v5 = v10;
    if (v10)
    {
        v6.chain(v4, v10 * 16 + v4);
        v0.collect(&v6);
        v18 = *((long long *)&v1);
        v19 = fts_open(v18, a3, 0);
        if (v19)
        {
            *((unsigned long long *)&a0[8]) = v19;
            *((unsigned long long *)&a0[16]) = 0;
            *((unsigned int *)a0) = 18;
        }
        else
        {
            v20 = *(__errno_location()) * 0x100000000;
            *((unsigned int *)a0) = 16;
            *((char **)&a0[8]) = "fts_open()fts_read()FTS::set()fts_set()verbosereferencerangerecursivefollow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nW";
            *((unsigned long long *)&a0[16]) = 10;
            *((unsigned long long *)&a0[24]) = v20 | 2;
        }
        core::ptr::drop_in_place<alloc::vec::Vec<*const i8>>(*((long long *)&v0), v18);
    }
    else
    {
        *((unsigned int *)a0) = 16;
        *((char **)&a0[8]) = "FTS::new()fts_open()fts_read()FTS::set()fts_set()verbosereferencerangerecursivefollow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to ";
        *((unsigned long long *)&a0[16]) = 10;
        *((unsigned long long *)&a0[24]) = 85899345923;
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<alloc::ffi::c_str::CString>>(&v3);
}
