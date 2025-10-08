long long hx::main_impl(unsigned long long a0)
{
    char v0;  // [bp-0x12a8]
    char v1;  // [bp-0x1258]
    char v2;  // [bp-0x1208]
    unsigned short v3;  // [bp-0x113b]
    char v4;  // [bp-0x1130]
    void* v5;  // [bp-0x1010]
    char v6;  // [bp-0x15]

    v5 = 0;
    v6 = 0;
    v2.new_multi_thread();
    v3 = 257;
    v1.build(&v2);
    v0.expect(&v1);
    a0.block_on(&v0, &v4);
    core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(&v0);
    return core::ptr::drop_in_place<tokio::runtime::builder::Builder>(&v2);
}
