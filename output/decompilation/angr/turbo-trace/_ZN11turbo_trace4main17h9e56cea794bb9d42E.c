long long turbo_trace::main(unsigned long long a0)
{
    char v0;  // [bp-0x810]
    char v1;  // [bp-0x7c0]
    char v2;  // [bp-0x770]
    unsigned short v3;  // [bp-0x6a3]
    char v4;  // [bp-0x698]
    char v5;  // [bp-0x604]

    v5 = 0;
    v2.new_multi_thread();
    v3 = 257;
    v1.build(&v2);
    v0.expect(&v1);
    a0.block_on(&v0, &v4);
    core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(&v0);
    core::ptr::drop_in_place<tokio::runtime::builder::Builder>(&v2);
    return a0;
}
