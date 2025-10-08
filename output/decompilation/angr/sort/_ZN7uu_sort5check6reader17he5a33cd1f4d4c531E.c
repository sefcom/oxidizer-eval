long long uu_sort::check::reader(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, struct_0 *a5)
{
    unsigned long long v0;  // [bp-0x108]
    unsigned long long v1;  // [bp-0xf8]
    void* v2;  // [bp-0xe8]
    unsigned long long v3;  // [bp-0xe0]
    void* v4;  // [bp-0xd8]
    void* v5;  // [bp-0xd0]
    unsigned long long v6;  // [bp-0xc8]
    int v7;  // [bp-0xc0]
    void* v9;  // rbx
    void* v10;  // rbx

    v0 = a0;
    v2 = 0;
    v3 = 1;
    v4 = 0;
    v9 = 0;
    while (true)
    {
        v7.next(a2);
        v10 = v9;
        if ((char)(((0 ^ (long long)v7) & (0 ^ -((long long)v7))) >> 63))
            break;
        uu_sort::chunks::read(&v5, a3, a4, &v7, &v2, &v0, a5->field_99, a5);
        if (!v5)
        {
            v10 = v9;
            if (!(char)v6)
                break;
        }
        else
        {
            v1 = v6;
            v10 = v5;
            break;
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v2);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, a1);
    return v10;
}
