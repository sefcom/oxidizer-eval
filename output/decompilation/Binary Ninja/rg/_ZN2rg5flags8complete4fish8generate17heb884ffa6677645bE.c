
  int64_t rg::flags::complete::fish::generate::heb884ffa6677645b(int128_t* arg1)

{
    int64_t var_f0 = 0;
    int64_t var_e8 = 1;
    int64_t result = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, "# Usage: __rg_contains_opt LONG …", "-s  -r -f -a ' -r -f -a '(rg --t…");
    alloc::string::String::push::h0ede46164189e411(&var_f0, 0xa);
    
    for (int64_t i = 0; i != 0x680; i += 0x10)
    {
        int64_t rbx_1 = *(i + &data_7e9308);
        void* r13_1 = *(i + &data_7e9310);
        int64_t rax_1 = *(r13_1 + 0x28);
        char rax_2;
        uint64_t rdx_1;
        rax_2 = rax_1(rbx_1);
        int128_t var_158;
        uint32_t** var_148;
        int128_t var_138;
        uint32_t** var_128;
        int128_t var_d8;
        uint32_t** var_c8_1;
        uint32_t* var_98;
        int64_t (* var_90)(int32_t* arg1, int64_t* arg2);
        uint32_t var_80;
        int128_t zmm0_2;
        
        if (!(rax_2 & 1))
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_138, 1, 0);
            var_c8_1 = var_128;
            zmm0_2 = var_138;
            var_d8 = zmm0_2;
        }
        else
        {
            var_80 = rdx_1;
            var_98 = &var_80;
            var_90 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
            var_138 = &data_7e9988;
            *var_138[8] = 1;
            int64_t var_118_1 = 0;
            var_128 = &var_98;
            int64_t var_120_1 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_158, 0, rdx_1, 
                &var_138);
            zmm0_2 = var_158;
            var_d8 = zmm0_2;
            var_c8_1 = var_148;
        }
        
        char* rax_6;
        void* rdx_2;
        rax_6 = (*(r13_1 + 0x30))(rbx_1, zmm0_2);
        int64_t rax_7;
        int64_t rdx_3;
        rax_7 = (*(r13_1 + 0x58))(rbx_1);
        void var_48;
        alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_48, rax_7, rdx_3, 
            "' -r -f\'complete -c rg !SHORT! …", 1, "\'complete -c rg !SHORT! -l !LON…", 2);
        alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_138, 
            "complete -c rg !SHORT! -l !LONG!…", 0x2b, "!SHORT!!LONG!!DOC!complete -c rg…", 7, 
            *var_d8[8], var_c8_1);
        alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_158, *var_138[8], 
            var_128, "!LONG!!DOC!complete -c rg -l !NE…", 6, rax_6, rdx_2);
        void var_108;
        char* var_40;
        void* var_38;
        alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_108, *var_158[8], 
            var_148, "!DOC!complete -c rg -l !NEGATED!…", 5, var_40, var_38);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_158);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_138);
        
        switch ((*(r13_1 + 0x70))(rbx_1))
        {
            case 0:
            {
                int64_t rbp_1 = *(r13_1 + 0x68);
                
                if (!rbp_1(rbx_1, " -r -F' -r -f\'complete -c rg !S…", 
                    "' -r -f\'complete -c rg !SHORT! …", &jump_table_462cec))
                {
                    if (!(*(r13_1 + 0x20))(rbx_1))
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, " -r -f\'complete -c rg !SHORT! -…", 
                            "\'complete -c rg !SHORT! -l !LON…");
                }
                else
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, " -r -f -a ' -r -f -a '(rg --type…", 
                        " -r -f -a '(rg --type-list | str…");
                    int64_t rax_13;
                    int64_t rdx_8;
                    rax_13 = rbp_1(rbx_1);
                    alloc::str::join_generic_copy::hccb370bfa740ad62(&var_138, rax_13, rdx_8, 
                        " \n        !FLAG!)\n          CO…", 1);
                    var_148 = var_128;
                    var_158 = var_138;
                    int64_t rsi_6 = *var_158[8];
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, rsi_6, var_128 + rsi_6);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(
                        &var_158);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, "' -r -f\'complete -c rg !SHORT! …", 
                        " -r -f\'complete -c rg !SHORT! -…");
                }
                break;
            }
            case 1:
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, " -r -F' -r -f\'complete -c rg !S…", "' -r -f\'complete -c rg !SHORT! …");
                break;
            }
            case 2:
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, " -r -f -a '(__fish_complete_comm…", " -r -F' -r -f\'complete -c rg !S…");
                break;
            }
            case 3:
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, " -r -f -a '(rg --type-list | str…", " -r -f -a '(__fish_complete_comm…");
                break;
            }
            case 4:
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, " -r -f -a ' -r -f -a '(rg --type…", " -r -f -a '(rg --type-list | str…");
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, "# This is impossible to read, bu…", "--<PATTERN> <PATH>...\n        !…");
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_108, "' -r -f\'complete -c rg !SHORT! …", " -r -f\'complete -c rg !SHORT! -…");
                break;
            }
        }
        
        alloc::string::String::push::h0ede46164189e411(&var_108, 0xa);
        int64_t var_100;
        int64_t var_f8;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, var_100, var_f8 + var_100);
        char* rax_14;
        void* rdx_13;
        rax_14 = (*(r13_1 + 0x40))(rbx_1);
        
        if (rax_14)
        {
            char rax_15;
            char rdx_14;
            rax_15 = rax_1(rbx_1);
            
            if (!(rax_15 & 1))
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_138, 1, 0);
            else
            {
                var_158 = 0;
                char* rax_16;
                uint64_t rdx_15;
                rax_16 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(rdx_14, &var_158);
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_138, rax_16, rdx_15);
            }
            
            int128_t var_b8 = var_138;
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_138, 
                "complete -c rg -l !NEGATED! -n '…", 0x4d, "!NEGATED!\nusing namespace Syste…", 9, 
                rax_14, rdx_13);
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_158, *var_138[8], 
                var_128, "!SHORT!!LONG!!DOC!complete -c rg…", 7, *var_b8[8], var_128);
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_98, *var_158[8], 
                var_148, "!LONG!!DOC!complete -c rg -l !NE…", 6, rax_6, rdx_2);
            int64_t var_88;
            alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_80, var_90, var_88, 
                "!DOC!complete -c rg -l !NEGATED!…", 5, var_40, var_38);
            int64_t var_78;
            int64_t var_70;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_f0, var_78, var_70 + var_78);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_80);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_98);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_158);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_138);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_b8);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_108);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_48);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_d8);
    }
    
    arg1[1] = result;
    *arg1 = var_f0;
    return result;
}
