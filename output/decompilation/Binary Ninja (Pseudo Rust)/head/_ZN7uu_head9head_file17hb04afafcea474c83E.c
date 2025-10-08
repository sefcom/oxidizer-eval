
  fn uu_head::head_file::hb04afafcea474c83(arg1: *mut i32, arg2: *mut i64) -> i64

{
    match *arg2
    {
        0 =>
        {
            arg2[1];
            let mut var_48: i64;
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h178bd3f790421f74(
                &var_48, arg1);
            *arg2.byte_offset(0x2b);
            let mut result: i64;
            let mut rdx_2: i64;
            result = uu_head::read_n_lines::h2e2947bf1f7213dc(&var_48);
            let var_40: i64;
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$std..fs..File$GT$$GT$::h0979743da5e6a200(var_48, var_40);
            result
        }
        1 | 3 =>
        {
            /* tailcall */
            uu_head::head_backwards_file::h4d798ee036af210c(arg1, arg2)
        }
        2 =>
        {
            /* tailcall */
            uu_head::read_n_bytes::haa0958494279c1b2(arg1, arg2[1])
        }
    }
}
