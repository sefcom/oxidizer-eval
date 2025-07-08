
  int64_t* uu_cp::Attributes::parse_single_string::hf0de3a52359f0529(int64_t* arg1, char* arg2, uint64_t arg3)

{
    void var_a8;
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h8673807247540a26(&var_a8, arg2, arg3);
    int64_t var_a0;
    uint64_t var_98;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(var_a0, var_98, "allThe backup suffix is '~', unl…", 3))
    {
        int32_t var_b0 = 0;
        int64_t var_b8 = 0;
        void* rax_2;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(var_a0, var_98, "modefile", 4))
        {
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(var_a0, var_98, "ownershiptimestampscontextlinksx…", 9))
            {
                rax_2 = &var_b8;
                goto label_5019dd;
            }
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(var_a0, var_98, "timestampscontextlinksxattrallTh…", 0xa))
            {
                rax_2 = &*var_b8[4];
                goto label_5019dd;
            }
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(var_a0, var_98, "contextlinksxattrallThe backup s…", 7))
            {
                rax_2 = &*var_b8[6];
                goto label_5019dd;
            }
            
            char rax_6 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(var_a0, var_98, "linkBOLDBlue\x1b[4mcyanSome of d…", 4);
            char rax_7;
            
            if (!rax_6)
                rax_7 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(var_a0, var_98, "linksxattrallThe backup suffix i…", 5);
            
            if (rax_6 || rax_7)
            {
                rax_2 = &var_b0;
                goto label_5019dd;
            }
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(var_a0, var_98, "xattrallThe backup suffix is '~'…", 5))
            {
                rax_2 = &*var_b0[2];
                goto label_5019dd;
            }
            
            int64_t var_38 = 0;
            int128_t var_30_1 = var_a0;
            char var_20_1 = 1;
            int64_t* var_90 = &var_38;
            int64_t (* var_88_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            char const (** const var_68)[0x8c] = &data_5b5c40;
            int64_t var_60_1 = 1;
            int64_t var_48_1 = 0;
            int64_t** var_58_1 = &var_90;
            int64_t var_50_1 = 1;
            int128_t var_80;
            core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_80, &var_68);
            int64_t var_70;
            arg1[3] = var_70;
            *(arg1 + 8) = var_80;
            *arg1 = 9;
        }
        else
        {
            rax_2 = &*var_b8[2];
            label_5019dd:
            *rax_2 = 0x101;
            arg1[2] = var_b0;
            arg1[1] = var_b8;
            __builtin_memcpy(arg1, 
                "\x0d\x00\x00\x00\x00\x00\x00\x00\x01\x01\x01\x01\x01\x01\x00\x00\x01\x01\x01\x00", 
                0x14);
        }
    }
    else
        __builtin_memcpy(arg1, 
            "\x0d\x00\x00\x00\x00\x00\x00\x00\x01\x01\x01\x01\x01\x01\x00\x00\x01\x01\x01\x00", 
            0x14);
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&var_a8);
    return arg1;
}
