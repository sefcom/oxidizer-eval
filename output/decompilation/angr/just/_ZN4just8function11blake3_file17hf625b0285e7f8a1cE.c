long long just::function::blake3_file(struct_0 *a0, struct_1 **a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x7f8]
    unsigned long long v1;  // [bp-0x7f0]
    unsigned long long v2;  // [bp-0x7e8]
    int v3;  // [bp-0x7e0], Other Possible Types: char
    char v4;  // [bp-0x7d0]
    int v5;  // [bp-0x7c0], Other Possible Types: char
    unsigned long long v6;  // [bp-0x7b0]
    char v7;  // [bp-0x7a8]
    unsigned long long v8;  // [bp-0x7a0]
    char v9;  // [bp-0x798]
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax

    v7.working_directory(*(a1)->field_10, *((long long *)&*(a1)->field_18));
    v0.join(v8, *((long long *)&v9), a2, a3);
    core::ptr::drop_in_place<std::path::PathBuf>(&v7);
    v7.new();
    if (((char)v7.update_mmap_rayon(&v0) & 1))
    {
        just::function::blake3_file::{{closure}}(&v3, v1, v2, v11);
        v12 = *((long long *)&v4);
        *((void*)&(&a0->field_0)[1]) = v3;
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v12;
        a0->field_0 = 1;
    }
    else
    {
        v3.finalize(&v7);
        v5.spec_to_string(&v3);
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v6;
        *((void*)&(&a0->field_0)[1]) = v5;
        a0->field_0 = 0;
    }
    core::ptr::drop_in_place<blake3::Hasher>(&v7);
    core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    return a0;
}
