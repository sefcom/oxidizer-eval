long long uu_tail::follow::files::FileHandling::get_mut::h1a80ce1ee4fcf7dc(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x28]
    unsigned long long v2;  // rax

    uu_tail::follow::files::FileHandling::canonicalize_path::ha359b021a4419771(&v0, a1, a2, a3, a4, a5);
    v2 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h78f2dc0a7938c5d6(a0 + 24, &v0);
    if (v2)
    {
        ::0x50d380::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v0);
        return v2 + 24;
    }
    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
}
