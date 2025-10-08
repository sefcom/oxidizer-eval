
  int64_t uu_sort::ext_sort::sorter::hf0e969ba6fded8e2(int64_t arg1, int64_t arg2, int64_t arg3, int64_t* arg4, void* arg5)

{
    void* i_4 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h60814cb01a26dc76(arg1);
    void* i_1 = i_4;
    
    if (i_4)
    {
        void* i_2 = i_4;
        void* i;
        
        do
        {
            void* i_3 = i_2;
            uu_sort::sort_by::h04d3448c2cd20374(*(i_2 + 0x20), *(i_2 + 0x28), arg5);
            int64_t rax =
                std::sync::mpmc::Sender$LT$T$GT$::send::h35b630fd0acd1b39(arg3, arg4, i_2);
            int64_t var_38 = rax;
            int64_t result = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::hac0e8e318f5af5c2(&var_38);
            
            if (rax)
                return result;
            
            i = std::sync::mpmc::Receiver$LT$T$GT$::recv::h60814cb01a26dc76(arg1);
            i_2 = i;
            i_1 = i;
        } while (i);
    }
    
    return core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&i_1);
}
