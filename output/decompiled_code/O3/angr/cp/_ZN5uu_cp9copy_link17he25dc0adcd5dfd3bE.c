long long uu_cp::copy_link::he25dc0adcd5dfd3b(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    unsigned long long v5;  // r14
    unsigned long long v6;  // r15
    unsigned long long v7;  // rax

    std::sys::pal::unix::fs::readlink::ha3dd542a872ee689(&v1, a1, a2);
    v5 = *((long long *)&v1);
    v6 = *((long long *)&v2);
    if (v5 == 0x8000000000000000)
    {
        a0[0] = 2;
        a0[1] = v6;
        return a0;
    }
    v0 = *((long long *)&v3);
    if (!(char)std::path::Path::is_symlink::h6ab8b58756c51c6b(a3, a4) && !(char)std::path::Path::is_file::h82f08f46fb8d8099(a3, a4) || (v7 = std::sys::pal::unix::fs::unlink::h9e34f634412c6081(a3, a4), !v7))
    {
        _ZN5uu_cp12symlink_file17h1beeb03f2c7da5c4E.llvm.6903499209109998583(a0, v6, v0, a3, a4, a5);
    }
    else
    {
        a0[0] = 2;
        a0[1] = v7;
    }
    if (!v5)
        return a0;
    __rust_dealloc(v6);
}
