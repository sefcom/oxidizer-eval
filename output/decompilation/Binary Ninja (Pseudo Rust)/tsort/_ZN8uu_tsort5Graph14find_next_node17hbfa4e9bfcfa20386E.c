
  fn uu_tsort::Graph::find_next_node::hbfa4e9bfcfa20386(arg1: *mut c_void, arg2: *mut i64) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let mut i: i64;
    
    for i =
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::h2df3f1a91f2253a2(arg2); 
        i == 0; 
        i = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::h2df3f1a91f2253a2(arg2)
    {
        uu_tsort::Graph::find_and_break_cycle::hd1217009a967d454(arg1, arg2);
    }
    
    i
}
