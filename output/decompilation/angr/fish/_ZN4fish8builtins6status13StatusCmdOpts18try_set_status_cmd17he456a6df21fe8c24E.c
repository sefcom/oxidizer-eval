char fish::builtins::status::StatusCmdOpts::try_set_status_cmd(struct_0 *a0, char a1, unsigned long long a2)
{
    void* v0;  // [bp-0xc8]
    unsigned long long v1;  // [bp-0xc0]
    void* v2;  // [bp-0xb8]
    char v3;  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    void* v5;  // [bp-0x98], Other Possible Types: unsigned long long
    char v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    char v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    char v12;  // [bp-0x40]
    char v14;  // bpl
    char v15;  // bl
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx

    v14 = a1;
    v15 = a0->field_4;
    a0->field_4 = v14;
    if (!v15)
        return !v15;
    v0 = 0;
    v1 = 4;
    v2 = 0;
    v16 = g_14c6cd0[0].localize();
    v3 = 0;
    v4 = "statusswitchulimitwhileP";
    v5 = 6;
    v6 = 1;
    v7 = v15.to_wstr();
    v8 = v17;
    v9 = 1;
    v10 = v14.to_wstr();
    v11 = v17;
    fish_printf::printf_impl::sprintf_locale(&v12, &v0, v16, v17, ".", &v3, 3);
    v12.unwrap(&g_14ccfb8);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v3);
    memcpy(&v3, &v0, 16);
    v5 = 0;
    a2.append(&v3);
    return !v15;
}
