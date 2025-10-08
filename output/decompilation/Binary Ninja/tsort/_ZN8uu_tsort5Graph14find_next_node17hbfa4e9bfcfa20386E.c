
  int64_t uu_tsort::Graph::find_next_node::hbfa4e9bfcfa20386(void* arg1, int64_t* arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t i;
    
    for (i = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::h2df3f1a91f2253a2(
            arg2); !i; i =
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::h2df3f1a91f2253a2(
            arg2))
        uu_tsort::Graph::find_and_break_cycle::hd1217009a967d454(arg1, arg2);
    
    return i;
}
