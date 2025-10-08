long long change_log::main()
{
    char v0;  // [bp-0x3c48]
    char v1;  // [bp-0x3bf8]
    char v2;  // [bp-0x3ba8]
    unsigned short v3;  // [bp-0x3adb]
    char v4;  // [bp-0x3ad0]
    char v5;  // [bp-0x39c8]
    void* v6;  // [bp-0x3018]
    void* v7;  // [bp-0x2018]
    void* v8;  // [bp-0x1018]
    unsigned long long v10;  // rax

    v8 = 0;
    v7 = 0;
    v6 = 0;
    v5 = 0;
    v2.new_multi_thread();
    v3 = 257;
    v1.build(&v2);
    v0.expect(&v1);
    v10 = v0.block_on(&v4);
    core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(&v0);
    core::ptr::drop_in_place<tokio::runtime::builder::Builder>(&v2);
    return v10;
}
