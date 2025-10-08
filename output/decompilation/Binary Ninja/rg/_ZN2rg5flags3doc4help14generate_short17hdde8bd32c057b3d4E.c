
  int64_t rg::flags::doc::help::generate_short::hdde8bd32c057b3d4(int128_t* arg1)

{
    int64_t var_e0 = 0;
    int64_t var_d0 = 0;
    int64_t i = 8;
    int64_t r14 = 0;
    int64_t var_128;
    char* var_120_1;
    int128_t var_118_1;
    int128_t var_88;
    
    do
    {
        int64_t rbp_1 = *(i + &data_7e9300);
        int64_t r15_1 = *(i + &data_7e9308);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h20353abf5702197d(
            &var_88, &var_e0, (*(r15_1 + 0x50))(rbp_1));
        var_128 = 0;
        var_120_1 = 8;
        var_118_1 = {0};
        int64_t var_108_1 = 8;
        int64_t var_100_1 = 0;
        int64_t* rax_2 = alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_insert::h0d5a94e64c93cfa2(&var_88, &var_128);
        rg::flags::doc::help::generate_short_flag::h47acb38f05920452(&var_128, rbp_1, r15_1);
        var_88 = var_128;
        int64_t r15_2 = var_118_1;
        int128_t var_48 = var_118_1;
        int64_t var_38_1 = var_100_1;
        r14 = core::cmp::Ord::max::hb0b679126d9186c3(r14, r15_2);
        int64_t var_78_1 = r15_2;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(rax_2, &var_88);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(&rax_2[3], &var_48);
        i += 0x10;
    } while (i != 0x688);
    
    rg::flags::doc::version::generate_digits::hfdf8238140a9a514(&var_128);
    int128_t var_148;
    alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_148, 
        "ripgrep !!VERSION!!\nAndrew Gall…", 0x2f4, "!!VERSION!!inputsearchfilteroutp…", 0xb, 
        var_120_1, var_118_1);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_128);
    int64_t rax_6 = var_e0;
    int64_t rsi_7 = rax_6;
    int64_t rdx_5;
    rdx_5 = rax_6;
    
    if (rax_6)
        rsi_7 = var_d0;
    
    var_128 = rdx_5;
    int64_t var_120_2 = 0;
    var_118_1 = rax_6;
    int64_t var_d8;
    *var_118_1[8] = var_d8;
    int64_t var_108_2 = rdx_5;
    int64_t var_100_2 = 0;
    int64_t var_f8 = rax_6;
    int64_t var_f0 = var_d8;
    int64_t var_e8 = rsi_7;
    int64_t** var_138;
    
    while (true)
    {
        char* rax_7;
        void* rdx_6;
        rax_7 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h674bcfae187260c9(&var_128);
        
        if (!rax_7)
            break;
        
        uint64_t rax_9 = *rax_7 << 3;
        int64_t rax_10 = *(rax_9 + &data_488778);
        int64_t var_c8 = *(rax_9 + &data_7ebb60);
        int64_t var_c0_1 = rax_10;
        int64_t* var_58 = &var_c8;
        int64_t (* var_50_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
        var_88 = &data_7ea260;
        *var_88[8] = 2;
        int64_t var_68_1 = 0;
        int64_t** var_78_2 = &var_58;
        int64_t var_70_1 = 1;
        int128_t var_a0;
        core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_a0, 0, &data_488778, 
            &var_88);
        var_c8 = var_a0;
        void* var_90;
        void* var_b8_1 = var_90;
        rg::flags::doc::help::format_short_columns::hb1e7c29dbb65ba0c(&var_a0, *(rdx_6 + 8), 
            *(rdx_6 + 0x10), *(rdx_6 + 0x20), *(rdx_6 + 0x28), r14);
        alloc::str::_$LT$impl$u20$str$GT$::replace::h270ebbb9c1c02ce1(&var_88, *var_148[8], 
            var_138, &var_c8, *var_a0[8], var_90);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_148);
        var_138 = var_78_2;
        var_148 = var_88;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_a0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_c8);
    }
    
    arg1[1] = var_138;
    *arg1 = var_148;
    return core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$rg..flags..Category$C$$LP$alloc..vec..Vec$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$RP$$GT$$GT$::h6697156e45d9b6c0(&var_e0);
}
