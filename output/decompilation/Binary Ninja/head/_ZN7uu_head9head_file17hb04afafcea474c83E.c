
  int64_t uu_head::head_file::hb04afafcea474c83(int32_t* arg1, int64_t* arg2)

{
    switch (*arg2)
    {
        case 0:
        {
            arg2[1];
            int64_t var_48;
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h178bd3f790421f74(
                &var_48, arg1);
            *(arg2 + 0x2b);
            int64_t result;
            int64_t rdx_2;
            result = uu_head::read_n_lines::h2e2947bf1f7213dc(&var_48);
            int64_t var_40;
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$std..fs..File$GT$$GT$::h0979743da5e6a200(var_48, var_40);
            return result;
            break;
        }
        case 1:
        case 3:
        {
            /* tailcall */
            return uu_head::head_backwards_file::h4d798ee036af210c(arg1, arg2);
        }
        case 2:
        {
            /* tailcall */
            return uu_head::read_n_bytes::haa0958494279c1b2(arg1, arg2[1]);
        }
    }
}
