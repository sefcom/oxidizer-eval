
  uint64_t rg::flags::lowargs::FieldMatchSeparator::new::hd425afae5f589f4b(int128_t* arg1, char* arg2, int64_t arg3)

{
    int32_t var_38;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_38, arg2, arg3);
    
    if (var_38 != 1)
    {
        int64_t var_30;
        /* tailcall */
        return bstr::ext_vec::ByteVec::unescape_bytes::h5358798493048e4a(arg1, var_30);
    }
    
    var_38 = &data_7eb468;
    int64_t var_30_1 = 1;
    int64_t var_28_1 = 8;
    int128_t var_20 = {0};
    uint64_t result = anyhow::__private::format_err::hd87f3faee3401bd9(&var_38);
    *(arg1 + 8) = result;
    *arg1 = -0x8000000000000000;
    return result;
}
