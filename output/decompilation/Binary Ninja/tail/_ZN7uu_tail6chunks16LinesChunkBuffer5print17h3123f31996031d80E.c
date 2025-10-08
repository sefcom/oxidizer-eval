
  uint64_t uu_tail::chunks::LinesChunkBuffer::print::h3123f31996031d80(int64_t* arg1, int64_t* arg2)

{
    void* var_50;
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h5656e42254df2b37(&var_50, arg1);
    void* r15 = var_50;
    void* var_48;
    void* r12 = var_48;
    int64_t* var_40;
    int64_t* rcx = var_40;
    void* var_38;
    void* rsi_1 = var_38;
    uint64_t i;
    
    do
    {
        void* rbp_1;
        int64_t* r13_1;
        
        if (r15 != r12)
        {
            r13_1 = rcx;
            rbp_1 = rsi_1;
            rsi_1 = r12;
            rcx = r15;
        }
        else
        {
            r13_1 = r15;
            rbp_1 = r15;
            
            if (rcx == rsi_1)
                return 0;
        }
        
        r12 = rsi_1;
        r15 = &rcx[1];
        i = uu_tail::chunks::LinesChunk::print_bytes::hf07a2c81279428be(*rcx, arg2);
        rcx = r13_1;
        rsi_1 = rbp_1;
    } while (!i);
    
    return i;
}
