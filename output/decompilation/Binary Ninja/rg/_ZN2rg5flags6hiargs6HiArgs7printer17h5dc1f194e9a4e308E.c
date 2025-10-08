
  int64_t rg::flags::hiargs::HiArgs::printer::h5dc1f194e9a4e308(int64_t* arg1, void* arg2, char arg3, int128_t* arg4)

{
    void* rax;
    
    if (!*(arg2 + 0x38a))
        switch (arg3)
        {
            case 0:
            {
                /* tailcall */
                return rg::flags::hiargs::HiArgs::printer_standard::h83bdcec0174ec9a4(arg1, arg2, 
                    arg4);
            }
            case 1:
            {
                rax = 2;
                break;
            }
            case 2:
            {
                rax = 3;
                break;
            }
            case 3:
            {
                rax = nullptr;
                break;
            }
            case 4:
            {
                rax = 1;
                break;
            }
            case 5:
            {
                int64_t rax_6 = rg::flags::hiargs::HiArgs::printer_json::hd6c2b4b3e9ed96b0(
                    &arg1[1], arg2, arg4);
                *arg1 = 3;
                return rax_6;
                break;
            }
        }
    else
    {
        rax = arg3 == 2;
        rax |= 4;
    }
    
    int64_t rax_2 =
        rg::flags::hiargs::HiArgs::printer_summary::h1562db8c3a15b7ba(&arg1[1], arg2, arg4, rax);
    *arg1 = 2;
    return rax_2;
}
