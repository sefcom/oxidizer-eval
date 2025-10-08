char just::subcommand::Subcommand::request(struct_0 *a0, unsigned long long *a1)
{
    unsigned long long v0;  // [bp-0xd0]
    int v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xb8]
    int v3;  // [bp-0xb0], Other Possible Types: char
    unsigned long long v4;  // [bp-0xa0]
    char v5;  // [bp-0x98]
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rcx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    char v14;  // bpl
    char v15;  // al

    if ((char)(((0 ^ *(a1)) & (0 ^ -(*(a1)))) >> 63))
    {
        v5.all();
        (unsigned int)v5.thread_block(a1, v7, v8).unwrap();
        nix::sys::signal::SigSet::wait().unwrap((unsigned int)v7);
        v3.to_vec((unsigned int)v7.as_str(), v7);
        v2 = v4;
        v1 = v3;
        v12 = 1;
    }
    else
    {
        std::env::var_os(&(char)v1, a1);
        v12 = 0;
    }
    v0 = v12;
    v13 = serde_json::ser::to_writer(std::io::stdio::stdout(), &v0);
    if (v13)
    {
        a0->field_8 = v13;
        v14 = 18;
    }
    else
    {
        v14 = 56;
    }
    v15 = core::ptr::drop_in_place<just::request::Response>(&v0);
    a0->field_0 = v14;
    return v15;
}
