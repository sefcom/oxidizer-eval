
  uint64_t uu_chmod::Chmoder::change_file::ha40cda8af2f327da(void* arg1, int32_t arg2, int32_t arg3, int64_t arg4, int64_t arg5)

{
    int32_t var_108 = arg2;
    int32_t var_104 = arg3;
    int32_t r12;
    char const (** const* var_100)[0x19];
    char const (** const var_e0)[0x19];
    int64_t* var_b0;
    void var_58;
    
    if (arg2 != arg3)
    {
        char const (* rax_1)[0x19] = std::fs::set_permissions::hb2684a192581866f(arg4, arg5, arg3);
        void var_40;
        
        if (!rax_1)
        {
            r12 = 0;
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h22bbb88f7e5010db(0);
            
            if (*(arg1 + 0x22) || *(arg1 + 0x20) == 1)
            {
                var_100 = 1;
                int64_t var_f8_4 = arg4;
                int64_t var_f0_3 = arg5;
                char var_e8_3 = 1;
                uucore::features::fs::display_permissions_unix::hf65510d5c6517b79(&var_40, arg2, 0);
                uucore::features::fs::display_permissions_unix::hf65510d5c6517b79(&var_58, var_104, 
                    0);
                var_b0 = &var_100;
                int64_t (* var_a8_5)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                int32_t* var_a0_5 = &var_108;
                uint64_t (* var_98_5)(int32_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::h84d633f3d5886597;
                void* var_90_5 = &var_40;
                int64_t (* var_88_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                int32_t* var_80_2 = &var_104;
                uint64_t (* var_78_2)(int32_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::h84d633f3d5886597;
                void* var_70_2 = &var_58;
                int64_t (* var_68_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_e0 = &data_4ebbb0;
                int64_t var_d8_5 = 6;
                void* const var_c0_3 = &data_41a1e0;
                int64_t var_b8_3 = 5;
                int64_t** var_d0_3 = &var_b0;
                int64_t var_c8_3 = 5;
                std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(&var_58);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(&var_40);
                r12 = 0;
            }
        }
        else
        {
            char const (* var_60)[0x19] = rax_1;
            
            if (!*(arg1 + 0x21))
            {
                char const (** rax_2)[0x19];
                int64_t rdx;
                rax_2 = uucore::util_name::h074417a1e6395129();
                var_e0 = rax_2;
                int64_t var_d8_2 = rdx;
                var_100 = &var_e0;
                int64_t (* var_f8_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9aa873f8513a6c9b;
                var_b0 = &data_4ebab0;
                int64_t var_a8_2 = 2;
                int64_t var_90_2 = 0;
                char const (** const** var_a0_2)[0x19] = &var_100;
                int64_t var_98_2 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
                var_e0 = &var_60;
                int64_t (* var_d8_3)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                var_b0 = &data_4ebb30;
                int64_t var_a8_3 = 2;
                int64_t var_90_3 = 0;
                char const (** const* var_a0_3)[0x19] = &var_e0;
                int64_t var_98_3 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
            }
            
            if (*(arg1 + 0x22))
            {
                var_100 = 1;
                int64_t var_f8_3 = arg4;
                int64_t var_f0_2 = arg5;
                char var_e8_2 = 1;
                uucore::features::fs::display_permissions_unix::hf65510d5c6517b79(&var_40, var_108, 
                    0);
                uucore::features::fs::display_permissions_unix::hf65510d5c6517b79(&var_58, var_104, 
                    0);
                var_b0 = &var_100;
                int64_t (* var_a8_4)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                int32_t* var_a0_4 = &var_108;
                uint64_t (* var_98_4)(int32_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::h84d633f3d5886597;
                void* var_90_4 = &var_40;
                int64_t (* var_88_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                int32_t* var_80_1 = &var_104;
                uint64_t (* var_78_1)(int32_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::h84d633f3d5886597;
                void* var_70_1 = &var_58;
                int64_t (* var_68_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_e0 = &data_4ebb50;
                int64_t var_d8_4 = 6;
                void* const var_c0_2 = &data_41a1e0;
                int64_t var_b8_2 = 5;
                int64_t** var_d0_2 = &var_b0;
                int64_t var_c8_2 = 5;
                std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(&var_58);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(&var_40);
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::he4a0a2b91febee14(var_60);
            r12 = 1;
        }
    }
    else
    {
        r12 = 0;
        
        if (*(arg1 + 0x22) && !*(arg1 + 0x20))
        {
            var_100 = 1;
            int64_t var_f8_1 = arg4;
            int64_t var_f0_1 = arg5;
            char var_e8_1 = 1;
            r12 = 0;
            uucore::features::fs::display_permissions_unix::hf65510d5c6517b79(&var_58, arg2, 0);
            var_b0 = &var_100;
            int64_t (* var_a8_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            int32_t* var_a0_1 = &var_108;
            uint64_t (* var_98_1)(int32_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::h84d633f3d5886597;
            void* var_90_1 = &var_58;
            int64_t (* var_88_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_e0 = &data_4ebc10;
            int64_t var_d8_1 = 4;
            void* const var_c0_1 = &data_41a2f0;
            int64_t var_b8_1 = 3;
            int64_t** var_d0_1 = &var_b0;
            int64_t var_c8_1 = 3;
            std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(&var_58);
        }
    }
    return r12;
}
