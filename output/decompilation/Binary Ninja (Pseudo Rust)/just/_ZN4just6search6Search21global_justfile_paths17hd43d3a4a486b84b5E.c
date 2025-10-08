
  fn just::search::Search::global_justfile_paths::hd43d3a4a486b84b5(arg1: *mut i128) -> i64

{
    let mut var_c0: i64 = 0;
    let var_b8: i64 = 8;
    let result: i64 = 0;
    let mut var_d8: i64;
    dirs::config_dir::h4d6c94d6b0a70841(&var_d8);
    let var_c8: u64;
    let mut var_a8: i128;
    let mut var_78: i128;
    let var_68: u64;
    
    if !(0 + -(var_d8))
    {
        let var_d0: i64;
        std::path::Path::join::h1eac0ae5e7efa361(&var_78, var_d0, var_c8, "just\x1b[1mCYAN'{{'[");
        let var_98_1: u64 = var_68;
        var_a8 = var_78;
        let var_90_1: *const i8 = "justfileBG_BLACKBG_WHITEImplicit…";
        let var_88_1: i64 = 8;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hf9976eaa6275e613(&var_c0, &var_a8);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_d8);
    }
    
    let mut var_48: i64;
    dirs::home_dir::h56798f98581d6ac2(&var_48);
    
    if var_48 != -0x8000000000000000
    {
        let var_40: i64;
        let var_38: u64;
        std::path::Path::join::h1eac0ae5e7efa361(&var_78, var_40, var_38, ".config");
        std::path::Path::join::h1eac0ae5e7efa361(&var_d8, *var_78[8], var_68, 
            "just\x1b[1mCYAN'{{'[");
        let mut var_98_2: u64 = var_c8;
        var_a8 = var_d8;
        let var_90_2: *const i8 = "justfileBG_BLACKBG_WHITEImplicit…";
        let mut var_88_2: i64 = 8;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hf9976eaa6275e613(&var_c0, &var_a8);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_78);
        var_a8 = 0;
        *var_a8[8] = 2;
        var_98_2 = *data_82e5b0;
        var_88_2 = *data_82e5c0;
        let mut i_3: i64;
        let mut rdx_6: i64;
        i_3 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::he3a8d094ac8fb9ab(&var_a8);
        
        if i_3 != 0
        {
            let mut i_1: i64 = i_3;
            let mut r13_1: i64 = rdx_6;
            let mut i: i64;
            
            do
            {
                _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_d8, var_40, var_38);
                let var_68_1: u64 = var_c8;
                var_78 = var_d8;
                let i_2: i64 = i_1;
                let var_58_1: i64 = r13_1;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hf9976eaa6275e613(&var_c0, &var_78);
                let mut rdx_9: i64;
                i = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::he3a8d094ac8fb9ab(&var_a8);
                i_1 = i;
                r13_1 = rdx_9;
            } while i != 0;
        }
        
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_48);
    }
    
    arg1[1] = result;
    *arg1 = var_c0;
    result
}
