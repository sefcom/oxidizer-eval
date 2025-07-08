
  fn uu_tsort::Graph::add_edge::h8f24cab5b427ccb3(arg1: *mut c_void, arg2: *mut c_void, arg3: *mut c_void, arg4: *mut i64, arg5: *mut c_void) -> *mut c_void

{
    let r13: *mut i64 = arg2;
    let r15: *mut i64 = arg1;
    uu_tsort::Graph::add_node::h226cd9a3985bfd5f(arg1, arg2, arg3);
    let mut result: *mut c_void = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h357813b587d5e2a7(r13, arg3, arg4, arg5);
    
    if result == 0
    {
        uu_tsort::Graph::add_node::h226cd9a3985bfd5f(r15, arg4, arg5);
        let rax: *mut c_void =
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h03536305409d1b4d(r15, 
            r13, arg3);
        
        if rax == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        uu_tsort::Node::add_successor::hc806fe8fc5e165c9(rax.byte_offset(0x10), arg4, arg5);
        result = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h03536305409d1b4d(
            r15, arg4, arg5);
        
        if result == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        *result.byte_offset(0x28) += 1;
    }
    
    result
}
