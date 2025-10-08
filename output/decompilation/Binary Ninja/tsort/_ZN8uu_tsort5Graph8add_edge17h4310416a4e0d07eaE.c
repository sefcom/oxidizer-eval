
  void* uu_tsort::Graph::add_edge::h4310416a4e0d07ea(void* arg1, int64_t* arg2, uint64_t arg3, int64_t* arg4, int64_t arg5)

{
    uu_tsort::Graph::add_node::hfb6ef72a6390e4a5(arg1, arg2, arg3);
    void* result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfd999d1d0287ce02(arg2, arg3, arg4, arg5);
    
    if (!result)
    {
        uu_tsort::Graph::add_node::hfb6ef72a6390e4a5(arg1, arg4, arg5);
        void* rax = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h9c29cb3229f656ca(
            arg1 + 0x18, arg2, arg3);
        
        if (!rax)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        uu_tsort::Node::add_successor::hb6395ae5c1a566e9(rax + 0x10, arg4, arg5);
        result = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h9c29cb3229f656ca(
            arg1 + 0x18, arg4, arg5);
        
        if (!result)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        *(result + 0x28) += 1;
    }
    
    return result;
}
