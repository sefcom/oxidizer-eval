int uu_wc::count_fast::count_bytes_fast()
{
    int v0;  // [bp-0x40030]
    char v1;  // [bp-0x4000f]
    void* v2;  // [bp-0x2030]
    unsigned long long v4;  // rdi
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx

    do
    {
        v2 = 0;
    } while (&v2 != &v0);
    nix::sys::stat::fstat(&v0, 0);
    if (!((int)v0 == 1 || !(v1 & 16)) && !uu_wc::count_fast::count_bytes_using_splice(v4))
        return;
    memset(&v0, 0, 0x40000);
    while (true)
    {
        v5 = v4.read(&v0, 0x40000);
        if (v5)
        {
            if ((char)v6.kind() != 35)
            {
                return;
            }
            else if (((char)v5 & 1))
            {
                ::0x4acbb0::core::ptr::drop_in_place<std::io::error::Error>(v6);
            }
        }
        else
        {
            if (!v6)
                return;
        }
    }
}
