long long uu_split::LineChunkWriter::start_new_chunk(unsigned long long a0[2], struct_1 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    void* v3;  // [bp-0x78], Other Possible Types: char, unsigned long long
    unsigned long long v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    char v6;  // [bp-0x60]
    char *v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    char v9;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x40]
    char *v11;  // [bp-0x38]
    unsigned long long v12;  // [bp-0x30]
    void* v13;  // [bp-0x28]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rcx
    unsigned long long v18;  // rcx
    unsigned long long v19;  // rdx

    v3.next(a2);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
    {
        uucore::mods::locale::get_message(&v9, "split-error-output-file-suffixes-exhaustederrorsplit-error-cannot-read-from-inputsplit-error-input-output-errorsplit-error-multi-character-separatorsplit-error-multiple-separator-characterssplit-error-filter-with-kth-chunksplit-error-invalid-io-block-size", 42);
        v15 = 40._new(v9.new(), &g_5a6e60);
        a0[1] = v15;
        a0[0] = 0x8000000000000000;
        return v15;
    }
    v16 = v4;
    v17 = v5;
    v0 = v3;
    v1 = v16;
    v2 = v17;
    v18 = v17;
    v19 = v16;
    if (a1->field_a0)
    {
        v3 = 0;
        v4 = v16;
        v5 = v17;
        v6 = 1;
        v7 = &v3;
        v8 = <os_display::Quoted as core::fmt::Display>::fmt;
        v9 = &g_5a6eb8;
        v10 = 2;
        v13 = 0;
        v11 = &v7;
        v12 = 1;
        std::io::stdio::_print(&v9);
        v18 = v2;
        v19 = v1;
    }
    a0.instantiate_current_writer(a1, v19, v18, 1);
    return (unsigned long long)::0x4ad8c0::core::ptr::drop_in_place<alloc::string::String>(&v0);
}
