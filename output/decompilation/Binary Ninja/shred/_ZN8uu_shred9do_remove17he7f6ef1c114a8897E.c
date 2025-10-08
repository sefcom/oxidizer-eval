
  char const (**)[0xc5] uu_shred::do_remove::he7f6ef1c114a8897(int64_t arg1, uint64_t arg2, int64_t arg3, int64_t arg4, int32_t arg5, char arg6)

{
    char rbp = arg5;
    int64_t* var_b0;
    void* const var_98;
    int64_t var_68;
    
    if (arg5)
    {
        int64_t rax_1;
        int64_t rdx;
        rax_1 = uucore::util_name::h074417a1e6395129();
        var_68 = rax_1;
        int64_t var_60_1 = rdx;
        var_b0 = &var_68;
        int64_t (* var_a8_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3641e459b5f3d84f;
        var_98 = &data_4f9f98;
        int64_t var_90_1 = 2;
        int64_t var_78_1 = 0;
        int64_t** var_88_1 = &var_b0;
        int64_t var_80_1 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
        var_68 = 0;
        int64_t var_60_2 = arg3;
        int64_t var_58_1 = arg4;
        char var_50_1 = 0;
        var_b0 = &var_68;
        int64_t (* var_a8_2)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_98 = &data_4fa2f0;
        int64_t var_90_2 = 2;
        int64_t var_78_2 = 0;
        int64_t** var_88_2 = &var_b0;
        int64_t var_80_2 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
    }
    
    int64_t var_48;
    
    if (arg6 != 1)
    {
        uu_shred::wipe_name::he9016127f4be3579(&var_48, arg1, arg2, rbp, arg6);
        
        if (!(0 + -(var_48)))
        {
            label_46577a:
            char const (** result)[0xc5] = std::fs::remove_file::h74e1b329d739e10b(&var_48);
            
            if (!(!result & rbp))
                return result;
            
            goto label_4657b9;
        }
    }
    else
    {
        std::path::Path::with_file_name::h407d2447819234ad(&var_48, arg1, arg2, arg3);
        
        if (!(0 + -(var_48)))
            goto label_46577a;
    }
    
    if (rbp)
    {
        label_4657b9:
        int64_t rax_3;
        int64_t rdx_3;
        rax_3 = uucore::util_name::h074417a1e6395129();
        var_68 = rax_3;
        int64_t var_60_3 = rdx_3;
        var_b0 = &var_68;
        int64_t (* var_a8_3)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3641e459b5f3d84f;
        var_98 = &data_4f9f98;
        int64_t var_90_3 = 2;
        int64_t var_78_3 = 0;
        int64_t** var_88_3 = &var_b0;
        int64_t var_80_3 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
        var_68 = 0;
        int64_t var_60_4 = arg3;
        int64_t var_58_2 = arg4;
        char var_50_2 = 0;
        var_b0 = &var_68;
        int64_t (* var_a8_4)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_98 = &data_4fa310;
        int64_t var_90_4 = 2;
        int64_t var_78_4 = 0;
        int64_t** var_88_4 = &var_b0;
        int64_t var_80_4 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
    }
    
    return nullptr;
}
