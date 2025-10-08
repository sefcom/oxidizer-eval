
  fn bat::vscreen::Attributes::parse_color::h678d5e16d2ba0f94(arg1: *mut i64, arg2: i16, arg3: u64) -> i64

{
    let mut var_9a: i16 = arg2;
    let mut rax: u32 = arg2;
    rax -= ((rax * 0xcd) >> 0xa & 0xfffffffe) * 5;
    let mut var_98: *mut i16;
    let mut var_78: *mut *mut c_void;
    
    if rax == 8
    {
        let r15_1: u64 = arg3;
        let mut rax_2: i8;
        rax_2 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3f5ad03f1c999b66(arg3);
        
        if (rax_2 & 1) != 0
        {
            let mut var_48: i128;
            let mut var_30: i16;
            
            if arg3 == 2
            {
                let rdx_4: u64 = bat::vscreen::join::h55e6457a6c5afd34(&var_30, 3, r15_1);
                var_98 = &var_9a;
                let var_90_2: fn(arg1: *mut i16, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
                let var_88_2: *mut i16 = &var_30;
                let var_80_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_78 = &data_aceda0;
                let var_70_2: i64 = 3;
                let var_58_2: i64 = 0;
                let var_68_2: *mut *mut i16 = &var_98;
                let var_60_2: i64 = 2;
                core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_48, 0, rdx_4, 
                    &var_78);
                'label_845235:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_30);
                let result: i64;
                arg1[2] = result;
                *arg1 = var_48;
                return result;
            }
            
            if arg3 != 5
            {
                var_30 = arg3;
                var_98 = &var_9a;
                let var_90_3: fn(arg1: *mut i16, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
                let var_88_3: *mut i16 = &var_30;
                let var_80_3: fn(arg1: *mut i16, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
                var_78 = &data_acedd0;
                let var_70_3: i64 = 3;
                let var_58_3: i64 = 0;
                let var_68_3: *mut *mut i16 = &var_98;
                let var_60_3: i64 = 2;
                return core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(arg1, 0, arg3, 
                    &var_78);
            }
            
            let rdx_1: u64 = bat::vscreen::join::h55e6457a6c5afd34(&var_30, 1, r15_1);
            var_98 = &var_9a;
            let var_90: fn(arg1: *mut i16, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
            let var_88_1: *mut i16 = &var_30;
            let var_80_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_78 = &data_aced70;
            let var_70: i64 = 3;
            let var_58: i64 = 0;
            let var_68: *mut *mut i16 = &var_98;
            let var_60: i64 = 2;
            core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_48, 0, rdx_1, 
                &var_78);
            goto 'label_845235;
        }
    }
    else if rax != 9
    {
        var_98 = &var_9a;
        let var_90_1: fn(arg1: *mut i16, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
        var_78 = &data_acee00;
        let var_70_1: i64 = 2;
        let var_58_1: i64 = 0;
        let var_68_1: *mut *mut i16 = &var_98;
        let var_60_1: i64 = 1;
        return core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(arg1, 0, arg3, 
            &var_78);
    }
    /* tailcall */
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(arg1, 1, 0)
}
