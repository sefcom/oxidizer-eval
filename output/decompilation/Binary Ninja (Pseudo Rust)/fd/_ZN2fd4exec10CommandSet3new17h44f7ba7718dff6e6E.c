
  fn fd::exec::CommandSet::new::h44f7ba7718dff6e6(arg1: *mut i64, arg2: *mut i128) -> i64

{
    let mut var_30: ();
    _$LT$clap_builder..builder..value_parser..ValueParser$u20$as$u20$core..convert..From$LT$clap_builder..builder..value_parser.._AnonymousValueParser$GT$$GT$::from::hd3da1d54eddfcf38(&var_30, arg2);
    let mut var_48: ();
    _$LT$clap_builder..builder..value_parser..ValueParser$u20$as$u20$core..convert..From$LT$clap_builder..builder..value_parser.._AnonymousValueParser$GT$$GT$::from::hd3da1d54eddfcf38(&var_48, &var_30);
    let mut result_1: i64;
    core::iter::traits::iterator::Iterator::collect::h326712f283215389(&result_1, &var_48);
    let result: i64 = result_1;
    
    if -(result) != -0x8000000000000000
    {
        let var_50: i64;
        arg1[2] = var_50;
        arg1[3] = 0;
    }
    
    let var_58: i64;
    arg1[1] = var_58;
    *arg1 = result;
    result
}
