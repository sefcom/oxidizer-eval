long long uu_cp::copydir::get_local_to_root_parent(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    if (a3)
    {
        a1 = a1.strip_prefix(a2, a3, a4);
        if (!a1)
        {
            *(a0) = 0x8000000000000000;
            return 0x8000000000000000;
        }
    }
    return std::sys::pal::unix::os::split_paths::bytes_to_path(a0, a1, a2);
}
