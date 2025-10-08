
  int64_t bat::assets::build_assets::acknowledgements::append_to_acknowledgements::he3cabe6578d3b81f(uint64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_78 = arg2;
    int64_t var_70 = arg3;
    int64_t var_68 = arg4;
    int64_t r8;
    int64_t var_60 = r8;
    int64_t* var_28 = &var_78;
    int64_t (* var_20)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5cd1e3edb3ca57a0;
    int64_t* var_18 = &var_68;
    int64_t (* var_10)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5cd1e3edb3ca57a0;
    void** const var_58 = &data_acdfb8;
    int64_t var_50 = 2;
    int64_t var_38 = 0;
    int64_t** var_48 = &var_28;
    int64_t var_40 = 2;
    _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hc61af94ec255152a(arg1, &var_58);
    void** rax = *(arg1 + 8);
    void* rcx_1 = *(arg1 + 0x10) + rax;
    var_58 = rax;
    void* var_50_1 = rcx_1;
    char rax_1;
    int32_t rdx;
    rax_1 = core::str::validations::next_code_point_reverse::h8f1d1c5074629447(&var_58, arg1);
    
    if (!(rax_1 & 1))
    {
        core::option::expect_failed::h3f620cfb8545dc61("acknowledgements is not the empt…");
        /* no return */
    }
    
    if (rdx != 0xa)
        alloc::string::String::push::h0ede46164189e411(arg1, 0xa);
    
    return _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(arg1, "\n\nacknowledgements is not the …", "acknowledgements is not the empt…");
}
