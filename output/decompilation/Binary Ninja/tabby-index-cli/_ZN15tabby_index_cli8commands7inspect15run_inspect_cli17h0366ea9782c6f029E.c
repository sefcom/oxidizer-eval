
  int64_t tabby_index_cli::commands::inspect::run_inspect_cli::h0366ea9782c6f029(int128_t* arg1, int64_t arg2)

{
    int64_t var_c8 = arg2;
    int64_t rdx;
    int64_t var_c0 = rdx;
    void** const var_1a8;
    tantivy::index::index::Index::open_in_dir::h5f3e90e10edff988(&var_1a8, arg2);
    void** const rax = var_1a8;
    int128_t var_1a0;
    int128_t var_208 = var_1a0;
    int128_t var_190;
    int128_t var_180;
    int64_t result;
    
    if (rax == -0x7fffffffffffffff)
    {
        arg1[3] = result;
        int128_t zmm0 = var_208;
        arg1[2] = var_180;
        arg1[1] = var_190;
        *arg1 = zmm0;
        return result;
    }
    
    int128_t var_148;
    int128_t var_40_1 = var_148;
    int128_t var_158;
    int128_t var_50_1 = var_158;
    int128_t var_168;
    int128_t var_60_1 = var_168;
    int128_t var_98_1 = var_208;
    int128_t var_88_1 = var_190;
    int128_t var_78_1 = var_180;
    int64_t result_1 = result;
    void** const var_a0 = rax;
    int64_t* var_1d0 = tantivy::index::index::Index::schema::he6a02a11604cdee7(&var_a0);
    tantivy::index::index::Index::reader::h7031a20a933df984(&var_1a8, &var_a0);
    void** const rdx_1 = var_1a8;
    int64_t rax_3 = var_1a0;
    int64_t rcx_2 = *var_1a0[8];
    
    if (rdx_1 != 0x12)
    {
        *(arg1 + 0x28) = var_180;
        *(arg1 + 0x18) = var_190;
        *arg1 = rdx_1;
        *(arg1 + 8) = rax_3;
        arg1[1] = rcx_2;
        core::ptr::drop_in_place$LT$tantivy..schema..schema..Schema$GT$::he9a2cad772194c13(
            &var_1d0);
    }
    else
    {
        var_208 = rax_3;
        *var_208[8] = rcx_2;
        void* var_138 = tantivy::reader::IndexReader::searcher::h4b3b284570bbf106(&var_208);
        core::ptr::drop_in_place$LT$tantivy..reader..IndexReader$GT$::hd5b87e325d8c0232(&var_208);
        void* rax_5 = var_138;
        int64_t rcx_3 = *(rax_5 + 0x18);
        int64_t* r14_1 = *(rax_5 + 0x20);
        var_1a8 = &data_984c38;
        var_1a0 = 1;
        *var_1a0[8] = 8;
        int128_t var_190_1 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        var_1a8 = &data_984c48;
        var_1a0 = 1;
        *var_1a0[8] = 8;
        int128_t var_190_2 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        var_1a8 = &data_984c58;
        var_1a0 = 1;
        *var_1a0[8] = 8;
        int128_t var_190_3 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        var_1a8 = &data_984c68;
        var_1a0 = 1;
        *var_1a0[8] = 8;
        int128_t var_190_4 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        var_1a8 = &data_984c78;
        var_1a0 = 1;
        *var_1a0[8] = 8;
        int128_t var_190_5 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        var_1a8 = &data_984c48;
        var_1a0 = 1;
        *var_1a0[8] = 8;
        int128_t var_190_6 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        var_208 = &var_c8;
        *var_208[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hbfe63e20f2d6a900;
        var_1a8 = &data_984c88;
        var_1a0 = 2;
        *var_190_6[8] = 0;
        *var_1a0[8] = &var_208;
        var_190_6 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        int64_t* var_1c8 = r14_1;
        var_208 = &var_1c8;
        *var_208[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        var_1a8 = &data_984ca8;
        var_1a0 = 2;
        *var_190_6[8] = 0;
        *var_1a0[8] = &var_208;
        var_190_6 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        tantivy::core::searcher::Searcher::space_usage::h963aad9fdc655044(&var_1a8, &var_138);
        void** const rax_6 = var_1a8;
        int64_t r12_1 = var_1a0;
        
        if (rax_6 != -0x8000000000000000)
        {
            void** const var_e8 = rax_6;
            int64_t var_e0_1 = r12_1;
            var_1c8 = *var_1a0[8];
            var_208 = &var_1c8;
            *var_208[8] = _$LT$tantivy_common..byte_count..ByteCount$u20$as$u20$core..fmt..Debug$GT$::fmt::hd330249b70bdaf09;
            var_1a8 = &data_984cc8;
            var_1a0 = 2;
            *var_190_6[8] = 0;
            *var_1a0[8] = &var_208;
            var_190_6 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
            var_1a8 = &data_984c38;
            var_1a0 = 1;
            *var_1a0[8] = 8;
            int128_t var_190_7 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
            core::iter::traits::iterator::Iterator::zip::h3215d1bcb8bba5d9(&var_1a8, rcx_3, 
                r14_1 * 0x190 + rcx_3, r12_1);
            int64_t var_170 = 0;
            int64_t var_100;
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdea7f97c7ab42b6e(&var_100, &var_1a8);
            void* i_1;
            
            for (void* i = i_1; i; i = i_1)
            {
                int64_t var_130 = var_100 + 2;
                int128_t var_b8 = *(i + 0x148);
                int32_t var_128;
                tantivy::index::segment_id::SegmentId::uuid_string::hd63ba28c4e352875(&var_128, 
                    &var_b8);
                var_1c8 = &var_130;
                uint64_t (* var_1c0_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                int32_t* var_1b8_1 = &var_128;
                int64_t (* var_1b0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_208 = &data_984ce8;
                *var_208[8] = 3;
                int128_t var_1e8;
                var_1e8 = 0;
                int128_t var_1f8;
                var_1f8 = &var_1c8;
                *var_1f8[8] = 2;
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7534eb9f84494b15(&var_128);
                var_208 = &data_984d18;
                *var_208[8] = 1;
                var_1f8 = 8;
                var_1f8 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                int64_t* var_f0;
                var_128 = var_f0[0x27];
                var_1c8 = &var_128;
                uint64_t (* var_1c0_2)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
                var_208 = &data_984d28;
                *var_208[8] = 2;
                var_1e8 = 0;
                var_1f8 = &var_1c8;
                *var_1f8[8] = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                var_208 = &data_984d48;
                *var_208[8] = 1;
                var_1f8 = 8;
                var_1f8 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                var_128 = var_f0[0x24] + var_f0[0x23];
                var_1c8 = &var_128;
                uint64_t (* var_1c0_3)(int64_t* arg1, int64_t* arg2) = _$LT$tantivy_common..byte_count..ByteCount$u20$as$u20$core..fmt..Debug$GT$::fmt::hd330249b70bdaf09;
                var_208 = &data_984cc8;
                *var_208[8] = 2;
                var_1e8 = 0;
                var_1f8 = &var_1c8;
                *var_1f8[8] = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                var_128 = var_f0[0x24];
                var_1c8 = &var_128;
                uint64_t (* var_1c0_4)(int64_t* arg1, int64_t* arg2) = _$LT$tantivy_common..byte_count..ByteCount$u20$as$u20$core..fmt..Debug$GT$::fmt::hd330249b70bdaf09;
                var_208 = &data_984d58;
                *var_208[8] = 2;
                var_1e8 = 0;
                var_1f8 = &var_1c8;
                *var_1f8[8] = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                var_208 = &data_984c38;
                *var_208[8] = 1;
                var_1f8 = 8;
                var_1f8 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                var_1c8 = &var_130;
                uint64_t (* var_1c0_5)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                var_208 = &data_984d78;
                *var_208[8] = 2;
                var_1e8 = 0;
                var_1f8 = &var_1c8;
                *var_1f8[8] = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                var_208 = &data_984d98;
                *var_208[8] = 1;
                var_1f8 = 8;
                var_1f8 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                var_128 = var_f0[6];
                var_1c8 = &var_128;
                uint64_t (* var_1c0_6)(int64_t* arg1, int64_t* arg2) = _$LT$tantivy_common..byte_count..ByteCount$u20$as$u20$core..fmt..Debug$GT$::fmt::hd330249b70bdaf09;
                var_208 = &data_984cc8;
                *var_208[8] = 2;
                var_1e8 = 0;
                var_1f8 = &var_1c8;
                *var_1f8[8] = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                tabby_index_cli::commands::inspect::print_fields_space_usage::h5ca46c29abb1f1fd(
                    &var_1d0, var_f0);
                var_208 = &data_984c38;
                *var_208[8] = 1;
                var_1f8 = 8;
                var_1f8 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                var_1c8 = &var_130;
                uint64_t (* var_1c0_7)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                var_208 = &data_984da8;
                *var_208[8] = 2;
                var_1e8 = 0;
                var_1f8 = &var_1c8;
                *var_1f8[8] = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                var_208 = &data_984d98;
                *var_208[8] = 1;
                var_1f8 = 8;
                var_1f8 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                var_128 = var_f0[0x1b];
                var_1c8 = &var_128;
                uint64_t (* var_1c0_8)(int64_t* arg1, int64_t* arg2) = _$LT$tantivy_common..byte_count..ByteCount$u20$as$u20$core..fmt..Debug$GT$::fmt::hd330249b70bdaf09;
                var_208 = &data_984cc8;
                *var_208[8] = 2;
                var_1e8 = 0;
                var_1f8 = &var_1c8;
                *var_1f8[8] = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                tabby_index_cli::commands::inspect::print_fields_space_usage::h5ca46c29abb1f1fd(
                    &var_1d0, &var_f0[0x15]);
                var_208 = &data_984c38;
                *var_208[8] = 1;
                var_1f8 = 8;
                var_1f8 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                var_1c8 = &var_130;
                uint64_t (* var_1c0_9)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                var_208 = &data_984dc8;
                *var_208[8] = 2;
                var_1e8 = 0;
                var_1f8 = &var_1c8;
                *var_1f8[8] = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                var_208 = &data_984d98;
                *var_208[8] = 1;
                var_1f8 = 8;
                var_1f8 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                var_128 = var_f0[0xd];
                var_1c8 = &var_128;
                uint64_t (* var_1c0_10)(int64_t* arg1, int64_t* arg2) = _$LT$tantivy_common..byte_count..ByteCount$u20$as$u20$core..fmt..Debug$GT$::fmt::hd330249b70bdaf09;
                var_208 = &data_984cc8;
                *var_208[8] = 2;
                var_1e8 = 0;
                var_1f8 = &var_1c8;
                *var_1f8[8] = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                tabby_index_cli::commands::inspect::print_fields_space_usage::h5ca46c29abb1f1fd(
                    &var_1d0, &var_f0[7]);
                var_208 = &data_984c38;
                *var_208[8] = 1;
                var_1f8 = 8;
                var_1f8 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                var_1c8 = &var_130;
                uint64_t (* var_1c0_11)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                var_208 = &data_984de8;
                *var_208[8] = 2;
                var_1e8 = 0;
                var_1f8 = &var_1c8;
                *var_1f8[8] = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                var_208 = &data_984d98;
                *var_208[8] = 1;
                var_1f8 = 8;
                var_1f8 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                var_128 = var_f0[0x14];
                var_1c8 = &var_128;
                uint64_t (* var_1c0_12)(int64_t* arg1, int64_t* arg2) = _$LT$tantivy_common..byte_count..ByteCount$u20$as$u20$core..fmt..Debug$GT$::fmt::hd330249b70bdaf09;
                var_208 = &data_984cc8;
                *var_208[8] = 2;
                var_1e8 = 0;
                var_1f8 = &var_1c8;
                *var_1f8[8] = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                tabby_index_cli::commands::inspect::print_fields_space_usage::h5ca46c29abb1f1fd(
                    &var_1d0, &var_f0[0xe]);
                var_208 = &data_984c38;
                *var_208[8] = 1;
                var_1f8 = 8;
                var_1f8 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdea7f97c7ab42b6e(&var_100, &var_1a8);
            }
            
            var_1a8 = &data_984c38;
            var_1a0 = 1;
            *var_1a0[8] = 8;
            int128_t var_190_8 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
            var_1a8 = &data_984e08;
            var_1a0 = 1;
            *var_1a0[8] = 8;
            int128_t var_190_9 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
            *arg1 = 0x12;
            core::ptr::drop_in_place$LT$tantivy..space_usage..SearcherSpaceUsage$GT$::h939054cea33c3374(&var_e8);
            core::ptr::drop_in_place$LT$tantivy..core..searcher..Searcher$GT$::hfcc0968019ce3a8e(
                &var_138);
            core::ptr::drop_in_place$LT$tantivy..schema..schema..Schema$GT$::he9a2cad772194c13(
                &var_1d0);
        }
        else
        {
            _$LT$tantivy..error..TantivyError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::he271a6cf793f0e2c(&var_1a8);
            arg1[3] = *var_180[8];
            int128_t zmm0_3 = var_1a8;
            arg1[2] = var_190_6;
            arg1[1] = var_1a0;
            *arg1 = zmm0_3;
            core::ptr::drop_in_place$LT$tantivy..core..searcher..Searcher$GT$::hfcc0968019ce3a8e(
                &var_138);
            core::ptr::drop_in_place$LT$tantivy..schema..schema..Schema$GT$::he9a2cad772194c13(
                &var_1d0);
        }
    }
    
    return core::ptr::drop_in_place$LT$tantivy..index..index..Index$GT$::hc2911d178059c5dc(&var_a0);
}
