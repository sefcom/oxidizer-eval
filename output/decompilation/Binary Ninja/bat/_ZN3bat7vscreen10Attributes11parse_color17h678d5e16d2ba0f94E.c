
  int64_t bat::vscreen::Attributes::parse_color::h678d5e16d2ba0f94(int64_t* arg1, int16_t arg2, uint64_t arg3)

{
    int16_t var_9a = arg2;
    uint32_t rax = arg2;
    rax -= ((rax * 0xcd) >> 0xa & 0xfffffffe) * 5;
    int16_t* var_98;
    void** const var_78;
    
    if (rax == 8)
    {
        uint64_t r15_1 = arg3;
        char rax_2;
        rax_2 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3f5ad03f1c999b66(arg3);
        
        if (rax_2 & 1)
        {
            int128_t var_48;
            int16_t var_30;
            
            if (arg3 == 2)
            {
                uint64_t rdx_4 = bat::vscreen::join::h55e6457a6c5afd34(&var_30, 3, r15_1);
                var_98 = &var_9a;
                uint64_t (* var_90_2)(int16_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
                int16_t* var_88_2 = &var_30;
                int64_t (* var_80_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_78 = &data_aceda0;
                int64_t var_70_2 = 3;
                int64_t var_58_2 = 0;
                int16_t** var_68_2 = &var_98;
                int64_t var_60_2 = 2;
                core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_48, 0, rdx_4, 
                    &var_78);
                label_845235:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_30);
                int64_t result;
                arg1[2] = result;
                *arg1 = var_48;
                return result;
            }
            
            if (arg3 != 5)
            {
                var_30 = arg3;
                var_98 = &var_9a;
                uint64_t (* var_90_3)(int16_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
                int16_t* var_88_3 = &var_30;
                uint64_t (* var_80_3)(int16_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
                var_78 = &data_acedd0;
                int64_t var_70_3 = 3;
                int64_t var_58_3 = 0;
                int16_t** var_68_3 = &var_98;
                int64_t var_60_3 = 2;
                return core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(arg1, 0, arg3, 
                    &var_78);
            }
            
            uint64_t rdx_1 = bat::vscreen::join::h55e6457a6c5afd34(&var_30, 1, r15_1);
            var_98 = &var_9a;
            uint64_t (* var_90)(int16_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
            int16_t* var_88_1 = &var_30;
            int64_t (* var_80_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_78 = &data_aced70;
            int64_t var_70 = 3;
            int64_t var_58 = 0;
            int16_t** var_68 = &var_98;
            int64_t var_60 = 2;
            core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_48, 0, rdx_1, 
                &var_78);
            goto label_845235;
        }
    }
    else if (rax != 9)
    {
        var_98 = &var_9a;
        uint64_t (* var_90_1)(int16_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
        var_78 = &data_acee00;
        int64_t var_70_1 = 2;
        int64_t var_58_1 = 0;
        int16_t** var_68_1 = &var_98;
        int64_t var_60_1 = 1;
        return core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(arg1, 0, arg3, 
            &var_78);
    }
    /* tailcall */
    return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(arg1, 1, 0);
}
