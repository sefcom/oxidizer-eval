
  fn firecracker::api_server::ApiServer::json_fault_message::hfc3a57c57b134c30(arg1: *mut i128, arg2: *mut i64) -> i64

{
    let mut var_98: i64 = 0;
    let var_88: i64 = 0;
    let mut var_60: ();
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_60, "fault_messageEventManager events…", 0xd);
    let mut var_80: i8;
    serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$alloc..string..String$GT$::serialize::hd9c69d0e0ed048b9(&var_80, arg2[1], arg2[2]);
    let mut var_48: ();
    core::result::Result$LT$T$C$E$GT$::unwrap::hef5fd04729a685c2(&var_48, &var_80);
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h30c9a76b510ca40d(&var_80, 
        &var_98, &var_60, &var_48);
    core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::h1aaef3c0fc09df79(&var_80);
    let var_78: i128 = var_98;
    let var_68: i64 = var_88;
    var_80 = 5;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h80e7bcf6fd335a6c(arg1, 
        &var_80);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfa257d85365bebbe(&var_80);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1017b1af1d0852d4(arg2)
}
