
  fn tabby_index_cli::commands::inspect::print_fields_space_usage::h5ca46c29abb1f1fd(arg1: *mut i64, arg2: *mut i64) -> *mut i32

{
    let mut var_88: *mut i64 = arg2[6];
    let mut var_58: *mut i64 = &var_88;
    let var_50: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$tantivy_common..byte_count..ByteCount$u20$as$u20$core..fmt..Debug$GT$::fmt::hd330249b70bdaf09;
    let mut var_c0: *mut *mut c_void = &data_984cc8;
    let var_b8: i64 = 2;
    let var_a0: i64 = 0;
    let var_b0: *mut *mut i64 = &var_58;
    let var_a8: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_c0);
    tantivy::space_usage::PerFieldSpaceUsage::fields::h4d33281b8b3ce08c(&var_58, arg2);
    let mut i: *mut i32;
    let mut rdx: *mut c_void;
    i = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h06d3ab6fa90ee265(&var_58);
    
    if i != 0
    {
        let mut r12_1: *mut c_void = rdx;
        
        do
        {
            let mut rax_1: i64;
            let mut rdx_1: i64;
            rax_1 = tantivy::schema::schema::Schema::get_field_name::hd6be3989dcc97c97(arg1, *i);
            let mut var_68: i64 = rax_1;
            let var_60_1: i64 = rdx_1;
            let mut var_90: i64 = *r12_1.byte_offset(0x18);
            var_88 = &var_68;
            let var_80_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h22e78c90c7c13f5c;
            let var_78_1: *mut i64 = &var_90;
            let var_70_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$tantivy_common..byte_count..ByteCount$u20$as$u20$core..fmt..Debug$GT$::fmt::hd330249b70bdaf09;
            var_c0 = &data_984e18;
            let var_b8_1: i64 = 3;
            let var_a0_1: i64 = 0;
            let var_b0_1: *mut *mut i64 = &var_88;
            let var_a8_1: i64 = 2;
            std::io::stdio::_print::h5e446ff973c02de6(&var_c0);
            let mut rdx_2: *mut c_void;
            i = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h06d3ab6fa90ee265(&var_58);
            r12_1 = rdx_2;
        } while i != 0;
    }
    
    i
}
