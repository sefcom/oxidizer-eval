
  int64_t uu_head::head_backwards_on_seekable_file::h9ab8f833488ebf97(int32_t* arg1, int64_t* arg2)

{
    int64_t rax = *arg2;
    int64_t rbx;
    int32_t var_c8;
    int64_t var_c0;
    
    if (rax == 1)
    {
        uint64_t rax_2;
        int64_t rdx_2;
        rax_2 = uu_head::find_nth_line_from_end::h5c4d4ddf46229ebf(arg1, arg2[1], *(arg2 + 0x2b));
        rbx = rdx_2;
        
        if (!rax_2)
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h5b1434c6071ed7d0(
                &var_c8, 0x10000, arg1);
            rbx = uu_head::read_n_bytes::hf3a515e6e6370f94(&var_c8);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$std..fs..File$GT$$GT$::h29a0ad3ae49a85fc(var_c8, var_c0);
        }
    }
    else
    {
        if (rax != 3)
        {
            core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreacha…");
            /* no return */
        }
        
        int64_t r15_1 = arg2[1];
        std::fs::File::metadata::he899a18112e6f19e(&var_c8, arg1);
        
        if (var_c8 == 2)
            return var_c0;
        
        int64_t var_78;
        
        if (var_78 <= r15_1)
            return 0;
        
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h5b1434c6071ed7d0(&var_c8, 
            0x10000, arg1);
        rbx = uu_head::read_n_bytes::hf3a515e6e6370f94(&var_c8);
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$std..fs..File$GT$$GT$::h29a0ad3ae49a85fc(var_c8, var_c0);
    }
    return rbx;
}
