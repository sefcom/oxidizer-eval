
  int64_t flealib::ftp::FTP::read_file_to_vec::he7dde53015678ca3(int64_t* arg1, int64_t arg2)

{
    char var_20;
    std::fs::File::open::h072f7934218d9ec9(&var_20, arg2);
    
    if (var_20 & 1)
    {
        int64_t result;
        arg1[1] = result;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int32_t fd_1;
    int32_t fd = fd_1;
    var_20 = 0;
    int64_t var_18 = 1;
    int64_t var_10 = 0;
    int64_t rax_2;
    int64_t rdx;
    rax_2 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_end::hc5ce334212601c81(&fd, 
        &var_20);
    
    if (!rax_2)
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
    
    return core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd);
}
