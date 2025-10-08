
  void* uu_tsort::Graph::remove_edge::ha9a469af9283dfcd(void* arg1, int64_t* arg2, int64_t arg3, int64_t* arg4, int64_t arg5)

{
    void* rax = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h9c29cb3229f656ca(
        arg1 + 0x18, arg2, arg3);
    
    if (!rax)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    uu_tsort::remove::h9256c665cc3cd014(rax + 0x10, arg4);
    void* result = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h9c29cb3229f656ca(
        arg1 + 0x18, arg4, arg5);
    
    if (result)
    {
        *(result + 0x28) -= 1;
        return result;
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
