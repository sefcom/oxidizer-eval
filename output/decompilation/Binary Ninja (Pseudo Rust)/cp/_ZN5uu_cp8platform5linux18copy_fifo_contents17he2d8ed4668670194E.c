
  fn uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(arg1: i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_e0: i64 = arg1;
    let var_d8: i64 = arg2;
    let mut var_d0: i64 = arg3;
    let rcx: i64;
    let var_c8: i64 = rcx;
    let mut var_c0: i32;
    std::fs::File::open::h9d5fc688c698f3f4(&var_c0, &var_e0);
    
    if var_c0 != 0
    {
        return 1;
    }
    
    let fd_4: i32;
    let mut fd_2: i32 = fd_4;
    let mut fd: i32 = fd_2;
    let rax_3: i32 = !uucore::features::mode::get_umask::hd2aa58752ad993fa() & 0x192;
    var_c0 = 0;
    let mut var_b4_1: i16 = 0;
    let mut var_b8_1: i32 = 0;
    var_b4_1 = 1;
    *var_b8_1[1] = 1;
    let var_bc: i32 = rax_3;
    let mut var_f0: i32;
    std::fs::OpenOptions::open::hb8d9aa9fb7330c1e(&var_f0, &var_c0, &var_d0);
    
    if var_f0 == 0
    {
        let fd_3: i32;
        let mut fd_1: i32 = fd_3;
        let mut rax_5: *mut *mut [i8; 0xa0];
        let mut rdx_1: i64;
        rax_5 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::ha1823f747cb4d7cf(&fd, &fd_1);
        
        if rax_5 == 0
        {
            std::fs::File::metadata::he899a18112e6f19e(&var_c0, &fd);
            let var_88: i32;
            
            if var_c0 != 2 && std::fs::File::set_permissions::h14239b20adbb1b7d(&fd_1, var_88) == 0
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_1);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd);
                return 0;
            }
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_1);
        fd_2 = fd;
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_2);
    1
}
