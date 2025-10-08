long long uu_wc::count_fast::count_bytes_fast(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x4038]
    void* v1;  // [bp-0x4030]
    char v2;  // [bp-0x400f]
    void* v3;  // [bp-0x3030]
    void* v4;  // [bp-0x2030]
    void* v5;  // [bp-0x1030]
    unsigned long long v7;  // rax
    void* v8;  // rbx
    void* v9;  // rdx
    unsigned long long v10;  // r13

    v5 = 0;
    v4 = 0;
    v3 = 0;
    v1 = 0;
    v0 = v7;
    v8 = 0;
    nix::sys::stat::fstat(&v1, 0);
    if (!((char)v1 & 1))
    {
        if (!(v2 & 16))
        {
            v8 = 0;
        }
        else if (!((char)uu_wc::count_fast::count_bytes_using_splice() & 1))
        {
            return v9;
        }
    }
    memset(&v1, 0, 0x4000);
    do
    {
        while (true)
        {
            v10 = a0.read(&v1, 0x4000);
            if (!((char)v10 & 1))
                break;
            if ((char)v9.kind() != 35)
                return v8;
            core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(v10, v9);
        }
        v8 += v9;
    } while (v9);
    return v8;
}
