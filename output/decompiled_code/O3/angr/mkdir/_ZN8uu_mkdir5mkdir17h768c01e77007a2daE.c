long long uu_mkdir::mkdir::h768c01e77007a2da(unsigned long long a0, unsigned long long a1, unsigned int a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned int v3;  // [sp-0x20]
    unsigned long long v5;  // rax

    if (a1)
    {
        uucore::features::fs::dir_strip_dot_for_creation::h4e74d01bfdf87fe3(&v0, a0, a1, a3, a4, a5);
        v5 = uu_mkdir::create_dir::h77c215ff9f5eb695(*((long long *)&v1), *((long long *)&v2), a2, a4, 0, a3);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h050329473a7fea48(&v0);
        return v5;
    }
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha541db94b94c6453(&v0, "cannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 53);
    v3 = 1;
    v5 = alloc::boxed::Box$LT$T$GT$::new::he8988f6ccea89157(&v0);
    return v5;
}
