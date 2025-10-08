long long forc_tx::Command::parse(void* a0)
{
    unsigned long long v0[2];  // [bp-0x138]
    int v1;  // [bp-0x128]
    char v2;  // [bp-0x118]
    char v3;  // [bp-0x108]
    int v4;  // [bp-0x100]
    int v5;  // [bp-0xf0]
    char v6;  // [bp-0xe0]

    v3.try_parse();
    if (*((int *)&v3) == 2)
    {
        memcpy(&v2, &v6, 16);
        v1 = v5;
        *((void*)v0) = v4;
        core::ptr::drop_in_place<core::result::Result<(),clap_builder::error::Error>>((unsigned long long)v0.print());
        std::process::exit(1); /* do not return */
    }
    memcpy(a0, &v3, 0x100);
    return a0;
}
