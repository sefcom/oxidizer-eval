
  void** uu_head::head_backwards_without_seek_file::h3a18ae91fc5190c0(int64_t arg1, int64_t* arg2)

{
    int64_t var_38;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::he287ccdf4304b65d(&var_38, 
        0x10000, arg1);
    int64_t rax = *arg2;
    void** result;
    
    if (rax == 1)
        result =
            uu_head::read_but_last_n_lines::h8782837729f811d6(&var_38, arg2[1], *(arg2 + 0x2b));
    else
    {
        if (rax != 3)
        {
            core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreacha…");
            /* no return */
        }
        
        result = uu_head::read_but_last_n_bytes::hcec7d62dae3b0b23(&var_38, arg2[1]);
    }
    
    int64_t var_30;
    
    if (result)
    {
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$std..fs..File$GT$$GT$::h7791d2e1a0ff900c(var_38, var_30);
        return result;
    }
    
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$std..fs..File$GT$$GT$::h7791d2e1a0ff900c(var_38, var_30);
    return nullptr;
}
