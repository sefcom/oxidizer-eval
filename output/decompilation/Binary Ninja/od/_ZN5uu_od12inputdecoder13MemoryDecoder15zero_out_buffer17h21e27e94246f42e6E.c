
  void uu_od::inputdecoder::MemoryDecoder::zero_out_buffer::h21e27e94246f42e6(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    if (arg2 < arg3)
    {
        int64_t rbx_1 = arg2;
        void* r15_1 = *arg1;
        int64_t rax;
        
        do
        {
            int64_t rsi = *(r15_1 + 0x10);
            
            if (rbx_1 >= rsi)
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(rbx_1, rsi);
                /* no return */
            }
            
            rax = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbx_1);
            (*(r15_1 + 8))[rbx_1] = 0;
            rbx_1 = rax;
        } while (rax < arg3);
    }
}
