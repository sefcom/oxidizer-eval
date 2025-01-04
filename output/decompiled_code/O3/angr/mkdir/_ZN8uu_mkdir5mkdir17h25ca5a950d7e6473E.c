long long uu_mkdir::mkdir::h25ca5a950d7e6473(unsigned long long a0, unsigned long long a1, unsigned int a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned int v3;  // [sp-0x20]
    unsigned long long v5;  // rax

    if (a1)
    {
        uucore::features::fs::dir_strip_dot_for_creation::h0aaf496517cc5178(&v0, a0, a1, a3, a4, a5);
        v5 = uu_mkdir::create_dir::ha7ee258293152955(*((long long *)&v1), *((long long *)&v2), a2, a4, 0, a3);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb7551ff5f0211b82(&v0);
        return v5;
    }
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha4208e868ecb88cc(&v0, "cannot create directory '': No such file or directory: File existsfailed to create whole tree: created directory ", 53);
    v3 = 1;
    v5 = alloc::boxed::Box$LT$T$GT$::new::h121d1d0fd1fc2533(&v0);
    return v5;
}
