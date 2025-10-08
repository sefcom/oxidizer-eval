
  fn uu_tail::follow::files::FileHandling::remove::h45671f4f92c48796(arg1: i64, arg2: *mut c_void, arg3: *mut i8, arg4: u64) -> i64

{
    let mut var_108: i64;
    uu_tail::follow::files::FileHandling::canonicalize_path::h83fd2d9f8818f482(&var_108, arg3, 
        arg4);
    let mut var_f0: i32;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::hd48e343bc923ab41(&var_f0, 
        arg2.byte_offset(0x18), &var_108);
    
    if var_f0 != 3
    {
        memcpy(arg1, &var_f0, 0xd8);
        let var_100: i64;
        return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(var_108, 
            var_100);
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
