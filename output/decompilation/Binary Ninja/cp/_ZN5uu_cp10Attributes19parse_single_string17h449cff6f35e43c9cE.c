
  int64_t* uu_cp::Attributes::parse_single_string::h449cff6f35e43c9c(int64_t* arg1, char* arg2, uint64_t arg3)

{
    void var_a8;
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::hb778be1bb3f3f772(&var_a8, arg2, arg3);
    int64_t var_a0;
    uint64_t var_98;
    int64_t rax_10;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(var_a0, var_98, "all\n\n(uutils coreutils) 0.0.30…", 3))
    {
        int32_t var_b0 = 0;
        int64_t var_b8 = 0;
        void* rax_2;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(var_a0, var_98, "modefile", 4))
        {
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(var_a0, var_98, "ownership/home/34r7hm4n/dev/oxid…", 9))
            {
                rax_2 = &var_b8;
                goto label_49e6ad;
            }
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(var_a0, var_98, "timestampslinksxattrall\n\n(uuti…", 0xa))
            {
                rax_2 = &*var_b8[4];
                goto label_49e6ad;
            }
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(var_a0, var_98, "contextTemplateErrorstate/home/3…", 7))
            {
                rax_2 = &*var_b8[6];
                goto label_49e6ad;
            }
            
            char rax_6 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(var_a0, var_98, "link/", 4);
            char rax_7;
            
            if (!rax_6)
                rax_7 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(var_a0, var_98, "linksxattrall\n\n(uutils coreuti…", 5);
            
            if (rax_6 || rax_7)
            {
                rax_2 = &var_b0;
                goto label_49e6ad;
            }
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(var_a0, var_98, "xattrall\n\n(uutils coreutils) 0…", 5))
            {
                rax_2 = &*var_b0[2];
                goto label_49e6ad;
            }
            
            int64_t var_80 = 0;
            int64_t var_78_1 = var_a0;
            uint64_t var_70_1 = var_98;
            char var_68_1 = 1;
            int64_t* var_90 = &var_80;
            int64_t (* var_88_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            char const (** const var_48)[0xab] = &data_55e998;
            int64_t var_40_1 = 1;
            int64_t var_28_1 = 0;
            int64_t** var_38_1 = &var_90;
            int64_t var_30_1 = 1;
            int128_t var_60;
            core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_60, &var_48);
            int64_t var_50;
            arg1[3] = var_50;
            *(arg1 + 8) = var_60;
            rax_10 = -0x7ffffffffffffff8;
        }
        else
        {
            rax_2 = &*var_b8[2];
            label_49e6ad:
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
    return arg1;
}
