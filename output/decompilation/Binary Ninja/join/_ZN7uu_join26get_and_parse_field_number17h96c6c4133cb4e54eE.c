
  int64_t uu_join::get_and_parse_field_number::h96c6c4133cb4e54e(int64_t* arg1, void* arg2, int64_t arg3)

{
    void var_40;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc8975813854a9a38(&var_40, 
        arg2, arg3, 1);
    void* rdx = &var_40;
    void* rax = clap_builder::parser::error::MatchesError::unwrap::he70031129adfbfcb(arg3, 1, rdx);
    char* rsi;
    
    if (!rax)
        rsi = nullptr;
    else
    {
        rsi = *(rax + 8);
        rdx = *(rax + 0x10);
    }
    
    /* tailcall */
    return uu_join::parse_field_number_option::h48fa1297dd47f55b(arg1, rsi, rdx);
}
