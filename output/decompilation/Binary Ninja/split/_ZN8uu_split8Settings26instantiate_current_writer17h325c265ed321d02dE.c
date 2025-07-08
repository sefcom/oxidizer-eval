
  int64_t* uu_split::Settings::instantiate_current_writer::h325c265ed321d02d(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int64_t var_90 = arg3;
    int64_t var_88 = arg4;
    
    if (!uu_split::platform::unix::paths_refer_to_same_file::h083a83a0b2f9c23e(*(arg2 + 0x78), 
            *(arg2 + 0x80), arg3, arg4))
        uu_split::platform::unix::instantiate_current_writer::h64f110ef12de1802(arg1, arg2 + 0x88, 
            arg3, arg4, arg5);
    else
    {
        int64_t* var_80 = &var_90;
        int64_t (* var_78_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h07748dddbe8bbb98;
        void** const var_70 = &data_548380;
        int64_t var_68_1 = 2;
        int64_t var_50_1 = 0;
        int64_t** var_60_1 = &var_80;
        int64_t var_58_1 = 1;
        void var_40;
        core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_40, 0, &var_70);
        arg1[1] = std::io::error::Error::new::hd2fa1afc07f95968(0x27, &var_40);
        *arg1 = -0x8000000000000000;
    }
    
    return arg1;
}
