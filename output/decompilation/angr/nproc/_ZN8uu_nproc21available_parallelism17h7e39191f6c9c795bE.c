long long uu_nproc::available_parallelism()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rdx
    unsigned long long v5;  // rbx

    v1 = std::thread::available_parallelism();
    if (!((char)v1 & 1))
        v3 = v2;
    else
        v3 = 1;
    v5 = v3;
    core::ptr::drop_in_place<core::result::Result<core::num::nonzero::NonZero<usize>,std::io::error::Error>>(v1, v2);
    return v5;
}
