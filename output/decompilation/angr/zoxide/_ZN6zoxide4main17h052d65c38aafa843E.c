long long zoxide::main()
{
    unsigned long long v0;  // [bp-0xc0]
    char v1;  // [bp-0xb8]
    char v2;  // [bp-0xb7]
    unsigned long long v3;  // [bp-0xb0]
    unsigned long long v4;  // [bp-0xa8]
    unsigned long long v5;  // [bp-0xa0]
    char *v6;  // [bp-0x98]
    unsigned long long v7;  // [bp-0x90]
    unsigned long long v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x80]
    char *v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x70]
    void* v12;  // [bp-0x68]
    char v13;  // [bp-0x58]
    unsigned long long v15;  // rax
    unsigned int v16;  // ebx

    std::env::remove_var("RUST_LIB_BACKTRACERUST_BACKTRACE' wasn't recognizedaddimportqueryremoveA subcommand is required but one was not provided.A smarter cd command for your terminalAjeet D'Souza <98ajeet@gmail.com>0.9.8pathsscoreAddPATHSSCOREThe rank to increment the entry if i", 18);
    std::env::remove_var("RUST_BACKTRACE' wasn't recognizedaddimportqueryremoveA subcommand is required but one was not provided.A smarter cd command for your terminalAjeet D'Souza <98ajeet@gmail.com>0.9.8pathsscoreAddPATHSSCOREThe rank to increment the entry if it exists or initia", 14);
    v13.parse();
    v15 = (unsigned long long)v13.run();
    if (v15)
    {
        v1.downcast(v15);
        if (v1 == 1)
        {
            v0 = v3;
            v5 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
            v6 = &v0;
            v7 = anyhow::error::<impl core::fmt::Debug for anyhow::Error>::fmt;
            v8 = &g_534cb0;
            v9 = 2;
            v12 = 0;
            v10 = &v6;
            v11 = 1;
            v4 = v5.write_fmt(&v8);
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v4);
            core::ptr::drop_in_place<anyhow::Error>(&v0);
            v16 = (unsigned int)&v13 & 0xffffff00 | 1;
        }
        else
        {
            v16 = v2;
        }
    }
    else
    {
        v16 = 0;
    }
    core::ptr::drop_in_place<zoxide::cmd::cmd::Cmd>(&v13);
    return v16;
}
