long long uu_split::LineChunkWriter::start_new_chunk(unsigned long long a0[2], struct_0 *a1, unsigned long long a2)
{
    char v0;  // [bp-0x90], Other Possible Types: unsigned long long
    void* v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    char v4;  // [bp-0x78]
    char *v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    char v7;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x58]
    char *v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    void* v11;  // [bp-0x40]
    unsigned long long v13;  // rax

    v0.next(a2);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        v7.to_vec("output file suffixes exhaustedcreating file at file descriptor limit, but no file descriptor left to close. Closed  writers before.\n: cannot read from input : ", 30);
        v13 = 40._new(v7.new(), &g_50ad88);
        a0[1] = v13;
        a0[0] = 0x8000000000000000;
        return v13;
    }
    if (a1->field_a0)
    {
        v1 = 0;
        v4 = 1;
        v5 = &v1;
        v6 = <os_display::Quoted as core::fmt::Display>::fmt;
        v7 = &g_50af08;
        v8 = 2;
        v11 = 0;
        v9 = &v5;
        v10 = 1;
        std::io::stdio::_print(&v7);
    }
    a0.instantiate_current_writer(a1, v2, v3, 1);
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(v0, v2);
}
