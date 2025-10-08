long long just::function::source_directory(void* a0, struct_2 *a1)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x40]
    unsigned long v2;  // [bp-0x38], Other Possible Types: unsigned long long
    char v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    char v5;  // [bp-0x20]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rax

    v7 = a1->field_0->field_18->field_8.parent(a1->field_0->field_18->field_10);
    if (!v7)
        core::option::unwrap_failed(&g_830060); /* do not return */
    v3.join(v7, v8, a1->field_8, a1->field_10);
    v9 = v4.parent(*((long long *)&v5));
    if (!v9)
        core::option::unwrap_failed(&g_830078); /* do not return */
    core::str::converts::from_utf8(&v0, v9, v8);
    if (*((int *)&v0) == 1)
    {
        just::function::source_file::{{closure}}(&v0, a1->field_8, a1->field_10);
        *((unsigned long *)&a0[24]) = v2;
        *((int128_t *)&a0[8]) = *((int128_t *)&v0);
        *((unsigned long long *)a0) = 1;
    }
    else
    {
        v0.to_vec(v1, v2);
        *((int128_t *)&a0[16]) = *((int128_t *)&v1);
        *((unsigned long *)&a0[8]) = v0;
        *((unsigned long long *)a0) = 0;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v3);
    return a0;
}
