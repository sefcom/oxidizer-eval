
  fn uu_cat::splice::write_fast_using_splice::h8d35de54429b343d(arg1: *mut i64, arg2: *mut i32, arg3: i64) -> u64

{
    let result: u64 = uucore::features::pipes::pipe::h14b45b9735c770a8();
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
        nix::fcntl::splice::h6b265cd6d4b59480(&var_40, arg2, nullptr, &fd_1, nullptr, 0x20000, 0);
        let mut rcx_2: *mut i64;
        let var_38: u64;
        
        if var_40 != 0
        {
            rcx_2 = arg1;
            rcx_2[1] = 1;
        }
        else if var_38 == 0
        {
            rcx_2 = arg1;
            rcx_2[1] = 0;
        }
        else
        {
            if uucore::features::pipes::splice_exact::hf182302f6fbd70e2(&fd, arg3, var_38) == 0x86
            {
                continue;
            }
            
            let rax_1: i32 = uu_cat::splice::copy_exact::h7c8774a5e534cde3(fd, arg3, var_38);
            
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
        *rcx_2 = -0x7ffffffffffffffa;
        break;
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f(fd_1);
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f(fd)
}
