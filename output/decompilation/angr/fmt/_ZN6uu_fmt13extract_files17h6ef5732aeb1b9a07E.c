long long uu_fmt::extract_files(struct_2 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x182]
    struct struct_0 v1[1];  // [bp-0x181]
    struct_1 *v2;  // [bp-0x180], Other Possible Types: char
    unsigned long long v3;  // [bp-0x170]
    int v4;  // [bp-0x168]
    unsigned long long v5;  // [bp-0x158]
    int v6;  // [bp-0x148], Other Possible Types: char
    char v7;  // [bp-0x138]
    unsigned long long v8;  // [bp-0x100]
    char v9;  // [bp-0xf8]
    void* v10;  // [bp-0xb8]
    void* v11;  // [bp-0x78]
    void* v12;  // [bp-0x38]
    char *v13;  // [bp-0x30]
    char *v14;  // [bp-0x28]
    unsigned long v16;  // rdx
    struct_1 *v17;  // rax
    struct_1 *v18;  // r14

    v0 = v16 == 1 & a1.index_of("fileswidthsrc/uu/fmt/src/fmt.rs", 5);
    v6.try_get_many(a1, "fileswidthsrc/uu/fmt/src/fmt.rs", 5);
    v9.unwrap("fileswidthsrc/uu/fmt/src/fmt.rs", 5, &v6);
    v8 = 1;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = &v1[0].field_0;
    v14 = &v0;
    core::iter::adapters::try_process(&v2, &v8);
    if (!(char)((0 ^ *((long long *)&v2)) & (0 ^ -(*((long long *)&v2)))) >> 63.is_ok_and(&(&v2)[8 * (((0 ^ *((long long *)&v2)) & (0 ^ -(*((long long *)&v2)))) >> 63 & 255)]))
    {
        a0->field_10 = v3;
        a0->field_0 = v2;
        return a0;
    }
    v17 = 8.alloc_impl(24);
    if (!v17)
        alloc::alloc::handle_alloc_error(8, 24); /* do not return */
    v18 = v17;
    v6.to_vec("-\nfileswidthsrc/uu/fmt/src/fmt.rs", 1);
    v5 = *((long long *)&v7);
    v4 = v6;
    v18->field_10 = *((long long *)&v7);
    *((void*)&v18->field_0) = v6;
    a0->field_0 = 1;
    *((struct_1 **)&a0->padding_8[0]) = v18;
    a0->field_10 = 1;
    core::ptr::drop_in_place<core::result::Result<alloc::vec::Vec<alloc::string::String>,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v2);
    return a0;
}
