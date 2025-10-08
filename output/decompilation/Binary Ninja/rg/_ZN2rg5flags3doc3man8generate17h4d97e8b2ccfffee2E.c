
  int64_t rg::flags::doc::man::generate::h4d97e8b2ccfffee2(int128_t* arg1)

{
    int64_t var_108 = 0;
    int64_t var_f8 = 0;
    int64_t i = 8;
    char const (** const var_f0)[0x14];
    char* var_e8;
    void* var_e0;
    void** const var_88;
    
    while (i != 0x688)
    {
        int64_t rbp_1 = *(i + &data_7e9300);
        int64_t rbx_1 = *(i + &data_7e9308);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h6f6c449b58a3f2da(
            &var_f0, &var_108, (*(rbx_1 + 0x50))(rbp_1));
        var_88 = nullptr;
        int64_t var_80_1 = 1;
        int64_t var_78_1 = 0;
        void* rax_2 = alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_insert::hf539dff045b4cdb4(&var_f0, &var_88);
        
        if (*(rax_2 + 0x10))
        {
            var_f0 = &data_7ea748;
            var_e8 = 1;
            var_e0 = 8;
            int64_t var_d8;
            var_d8 = {0};
            core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(rax_2, &var_f0));
        }
        
        i += 0x10;
        rg::flags::doc::man::generate_flag::h43cceb5419c578e6(rbp_1, rbx_1, rax_2);
    }
    
    rg::flags::doc::version::generate_digits::hfdf8238140a9a514(&var_f0);
    int128_t var_128;
    alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_128, 
        ".TH RG 1 2024-09-08 "!!VERSION!!…", 0x3625, "!!VERSION!!inputsearchfilteroutp…", 0xb, 
        var_e8, var_e0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_f0);
    int64_t rax_5 = var_108;
    int64_t rsi_6 = rax_5;
    char const (** rdx_3)[0x14];
    rdx_3 = rax_5;
    
    if (rax_5)
        rsi_6 = var_f8;
    
    var_f0 = rdx_3;
    int64_t var_e8_1 = 0;
    int64_t var_e0_1 = rax_5;
    int64_t var_100;
    int64_t var_d8_1 = var_100;
    char const (** var_d0)[0x14] = rdx_3;
    int64_t var_c8 = 0;
    int64_t var_c0 = rax_5;
    int64_t var_b8 = var_100;
    int64_t var_b0 = rsi_6;
    int64_t** var_118;
    
    while (true)
    {
        char* rax_6;
        void* rdx_4;
        rax_6 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h22bca23bd226868c(&var_f0);
        
        if (!rax_6)
            break;
        
        uint64_t rax_8 = *rax_6 << 3;
        int64_t rax_9 = *(rax_8 + &data_488778);
        int64_t var_a8 = *(rax_8 + &data_7ebb60);
        int64_t var_a0_1 = rax_9;
        int64_t* var_58 = &var_a8;
        int64_t (* var_50_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
        var_88 = &data_7ea260;
        int64_t var_80_2 = 2;
        int64_t var_68_1 = 0;
        int64_t** var_78_2 = &var_58;
        int64_t var_70_1 = 1;
        int128_t var_48;
        core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_48, 0, &data_488778, 
            &var_88);
        var_a8 = var_48;
        int64_t var_38;
        int64_t var_98_1 = var_38;
        alloc::str::_$LT$impl$u20$str$GT$::replace::h270ebbb9c1c02ce1(&var_88, *var_128[8], 
            var_118, &var_a8, *(rdx_4 + 8), *(rdx_4 + 0x10));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_128);
        var_118 = var_78_2;
        var_128 = var_88;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_a8);
    }
    
    arg1[1] = var_118;
    *arg1 = var_128;
    return core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$rg..flags..Category$C$alloc..string..String$GT$$GT$::heaa21e3654670fef(&var_108);
}
