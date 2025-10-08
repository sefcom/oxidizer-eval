
  fn rg::flags::lowargs::FieldMatchSeparator::new::hd425afae5f589f4b(arg1: *mut i128, arg2: *mut i8, arg3: i64) -> u64

{
    let mut var_38: i32;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_38, arg2, arg3);
    
    if var_38 != 1
    {
        let var_30: i64;
        /* tailcall */
        return bstr::ext_vec::ByteVec::unescape_bytes::h5358798493048e4a(arg1, var_30);
    }
    
    var_38 = &data_7eb468;
    let var_30_1: i64 = 1;
    let var_28_1: i64 = 8;
    let var_20: i128 = {0};
    let result: u64 = anyhow::__private::format_err::hd87f3faee3401bd9(&var_38);
    *arg1.byte_offset(8) = result;
    *arg1 = -0x8000000000000000;
    result
}
