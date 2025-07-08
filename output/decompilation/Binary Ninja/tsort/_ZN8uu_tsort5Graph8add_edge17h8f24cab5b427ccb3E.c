
  void* uu_tsort::Graph::add_edge::h8f24cab5b427ccb3(void* arg1, void* arg2, void* arg3, int64_t* arg4, void* arg5)

{
    int64_t* r13 = arg2;
    int64_t* r15 = arg1;
    uu_tsort::Graph::add_node::h226cd9a3985bfd5f(arg1, arg2, arg3);
    void* result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h357813b587d5e2a7(r13, arg3, arg4, arg5);
    
    if (!result)
    {
        uu_tsort::Graph::add_node::h226cd9a3985bfd5f(r15, arg4, arg5);
        void* rax = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h03536305409d1b4d(
            r15, r13, arg3);
        
        if (!rax)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        uu_tsort::Node::add_successor::hc806fe8fc5e165c9(rax + 0x10, arg4, arg5);
        result = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h03536305409d1b4d(
            r15, arg4, arg5);
        
        if (!result)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        *(result + 0x28) += 1;
    }
    
    return result;
}
