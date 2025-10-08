
  int64_t alacritty::migrate::Migration::success_message::h6e70dbedf75118d1(int64_t* arg1, void* arg2, uint64_t arg3)

{
    char const (** const var_30)[0xf2];
    void* var_60;
    void** var_50;
    
    if (!(0 + -(*(arg2 + 0x10))))
    {
        void* var_58 = arg2;
        var_60 = arg2 + 0x10;
        char const (** rax_2)[0xf2];
        
        if (!arg3)
        {
            var_58 = arg2;
            var_60 = arg2 + 0x10;
            var_50 = &var_58;
            int64_t (* var_48_3)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hc05483ad51a2aec5;
            void** var_40_2 = &var_60;
            int64_t (* var_38_2)(int64_t* arg1, int64_t* arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hb5cf510104176b6c;
            rax_2 = &data_c837e8;
        }
        else
        {
            var_50 = &var_58;
            int64_t (* var_48_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hc05483ad51a2aec5;
            void** var_40_1 = &var_60;
            int64_t (* var_38_1)(int64_t* arg1, int64_t* arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hb5cf510104176b6c;
            rax_2 = &data_c837c8;
        }
        
        var_30 = rax_2;
        int64_t var_28_1 = 2;
        int64_t var_10_1 = 0;
        void*** var_20_1 = &var_50;
        int64_t var_18_1 = 2;
    }
    else
    {
        var_60 = arg2;
        char const (** const rax)[0xf2];
        
        if (!arg3)
        {
            var_60 = arg2;
            var_50 = &var_60;
            int64_t (* var_48_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hc05483ad51a2aec5;
            rax = &data_c83818;
        }
        else
        {
            var_50 = &var_60;
            int64_t (* var_48)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hc05483ad51a2aec5;
            rax = &data_c83808;
        }
        
        var_30 = rax;
        int64_t var_28 = 1;
        int64_t var_10 = 0;
        void*** var_20 = &var_50;
        int64_t var_18 = 1;
    }
    return core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(arg1, 0, arg3, &var_30);
}
