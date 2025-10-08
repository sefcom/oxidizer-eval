
  int64_t uu_head::take::TakeAllLinesBuffer::write_lines::hf88d8b4ac800ff57(int64_t* arg1, void* arg2, int64_t* arg3, int64_t arg4, char arg5)

{
    char const (** const var_58)[0xb0];
    int128_t var_40;
    
    if (!arg4)
    {
        var_58 = &data_4f7bc0;
        int64_t var_50_2 = 1;
        int64_t var_48_2 = 8;
        var_40 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_58);
        /* no return */
    }
    
    int64_t r15 = arg4;
    int64_t result;
    int64_t rax_5;
    int64_t rdx;
    
    if (arg4 <= *(arg2 + 0x20))
    {
        char const (** rax_1)[0xb0];
        void* rdx_1;
        rax_1 = uu_head::take::TakeAllBuffer::remaining_buffer::he80dcc941e66ef3a(arg2);
        var_40 = arg5;
        var_58 = rax_1;
        char const (** var_50_1)[0xb0] = rax_1;
        void* var_48_1 = rdx_1 + rax_1;
        int64_t rax_2 =
            core::iter::traits::iterator::Iterator::advance_by::hf31ce2368e9ab065(&var_58, r15 - 1);
        int64_t rax_3;
        int64_t rdx_3;
        
        if (!rax_2)
            rax_3 = memchr::arch::generic::memchr::Iter::next::hfac8768f323c3893(&var_58, &var_40);
        
        if (rax_2 || rax_3 != 1)
        {
            var_58 = &data_4f7bd0;
            int64_t var_50_3 = 1;
            int64_t var_48_3 = 8;
            var_40 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_58);
            /* no return */
        }
        
        ssize_t rax_4 = uu_head::take::TakeAllBuffer::write_bytes_exact::he1c2e4ce273b5219(arg2, 
            arg3, rdx_3 + 1);
        
        if (!rax_4)
        {
            rax_5 = *(arg2 + 0x20) - r15;
            rdx = rdx_3 + 1;
            goto label_4660cc;
        }
        
        arg1[1] = rax_4;
        result = 1;
    }
    else
    {
        char rax;
        rax = uu_head::take::TakeAllBuffer::write_all::hd9faf813f411a40e(arg2, arg3);
        
        if (!(rax & 1))
        {
            r15 = *(arg2 + 0x20);
            rax_5 = 0;
            label_4660cc:
            *(arg2 + 0x20) = rax_5;
            arg1[1] = rdx;
            arg1[2] = r15;
            result = 0;
        }
        else
        {
            arg1[1] = rdx;
            result = 1;
        }
    }
    *arg1 = result;
    return result;
}
