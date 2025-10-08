long long fish::terminal::setup()
{
    int v0;  // [bp-0x478], Other Possible Types: char
    int v1;  // [bp-0x468]
    int v2;  // [bp-0x458]
    int v3;  // [bp-0x448]
    int v4;  // [bp-0x438]
    char v5;  // [bp-0x428]
    unsigned long long v6;  // [bp-0x418]
    char v7;  // [bp-0x410], Other Possible Types: unsigned long long
    char v8;  // [bp-0x408]
    int v9;  // [bp-0x400]
    int v10;  // [bp-0x3f0]
    int v11;  // [bp-0x3e0]
    int v12;  // [bp-0x3d0]
    char v13;  // [bp-0x3c0]
    unsigned long long v14;  // [bp-0x3b0]
    int v15;  // [bp-0x3a8]
    int v16;  // [bp-0x398]
    int v17;  // [bp-0x388]
    int v18;  // [bp-0x378]
    int v19;  // [bp-0x368]
    char v20;  // [bp-0x358]
    unsigned long long v21;  // [bp-0x348]
    char v22;  // [bp-0x338], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0x330]
    char v24;  // [bp-0x328]
    char v25;  // [bp-0x1a0]
    struct_0 *v27;  // rbx
    unsigned long long v28;  // rax
    char v29;  // dl

    v22.lock();
    v27 = v22.expect(&g_14e2b68);
    v7.from_env();
    if ((char)(((0 ^ v7) & (0 ^ -(v7))) >> 63))
    {
        fish::terminal::setup::{{closure}}(&v0, &v8);
        if (*((long long *)&v0) != 0x8000000000000000)
            goto LABEL_1415301;
LABEL_1415278:
        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::terminal::Term>>>(&v27->field_8);
        v27->field_8 = 0;
        core::ptr::drop_in_place<core::result::Result<terminfo::database::Database,terminfo::error::Error>>(&v0);
    }
    else
    {
        v6 = v14;
        memcpy(&v5, &v13, 16);
        v4 = v12;
        v3 = v11;
        v2 = v10;
        v1 = v9;
        memcpy(&v0, &v7, 16);
        if (*((long long *)&vvar_212{stack -1144}) == 0x8000000000000000)
            goto LABEL_1415278;
LABEL_1415301:
        v21 = v6;
        memcpy(&v20, &v5, 16);
        v19 = v4;
        v18 = v3;
        v17 = v2;
        v16 = v1;
        v15 = v0;
        v25.new(&v15);
        v22 = 1;
        v23 = 1;
        memcpy(&v24, &v25, 392);
        v28 = v22.new();
        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::terminal::Term>>>(&v27->field_8);
        v27->field_8 = v28;
    }
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v27, v29 & 1);
}
