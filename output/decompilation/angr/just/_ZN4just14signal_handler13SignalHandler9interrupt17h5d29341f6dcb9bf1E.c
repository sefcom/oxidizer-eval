long long just::signal_handler::SignalHandler::interrupt(struct_0 *a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0xbc]
    char *v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    unsigned long long v3;  // [bp-0xa8]
    void* v4;  // [bp-0xa0]
    unsigned long v5;  // [bp-0x98]
    unsigned long v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x88]
    void* v8;  // [bp-0x80]
    unsigned long v9;  // [bp-0x78]
    unsigned long v10;  // [bp-0x70]
    void* v11;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x58]
    char *v14;  // [bp-0x50]
    unsigned long long v15;  // [bp-0x48]
    void* v16;  // [bp-0x40]
    void* v18;  // rax
    unsigned long v19;  // rcx
    unsigned long long v20;  // rsi
    unsigned int *v21;  // rax

    v18 = a0->field_10;
    if (!v18)
        std::process::exit((unsigned int)a1.code()); /* do not return */
    if (!a0->field_18)
    {
        a0->field_18 = a1;
        if (a1 <= 3)
            return v18;
    }
    else if (a1 <= 3)
    {
        return v18;
    }
    v19 = a0->field_0;
    v20 = v19;
    if (!v19)
        v18 = 0;
    v3 = v20;
    v4 = 0;
    v5 = v19;
    v6 = a0->field_8;
    v7 = v20;
    v8 = 0;
    v9 = v19;
    v10 = a0->field_8;
    v11 = v18;
    v21 = v3.next();
    if (!v21)
    {
        return v21;
    }
    else if (a0->field_1c > 1)
    {
        do
        {
            v0 = *(v21);
            v1 = &v0;
            v2 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
            v12 = &g_830f20;
            v13 = 2;
            v16 = 0;
            v14 = &v1;
            v15 = 1;
            std::io::stdio::_eprint(&v12);
            nix::sys::signal::kill(v0);
            v21 = v3.next();
        } while (v21);
        return v21;
    }
    else
    {
        do
        {
            nix::sys::signal::kill(*(v21));
            v21 = v3.next();
        } while (v21);
        return v21;
    }
}
