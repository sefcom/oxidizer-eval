
  void* uu_split::Settings::instantiate_current_writer::hd292c92efbe44a3c(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int64_t var_98 = arg3;
    int64_t var_90 = arg4;
    
    if (!uu_split::platform::unix::paths_refer_to_same_file::h8ca9878e54b136ff(*(arg2 + 0x78), 
        *(arg2 + 0x80), arg3))
    {
        int64_t rsi_2;
        
        if (*(arg2 + 0x88) == -0x8000000000000000)
            rsi_2 = 0;
        else
            rsi_2 = *(arg2 + 0x90);
        
        /* tailcall */
        return uu_split::platform::unix::instantiate_current_writer::hfd480ac8732375ab(arg1, rsi_2, 
            *(arg2 + 0x98), arg3, arg4, arg5);
    }
    
    int64_t* var_88 = &var_98;
    int64_t (* var_80)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h791d0a6d89386828;
    void** const var_78 = &data_50aea8;
    int64_t var_70 = 2;
    int64_t var_58 = 0;
    int64_t** var_68 = &var_88;
    int64_t var_60 = 1;
    void var_48;
    core::option::Option$LT$T$GT$::map_or_else::he9a9868ebfde35f3(&var_48, 0, &var_78);
    void* result = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
        alloc::boxed::Box$LT$T$GT$::new::h8b7f7ad758f1175c(&var_48), &data_50ad88);
    arg1[1] = result;
    *arg1 = -0x8000000000000000;
    return result;
}
