
  fn uu_tac::try_mmap_path::h5a76dff90b159c96(arg1: *mut i64, arg2: i64) -> i64

{
    let mut var_48: i8;
    std::fs::File::open::h54d8f508eb814270(&var_48, arg2);
    
    if (var_48 & 1) != 0
    {
        let result: i64 = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h817b496011a5d2a4(&var_48);
        *arg1 = 0;
        return result;
    }
    
    let fd_2: i32;
    let mut fd_1: i32 = fd_2;
    let var_38: i64 = 0;
    var_48 = 0;
    let var_30: i8 = 0;
    let var_2e: i16 = 0;
    let mut var_28: i8;
    memmap2::MmapOptions::map::h02fdac4a9f0686f4(&var_28, &var_48, &fd_1);
    let mut fd: i32;
    
    if (var_28 & 1) == 0
    {
        let var_20: i128;
        *arg1.byte_offset(8) = var_20;
        *arg1 = 1;
        fd = fd_2;
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$memmap2..Mmap$C$std..io..error..Error$GT$$GT$::h6ab4ebf47749bb69(&var_28);
        *arg1 = 0;
        fd = fd_1;
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h1d9f2810d658cc7a(fd)
}
