
  uint32_t firecracker::print_snapshot_data_format::hddac348824e0a41b(int64_t* arg1, int64_t arg2)

{
    int32_t var_c8;
    std::fs::File::open::h93e838a1af49f920(&var_c8, arg2);
    int128_t var_c0;
    
    if (var_c8 == 1)
    {
        int64_t rax = var_c0;
        *arg1 = 6;
        arg1[1] = rax;
        uint32_t result = rax >> 0x20;
        *(arg1 + 0xc) = result;
        return result;
    }
    
    int32_t fd_1;
    int32_t fd = fd_1;
    vmm::snapshot::get_format_version::h94cdb088bfe0675b(&var_c8, &fd);
    int64_t rax_2 = var_c8;
    int64_t var_a0;
    int64_t var_18 = var_a0;
    int128_t var_b0;
    
    if (rax_2 != 6)
    {
        arg1[5] = var_a0;
        *(arg1 + 0x18) = var_b0;
        *(arg1 + 8) = var_c0;
        *arg1 = rax_2;
    }
    else
    {
        int64_t var_48_1 = var_a0;
        int128_t var_58_1 = var_b0;
        int128_t var_68 = var_c0;
        int128_t* var_38 = &var_68;
        uint64_t (* var_30_1)(int64_t arg1, int64_t* arg2) = semver::display::_$LT$impl$u20$core..fmt..Display$u20$for$u20$semver..Version$GT$::fmt::ha9f34b03bf53131a;
        var_c8 = &data_7a3ef0;
        var_c0 = 2;
        *var_b0[8] = 0;
        *var_c0[8] = &var_38;
        var_b0 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_c8);
        *arg1 = 7;
        core::ptr::drop_in_place$LT$semver..Version$GT$::h899d2d10dc06f6c7(&var_68);
    }
    return core::ptr::drop_in_place$LT$std..fs..File$GT$::hdb08fb26ec8f0cea(fd);
}
