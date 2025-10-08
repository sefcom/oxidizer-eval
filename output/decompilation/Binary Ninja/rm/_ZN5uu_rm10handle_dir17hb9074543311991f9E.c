
  void* uu_rm::handle_dir::hb9074543311991f9(int64_t arg1, int64_t arg2, void* arg3)

{
    char* rax;
    uint64_t rdx;
    rax = uu_rm::clean_trailing_slashes::hf055f5506fb084d9(arg1, arg2);
    int64_t* var_a0;
    void* const var_90;
    char* var_50;
    void** const rax_3;
    
    if (!uu_rm::path_is_current_or_parent_directory::h8073b220e3800501(rax, rdx))
    {
        std::path::Path::components::hd0346d362206f2e9(&var_90, rax, rdx);
        char var_80;
        char var_56;
        char rcx_1;
        
        if (var_56 || var_80 - 5 >= 2)
        {
            char* rax_5 = std::path::Path::parent::hef287f60afa56900(rax, rdx);
            rcx_1 = *(arg3 + 3);
            
            if (rcx_1)
            {
                if (rax_5 || !*(arg3 + 2))
                    /* tailcall */
                    return uu_rm::remove_dir_recursive::h796f941ab304c174(rax, rdx, arg3);
                
                if (*(arg3 + 4) && !*(arg3 + 2))
                    /* tailcall */
                    return uu_rm::remove_dir::h55820dedda8befb2(rax, rdx, arg3);
            }
            else if (*(arg3 + 4) && (rax_5 || !*(arg3 + 2)))
                /* tailcall */
                return uu_rm::remove_dir::h55820dedda8befb2(rax, rdx, arg3);
        }
        else
        {
            rcx_1 = *(arg3 + 3);
            
            if (rcx_1)
                /* tailcall */
                return uu_rm::remove_dir_recursive::h796f941ab304c174(rax, rdx, arg3);
            
            if (*(arg3 + 4))
                /* tailcall */
                return uu_rm::remove_dir::h55820dedda8befb2(rax, rdx, arg3);
        }
        
        if (!rcx_1)
        {
            char* rax_10;
            int64_t rdx_9;
            rax_10 = uucore::util_name::h074417a1e6395129();
            var_50 = rax_10;
            int64_t var_48_5 = rdx_9;
            var_a0 = &var_50;
            int64_t (* var_98_4)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
            var_90 = &data_4ea4a0;
            int64_t var_88_6 = 2;
            int64_t var_70_5 = 0;
            int64_t** var_80_7 = &var_a0;
            int64_t var_78_5 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
            var_50 = 1;
            char* var_48_6 = rax;
            uint64_t var_40_1 = rdx;
            char var_38_1 = 1;
            var_a0 = &var_50;
            int64_t (* var_98_5)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            rax_3 = &data_4ea5a0;
            goto label_45d047;
        }
        
        char* rax_7;
        int64_t rdx_5;
        rax_7 = uucore::util_name::h074417a1e6395129();
        var_50 = rax_7;
        int64_t var_48_2 = rdx_5;
        var_a0 = &var_50;
        int64_t (* var_98_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
        var_90 = &data_4ea4a0;
        int64_t var_88_2 = 2;
        int64_t var_70_2 = 0;
        int64_t** var_80_3 = &var_a0;
        int64_t var_78_2 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
        var_50 = "/";
        int64_t (* var_48_3)(int32_t* arg1, int64_t* arg2) =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
        var_90 = &data_4ea570;
        int64_t var_88_3 = 2;
        int64_t var_70_3 = 0;
        char** var_80_4 = &var_50;
        int64_t var_78_3 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
        char* rax_8;
        int64_t rdx_6;
        rax_8 = uucore::util_name::h074417a1e6395129();
        var_50 = rax_8;
        int64_t var_48_4 = rdx_6;
        var_a0 = &var_50;
        int64_t (* var_98_3)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
        var_90 = &data_4ea4a0;
        int64_t var_88_4 = 2;
        int64_t var_70_4 = 0;
        int64_t** var_80_5 = &var_a0;
        int64_t var_78_4 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
        var_90 = &data_4ea590;
        int64_t var_88_5 = 1;
        int64_t var_80_6 = 8;
        var_78_4 = {0};
        std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
    }
    else
    {
        char* rax_2;
        int64_t rdx_1;
        rax_2 = uucore::util_name::h074417a1e6395129();
        var_50 = rax_2;
        int64_t var_48 = rdx_1;
        var_a0 = &var_50;
        int64_t (* var_98)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
        var_90 = &data_4ea4a0;
        int64_t var_88 = 2;
        int64_t var_70 = 0;
        int64_t** var_80_1 = &var_a0;
        int64_t var_78 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
        var_50 = rax;
        uint64_t var_48_1 = rdx;
        var_a0 = &var_50;
        uint64_t (* var_98_1)(int64_t* arg1, int64_t arg2) =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
        rax_3 = &data_4ea550;
        label_45d047:
        var_90 = rax_3;
        int64_t var_88_1 = 2;
        int64_t var_70_1 = 0;
        int64_t** var_80_2 = &var_a0;
        int64_t var_78_1 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
    }
    void* result;
    result = 1;
    return result;
}
