long long fd::exec::CommandBuilder::push(unsigned long long a0[41], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    char v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long v8;  // rdx

    if (a0[40] - 1 < a0[39])
    {
        v6 = a0.finish();
        if (v6)
            return v6;
    }
    v0.generate(a0, a1, a2, a3, a4);
    v3.chain(&v0, a0[8], a0[9]);
    if (!(char)a0[38].args_would_fit(&v3))
    {
        v7 = a0.finish();
        if (v7)
        {
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v0, v1);
            return v7;
        }
    }
    v4 = v2;
    memcpy(&v3, &v0, 16);
    if (!((char)a0[10].try_arg(&v3) & 1))
    {
        a0[39] = a0[39] + 1;
        return 0;
    }
    return v8;
}
