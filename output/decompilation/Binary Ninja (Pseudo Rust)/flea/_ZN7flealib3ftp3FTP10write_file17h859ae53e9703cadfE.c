
  fn flealib::ftp::FTP::write_file::h859ae53e9703cadf(arg1: *mut i64, arg2: *mut i64) -> *mut *mut [i8; 0x109]

{
    let mut var_20: i8;
    std::fs::File::create::hb10f4de1cd0f279a(&var_20, arg1);
    let mut result: *mut *mut [i8; 0x109];
    let result_1: *mut *mut [i8; 0x109];
    
    if (var_20 & 1) == 0
    {
        let fd_1: i32;
        let mut fd: i32 = fd_1;
        result = std::io::Write::write_all::h066e478a0016aaba(&fd, arg2[1], arg2[2]);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd);
        
        if result == 0
        {
            result = nullptr;
        }
    }
    else
    {
        result = result_1;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(arg2);
    result
}
