char just::subcommand::Subcommand::man(struct_0 *a0)
{
    void* v0;  // [bp-0x628]
    unsigned long long v1;  // [bp-0x620]
    void* v2;  // [bp-0x618]
    char v3;  // [bp-0x610], Other Possible Types: unsigned long long
    char v4;  // [bp-0x348], Other Possible Types: unsigned long long
    unsigned long long v7;  // rax

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3.app();
    v4.new(&v3);
    v4.render(&v0, &g_831178).expect();
    core::ptr::drop_in_place<clap_mangen::Man>(&v4);
    v4 = std::io::stdio::stdout();
    v3 = v4.lock();
    v7 = v3.write_all(1, 0);
    if (!v7)
    {
        v7 = v3.flush();
        if (v7)
            goto LABEL_68e7db;
        a0->field_0 = 56;
    }
    else
    {
LABEL_68e7db:
        a0->field_0 = 48;
        a0->field_8 = v7;
    }
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v3);
    return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v0);
}
