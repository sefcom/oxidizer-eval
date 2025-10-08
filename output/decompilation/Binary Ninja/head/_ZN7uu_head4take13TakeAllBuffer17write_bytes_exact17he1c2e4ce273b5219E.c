
  ssize_t uu_head::take::TakeAllBuffer::write_bytes_exact::he1c2e4ce273b5219(void* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t rax;
    int64_t rdx;
    rax = uu_head::take::TakeAllBuffer::remaining_buffer::he80dcc941e66ef3a(arg1);
    int64_t rax_1;
    uint64_t rdx_1;
    rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h081cc4e04b37b8ff(arg3, rax, rdx);
    ssize_t result =
        _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(
        arg2, rax_1, rdx_1);
    
    if (!result)
    {
        int64_t rbx_1 = arg3 + *(arg1 + 0x18);
        *(arg1 + 0x18) = rbx_1;
        
        if (rbx_1 > *(arg1 + 0x10))
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: self.start_ind…");
            /* no return */
        }
    }
    
    return result;
}
