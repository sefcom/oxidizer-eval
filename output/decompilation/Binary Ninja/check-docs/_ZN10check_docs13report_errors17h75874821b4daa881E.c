
  void check_docs::report_errors::h75874821b4daa881(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_40 = arg1;
    int64_t var_38 = arg2;
    
    if (arg4)
    {
        int64_t r14_1 = arg3;
        int64_t* var_88 = &var_40;
        int64_t (* var_80_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8c5b7927cb42b082;
        void** const var_70 = &data_5d33f8;
        int64_t var_68_1 = 2;
        int64_t var_50_1 = 0;
        int64_t** var_60_1 = &var_88;
        int64_t var_58_1 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
        int64_t i_1 = arg4 << 3;
        int64_t i;
        
        do
        {
            int64_t var_78 = r14_1;
            r14_1 += 8;
            var_88 = &var_78;
            int64_t (* var_80_2)(int64_t* arg1, int64_t* arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fa94dfe70534f88;
            var_70 = &data_5d3418;
            int64_t var_68_2 = 2;
            int64_t var_50_2 = 0;
            int64_t** var_60_2 = &var_88;
            int64_t var_58_2 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
            i = i_1;
            i_1 -= 8;
        } while (i != 8);
    }
}
