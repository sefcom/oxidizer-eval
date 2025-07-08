
  int128_t* uu_ptx::tex_mapper::h39f03aebac219a6c(int64_t* arg1, int32_t arg2)

{
    int32_t var_4c = arg2;
    int32_t* var_48;
    char const (** const var_38)[0x9b];
    
    if (arg2 - 0x23 < 4)
    {
        label_5b7d6f:
        var_48 = &var_4c;
        int64_t (* var_40_2)(int32_t* arg1, int64_t* arg2) =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
        var_38 = &data_6edf70;
        int64_t var_30_2 = 1;
        label_5b7d95:
        int64_t var_18_1 = 0;
        int32_t** var_28 = &var_48;
        int64_t var_20_1 = 1;
        return core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555(arg1, &var_38);
    }
    
    uint64_t rax_1 = arg2 - 0x5c;
    
    if (rax_1 > 0x21)
    {
        label_5b7dd7:
        var_48 = 0;
        int128_t* rbx_1 = arg1;
        int64_t rax_6;
        uint64_t rdx_2;
        rax_6 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(arg2, &var_48);
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(&var_38, 
            rax_6, rdx_2);
        int128_t* result;
        rbx_1[1] = result;
        *rbx_1 = var_38;
        return result;
    }
    
    switch (rax_1)
    {
        case 0:
        {
            /* tailcall */
            return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(
                arg1, "\backslash{}\$\$ {}{}"". "" ""Mi…", 0xc);
        }
        case 1:
        case 2:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xa:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x20:
        {
            goto label_5b7dd7;
        }
        case 3:
        {
            goto label_5b7d6f;
        }
        case 0x1f:
        case 0x21:
        {
            var_48 = &var_4c;
            int64_t (* var_40_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
            var_38 = &data_6edf80;
            int64_t var_30_1 = 2;
            goto label_5b7d95;
        }
    }
}
