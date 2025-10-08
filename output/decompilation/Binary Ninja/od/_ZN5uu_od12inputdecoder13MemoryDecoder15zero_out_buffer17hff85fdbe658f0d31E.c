
  void uu_od::inputdecoder::MemoryDecoder::zero_out_buffer::hff85fdbe658f0d31(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    if (arg2 < arg3)
    {
        void* rcx_1 = *arg1;
        
        do
        {
            int64_t rax_1 = *(rcx_1 + 0x10);
            
            if (arg2 >= rax_1)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(arg2, rax_1);
                /* no return */
            }
            
            (*(rcx_1 + 8))[arg2] = 0;
            arg2 += 1;
        } while (arg3 != arg2);
    }
}
