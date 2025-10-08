
  int64_t uu_df::blocks::block_size_from_env::hdb573be3e983bfb6()

{
    int64_t* r14;
    int64_t* var_10 = r14;
    int64_t var_80 = 0;
    int64_t var_78 = 3;
    void* const var_70 = "DF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZE…";
    int64_t var_68 = 0xd;
    void* const var_60 = "BLOCK_SIZEBLOCKSIZEsrc/uu/df/src…";
    int64_t var_58 = 0xa;
    void* const var_50 = "BLOCKSIZEsrc/uu/df/src/columns.r…";
    int64_t var_48 = 9;
    int64_t i = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h2841b62643c07fc9(&var_80);
    
    if (!i)
        return 0;
    
    int64_t result = 0;
    
    do
    {
        int64_t var_a0;
        std::env::var::hcd02c620244cf284(&var_a0, i);
        
        if (!var_a0)
        {
            void* var_90;
            uint64_t var_88;
            int64_t var_40;
            uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(&var_40, 
                var_90, var_88);
            int64_t rax = var_40;
            result = rax == 4;
            
            if (rax != 4)
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..features..parser..parse_size..ParseSizeError$GT$$GT$::hecbb26056e05f293(&var_40);
            
            void var_98;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h73027cd2db783008(&var_98);
            break;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h9bc22df766544719(&var_a0);
        i = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h2841b62643c07fc9(&var_80);
    } while (i);
    
    return result;
}
