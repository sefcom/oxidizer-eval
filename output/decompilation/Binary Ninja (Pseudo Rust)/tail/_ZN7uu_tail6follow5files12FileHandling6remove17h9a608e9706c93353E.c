
  fn uu_tail::follow::files::FileHandling::remove::h9a608e9706c93353(arg1: i64, arg2: i64, arg3: *mut i8, arg4: size_t) -> i64

{
    let mut var_108: ();
    uu_tail::follow::files::FileHandling::canonicalize_path::ha359b021a4419771(&var_108, arg3, 
        arg4);
    let mut var_f0: i32;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h60eda5622c421fc6(&var_f0);
    
    if var_f0 == 3
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    memcpy(arg1, &var_f0, 0xd8);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_108);
    arg1
}
