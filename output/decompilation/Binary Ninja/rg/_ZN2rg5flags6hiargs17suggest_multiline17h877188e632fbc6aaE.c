
  int64_t rg::flags::hiargs::suggest_multiline::h877188e632fbc6aa(int128_t* arg1, int64_t* arg2)

{
    char* r15 = arg2[1];
    int64_t r12 = arg2[2];
    
    if (_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hff4183d19d767429(
        "the literalnot allowed\n\nConsid…", 0xb, r15, r12))
    {
        char rax_1;
        uint64_t rdx_2;
        rax_1 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hff4183d19d767429("not allowed\n\nConsider enabling…", 0xb, r15, r12);
        
        if (rax_1)
        {
            int64_t* var_78 = arg2;
            int64_t (* var_70_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            void* const var_50 = &data_7eb428;
            int64_t var_48_1 = 2;
            int64_t var_30_1 = 0;
            void** var_40_1 = &var_78;
            int64_t var_38_1 = 1;
            int128_t var_68;
            core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_68, 0, rdx_2, 
                &var_50);
            int64_t var_58;
            arg1[1] = var_58;
            *arg1 = var_68;
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(arg2);
        }
    }
    
    int64_t result = arg2[2];
    arg1[1] = result;
    *arg1 = *arg2;
    return result;
}
