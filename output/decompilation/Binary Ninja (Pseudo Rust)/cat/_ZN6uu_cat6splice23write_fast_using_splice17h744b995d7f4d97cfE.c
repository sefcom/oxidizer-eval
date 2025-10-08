
  fn uu_cat::splice::write_fast_using_splice::h744b995d7f4d97cf(arg1: *mut i64, arg2: *mut i32) -> u64

{
    let result: u64 = uucore::features::pipes::pipe::h49247394f7e7f0ce();
    let fd_2: u32 = result >> 0x20;
    
    if result == 0xffffffff
    {
        *arg1 = -0x7fffffffffffffff;
        arg1[1] = fd_2;
        return result;
    }
    
    let mut fd: i32 = result;
    let mut fd_1: u32 = fd_2;
    
    loop
    {
        let mut var_40: i32;
        nix::fcntl::splice::h4fd2eb8ee00667a9(&var_40, arg2, &fd_1);
        let var_38: u64;
        
        if var_40 == 1
        {
            arg1[1] = 1;
        }
        else if var_38 == 0
        {
            arg1[1] = 0;
        }
        else
        {
            if uucore::features::pipes::splice_exact::h47606a97f60e2947(&fd, var_38) == 0x86
            {
                continue;
            }
            
            let rax_1: i32 = uu_cat::splice::copy_exact::hb9a3658d2a5b3f83(fd, var_38);
            
            if rax_1 != 0x86
            {
                *arg1 = -0x7fffffffffffffff;
                arg1[1] = rax_1;
            }
            else
            {
                arg1[1] = 1;
                *arg1 = -0x7ffffffffffffffa;
            }
            
            break;
        }
        *arg1 = -0x7ffffffffffffffa;
        break;
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::hb12cd77b3305f064(fd_1);
    core::ptr::drop_in_place$LT$std..fs..File$GT$::hb12cd77b3305f064(fd)
}
