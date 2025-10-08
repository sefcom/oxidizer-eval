long long fd::cli::default_num_threads()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rdi

    v0 = std::thread::available_parallelism();
    v1 = v3;
    if (((char)v0 & 1))
    {
        core::ptr::drop_in_place<core::result::Result<core::num::nonzero::NonZero<usize>,std::io::error::Error>>(&v0);
        v4 = 1;
    }
    return v4.min(64);
}
