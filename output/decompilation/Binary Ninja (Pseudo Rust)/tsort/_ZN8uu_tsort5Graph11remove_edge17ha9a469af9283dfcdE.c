
  fn uu_tsort::Graph::remove_edge::ha9a469af9283dfcd(arg1: *mut c_void, arg2: *mut i64, arg3: i64, arg4: *mut i64, arg5: i64) -> *mut c_void

{
    let rax: *mut c_void =
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h9c29cb3229f656ca(
        arg1.byte_offset(0x18), arg2, arg3);
    
    if rax == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    uu_tsort::remove::h9256c665cc3cd014(rax.byte_offset(0x10), arg4);
    let result: *mut c_void =
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h9c29cb3229f656ca(
        arg1.byte_offset(0x18), arg4, arg5);
    
    if result != 0
    {
        *result.byte_offset(0x28) -= 1;
        return result;
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
