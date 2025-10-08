
  int64_t fuel_core_keygen::serialize_option_to_string::h08468a44fb575fb5(char* arg1, int32_t* arg2)

{
    if (*arg2 != 1)
        /* tailcall */
        return _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde..ser..Serializer$GT$::serialize_none::h5891bc90f5c06995(arg1);
    
    void var_20;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h8920aa1c19fec9c2(&var_20, &arg2[2]);
    int64_t var_18;
    uint64_t var_10;
    _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde..ser..Serializer$GT$::serialize_str::h4ed90b652588c8af(arg1, var_18, var_10);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h620ef3d513ef5c65(&var_20);
}
