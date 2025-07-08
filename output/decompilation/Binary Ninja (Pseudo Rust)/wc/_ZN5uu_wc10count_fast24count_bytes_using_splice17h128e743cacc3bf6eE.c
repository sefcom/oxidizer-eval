
  fn uu_wc::count_fast::count_bytes_using_splice::h128e743cacc3bf6e(arg1: *mut i32) -> i64

{
    let mut var_c8: i64 = 0x1b600000000;
    let mut var_c0: i32 = 0;
    let var_bc: i16 = 0;
    *var_c0[1] = 1;
    let mut fd_2: u32;
    std::fs::OpenOptions::open::h0b5101c42a630ef2(&fd_2, &var_c8, 
        "/dev/nullsrc/uu/wc/src/count_fas…");
    let var_d0: i64;
    
    if fd_2 == 0
    {
        let fd_4: i32;
        let mut fd_3: i32 = fd_4;
        let mut fd: i32 = fd_3;
        nix::sys::stat::fstat::h5414de4d70a08ddb(&var_c8, fd_3);
        let var_98: i64;
        
        if var_c8 == 0 && ((var_98 >> 0x20 & 0xfffff000) | (var_98 >> 8 & 0xfff)) == 1 && core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$u32$GT$::ne::h189986e1b215ca81((
            var_98 >> 0xc & 0xffffff00) | var_98) == 0
        {
            let rax_6: u64 = uucore::features::pipes::pipe::h14b45b9735c770a8();
            
            if rax_6 != 0xffffffff
            {
                let mut fd_1: i32 = rax_6;
                fd_2 = rax_6 >> 0x20;
                let mut r14: i64 = 0;
                
                loop
                {
                    nix::fcntl::splice::h2aa3206a8b712af9(&var_c8, arg1, nullptr, &fd_2, nullptr, 
                        0x20000, 0);
                    
                    if var_c8 == 0
                    {
                        let r13_1: u64 = var_c0;
                        
                        if r13_1 == 0
                        {
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd_2);
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd_1);
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd);
                            return 0;
                        }
                        
                        r14 += r13_1;
                        
                        if uucore::features::pipes::splice_exact::hd07514bb204e6b97(&fd_1, &fd, 
                            r13_1) == 0x86
                        {
                            continue;
                        }
                    }
                    
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd_2);
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd_1);
                    fd_3 = fd;
                    break;
                }
            }
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd_3);
    }
    else
    {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1f47a50be6f5ae8e(var_d0);
    }
    1
}
