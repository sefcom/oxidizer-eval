long long uu_cp::copydir::get_local_to_root_parent::h75359c1e8aa399d0(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v1;  // rax

    if (a3)
    {
        v1 = std::path::Path::strip_prefix::h5d7e53b0b6c79402(a1, a2, a3, a4);
        if (!v1)
        {
            *(a0) = 0x8000000000000000;
            return 0x8000000000000000;
        }
    }
    return std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(a0, v1, a2);
}
