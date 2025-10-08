
  fn zoxide::db::dir::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$zoxide..db..dir..Dir$GT$::serialize::hacbca522e3b0b195(arg1: *mut i64, arg2: i64) -> i64

{
    let rax: *mut i64 = _$LT$$RF$mut$u20$bincode..ser..SizeChecker$LT$O$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h7f144663b44a3033(arg2);
    _$LT$bincode..ser..SizeCompound$LT$O$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h8e8f1313c5665315(rax, arg1);
    _$LT$bincode..ser..SizeCompound$LT$O$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::habd7b0c539fa993c(rax);
    /* tailcall */
    _$LT$bincode..ser..SizeCompound$LT$O$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::habd7b0c539fa993c(rax)
}
