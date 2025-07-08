
  int64_t uu_ln::numbered_backup_path::h43f0286cb18b9b8f(int128_t* arg1, char* arg2, int64_t arg3)

{
    int64_t var_138 = 1;
    int128_t var_128;
    int64_t var_e0_1;
    
    while (true)
    {
        int64_t* var_110 = &var_138;
        uint64_t (* var_108_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        char const (** const var_e8)[0x42] = &data_52d0f0;
        var_e0_1 = 2;
        int64_t var_c8_1 = 0;
        int64_t** var_d8_1 = &var_110;
        int64_t var_d0_1 = 1;
        int128_t var_100;
        core::option::Option$LT$T$GT$::map_or_else::hf2027c020971d755(&var_100, &var_e8);
        var_e8 = var_100;
        int64_t var_f0;
        int64_t var_d8_2 = var_f0;
        uu_ln::simple_backup_path::hd90ca54508e22200(&var_128, arg2, arg3, var_e0_1, var_f0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h903473fdb0d332f1(&var_e8);
        int64_t var_120;
        std::fs::metadata::hebad4fc3d3e825b8(&var_e8, var_120);
        char const (** const rdi_4)[0x42] = var_e8;
        
        if (rdi_4 == 2)
            break;
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h834abcfa2f925b76(rdi_4, var_e0_1);
        var_138 += 1;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&var_128);
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h834abcfa2f925b76(2, var_e0_1);
    int64_t result;
    arg1[1] = result;
    *arg1 = var_128;
    return result;
}
