
  fn uu_stat::Stater::process_flags::hab64942a0ebe541a(arg1: i64, arg2: i64, arg3: *mut i64, arg4: i64, arg5: *mut i8) -> i64

{
    let mut rdi: i64 = *arg3;
    
    if rdi < arg4
    {
        do
        {
            if rdi >= arg2
            {
                let var_8: i64 = arg1;
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdi, arg2);
                /* no return */
            }
            
            let r10_2: u64 = *(arg1 + (rdi << 2)) - 0x20;
            
            if r10_2 > 0x29
            {
                break;
            }
            
            match r10_2
            {
                0 | 0x29 =>
                {
                    arg5[3] = 1;
                }
                1 | 2 | 4 | 5 | 6 | 8 | 9 | 0xa | 0xc | 0xe | 0xf | 0x11 | 0x12 | 0x13 | 0x14 | 0x15
                    | 0x16 | 0x17 | 0x18 | 0x19 | 0x1a | 0x1b | 0x1c | 0x1d | 0x1e | 0x1f | 0x20 |
                    0x21 | 0x22 | 0x23 | 0x24 | 0x25 | 0x26 | 0x27 | 0x28 =>
                {
                    break;
                }
                3 =>
                {
                    *arg5 = 1;
                }
                7 =>
                {
                    arg5[5] = 1;
                }
                0xb =>
                {
                    arg5[4] = 1;
                }
                0xd =>
                {
                    arg5[2] = 1;
                }
                0x10 =>
                {
                    arg5[1] = 1;
                }
            }
            
            rdi += 1;
            *arg3 = rdi;
        } while arg4 != rdi;
    }
    
    arg1
}
