long long uu_fmt::extract_files(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x162]
    char v1;  // [bp-0x161]
    int v2;  // [bp-0x160], Other Possible Types: char
    unsigned long long v3;  // [bp-0x150]
    unsigned long long v4;  // [bp-0x148]
    char v5;  // [bp-0x140]
    char v6;  // [bp-0x138]
    void* v7;  // [bp-0x100]
    void* v8;  // [bp-0xc0]
    void* v9;  // [bp-0x80]
    char *v10;  // [bp-0x78]
    char *v11;  // [bp-0x70]
    int v12;  // [bp-0x68], Other Possible Types: char
    unsigned long long v13;  // [bp-0x58]
    unsigned long v15;  // rdx
    struct_0 *v16;  // rax
    struct_0 *v17;  // r14

    v0 = v15 == 1 & (char)a1.index_of("filesa negative number should be at least two characters longinvalid option -- ; -WIDTH is recognized only when it is the first\noption; use -w N insteadsrc/uu/fmt/src/fmt.rsinvalid width: ", 5);
    v12.try_get_many(a1);
    v5.unwrap(&v12);
    v4 = 1;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = &v1;
    v11 = &v0;
    v2.collect(&v4);
    if (!(char)((0 ^ *((long long *)&v2)) & (0 ^ -(*((long long *)&v2)))) >> 63.is_ok_and(&(&v2)[8 * (((0 ^ *((long long *)&v2)) & (0 ^ -(*((long long *)&v2)))) >> 63 & 255)]))
    {
        *((unsigned long long *)&a0[16]) = v3;
        *(a0) = v2;
        return a0;
    }
    v16 = 8.alloc_impl(24);
    if (!v16)
        alloc::alloc::handle_alloc_error(8, 24); /* do not return */
    v17 = v16;
    v4.to_vec("-read errorcannot open  for readingcannot get metadata for ", 1);
    v13 = *((long long *)&v6);
    memcpy(&v12, &v4, 16);
    v17->field_10 = *((long long *)&v6);
    *((void*)&v17->field_0) = v12;
    *((unsigned long long *)a0) = 1;
    *((struct_0 **)&a0[8]) = v17;
    *((unsigned long long *)&a0[16]) = 1;
    core::ptr::drop_in_place<core::result::Result<alloc::vec::Vec<alloc::string::String>,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v2);
    return a0;
}
