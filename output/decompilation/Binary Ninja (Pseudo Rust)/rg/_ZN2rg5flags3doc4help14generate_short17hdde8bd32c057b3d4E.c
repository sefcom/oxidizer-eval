
  fn rg::flags::doc::help::generate_short::hdde8bd32c057b3d4(arg1: *mut i128) -> i64

{
    let mut var_e0: i64 = 0;
    let var_d0: i64 = 0;
    let mut i: i64 = 8;
    let mut r14: i64 = 0;
    let mut var_128: i64;
    let mut var_120_1: *mut i8;
    let mut var_118_1: i128;
    let mut var_88: i128;
    
    do
    {
        let rbp_1: i64 = *(i + &data_7e9300);
        let r15_1: i64 = *(i + &data_7e9308);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h20353abf5702197d(
            &var_88, &var_e0, (*(r15_1 + 0x50))(rbp_1));
        var_128 = 0;
        var_120_1 = 8;
        var_118_1 = {0};
        let var_108_1: i64 = 8;
        let var_100_1: i64 = 0;
        let rax_2: *mut i64 = alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_insert::h0d5a94e64c93cfa2(&var_88, &var_128);
        rg::flags::doc::help::generate_short_flag::h47acb38f05920452(&var_128, rbp_1, r15_1);
        var_88 = var_128;
        let r15_2: i64 = var_118_1;
        let mut var_48: i128 = var_118_1;
        let var_38_1: i64 = var_100_1;
        r14 = core::cmp::Ord::max::hb0b679126d9186c3(r14, r15_2);
        let var_78_1: i64 = r15_2;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(rax_2, &var_88);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(&rax_2[3], &var_48);
        i += 0x10;
    } while i != 0x688;
    
    rg::flags::doc::version::generate_digits::hfdf8238140a9a514(&var_128);
    let mut var_148: i128;
    alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_148, 
        "ripgrep !!VERSION!!\nAndrew Gall…", 0x2f4, "!!VERSION!!inputsearchfilteroutp…", 0xb, 
        var_120_1, var_118_1);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_128);
    let rax_6: i64 = var_e0;
    let mut rsi_7: i64 = rax_6;
    let mut rdx_5: i64;
    rdx_5 = rax_6 != 0;
    
    if rax_6 != 0
    {
        rsi_7 = var_d0;
    }
    
    var_128 = rdx_5;
    let var_120_2: i64 = 0;
    var_118_1 = rax_6;
    let var_d8: i64;
    *var_118_1[8] = var_d8;
    let var_108_2: i64 = rdx_5;
    let var_100_2: i64 = 0;
    let var_f8: i64 = rax_6;
    let var_f0: i64 = var_d8;
    let var_e8: i64 = rsi_7;
    let mut var_138: *mut *mut i64;
    
    loop
    {
        let mut rax_7: *mut i8;
        let mut rdx_6: *mut c_void;
        rax_7 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h674bcfae187260c9(&var_128);
        
        if rax_7 == 0
        {
            break;
        }
        
        let rax_9: u64 = *rax_7 << 3;
        let rax_10: i64 = *(rax_9 + &data_488778);
        let mut var_c8: i64 = *(rax_9 + &data_7ebb60);
        let var_c0_1: i64 = rax_10;
        let mut var_58: *mut i64 = &var_c8;
        let var_50_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
        var_88 = &data_7ea260;
        *var_88[8] = 2;
        let var_68_1: i64 = 0;
        let var_78_2: *mut *mut i64 = &var_58;
        let var_70_1: i64 = 1;
        let mut var_a0: i128;
        core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_a0, 0, &data_488778, 
            &var_88);
        var_c8 = var_a0;
        let var_90: *mut c_void;
        let var_b8_1: *mut c_void = var_90;
        rg::flags::doc::help::format_short_columns::hb1e7c29dbb65ba0c(&var_a0, 
            *rdx_6.byte_offset(8), *rdx_6.byte_offset(0x10), *rdx_6.byte_offset(0x20), 
            *rdx_6.byte_offset(0x28), r14);
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
    core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$rg..flags..Category$C$$LP$alloc..vec..Vec$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$RP$$GT$$GT$::h6697156e45d9b6c0(&var_e0)
}
