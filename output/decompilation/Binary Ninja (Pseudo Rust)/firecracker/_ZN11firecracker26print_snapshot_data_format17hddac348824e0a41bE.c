
  fn firecracker::print_snapshot_data_format::hddac348824e0a41b(arg1: *mut i64, arg2: i64) -> u32

{
    let mut var_c8: i32;
    std::fs::File::open::h93e838a1af49f920(&var_c8, arg2);
    let mut var_c0: i128;
    
    if var_c8 == 1
    {
        let rax: i64 = var_c0;
        *arg1 = 6;
        arg1[1] = rax;
        let result: u32 = rax >> 0x20;
        *arg1.byte_offset(0xc) = result;
        return result;
    }
    
    let fd_1: i32;
    let mut fd: i32 = fd_1;
    vmm::snapshot::get_format_version::h94cdb088bfe0675b(&var_c8, &fd);
    let rax_2: i64 = var_c8;
    let var_a0: i64;
    let var_18: i64 = var_a0;
    let mut var_b0: i128;
    
    if rax_2 != 6
    {
        arg1[5] = var_a0;
        *arg1.byte_offset(0x18) = var_b0;
        *arg1.byte_offset(8) = var_c0;
        *arg1 = rax_2;
    }
    else
    {
        let var_48_1: i64 = var_a0;
        let var_58_1: i128 = var_b0;
        let mut var_68: i128 = var_c0;
        let mut var_38: *mut i128 = &var_68;
        let var_30_1: fn(arg1: i64, arg2: *mut i64) -> u64 = semver::display::_$LT$impl$u20$core..fmt..Display$u20$for$u20$semver..Version$GT$::fmt::ha9f34b03bf53131a;
        var_c8 = &data_7a3ef0;
        var_c0 = 2;
        *var_b0[8] = 0;
        *var_c0[8] = &var_38;
        var_b0 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_c8);
        *arg1 = 7;
        core::ptr::drop_in_place$LT$semver..Version$GT$::h899d2d10dc06f6c7(&var_68);
    }
    core::ptr::drop_in_place$LT$std..fs..File$GT$::hdb08fb26ec8f0cea(fd)
}
