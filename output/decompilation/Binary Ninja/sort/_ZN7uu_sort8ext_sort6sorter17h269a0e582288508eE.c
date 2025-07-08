
  int64_t uu_sort::ext_sort::sorter::h269a0e582288508e(int64_t* arg1, int64_t* arg2, void* arg3)

{
    void* i = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(arg1);
    void* i_1 = i;
    
    while (i)
    {
        void* i_2 = i;
        uu_sort::sort_by::h972a39ae46813087(i + 0x18, arg3);
        int64_t rax_1 = std::sync::mpmc::Sender$LT$T$GT$::send::h6e2915accf477763(arg2);
        int64_t var_30 = rax_1;
        int64_t result = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h7ecd2887621f7ca2(&var_30);
        
        if (rax_1)
            return result;
        
        i = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(arg1);
        i_1 = i;
    }
    
    return core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::hbe180fe5a9f9be02(&i_1);
}
