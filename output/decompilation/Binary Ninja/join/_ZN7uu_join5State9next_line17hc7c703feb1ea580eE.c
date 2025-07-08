
  uint64_t uu_join::State::next_line::hc7c703feb1ea580e(int64_t* arg1, void* arg2, char* arg3)

{
    int64_t* result_5;
    uu_join::State::read_line::h5e7f0b54a00fd724(&result_5, arg2, &arg3[2]);
    int64_t* result_4 = result_5;
    uint64_t result_1;
    uint64_t result = result_1;
    
    if (result_4 == -0x7fffffffffffffff)
    {
        arg1[1] = -0x8000000000000000;
        arg1[2] = result;
        *arg1 = -0x7fffffffffffffff;
    }
    else if (result_4 != -0x8000000000000000)
    {
        int64_t* result_2 = result_4;
        uint64_t result_3 = result;
        int128_t var_138;
        int128_t var_108_1 = var_138;
        int128_t var_148;
        int128_t var_118_1 = var_148;
        char rax = arg3[1];
        
        if (rax != 1)
        {
            int64_t rax_1;
            uint64_t rdx_1;
            rax_1 = uu_join::State::get_current_key::h6b22667ac5a703a7(arg2);
            int64_t rax_2;
            uint64_t rdx_2;
            rax_2 = uu_join::Line::get_field::h7dd14bed39768627(&result_2, *(arg2 + 0x40));
            result = uu_join::Input$LT$Sep$GT$::compare::h29bf124cec785704(*arg3, rax_1, rdx_1, 
                rax_2, rdx_2);
            int128_t zmm0_2;
            
            if (result == 1)
            {
                if (rax == 2)
                {
                    label_474003:
                    zmm0_2 = *(arg2 + 0x18);
                    int64_t var_a0 = 0;
                    int128_t var_98_1 = zmm0_2;
                    char var_88_1 = 0;
                    void var_48;
                    alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&var_48, var_108_1, 
                        *var_108_1[8]);
                    result_5 = &var_a0;
                    int64_t (* var_150)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_148 = arg2 + 0x50;
                    *var_148[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    var_138 = &var_48;
                    *var_138[8] = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hd10f93617439d897;
                    void* const var_d0 = &data_532728;
                    int64_t var_c8_1 = 3;
                    int64_t var_b0_1 = 0;
                    int64_t** var_c0_1 = &result_5;
                    int64_t var_b8_1 = 3;
                    int128_t var_80;
                    core::option::Option$LT$T$GT$::map_or_else::h8935355a4f11714a(&var_80, &var_d0);
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h047006ab4df47656(&var_48);
                    int128_t var_f8 = var_80;
                    
                    if (rax == 2)
                    {
                        int64_t var_70;
                        arg1[3] = var_70;
                        *(arg1 + 8) = var_f8;
                        *arg1 = -0x7fffffffffffffff;
                        return core::ptr::drop_in_place$LT$uu_join..Line$GT$::h9f6fb57b6249ddac(
                            &result_2);
                    }
                    
                    int64_t rax_6;
                    int64_t rdx_5;
                    rax_6 = uucore::execution_phrase::h7a36a698673d06ab();
                    var_a0 = rax_6;
                    var_98_1 = rdx_5;
                    var_d0 = &var_a0;
                    int64_t (* var_c8_2)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a9acb5b6b087e94;
                    int128_t* var_c0_2 = &var_f8;
                    int64_t (* var_b8_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    result_5 = &data_532758;
                    int64_t var_150_1 = 3;
                    var_138 = 0;
                    var_148 = &var_d0;
                    *var_148[8] = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&result_5);
                    *(arg2 + 0x5a) = 1;
                    result =
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf159c9483d4ed405(
                        &var_f8);
                }
                else if (*(arg2 + 0x5b) && !*(arg2 + 0x5a))
                    goto label_474003;
            }
            
            zmm0_2 = result_2;
            *(arg1 + 0x20) = var_108_1;
            *(arg1 + 0x10) = var_118_1;
            *arg1 = zmm0_2;
        }
        else
        {
            result = result_2;
            *(arg1 + 0x20) = var_108_1;
            *(arg1 + 0x10) = var_118_1;
            *arg1 = result;
            arg1[1] = result_3;
        }
    }
    else
        *arg1 = -0x8000000000000000;
    
    return result;
}
