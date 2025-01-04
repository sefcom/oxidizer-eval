long long uu_df::filesystem::Filesystem::from_path::h5b49a475fd8fdd25(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [sp-0xe8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0xe0]
    unsigned long long v2;  // [sp-0xd8]
    char v3;  // [bp-0xd0]
    char v4;  // [bp-0xc0]
    char v5;  // [bp-0xb8]
    unsigned long v7;  // rdx
    unsigned long long v8;  // rcx
    unsigned long long v9;  // r8
    unsigned long long v10;  // r9
    unsigned long long v11;  // rax

    v0 = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h7c1f1ad194ebcdf5(a3);
    v1 = v7;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hcc85d88d02bb0b7a(&v3, &v0);
    v11 = uu_df::filesystem::mount_info_from_path::heb90d672d6d37662(a1, a2, a3, v8, v9, v10);
    if (!v11)
    {
        *(a0) = 0x8000000000000000;
        ::0x47a880::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0e578a0b94f465cc(&v3);
        return a0;
    }
    _$LT$uucore..features..fsext..MountInfo$u20$as$u20$core..clone..Clone$GT$::clone::hde627e2703cb45d3(&v5, v11);
    v2 = *((long long *)&v4);
    *((int128_t *)&v0) = *((int128_t *)&v3);
    uu_df::filesystem::Filesystem::new::ha971403f9b8ef26c(a0, &v5, &v0);
    return a0;
}
