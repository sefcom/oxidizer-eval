
  fn uu_tac::try_mmap_path::h01ee297263e394e5(arg1: *mut i64) -> i64

{
    let mut var_48: i32;
    let rsi: i64;
    std::fs::File::open::h0ae14c8dddef61f7(&var_48, rsi);
    
    if var_48 != 0
    {
        let result: i64 = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::hb56a7153beea00aa(&var_48);
        *arg1 = 0;
        return result;
    }
    
    let fd_2: i32;
    let mut fd_1: i32 = fd_2;
    let var_38_1: i64 = 0;
    var_48 = 0;
    let var_30_1: i8 = 0;
    let var_2e_1: i16 = 0;
    let mut var_28: i64;
    memmap2::MmapOptions::map::hf6d33351edcc2203(&var_28, &var_48, &fd_1);
    let mut fd: i32;
    
    if var_28 == 0
    {
        let var_20: i128;
        *arg1.byte_offset(8) = var_20;
        *arg1 = 1;
        fd = fd_2;
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$memmap2..Mmap$C$std..io..error..Error$GT$$GT$::h33f78c51d3eed1e5(&var_28);
        *arg1 = 0;
        fd = fd_1;
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h8bacf0b914d62b8a(fd)
}
