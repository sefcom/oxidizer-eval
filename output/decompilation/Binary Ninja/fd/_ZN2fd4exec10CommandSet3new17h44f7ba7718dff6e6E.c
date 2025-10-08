
  int64_t fd::exec::CommandSet::new::h44f7ba7718dff6e6(int64_t* arg1, int128_t* arg2)

{
    void var_30;
    _$LT$clap_builder..builder..value_parser..ValueParser$u20$as$u20$core..convert..From$LT$clap_builder..builder..value_parser.._AnonymousValueParser$GT$$GT$::from::hd3da1d54eddfcf38(&var_30, arg2);
    void var_48;
    _$LT$clap_builder..builder..value_parser..ValueParser$u20$as$u20$core..convert..From$LT$clap_builder..builder..value_parser.._AnonymousValueParser$GT$$GT$::from::hd3da1d54eddfcf38(&var_48, &var_30);
    int64_t result_1;
    core::iter::traits::iterator::Iterator::collect::h326712f283215389(&result_1, &var_48);
    int64_t result = result_1;
    
    if (-(result) != -0x8000000000000000)
    {
        int64_t var_50;
        arg1[2] = var_50;
        arg1[3] = 0;
    }
    
    int64_t var_58;
    arg1[1] = var_58;
    *arg1 = result;
    return result;
}
