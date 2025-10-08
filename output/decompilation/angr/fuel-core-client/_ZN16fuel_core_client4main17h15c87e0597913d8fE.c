long long fuel_core_client::main()
{
    char v0;  // [bp-0x4b8]
    char v1;  // [bp-0x468]
    char v2;  // [bp-0x418]
    unsigned short v3;  // [bp-0x34b]
    char v4;  // [bp-0x340]
    char v5;  // [bp-0x18]

    v5 = 0;
    v2.new_current_thread();
    v3 = 257;
    v1.build(&v2);
    v0.expect(&v1);
    v0.block_on(&v4);
    core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(&v0);
    return core::ptr::drop_in_place<tokio::runtime::builder::Builder>(&v2);
}
