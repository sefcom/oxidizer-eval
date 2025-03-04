long long uu_tail::follow::files::FileHandling::remove::h9a608e9706c93353(void* a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x108]
    char v1;  // [bp-0xf0]

    uu_tail::follow::files::FileHandling::canonicalize_path::ha359b021a4419771(&v0, a2, a3);
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h60eda5622c421fc6(&v1, a1 + 24, &v0);
    if (*((int *)&v1) != 3)
    {
        memcpy(a0, &v1, 216);
        ::0x50d380::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v0);
        return a0;
    }
    core::option::unwrap_failed::h0e11329e76906eaa(&g_5bc480); /* do not return */
}
