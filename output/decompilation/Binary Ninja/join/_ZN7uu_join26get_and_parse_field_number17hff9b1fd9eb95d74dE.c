
  int64_t uu_join::get_and_parse_field_number::hff9b1fd9eb95d74d(int64_t* arg1, void* arg2, int64_t arg3)

{
    void var_40;
    int64_t rdx =
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3493742de87d61eb(
        &var_40, arg2, arg3);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::haf5154e9dc375d47(arg3, &var_40);
    char* rsi_1;
    
    if (!rax)
        rsi_1 = nullptr;
    else
    {
        rsi_1 = *(rax + 8);
        rdx = *(rax + 0x10);
    }
    
    /* tailcall */
    return uu_join::parse_field_number_option::hc351970518f2dd89(arg1, rsi_1, rdx);
}
