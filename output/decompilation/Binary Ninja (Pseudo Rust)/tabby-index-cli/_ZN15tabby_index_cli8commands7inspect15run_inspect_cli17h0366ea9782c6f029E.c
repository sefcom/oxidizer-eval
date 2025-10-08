
  fn tabby_index_cli::commands::inspect::run_inspect_cli::h0366ea9782c6f029(arg1: *mut i128, arg2: i64) -> i64

{
    let mut var_c8: i64 = arg2;
    let rdx: i64;
    let var_c0: i64 = rdx;
    let mut var_1a8: *mut *mut c_void;
    tantivy::index::index::Index::open_in_dir::h5f3e90e10edff988(&var_1a8, arg2);
    let rax: *mut *mut c_void = var_1a8;
    let mut var_1a0: i128;
    let mut var_208: i128 = var_1a0;
    let var_190: i128;
    let var_180: i128;
    let result: i64;
    
    if rax == -0x7fffffffffffffff
    {
        arg1[3] = result;
        let zmm0: i128 = var_208;
        arg1[2] = var_180;
        arg1[1] = var_190;
        *arg1 = zmm0;
        return result;
    }
    
    let var_148: i128;
    let var_40_1: i128 = var_148;
    let var_158: i128;
    let var_50_1: i128 = var_158;
    let var_168: i128;
    let var_60_1: i128 = var_168;
    let var_98_1: i128 = var_208;
    let var_88_1: i128 = var_190;
    let var_78_1: i128 = var_180;
    let result_1: i64 = result;
    let mut var_a0: *mut *mut c_void = rax;
    let mut var_1d0: *mut i64 = tantivy::index::index::Index::schema::he6a02a11604cdee7(&var_a0);
    tantivy::index::index::Index::reader::h7031a20a933df984(&var_1a8, &var_a0);
    let rdx_1: *mut *mut c_void = var_1a8;
    let rax_3: i64 = var_1a0;
    let rcx_2: i64 = *var_1a0[8];
    
    if rdx_1 != 0x12
    {
        *arg1.byte_offset(0x28) = var_180;
        *arg1.byte_offset(0x18) = var_190;
        *arg1 = rdx_1;
        *arg1.byte_offset(8) = rax_3;
        arg1[1] = rcx_2;
        core::ptr::drop_in_place$LT$tantivy..schema..schema..Schema$GT$::he9a2cad772194c13(
            &var_1d0);
    }
    else
    {
        var_208 = rax_3;
        *var_208[8] = rcx_2;
        let mut var_138: *mut c_void =
            tantivy::reader::IndexReader::searcher::h4b3b284570bbf106(&var_208);
        core::ptr::drop_in_place$LT$tantivy..reader..IndexReader$GT$::hd5b87e325d8c0232(&var_208);
        let rax_5: *mut c_void = var_138;
        let rcx_3: i64 = *rax_5.byte_offset(0x18);
        let r14_1: *mut i64 = *rax_5.byte_offset(0x20);
        var_1a8 = &data_984c38;
        var_1a0 = 1;
        *var_1a0[8] = 8;
        let var_190_1: i128 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        var_1a8 = &data_984c48;
        var_1a0 = 1;
        *var_1a0[8] = 8;
        let var_190_2: i128 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        var_1a8 = &data_984c58;
        var_1a0 = 1;
        *var_1a0[8] = 8;
        let var_190_3: i128 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        var_1a8 = &data_984c68;
        var_1a0 = 1;
        *var_1a0[8] = 8;
        let var_190_4: i128 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        var_1a8 = &data_984c78;
        var_1a0 = 1;
        *var_1a0[8] = 8;
        let var_190_5: i128 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        var_1a8 = &data_984c48;
        var_1a0 = 1;
        *var_1a0[8] = 8;
        let mut var_190_6: i128 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        var_208 = &var_c8;
        *var_208[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hbfe63e20f2d6a900;
        var_1a8 = &data_984c88;
        var_1a0 = 2;
        *var_190_6[8] = 0;
        *var_1a0[8] = &var_208;
        var_190_6 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        let mut var_1c8: *mut i64 = r14_1;
        var_208 = &var_1c8;
        *var_208[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        var_1a8 = &data_984ca8;
        var_1a0 = 2;
        *var_190_6[8] = 0;
        *var_1a0[8] = &var_208;
        var_190_6 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        tantivy::core::searcher::Searcher::space_usage::h963aad9fdc655044(&var_1a8, &var_138);
        let rax_6: *mut *mut c_void = var_1a8;
        let r12_1: i64 = var_1a0;
        
        if rax_6 != -0x8000000000000000
        {
            let mut var_e8: *mut *mut c_void = rax_6;
            let var_e0_1: i64 = r12_1;
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
            let var_190_7: i128 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
            core::iter::traits::iterator::Iterator::zip::h3215d1bcb8bba5d9(&var_1a8, rcx_3, 
                r14_1 * 0x190 + rcx_3, r12_1);
            let var_170: i64 = 0;
            let mut var_100: i64;
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdea7f97c7ab42b6e(&var_100, &var_1a8);
            let i_1: *mut c_void;
            
            for let mut i: *mut c_void = i_1; i != 0; i = i_1
            {
                let mut var_130: i64 = var_100 + 2;
                let mut var_b8: i128 = *i.byte_offset(0x148);
                let mut var_128: i32;
                tantivy::index::segment_id::SegmentId::uuid_string::hd63ba28c4e352875(&var_128, 
                    &var_b8);
                var_1c8 = &var_130;
                let var_1c0_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                let var_1b8_1: *mut i32 = &var_128;
                let var_1b0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_208 = &data_984ce8;
                *var_208[8] = 3;
                let mut var_1e8: i128;
                var_1e8 = 0;
                let mut var_1f8: i128;
                var_1f8 = &var_1c8;
                *var_1f8[8] = 2;
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7534eb9f84494b15(&var_128);
                var_208 = &data_984d18;
                *var_208[8] = 1;
                var_1f8 = 8;
                var_1f8 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                let var_f0: *mut i64;
                var_128 = var_f0[0x27];
                var_1c8 = &var_128;
                let var_1c0_2: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
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
                let var_1c0_3: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$tantivy_common..byte_count..ByteCount$u20$as$u20$core..fmt..Debug$GT$::fmt::hd330249b70bdaf09;
                var_208 = &data_984cc8;
                *var_208[8] = 2;
                var_1e8 = 0;
                var_1f8 = &var_1c8;
                *var_1f8[8] = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_208);
                var_128 = var_f0[0x24];
                var_1c8 = &var_128;
                let var_1c0_4: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$tantivy_common..byte_count..ByteCount$u20$as$u20$core..fmt..Debug$GT$::fmt::hd330249b70bdaf09;
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
                let var_1c0_5: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
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
                let var_1c0_6: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$tantivy_common..byte_count..ByteCount$u20$as$u20$core..fmt..Debug$GT$::fmt::hd330249b70bdaf09;
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
                let var_1c0_7: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
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
                let var_1c0_8: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$tantivy_common..byte_count..ByteCount$u20$as$u20$core..fmt..Debug$GT$::fmt::hd330249b70bdaf09;
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
                let var_1c0_9: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
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
                let var_1c0_10: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$tantivy_common..byte_count..ByteCount$u20$as$u20$core..fmt..Debug$GT$::fmt::hd330249b70bdaf09;
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
                let var_1c0_11: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
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
                let var_1c0_12: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$tantivy_common..byte_count..ByteCount$u20$as$u20$core..fmt..Debug$GT$::fmt::hd330249b70bdaf09;
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
            let var_190_8: i128 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
            var_1a8 = &data_984e08;
            var_1a0 = 1;
            *var_1a0[8] = 8;
            let var_190_9: i128 = {0};
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
            let zmm0_3: i128 = var_1a8;
            arg1[2] = var_190_6;
            arg1[1] = var_1a0;
            *arg1 = zmm0_3;
            core::ptr::drop_in_place$LT$tantivy..core..searcher..Searcher$GT$::hfcc0968019ce3a8e(
                &var_138);
            core::ptr::drop_in_place$LT$tantivy..schema..schema..Schema$GT$::he9a2cad772194c13(
                &var_1d0);
        }
    }
    
    core::ptr::drop_in_place$LT$tantivy..index..index..Index$GT$::hc2911d178059c5dc(&var_a0)
}
