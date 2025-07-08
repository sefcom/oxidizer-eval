
  fn uu_cp::Attributes::parse_single_string::hf0de3a52359f0529(arg1: *mut i64, arg2: *mut i8, arg3: u64) -> *mut i64

{
    let mut var_a8: ();
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h8673807247540a26(&var_a8, arg2, arg3);
    let var_a0: i64;
    let var_98: u64;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(var_a0, var_98, "allThe backup suffix is '~', unl…", 3) == 0
    {
        let mut var_b0: i32 = 0;
        let mut var_b8: i64 = 0;
        let mut rax_2: *mut c_void;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(var_a0, var_98, "modefile", 4) == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(var_a0, var_98, "ownershiptimestampscontextlinksx…", 9) != 0
            {
                rax_2 = &var_b8;
                goto 'label_5019dd;
            }
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(var_a0, var_98, "timestampscontextlinksxattrallTh…", 0xa) != 0
            {
                rax_2 = &*var_b8[4];
                goto 'label_5019dd;
            }
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(var_a0, var_98, "contextlinksxattrallThe backup s…", 7) != 0
            {
                rax_2 = &*var_b8[6];
                goto 'label_5019dd;
            }
            
            let rax_6: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(var_a0, var_98, "linkBOLDBlue\x1b[4mcyanSome of d…", 4);
            let mut rax_7: i8;
            
            if rax_6 == 0
            {
                rax_7 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(var_a0, var_98, "linksxattrallThe backup suffix i…", 5);
            }
            
            if rax_6 != 0 || rax_7 != 0
            {
                rax_2 = &var_b0;
                goto 'label_5019dd;
            }
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(var_a0, var_98, "xattrallThe backup suffix is '~'…", 5) != 0
            {
                rax_2 = &*var_b0[2];
                goto 'label_5019dd;
            }
            
            let mut var_38: i64 = 0;
            let var_30_1: i128 = var_a0;
            let var_20_1: i8 = 1;
            let mut var_90: *mut i64 = &var_38;
            let var_88_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            let mut var_68: *mut *mut [i8; 0x8c] = &data_5b5c40;
            let var_60_1: i64 = 1;
            let var_48_1: i64 = 0;
            let var_58_1: *mut *mut i64 = &var_90;
            let var_50_1: i64 = 1;
            let mut var_80: i128;
            core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_80, &var_68);
            let var_70: i64;
            arg1[3] = var_70;
            *arg1.byte_offset(8) = var_80;
            *arg1 = 9;
        }
        else
        {
            rax_2 = &*var_b8[2];
            'label_5019dd:
            *rax_2 = 0x101;
            arg1[2] = var_b0;
            arg1[1] = var_b8;
            __builtin_memcpy(arg1, 
                "\x0d\x00\x00\x00\x00\x00\x00\x00\x01\x01\x01\x01\x01\x01\x00\x00\x01\x01\x01\x00", 
                0x14);
        }
    }
    else
    {
        __builtin_memcpy(arg1, 
            "\x0d\x00\x00\x00\x00\x00\x00\x00\x01\x01\x01\x01\x01\x01\x00\x00\x01\x01\x01\x00", 
            0x14);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&var_a8);
    arg1
}
