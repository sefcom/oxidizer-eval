void _ZN15linera_exporter6common1_91__LT_impl_u20_serde__ser__Serialize_u20_for_u20_linera_exporter__common__CanonicalBlock_GT_9serialize17h7ec0af840f72ea7bE
               (long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  int local_40;
  undefined4 uStack_3c;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  _ZN72__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17hdb9447039f77769bE
            (&local_40,param_3,500,&DAT_0033dd15,0xe);
  lVar2 = local_30;
  lVar1 = lStack_38;
  if (CONCAT44(uStack_3c,local_40) == 0x10) {
    _ZN77__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h10ba0a6050925fc0E
              (&local_40,lStack_38,local_30,*param_2,param_2[1]);
    if (local_40 == 0x10) {
      _ZN76__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeTuple_GT_17serialize_element17hfff5be0a7b2de791E
                (&local_40,lVar1,lVar2,param_2 + 2);
      if (local_40 == 0x10) {
        _ZN74__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeSeq_GT_3end17h664a77cd59c46e49E
                  (param_1);
        return;
      }
    }
    param_1[2] = local_30;
    param_1[3] = lStack_28;
    *param_1 = CONCAT44(uStack_3c,local_40);
    param_1[1] = lStack_38;
  }
  else {
    *param_1 = CONCAT44(uStack_3c,local_40);
    param_1[1] = lStack_38;
    param_1[2] = local_30;
    param_1[3] = lStack_28;
  }
  return;
}