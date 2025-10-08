void _ZN15linera_exporter5state1_105__LT_impl_u20_serde__ser__Serialize_u20_for_u20_linera_exporter__state__SerializableDestinationStates_GT_9serialize17hfba0eba45d267bd1E
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_30;
  undefined4 uStack_2c;
  long lStack_28;
  long local_20;
  long lStack_18;
  
  _ZN72__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17hdb9447039f77769bE
            (&local_30,param_3,500,&DAT_0033d9dd,0x11);
  if (CONCAT44(uStack_2c,local_30) != 0x10) {
    *param_1 = CONCAT44(uStack_2c,local_30);
    param_1[1] = lStack_28;
    param_1[2] = local_20;
    param_1[3] = lStack_18;
    return;
  }
  _ZN77__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hd1f0b76b59c38d88E
            (&local_30,lStack_28,local_20,param_2);
  if (local_30 == 0x10) {
    _ZN74__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeSeq_GT_3end17h664a77cd59c46e49E
              (param_1);
    return;
  }
  param_1[2] = local_20;
  param_1[3] = lStack_18;
  *param_1 = CONCAT44(uStack_2c,local_30);
  param_1[1] = lStack_28;
  return;
}