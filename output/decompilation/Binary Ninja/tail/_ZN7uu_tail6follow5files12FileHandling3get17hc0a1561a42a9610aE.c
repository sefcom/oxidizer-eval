
  int64_t uu_tail::follow::files::FileHandling::get::hc0a1561a42a9610a(void* arg1, char* arg2, uint64_t arg3)

{
    int64_t var_28;
    uu_tail::follow::files::FileHandling::canonicalize_path::h83fd2d9f8818f482(&var_28, arg2, arg3);
    int64_t rax = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h5989fafa25455cd3(
        arg1 + 0x18, &var_28);
    
    if (rax)
    {
        int64_t var_20;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(var_28, var_20);
        return rax + 0x18;
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
