
  int64_t uu_stat::Stater::process_flags::hab64942a0ebe541a(int64_t arg1, int64_t arg2, int64_t* arg3, int64_t arg4, char* arg5)

{
    int64_t rdi = *arg3;
    
    if (rdi < arg4)
    {
        do
        {
            if (rdi >= arg2)
            {
                int64_t var_8 = arg1;
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdi, arg2);
                /* no return */
            }
            
            uint64_t r10_2 = *(arg1 + (rdi << 2)) - 0x20;
            
            if (r10_2 > 0x29)
                break;
            
            switch (r10_2)
            {
                case 0:
                case 0x29:
                {
                    arg5[3] = 1;
                    break;
                }
                case 1:
                case 2:
                case 4:
                case 5:
                case 6:
                case 8:
                case 9:
                case 0xa:
                case 0xc:
                case 0xe:
                case 0xf:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                {
                    break;
                    break;
                }
                case 3:
                {
                    *arg5 = 1;
                    break;
                }
                case 7:
                {
                    arg5[5] = 1;
                    break;
                }
                case 0xb:
                {
                    arg5[4] = 1;
                    break;
                }
                case 0xd:
                {
                    arg5[2] = 1;
                    break;
                }
                case 0x10:
                {
                    arg5[1] = 1;
                    break;
                }
            }
            
            rdi += 1;
            *arg3 = rdi;
        } while (arg4 != rdi);
    }
    
    return arg1;
}
