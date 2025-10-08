
  int64_t rg::flags::doc::help::generate_short_flag::h47acb38f05920452(int128_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_80 = 0;
    int64_t var_78 = 1;
    int64_t var_70 = 0;
    int64_t var_48 = 0;
    int64_t var_40 = 1;
    int64_t var_38 = 0;
    int64_t rax;
    uint64_t rdx;
    rax = (*(arg3 + 0x48))(arg2);
    int128_t var_d0;
    int64_t* var_68;
    
    if (!rax)
        var_68 = -0x8000000000000000;
    else
    {
        rg::flags::doc::help::generate_short_flag::_$u7b$$u7b$closure$u7d$$u7d$::h653961bfeeb0d968(
            &var_d0, rax, rdx);
        int64_t var_c0;
        int64_t var_58_1 = var_c0;
        var_68 = var_d0;
    }
    
    char rax_2;
    char rdx_1;
    rax_2 = (*(arg3 + 0x28))(arg2);
    int64_t** var_a0;
    int64_t* var_90;
    
    if (rax_2 & 1)
    {
        var_a0 = rdx_1;
        var_90 = &var_a0;
        int64_t (* var_88_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
        var_d0 = &data_7e5ef8;
        *var_d0[8] = 1;
        int64_t var_b0_1 = 0;
        int64_t** var_c0_1 = &var_90;
        int64_t var_b8_1 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_80, &var_d0));
        var_d0 = &data_7ea2b0;
        *var_d0[8] = 1;
        int64_t var_c0_2 = 8;
        var_b8_1 = {0};
        core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_80, &var_d0));
    }
    
    int64_t* rax_6;
    int64_t rdx_2;
    rax_6 = (*(arg3 + 0x30))(arg2);
    var_90 = rax_6;
    int64_t var_88_2 = rdx_2;
    var_a0 = &var_90;
    int64_t (* var_98)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    var_d0 = &data_7e5ee8;
    *var_d0[8] = 1;
    int64_t var_b0_2 = 0;
    int64_t*** var_c0_3 = &var_a0;
    int64_t var_b8_2 = 1;
    char const (** const rsi_5)[0xf3] = &data_7ea300;
    core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_80, &var_d0));
    
    if (var_68 != -0x8000000000000000)
    {
        var_a0 = &var_68;
        var_90 = &var_a0;
        int64_t (* var_88_3)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd6c34d9aa7433ce;
        var_d0 = &data_7ea2c0;
        *var_d0[8] = 1;
        int64_t var_b0_3 = 0;
        int64_t** var_c0_4 = &var_90;
        int64_t var_b8_3 = 1;
        rsi_5 = &data_7ea318;
        core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_80, &var_d0));
    }
    
    int64_t* rax_9;
    int64_t rdx_3;
    rax_9 = (*(arg3 + 0x58))(arg2, rsi_5);
    var_90 = rax_9;
    int64_t var_88_4 = rdx_3;
    var_a0 = &var_90;
    int64_t (* var_98_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    var_d0 = &data_462330;
    *var_d0[8] = 1;
    int64_t var_b0_4 = 0;
    int64_t*** var_c0_5 = &var_a0;
    int64_t var_b8_4 = 1;
    core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_48, &var_d0));
    arg1[1] = var_70;
    *arg1 = var_80;
    *(arg1 + 0x18) = var_48;
    *(arg1 + 0x28) = var_38;
    return core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h21c1035d1def9f19(&var_68);
}
