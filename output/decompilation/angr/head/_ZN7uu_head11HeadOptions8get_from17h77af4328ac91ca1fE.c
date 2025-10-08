long long uu_head::HeadOptions::get_from(void* a0, unsigned long long a1)
{
    void* v0;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xd8]
    void* v2;  // [bp-0xd0]
    unsigned long long v3;  // [bp-0xc8]
    void* v4;  // [bp-0xc0], Other Possible Types: unsigned long long
    char v5;  // [bp-0xb8], Other Possible Types: unsigned int
    char v6;  // [bp-0xb7]
    char v7;  // [bp-0xb6]
    char v8;  // [bp-0xb5]
    char v9;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xb0]
    struct_0 *v11;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0xa0]
    int v13;  // [bp-0x68], Other Possible Types: char
    unsigned long long v14;  // [bp-0x58]
    char v15;  // [bp-0x50]
    struct_0 *v18;  // rax
    struct_0 *v19;  // r14
    int v20;  // xmm0
    int v21;  // xmm1

    v5 = 0xa000000;
    v0 = 0;
    v1 = 10;
    v2 = 0;
    v3 = 8;
    v4 = 0;
    v5 = a1.get_flag("QUIETquietsilentnever print headers giving file namesVERBOSEverbosealways print headers giving file names-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedline delimiter is NUL, not newlineinvalid number of bytes: invalid number of lin", 5);
    v6 = a1.get_flag("VERBOSEverbosealways print headers giving file names-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedline delimiter is NUL, not newlineinvalid number of bytes: invalid number of lines: ", 7);
    *((int *)&v8) = ((char)a1.get_flag("ZEROkeysu128for<", 4) ? 0 : 10);
    v7 = a1.get_flag("-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedline delimiter is NUL, not newlineinvalid number of bytes: invalid number of lines: ", 19);
    v9.from(a1);
    if (!((char)(((0 ^ v9) & (0 ^ -(v9))) >> 63)))
    {
        *((unsigned long long *)&a0[8]) = v9;
        *((unsigned long long *)&a0[16]) = v11;
        *((unsigned long long *)&a0[24]) = v12;
        *((unsigned long long *)a0) = 4;
        core::ptr::drop_in_place<uu_head::HeadOptions>(&v0);
        return a0;
    }
    v0 = v11;
    v1 = v12;
    v9.try_get_many(a1);
    v15.unwrap(&v9);
    if (*((long long *)&v15))
    {
        v9.collect(&v15);
    }
    else
    {
        v18 = 8.alloc_impl(24);
        if (!v18)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v19 = v18;
        v9.to_vec("-error writing 'standard output': src/uu/head/src/head.rs==> standard input <==\n:  <==\nerror reading parse error: : number of -bytes or -lines is too largeclap error: ", 1);
        v14 = v12;
        memcpy(&v13, &v9, 16);
        v19->field_10 = v12;
        *((void*)&v19->field_0) = v13;
        v10 = 1;
        v11 = v19;
        v12 = 1;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v2);
    v4 = v12;
    memcpy(&v2, &v9, 16);
    v20 = *((int128_t *)&v0);
    v21 = *((int128_t *)&v2);
    *((int128_t *)&a0[32]) = *((int128_t *)&v4);
    a0[16] = v21;
    *(a0) = v20;
    return a0;
}
