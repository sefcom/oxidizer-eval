long long uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x28]
    unsigned long long v2;  // rax

    uu_tail::follow::files::FileHandling::canonicalize_path::ha359b021a4419771(&v0, a1, a2);
    v2 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hef1a13572e453523(a0 + 24, &v0);
    if (v2)
    {
        ::0x50d380::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b();
        return v2 + 24;
    }
    core::option::unwrap_failed::h0e11329e76906eaa(&g_5bc498); /* do not return */
}
