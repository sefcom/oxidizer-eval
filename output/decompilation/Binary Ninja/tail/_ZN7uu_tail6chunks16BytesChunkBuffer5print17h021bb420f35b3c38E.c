
  uint64_t uu_tail::chunks::BytesChunkBuffer::print::h021bb420f35b3c38(int64_t* arg1, int64_t* arg2)

{
    void* var_50;
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h5656e42254df2b37(&var_50, arg1);
    void* rdx = var_50;
    void* var_48;
    void* r13 = var_48;
    int64_t* var_40;
    int64_t* r12 = var_40;
    void* var_38;
    void* rcx = var_38;
    int64_t i;
    
    do
    {
        void* rbx_1;
        int64_t* rbp_1;
        
        if (rdx != r13)
        {
            rbp_1 = r12;
            rbx_1 = rcx;
            rcx = r13;
            r12 = rdx;
        }
        else
        {
            rbp_1 = rdx;
            rbx_1 = rdx;
            
            if (r12 == rcx)
                return 0;
        }
        
        r13 = rcx;
        int64_t rax_1;
        uint64_t rdx_1;
        rax_1 = uu_tail::chunks::BytesChunk::get_buffer::hb5949d2a788ba2a3(*r12);
        i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h7989dfaf5a9a1bc8(arg2, rax_1, rdx_1);
        rdx = &r12[1];
        r12 = rbp_1;
        rcx = rbx_1;
    } while (!i);
    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
}
