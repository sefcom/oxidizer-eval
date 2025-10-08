
  fn uu_wc::count_fast::count_bytes_using_splice::h131ffe0d704d0ba2() -> i64

{
    let mut var_c8: i64 = 0x1b600000000;
    let mut var_c0: i32 = 0;
    let var_bc: i16 = 0;
    *var_c0[1] = 1;
    let mut fd_2: u32;
    std::fs::OpenOptions::open::h8efffdd82d909b7e(&fd_2, &var_c8);
    
    if fd_2 == 1
    {
        let var_d0: i64;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb3643e18d0a3be8d(var_d0);
        return 1;
    }
    
    let fd_4: i32;
    let mut fd_3: i32 = fd_4;
    let mut fd: i32 = fd_3;
    nix::sys::stat::fstat::h932ea0f7705da4a5(&var_c8, fd_3);
    let var_98: i64;
    
    if (var_c8 & 1) == 0 && ((var_98 >> 0x20 & 0xfffff000) | (var_98 >> 8 & 0xfff)) == 1
        && ((var_98 >> 0xc & 0xffffff00) | var_98) == 3
    {
        let rax_6: u64 = uucore::features::pipes::pipe::h49247394f7e7f0ce();
        
        if rax_6 != 0xffffffff
        {
            let mut fd_1: i32 = rax_6;
            fd_2 = rax_6 >> 0x20;
            let mut rbx: i64 = 0;
            
            loop
            {
                nix::fcntl::splice::h2b33ac4e3c6d9a50(&var_c8, &fd_2);
                
                if (var_c8 & 1) == 0
                {
                    let rbp_1: u64 = var_c0;
                    
                    if rbp_1 == 0
                    {
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h10ceb594d39f53a5(fd_2);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h10ceb594d39f53a5(fd_1);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h10ceb594d39f53a5(fd);
                        return 0;
                    }
                    
                    rbx += rbp_1;
                    
                    if uucore::features::pipes::splice_exact::h5944a560648a0e2a(&fd_1, &fd, rbp_1)
                        == 0x86
                    {
                        continue;
                    }
                }
                
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h10ceb594d39f53a5(fd_2);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h10ceb594d39f53a5(fd_1);
                fd_3 = fd;
                break;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h10ceb594d39f53a5(fd_3);
    1
}
