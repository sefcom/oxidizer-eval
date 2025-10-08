
  fn uu_cp::Attributes::parse_single_string::h449cff6f35e43c9c(arg1: *mut i64, arg2: *mut i8, arg3: u64) -> *mut i64

{
    let mut var_a8: ();
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::hb778be1bb3f3f772(&var_a8, arg2, arg3);
    let var_a0: i64;
    let var_98: u64;
    let mut rax_10: i64;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(var_a0, var_98, "all\n\n(uutils coreutils) 0.0.30…", 3) == 0
    {
        let mut var_b0: i32 = 0;
        let mut var_b8: i64 = 0;
        let mut rax_2: *mut c_void;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(var_a0, var_98, "modefile", 4) == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(var_a0, var_98, "ownership/home/34r7hm4n/dev/oxid…", 9) != 0
            {
                rax_2 = &var_b8;
                goto 'label_49e6ad;
            }
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(var_a0, var_98, "timestampslinksxattrall\n\n(uuti…", 0xa) != 0
            {
                rax_2 = &*var_b8[4];
                goto 'label_49e6ad;
            }
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(var_a0, var_98, "contextTemplateErrorstate/home/3…", 7) != 0
            {
                rax_2 = &*var_b8[6];
                goto 'label_49e6ad;
            }
            
            let rax_6: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(var_a0, var_98, "link/", 4);
            let mut rax_7: i8;
            
            if rax_6 == 0
            {
                rax_7 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(var_a0, var_98, "linksxattrall\n\n(uutils coreuti…", 5);
            }
            
            if rax_6 != 0 || rax_7 != 0
            {
                rax_2 = &var_b0;
                goto 'label_49e6ad;
            }
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(var_a0, var_98, "xattrall\n\n(uutils coreutils) 0…", 5) != 0
            {
                rax_2 = &*var_b0[2];
                goto 'label_49e6ad;
            }
            
            let mut var_80: i64 = 0;
            let var_78_1: i64 = var_a0;
            let var_70_1: u64 = var_98;
            let var_68_1: i8 = 1;
            let mut var_90: *mut i64 = &var_80;
            let var_88_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            let mut var_48: *mut *mut [i8; 0xab] = &data_55e998;
            let var_40_1: i64 = 1;
            let var_28_1: i64 = 0;
            let var_38_1: *mut *mut i64 = &var_90;
            let var_30_1: i64 = 1;
            let mut var_60: i128;
            core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_60, &var_48);
            let var_50: i64;
            arg1[3] = var_50;
            *arg1.byte_offset(8) = var_60;
            rax_10 = -0x7ffffffffffffff8;
        }
        else
        {
            rax_2 = &*var_b8[2];
            'label_49e6ad:
            *rax_2 = 0x101;
            arg1[2] = var_b0;
            arg1[1] = var_b8;
            rax_10 = -0x7ffffffffffffff4;
        }
    }
    else
    {
        arg1[1] = 0x10101010101;
        arg1[2] = 0x10101;
        rax_10 = -0x7ffffffffffffff4;
    }
    
    *arg1 = rax_10;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c03d16396ad1b8d(&var_a8);
    arg1
}
