long long uu_tail::follow::files::FileHandling::canonicalize_path::ha359b021a4419771(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rcx
    unsigned long long v5;  // r8
    unsigned long long v6;  // r9
    unsigned long long v7;  // rax

    if (!(char)std::path::Path::is_absolute::h3431a23d91045560(a1, a2) && !(char)_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_stdin::h7b78c224abf6fd98(a1, a2, v3, v4, v5, v6))
    {
        std::fs::canonicalize::hd214f5c614fa2ecb(&v0, a1, a2);
        if (*((long long *)&v0) != 0x8000000000000000)
        {
            v7 = *((long long *)&v1);
            a0->field_10 = v7;
            a0->field_0 = *((int128_t *)&v0);
            return v7;
        }
        ::0x50d6a0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h2718b16a2e13a805(&v0);
    }
    v7 = std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(a0, a1, a2);
    return v7;
}
