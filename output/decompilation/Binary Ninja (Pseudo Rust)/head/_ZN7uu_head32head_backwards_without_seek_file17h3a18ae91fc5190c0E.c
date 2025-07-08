
  fn uu_head::head_backwards_without_seek_file::h3a18ae91fc5190c0(arg1: i64, arg2: *mut i64) -> *mut *mut c_void

{
    let mut var_38: i64;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::he287ccdf4304b65d(&var_38, 
        0x10000, arg1);
    let rax: i64 = *arg2;
    let mut result: *mut *mut c_void;
    
    if rax == 1
    {
        result = uu_head::read_but_last_n_lines::h8782837729f811d6(&var_38, arg2[1], 
            *arg2.byte_offset(0x2b));
    }
    else
    {
        if rax != 3
        {
            core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreacha…");
            /* no return */
        }
        
        result = uu_head::read_but_last_n_bytes::hcec7d62dae3b0b23(&var_38, arg2[1]);
    }
    
    let var_30: i64;
    
    if result != 0
    {
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$std..fs..File$GT$$GT$::h7791d2e1a0ff900c(var_38, var_30);
        return result;
    }
    
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$std..fs..File$GT$$GT$::h7791d2e1a0ff900c(var_38, var_30);
    nullptr
}
