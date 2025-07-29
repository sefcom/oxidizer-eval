long long uu_more::Pager::display_multi_file_header(unsigned long long a0[22])
{
    void* v0;  // [bp-0x58], Other Possible Types: char
    unsigned long long v1;  // [bp-0x50]
    char v2;  // [bp-0x48]
    unsigned short v3;  // [bp-0x18]
    unsigned long v5;  // r14
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rdx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rcx
    void* v15;  // r14

    v5 = &a0[1 + 2];
    v6 = crossterm::command::write_command_ansi(v5, 4);
    if (v6)
        return v6.from();
    v7 = a0[20];
    v9 = 1;
    v10 = v7;
    if (v10)
    {
        v9 = v7;
        v10 = a0[21];
    }
    alloc::str::<impl str>::replace(&v0, v9, v10);
    v12 = v5.write_all(v1, *((long long *)&v2));
    if (v12)
    {
        v13 = v12.from();
        ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v0);
        return v13;
    }
    ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v0);
    v2.into_searcher();
    v0 = 0;
    v1 = 36;
    v3 = 0;
    v14 = v0.fold();
    v15 = a0[18] - v14;
    if (a0[18] < v14)
        v15 = 0;
    a0[18] = v15;
    return 0;
}
