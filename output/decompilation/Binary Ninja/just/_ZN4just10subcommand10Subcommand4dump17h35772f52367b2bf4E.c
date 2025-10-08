
  int64_t just::subcommand::Subcommand::dump::h35772f52367b2bf4(char* arg1, char arg2, int64_t* arg3)

{
    char const* const var_50;
    
    if (!(arg2 & 1))
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        int64_t rax_1 = serde_json::ser::to_writer::h22d6927a44a61b5d(
            &std::io::stdio::STDOUT::h411b213c5c9add46, arg3);
        
        if (rax_1)
        {
            *arg1 = 0x12;
            *(arg1 + 8) = rax_1;
            /* tailcall */
            return
                core::ptr::drop_in_place$LT$just..compilation..Compilation$GT$::hcea2292c76e0cd86(
                arg3);
        }
        
        var_50 = &data_82dbf8;
        int64_t var_48_1 = 1;
        int64_t var_40_1 = 8;
        int64_t var_38;
        var_38 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_50);
    }
    else
    {
        int64_t var_58 = just::compilation::Compilation::root_ast::hde4a084de7e3435a(arg3);
        int64_t* var_20 = &var_58;
        int64_t (* var_18_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h713030161970f6bd;
        var_50 = &data_465db0;
        int64_t var_48 = 1;
        int64_t var_30_1 = 0;
        int64_t** var_40 = &var_20;
        int64_t var_38_1 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_50);
    }
    *arg1 = 0x38;
    return core::ptr::drop_in_place$LT$just..compilation..Compilation$GT$::hcea2292c76e0cd86(arg3);
}
