long long uu_tail::follow::files::FileHandling::remove::h589c032069b4d1ad(void* a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x108]
    char v1;  // [bp-0xf0]
    unsigned long long v3;  // rcx
    unsigned long long v4;  // r8
    unsigned long long v5;  // r9

    uu_tail::follow::files::FileHandling::canonicalize_path::h4f4e134723cec356(&v0, a2, a3, a3, a4, a5);
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h76f8a04fe0e14d2f(&v1, a1 + 24, &v0, v3, v4, v5);
    if (*((int *)&v1) != 3)
    {
        memcpy(a0, &v1, 216);
        ::0x501550::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf321260e7020c92f(&v0);
        return a0;
    }
    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
}
