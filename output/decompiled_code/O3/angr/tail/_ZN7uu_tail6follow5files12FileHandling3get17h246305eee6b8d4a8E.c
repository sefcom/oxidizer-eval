long long uu_tail::follow::files::FileHandling::get::h246305eee6b8d4a8(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x28]
    unsigned long long v2;  // rax

    uu_tail::follow::files::FileHandling::canonicalize_path::h4f4e134723cec356(&v0, a1, a2, a3, a4, a5);
    v2 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h95b6fa661f167f53(a0 + 24, &v0);
    if (v2)
    {
        ::0x501550::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf321260e7020c92f(&v0);
        return v2 + 24;
    }
    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
}
