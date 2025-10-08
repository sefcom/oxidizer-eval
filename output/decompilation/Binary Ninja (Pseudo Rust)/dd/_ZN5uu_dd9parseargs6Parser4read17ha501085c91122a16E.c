
  fn uu_dd::parseargs::Parser::read::ha501085c91122a16(arg1: *mut i64, arg2: *mut i64, arg3: *mut i128) -> i64

{
    let mut var_68: ();
    _$LT$I$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h015b412e9abe2780(
        &var_68, arg3);
    let mut i: i32;
    
    do
    {
        let rax_1: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4ec286498eb5d05a(&var_68);
        
        if rax_1 == 0
        {
            /* tailcall */
            return memcpy(arg1, arg2, 0xd8);
        }
        
        let mut rax_2: i64;
        let mut rdx: u64;
        rax_2 = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h552a52a70d998f24(
            rax_1);
        uu_dd::parseargs::Parser::parse_operand::hc45261e402562f1d(&i, arg2, rax_2, rdx);
    } while i == 0xe;
    
    let zmm0: i128 = i;
    let var_78: i128;
    *arg1.byte_offset(0x18) = var_78;
    *arg1.byte_offset(8) = zmm0;
    *arg1 = 2;
    /* tailcall */
    core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::hd525826ae42afc29(arg2)
}
