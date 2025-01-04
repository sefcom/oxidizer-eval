long long uu_df::filesystem::mount_info_from_path::heb90d672d6d37662(char *a0, unsigned long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char *v0;  // [bp-0x88], Other Possible Types: unsigned long
    char *v1;  // [bp-0x80], Other Possible Types: char, unsigned long long
    int v2;  // [bp-0x78], Other Possible Types: char *
    char *v3;  // [sp-0x68]
    unsigned long long v4;  // [sp-0x60]
    unsigned long v5;  // [sp-0x58], Other Possible Types: unsigned long long
    int v6;  // [sp-0x50]
    char v7;  // [bp-0x40]
    char v8;  // [bp-0x38]
    char v9;  // [bp-0x30]
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rcx
    unsigned long long v13;  // r8
    unsigned long long v14;  // r9
    void* v15;  // rax
    unsigned long long v16;  // rax
    char *v17;  // r15

    std::fs::canonicalize::h70c2a989be63c794(&v0, _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h7c1f1ad194ebcdf5(a2), v11);
    if (v5 == 0x8000000000000000)
    {
        ::0x47a980::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h003996e870c333e6(&v0);
        return 0;
    }
    *((int128_t *)&v6) = *((int128_t *)&v1);
    v5 = v0;
    v3 = a0;
    v4 = &a0[152 * a1];
    v0 = &v5;
    v1 = &v5;
    v2 = &v5;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h72961ed988ea76e5(&v7, &v3, &v0, v12, v13, v14);
    v16 = *((long long *)&v8);
    if (v1 != 0x8000000000000000)
    {
        v17 = *((long long *)&v7);
        *((int128_t *)&v2) = *((int128_t *)&v9);
        v0 = v17;
        v1 = v16;
        ::0x47a970::core::ptr::drop_in_place$LT$$LP$$RF$uucore..features..fsext..MountInfo$C$std..path..PathBuf$RP$$GT$::h329c4f51013cc44b(&v0);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..ops..control_flow..ControlFlow$LT$$LP$$RF$uucore..features..fsext..MountInfo$C$std..path..PathBuf$RP$$GT$$GT$::h842f83bfdcbbf6ad(&v7);
        v17 = 0;
    }
    v0 = a0;
    v1 = a1;
    v2 = &v5;
    v15 = core::option::Option$LT$T$GT$::or_else::ha3692bdb0bbd722d(v17, &v0);
    ::0x47a870::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he41fae35c4c1a9c1(&v5);
    return v15;
}
