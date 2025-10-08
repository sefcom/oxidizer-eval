
  int64_t* just::function::join::hf514232141c1b996(int64_t* arg1, int64_t arg2, int64_t arg3, uint64_t arg4, int64_t arg5, void* arg6, int64_t arg7)

{
    void var_50;
    camino::Utf8Path::join::h5972e239d273391e(&var_50, arg3, arg4, arg5);
    
    if (arg7)
    {
        void* r14_1 = arg6;
        int64_t i_1 = arg7 * 0x18;
        int64_t i;
        
        do
        {
            camino::Utf8PathBuf::push::h66aa426c8960bee0(&var_50, r14_1);
            r14_1 += 0x18;
            i = i_1;
            i_1 -= 0x18;
        } while (i != 0x18);
    }
    
    int128_t var_38;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h8d6445813d8446cd(&var_38, 
        &var_50);
    int64_t var_28;
    arg1[3] = var_28;
    *(arg1 + 8) = var_38;
    *arg1 = 0;
    core::ptr::drop_in_place$LT$camino..Utf8PathBuf$GT$::hdd3b2f225d24af37(&var_50);
    return arg1;
}
