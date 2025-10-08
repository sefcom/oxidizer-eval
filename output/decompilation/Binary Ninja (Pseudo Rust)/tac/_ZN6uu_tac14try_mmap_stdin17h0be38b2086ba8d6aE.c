
  fn uu_tac::try_mmap_stdin::h0be38b2086ba8d6a(arg1: *mut i64) -> *mut i64

{
    std::io::stdio::stdin::h9a05a2c3e7544b2a();
    let var_48: *mut c_void = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
    let var_18: i64 = 0;
    let mut var_28: i64 = 0;
    let var_10: i8 = 0;
    let var_e: i16 = 0;
    let mut var_40: i8;
    let result: *mut i64 = memmap2::MmapOptions::map::h350451b78dea6693(&var_40, &var_28);
    
    if (var_40 & 1) != 0
    {
        *arg1 = 0;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$memmap2..Mmap$C$std..io..error..Error$GT$$GT$::h6ab4ebf47749bb69(&var_40);
    }
    
    let var_38: i128;
    *arg1.byte_offset(8) = var_38;
    *arg1 = 1;
    result
}
