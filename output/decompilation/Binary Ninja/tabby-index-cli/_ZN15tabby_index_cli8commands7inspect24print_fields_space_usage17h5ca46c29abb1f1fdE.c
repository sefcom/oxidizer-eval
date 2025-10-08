
  int32_t* tabby_index_cli::commands::inspect::print_fields_space_usage::h5ca46c29abb1f1fd(int64_t* arg1, int64_t* arg2)

{
    int64_t* var_88 = arg2[6];
    int64_t* var_58 = &var_88;
    uint64_t (* var_50)(int64_t* arg1, int64_t* arg2) = _$LT$tantivy_common..byte_count..ByteCount$u20$as$u20$core..fmt..Debug$GT$::fmt::hd330249b70bdaf09;
    void** const var_c0 = &data_984cc8;
    int64_t var_b8 = 2;
    int64_t var_a0 = 0;
    int64_t** var_b0 = &var_58;
    int64_t var_a8 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_c0);
    tantivy::space_usage::PerFieldSpaceUsage::fields::h4d33281b8b3ce08c(&var_58, arg2);
    int32_t* i;
    void* rdx;
    i = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h06d3ab6fa90ee265(&var_58);
    
    if (i)
    {
        void* r12_1 = rdx;
        
        do
        {
            int64_t rax_1;
            int64_t rdx_1;
            rax_1 = tantivy::schema::schema::Schema::get_field_name::hd6be3989dcc97c97(arg1, *i);
            int64_t var_68 = rax_1;
            int64_t var_60_1 = rdx_1;
            int64_t var_90 = *(r12_1 + 0x18);
            var_88 = &var_68;
            int64_t (* var_80_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h22e78c90c7c13f5c;
            int64_t* var_78_1 = &var_90;
            uint64_t (* var_70_1)(int64_t* arg1, int64_t* arg2) = _$LT$tantivy_common..byte_count..ByteCount$u20$as$u20$core..fmt..Debug$GT$::fmt::hd330249b70bdaf09;
            var_c0 = &data_984e18;
            int64_t var_b8_1 = 3;
            int64_t var_a0_1 = 0;
            int64_t** var_b0_1 = &var_88;
            int64_t var_a8_1 = 2;
            std::io::stdio::_print::h5e446ff973c02de6(&var_c0);
            void* rdx_2;
            i = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h06d3ab6fa90ee265(&var_58);
            r12_1 = rdx_2;
        } while (i);
    }
    
    return i;
}
