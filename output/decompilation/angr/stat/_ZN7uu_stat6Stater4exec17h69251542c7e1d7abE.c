long long uu_stat::Stater::exec(unsigned long long a0[3])
{
    char v0;  // [bp-0xe0]
    char v1;  // [bp-0xa8]
    void* v3;  // r13
    unsigned int v4;  // ebp

    std::fs::metadata(&v0);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v0);
    if (!a0[2])
        return 0;
    v3 = 0;
    v4 = 0;
    do
    {
        v4 |= (int)a0.do_stat(*((long long *)(8 + a0[1] + (char *)v3)), *((long long *)(16 + a0[1] + (char *)v3)), *((int *)&v0) != 2 & (*((int *)&v1) & 0xf000) == 0x1000);
        v3 += 24;
    } while (a0[2] * 24 != v3);
    return v4;
}
