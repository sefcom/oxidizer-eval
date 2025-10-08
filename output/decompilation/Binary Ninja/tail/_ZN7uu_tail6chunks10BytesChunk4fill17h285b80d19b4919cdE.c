
  uint64_t uu_tail::chunks::BytesChunk::fill::h285b80d19b4919cd(int64_t* arg1, void* arg2, int64_t arg3, void* arg4)

{
    int64_t rax;
    int64_t var_18 = rax;
    char rax_1;
    int64_t rdx_1;
    rax_1 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::hdf40666c924fad72(arg3, arg4, arg2);
    
    if (rax_1 & 1)
    {
        uint64_t rax_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        arg1[1] = rax_2;
        arg1[2] = &data_575cd0;
        *arg1 = 1;
        return rax_2;
    }
    
    *(arg2 + 0x2000) = rdx_1;
    
    if (!rdx_1)
    {
        *arg1 = {0};
        return rax_1;
    }
    
    arg1[1] = 1;
    arg1[2] = rdx_1;
    *arg1 = 0;
    return rax_1;
}
