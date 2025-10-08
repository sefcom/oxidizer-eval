
  int64_t uu_head::head_backwards_on_seekable_file::h7e88d54791e3601d(int32_t* arg1, int64_t* arg2)

{
    int64_t rax = *arg2;
    int64_t result;
    
    if (rax == 1)
    {
        char rax_2;
        int64_t rdx_2;
        rax_2 = uu_head::find_nth_line_from_end::h2ab1c0c6df65cb6b(arg1, arg2[1], *(arg2 + 0x2b));
        result = 1;
        
        if (!(rax_2 & 1))
            return uu_head::read_n_bytes::haa0958494279c1b2(arg1, rdx_2);
    }
    else
    {
        if (rax != 3)
        {
            core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
            /* no return */
        }
        
        int64_t r14_1 = arg2[1];
        int32_t var_c0;
        std::fs::File::metadata::h5e84e533705f8c98(&var_c0, arg1);
        
        if (var_c0 == 2)
            return 1;
        
        result = 0;
        int64_t var_70;
        
        if (var_70 > r14_1)
            return uu_head::read_n_bytes::haa0958494279c1b2(arg1, var_70 - r14_1);
    }
    
    return result;
}
