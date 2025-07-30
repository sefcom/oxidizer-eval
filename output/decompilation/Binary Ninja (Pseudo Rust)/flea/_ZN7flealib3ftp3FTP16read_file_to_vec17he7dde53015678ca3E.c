
  fn flealib::ftp::FTP::read_file_to_vec::he7dde53015678ca3(arg1: *mut i64, arg2: i64) -> i64

{
    let mut var_20: i8;
    std::fs::File::open::h072f7934218d9ec9(&var_20, arg2);
    
    if (var_20 & 1) != 0
    {
        let result: i64;
        arg1[1] = result;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let fd_1: i32;
    let mut fd: i32 = fd_1;
    var_20 = 0;
    let var_18: i64 = 1;
    let var_10: i64 = 0;
    let mut rax_2: i64;
    let mut rdx: i64;
    rax_2 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_end::hc5ce334212601c81(&fd, 
        &var_20);
    
    if rax_2 == 0
    {
        arg1[2] = var_10;
        *arg1 = var_20;
    }
    else
    {
        arg1[1] = rdx;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(&var_20);
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd)
}
