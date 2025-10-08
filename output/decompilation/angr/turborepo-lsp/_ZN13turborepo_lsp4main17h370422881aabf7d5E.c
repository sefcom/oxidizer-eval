long long turborepo_lsp::main()
{
    char v0;  // [bp-0x870]
    char v1;  // [bp-0x820]
    char v2;  // [bp-0x7d0]
    unsigned short v3;  // [bp-0x703]
    char v4;  // [bp-0x6f8]
    char v5;  // [bp-0x14]

    v5 = 0;
    v2.new_multi_thread();
    v3 = 257;
    v1.build(&v2);
    v0.expect(&v1);
    v0.block_on(&v4);
    core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(&v0);
    return core::ptr::drop_in_place<tokio::runtime::builder::Builder>(&v2);
}
