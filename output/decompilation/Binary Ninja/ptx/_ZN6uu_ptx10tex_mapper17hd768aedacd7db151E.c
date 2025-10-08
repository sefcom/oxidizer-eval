
  int128_t* uu_ptx::tex_mapper::hd768aedacd7db151(int64_t* arg1, int32_t arg2)

{
    int32_t var_4c = arg2;
    int32_t* var_48;
    char const (** const var_38)[0x9f];
    
    if (arg2 - 0x23 < 4)
    {
        label_52cd8f:
        var_48 = &var_4c;
        int64_t (* var_40_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
        var_38 = &data_651a60;
        int64_t var_30_1 = 1;
        label_52cdb5:
        int64_t var_18 = 0;
        int32_t** var_28 = &var_48;
        int64_t var_20 = 1;
        return core::option::Option$LT$T$GT$::map_or_else::h4a28e95acdffaeae(arg1, &var_38);
    }
    
    uint64_t rax_1 = arg2 - 0x5c;
    
    if (rax_1 > 0x21)
    {
        label_52cdf7:
        var_48 = 0;
        char* rax_6;
        uint64_t rdx_1;
        rax_6 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(arg2, &var_48);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he9e3a9b23988b07f(&var_38, rax_6, rdx_1);
        int64_t result;
        arg1[2] = result;
        *arg1 = var_38;
        return result;
    }
    
    switch (rax_1)
    {
        case 0:
        {
            /* tailcall */
            return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he9e3a9b23988b07f(arg1, "\backslash{}\$\$ {}{}"". "" ""Mi…", 0xc);
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
            goto label_52cdf7;
        }
        case 3:
        {
            goto label_52cd8f;
        }
        case 0x1f:
        case 0x21:
        {
            var_48 = &var_4c;
            int64_t (* var_40)(int32_t* arg1, int64_t* arg2) =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
            var_38 = &data_651a70;
            int64_t var_30 = 2;
            goto label_52cdb5;
        }
    }
}
