
  fn uu_tsort::Graph::add_edge::h4310416a4e0d07ea(arg1: *mut c_void, arg2: *mut i64, arg3: u64, arg4: *mut i64, arg5: i64) -> *mut c_void

{
    uu_tsort::Graph::add_node::hfb6ef72a6390e4a5(arg1, arg2, arg3);
    let mut result: *mut c_void = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfd999d1d0287ce02(arg2, arg3, arg4, arg5);
    
    if result == 0
    {
        uu_tsort::Graph::add_node::hfb6ef72a6390e4a5(arg1, arg4, arg5);
        let rax: *mut c_void =
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h9c29cb3229f656ca(
            arg1.byte_offset(0x18), arg2, arg3);
        
        if rax == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        uu_tsort::Node::add_successor::hb6395ae5c1a566e9(rax.byte_offset(0x10), arg4, arg5);
        result = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h9c29cb3229f656ca(
            arg1.byte_offset(0x18), arg4, arg5);
        
        if result == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        *result.byte_offset(0x28) += 1;
    }
    
    result
}
