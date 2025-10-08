
  fn uu_cat::write_nonprint_to_end::h33db268fb6c16bcd(arg1: *mut c_void, arg2: i64, arg3: *mut i64, arg4: *mut i8, arg5: u64) -> i64

{
    if arg2 == 0
    {
        return 0;
    }
    
    let mut rbx: i64 = 0;
    
    do
    {
        let mut rax_2: u32 = *arg1.byte_offset(rbx);
        let mut rdx: u64;
        let mut rsi: *mut i8;
        let mut rdi: *mut i64;
        
        if rax_2 == 9
        {
            rdi = arg3;
            rsi = arg4;
            rdx = arg5;
        }
        else if rax_2 == 0x7f
        {
            rdx = 2;
            rdi = arg3;
            rsi = "^?unknown filetype: Is a directo…";
        }
        else
        {
            if rax_2 == 0xa
            {
                return rbx;
            }
            
            if rax_2 < 0x20
            {
                rax_2 |= 0x40;
                let mut var_41: i8 = 0x5e;
                let var_40_1: i8 = rax_2;
                rdx = 2;
                rdi = arg3;
                rsi = &var_41;
            }
            else if rax_2 - 0x20 < 0x5f
            {
                let mut var_42: i8 = rax_2;
                rdx = 1;
                rdi = arg3;
                rsi = &var_42;
            }
            else if rax_2 < 0xa0
            {
                rax_2 -= 0x40;
                let mut var_3f: i16 = 0x2d4d;
                let var_3d_1: i8 = 0x5e;
                let var_3c_1: i8 = rax_2;
                rdx = 4;
                rdi = arg3;
                rsi = &var_3f;
            }
            else if rax_2 + 0x60 >= 0x5f
            {
                rdx = 4;
                rdi = arg3;
                rsi = "M-^? -> \x1b[2mAnsi -- \x1b[8mhe…";
            }
            else
            {
                rax_2 &= 0x7f;
                let mut var_3b: i16 = 0x2d4d;
                let var_39_1: i8 = rax_2;
                rdx = 3;
                rdi = arg3;
                rsi = &var_3b;
            }
        }
        
        core::result::Result$LT$T$C$E$GT$::unwrap::h7628d8a11a4ef90d(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4762d2070cade9bd(rdi, rsi, rdx));
        rbx += 1;
    } while arg2 != rbx;
    
    arg2
}
