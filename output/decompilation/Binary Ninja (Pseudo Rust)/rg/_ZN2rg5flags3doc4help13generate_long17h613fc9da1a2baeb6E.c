
  fn rg::flags::doc::help::generate_long::h613fc9da1a2baeb6(arg1: *mut i128) -> i64

{
    let mut var_108: i64 = 0;
    let var_f8: i64 = 0;
    let mut i: i64 = 8;
    let mut var_f0: *mut *mut [i8; 0xb4];
    let mut var_e8: *mut i8;
    let mut var_e0: *mut c_void;
    let mut var_88: *mut *mut c_void;
    
    while i != 0x688
    {
        let rbp_1: i64 = *(i + &data_7e9300);
        let rbx_1: *mut c_void = *(i + &data_7e9308);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h6f6c449b58a3f2da(
            &var_f0, &var_108, (*rbx_1.byte_offset(0x50))(rbp_1));
        var_88 = nullptr;
        let var_80_1: i64 = 1;
        let var_78_1: i64 = 0;
        let rax_2: *mut c_void = alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_insert::hf539dff045b4cdb4(&var_f0, &var_88);
        
        if *rax_2.byte_offset(0x10) != 0
        {
            var_f0 = &data_7ea408;
            var_e8 = 1;
            var_e0 = 8;
            let mut var_d8: i64;
            var_d8 = {0};
            core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(rax_2, &var_f0));
        }
        
        i += 0x10;
        rg::flags::doc::help::generate_long_flag::h24845516d3a04078(rbp_1, rbx_1, rax_2);
    }
    
    rg::flags::doc::version::generate_digits::hfdf8238140a9a514(&var_f0);
    let mut var_128: i128;
    alloc::str::_$LT$impl$u20$str$GT$::replace::hb0cf9499067250c3(&var_128, 
        "ripgrep !!VERSION!!\nAndrew Gall…", 0x5ea, "!!VERSION!!inputsearchfilteroutp…", 0xb, 
        var_e8, var_e0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_f0);
    let rax_5: i64 = var_108;
    let mut rsi_6: i64 = rax_5;
    let mut rdx_3: *mut *mut [i8; 0xb4];
    rdx_3 = rax_5 != 0;
    
    if rax_5 != 0
    {
        rsi_6 = var_f8;
    }
    
    var_f0 = rdx_3;
    let var_e8_1: i64 = 0;
    let var_e0_1: i64 = rax_5;
    let var_100: i64;
    let var_d8_1: i64 = var_100;
    let var_d0: *mut *mut [i8; 0xb4] = rdx_3;
    let var_c8: i64 = 0;
    let var_c0: i64 = rax_5;
    let var_b8: i64 = var_100;
    let var_b0: i64 = rsi_6;
    let mut var_118: *mut *mut i64;
    
    loop
    {
        let mut rax_6: *mut i8;
        let mut rdx_4: *mut c_void;
        rax_6 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h22bca23bd226868c(&var_f0);
        
        if rax_6 == 0
        {
            break;
        }
        
        let rax_8: u64 = *rax_6 << 3;
        let rax_9: i64 = *(rax_8 + &data_488778);
        let mut var_a8: i64 = *(rax_8 + &data_7ebb60);
        let var_a0_1: i64 = rax_9;
        let mut var_58: *mut i64 = &var_a8;
        let var_50_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
        var_88 = &data_7ea260;
        let var_80_2: i64 = 2;
        let var_68_1: i64 = 0;
        let var_78_2: *mut *mut i64 = &var_58;
        let var_70_1: i64 = 1;
        let mut var_48: i128;
        core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_48, 0, &data_488778, 
            &var_88);
        var_a8 = var_48;
        let var_38: i64;
        let var_98_1: i64 = var_38;
        alloc::str::_$LT$impl$u20$str$GT$::replace::h270ebbb9c1c02ce1(&var_88, *var_128[8], 
            var_118, &var_a8, *rdx_4.byte_offset(8), *rdx_4.byte_offset(0x10));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_128);
        var_118 = var_78_2;
        var_128 = var_88;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_a8);
    }
    
    arg1[1] = var_118;
    *arg1 = var_128;
    core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$rg..flags..Category$C$alloc..string..String$GT$$GT$::heaa21e3654670fef(&var_108)
}
