
  void* uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(void* arg1, char* arg2, size_t arg3)

{
    void var_28;
    uu_tail::follow::files::FileHandling::canonicalize_path::ha359b021a4419771(&var_28, arg2, arg3);
    void* rax = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hef1a13572e453523(
        arg1 + 0x18, &var_28);
    
    if (rax)
    {
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_28);
        return rax + 0x18;
    }
    
    core::option::unwrap_failed::h0e11329e76906eaa();
    /* no return */
}
