
  fn uu_cp::platform::linux::check_for_data::h21b9fcb33088a74c(arg1: *mut i64) -> i64

{
    let mut var_d0: i32;
    let rsi: i64;
    std::fs::File::open::h2ade805364297b3f(&var_d0, rsi);
    let result: i64;
    
    if var_d0 != 0
    {
        *arg1 = result;
        arg1[1] = 2;
        return result;
    }
    
    let fd: i32;
    let mut fd_2: i32 = fd;
    std::fs::File::metadata::he899a18112e6f19e(&var_d0, &fd_2);
    let mut fd_1: i32;
    let var_80: i64;
    
    if var_d0 == 2
    {
        *arg1 = result;
        arg1[1] = 2;
        fd_1 = fd;
    }
    else if var_80 == 0
    {
        let var_78: i64;
        _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h3824b372c4eb90c7(&var_d0, var_78);
        let var_c0: u64;
        let mut rax_3: *mut i8;
        let mut rdx_2: i64;
        rax_3 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(&fd_2, 
            result, var_c0);
        
        if rax_3 == 0
        {
            let mut result_1: i64 = result;
            let var_d8_1: i64 = var_c0 + result;
            rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h682aa6afec1bbf51(&result_1);
            arg1[2] = 0;
            rdx_2 = 0;
        }
        else
        {
            rax_3 = 2;
        }
        
        *arg1 = rdx_2;
        arg1[1] = rax_3;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha0066fb3d75053fd(&var_d0);
        fd_1 = fd_2;
    }
    else
    {
        let rax_2: off64_t = lseek(fd, 0, 3);
        let var_70: i64;
        
        if rax_2 == -1
        {
            *arg1 = var_80;
            arg1[1] = 0;
            arg1[2] = var_70;
        }
        else if rax_2 < 0
        {
            *arg1 = std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() << 0x20 | 2;
            arg1[1] = 2;
        }
        else
        {
            *arg1 = var_80;
            arg1[1] = 1;
            arg1[2] = var_70;
        }
        fd_1 = fd_2;
    }
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_1)
}
