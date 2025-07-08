
  int64_t uu_head::head_file::h48e6bcfaf0dc6df4(int32_t* arg1, int64_t* arg2)

{
    int64_t var_48;
    int64_t var_40;
    int64_t result;
    
    switch (*arg2)
    {
        case 0:
        {
            arg2[1];
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h5b1434c6071ed7d0(
                &var_48, 0x10000, arg1);
            *(arg2 + 0x2b);
            result = uu_head::read_n_lines::h872c4c7830fcbe92(&var_48);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$std..fs..File$GT$$GT$::h29a0ad3ae49a85fc(var_48, var_40);
            return result;
            break;
        }
        case 1:
        case 3:
        {
            /* tailcall */
            return uu_head::head_backwards_file::h247adaae7248d021(arg1, arg2);
        }
        case 2:
        {
            arg2[1];
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h5b1434c6071ed7d0(
                &var_48, 0x10000, arg1);
            result = uu_head::read_n_bytes::hf3a515e6e6370f94(&var_48);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$std..fs..File$GT$$GT$::h29a0ad3ae49a85fc(var_48, var_40);
            return result;
            break;
        }
    }
}
