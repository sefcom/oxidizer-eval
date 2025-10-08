
  fn bat::assets::assets_metadata::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$bat..assets..assets_metadata..AssetsMetadata$GT$::serialize::h5a5ea3dfd4fb0b81(arg1: *mut i64, arg2: *mut i64) -> u64

{
    let rax: i64;
    let var_18: i64 = rax;
    let mut rax_1: i8;
    let mut rdx: u64;
    rax_1 = _$LT$$RF$mut$u20$serde_yaml..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::he65fefe286d2c803(arg2);
    
    if (rax_1 & 1) != 0
    {
        return rdx;
    }
    
    let mut rax_2: u64 = _$LT$$RF$mut$u20$serde_yaml..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h789c4823de5549ba(rdx, arg1);
    
    if rax_2 == 0
    {
        rax_2 = _$LT$$RF$mut$u20$serde_yaml..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h123efdf68ec3fa5e(rdx, &arg1[3]);
        
        if rax_2 == 0
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_yaml..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h9f8751701cdd81ab(rdx);
        }
    }
    
    rax_2
}
