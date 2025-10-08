
  fn uu_tail::follow::files::FileHandling::get::hc0a1561a42a9610a(arg1: *mut c_void, arg2: *mut i8, arg3: u64) -> i64

{
    let mut var_28: i64;
    uu_tail::follow::files::FileHandling::canonicalize_path::h83fd2d9f8818f482(&var_28, arg2, arg3);
    let rax: i64 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h5989fafa25455cd3(
        arg1.byte_offset(0x18), &var_28);
    
    if rax != 0
    {
        let var_20: i64;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(var_28, var_20);
        return rax + 0x18;
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
