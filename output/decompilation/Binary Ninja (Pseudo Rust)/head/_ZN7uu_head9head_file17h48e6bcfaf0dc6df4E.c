
  fn uu_head::head_file::h48e6bcfaf0dc6df4(arg1: *mut i32, arg2: *mut i64) -> i64

{
    let mut var_48: i64;
    let var_40: i64;
    let mut result: i64;
    
    match *arg2
    {
        0 =>
        {
            arg2[1];
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h5b1434c6071ed7d0(
                &var_48, 0x10000, arg1);
            *arg2.byte_offset(0x2b);
            result = uu_head::read_n_lines::h872c4c7830fcbe92(&var_48);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$std..fs..File$GT$$GT$::h29a0ad3ae49a85fc(var_48, var_40);
            result
        }
        1 | 3 =>
        {
            /* tailcall */
            uu_head::head_backwards_file::h247adaae7248d021(arg1, arg2)
        }
        2 =>
        {
            arg2[1];
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h5b1434c6071ed7d0(
                &var_48, 0x10000, arg1);
            result = uu_head::read_n_bytes::hf3a515e6e6370f94(&var_48);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$std..fs..File$GT$$GT$::h29a0ad3ae49a85fc(var_48, var_40);
            result
        }
    }
}
