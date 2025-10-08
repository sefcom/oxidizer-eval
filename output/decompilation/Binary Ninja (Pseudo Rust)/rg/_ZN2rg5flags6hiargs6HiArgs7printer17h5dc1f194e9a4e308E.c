
  fn rg::flags::hiargs::HiArgs::printer::h5dc1f194e9a4e308(arg1: *mut i64, arg2: *mut c_void, arg3: i8, arg4: *mut i128) -> i64

{
    let mut rax: *mut c_void;
    
    if *arg2.byte_offset(0x38a) == 0
    {
        match arg3
        {
            0 =>
            {
                /* tailcall */
                return rg::flags::hiargs::HiArgs::printer_standard::h83bdcec0174ec9a4(arg1, arg2, 
                    arg4);
            }
            1 =>
            {
                rax = 2;
            }
            2 =>
            {
                rax = 3;
            }
            3 =>
            {
                rax = nullptr;
            }
            4 =>
            {
                rax = 1;
            }
            5 =>
            {
                let rax_6: i64 = rg::flags::hiargs::HiArgs::printer_json::hd6c2b4b3e9ed96b0(
                    &arg1[1], arg2, arg4);
                *arg1 = 3;
                return rax_6;
            }
        }
    }
    else
    {
        rax = arg3 == 2;
        rax |= 4;
    }
    
    let rax_2: i64 =
        rg::flags::hiargs::HiArgs::printer_summary::h1562db8c3a15b7ba(&arg1[1], arg2, arg4, rax);
    *arg1 = 2;
    rax_2
}
