
  fn uu_tail::follow::files::FileHandling::get_mut::h1a80ce1ee4fcf7dc(arg1: *mut c_void, arg2: *mut i8, arg3: size_t) -> *mut c_void

{
    let mut var_28: ();
    uu_tail::follow::files::FileHandling::canonicalize_path::ha359b021a4419771(&var_28, arg2, arg3);
    let rax: *mut c_void =
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h78f2dc0a7938c5d6(
        arg1.byte_offset(0x18), &var_28);
    
    if rax != 0
    {
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_28);
        return rax.byte_offset(0x18);
    }
    
    core::option::unwrap_failed::h0e11329e76906eaa();
    /* no return */
}
