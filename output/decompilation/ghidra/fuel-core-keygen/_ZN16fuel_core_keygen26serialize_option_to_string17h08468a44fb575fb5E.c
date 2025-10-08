void _ZN16fuel_core_keygen26serialize_option_to_string17h08468a44fb575fb5E
               (undefined8 param_1,int *param_2)

{
  undefined local_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  if (*param_2 == 1) {
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h8920aa1c19fec9c2E
              (local_20,param_2 + 2);
                    /* try { // try from 00181de8 to 00181def has its CatchHandler @ 00181e0a */
    _ZN77__LT_serde_json__value__ser__Serializer_u20_as_u20_serde__ser__Serializer_GT_13serialize_str17h4ed90b652588c8afE
              (param_1,local_18,local_10);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h620ef3d513ef5c65E(local_20);
    return;
  }
  _ZN77__LT_serde_json__value__ser__Serializer_u20_as_u20_serde__ser__Serializer_GT_14serialize_none17h5891bc90f5c06995E
            ();
  return;
}