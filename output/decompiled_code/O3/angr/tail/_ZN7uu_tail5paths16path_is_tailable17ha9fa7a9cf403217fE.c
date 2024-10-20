long long uu_tail::paths::path_is_tailable::ha9fa7a9cf403217f(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xc8]
    char v1;  // [bp-0xc0]
    char v2;  // [bp-0x90]
    unsigned long v4;  // rbx
    unsigned long long v5;  // rbx
    unsigned int v6;  // eax

    v5 = v4 | -0x100 | 1;
    if (!(char)std::path::Path::is_file::h82f08f46fb8d8099(a0, a1))
    {
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v0, a0, a1);
        if ((std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v0, a0, a1), *((int *)&v0) == 2))
        {
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17hd9352982e8c4d3fcE.llvm.893476530518564186(*((long long *)&v1));
            v5 = 0;
        }
        else
        {
            v6 = 0xf000 & *((int *)&v2);
            if (v6 != 0x2000 && v6 != 0x8000)
                v5 = v5 | -0x100 | v6 == 0x1000;
        }
    }
    return v5 & 4294967295;
}
