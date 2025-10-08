void _ZN22linera_indexer_plugins10operations1_102__LT_impl_u20_serde__ser__Serialize_u20_for_u20_linera_indexer_plugins__operations__ChainOperation_GT_9serialize17he78ecce806d36ea3E
               (long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  int local_40;
  undefined4 uStack_3c;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  _ZN72__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h170566e6a5431497E
            (&local_40,param_3,500,"ChainOperation",0xe);
  lVar2 = local_30;
  lVar1 = lStack_38;
  if (CONCAT44(uStack_3c,local_40) == 0x10) {
    _ZN77__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h6d0f862f46c4065aE
              (&local_40,lStack_38,local_30,param_2 + 0x70);
    if (local_40 == 0x10) {
      _ZN77__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h1cd414be92040d13E
                (&local_40,lVar1,lVar2,param_2);
      if (local_40 == 0x10) {
        _ZN76__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeTuple_GT_17serialize_element17hd763592f24d0f3efE
                  (&local_40,lVar1,*(undefined8 *)(param_2 + 0xa0));
        if (local_40 == 0x10) {
          _ZN76__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeTuple_GT_17serialize_element17h4876b4047627f702E
                    (&local_40,lVar1,lVar2,param_2 + 0xa8);
          if (local_40 == 0x10) {
            _ZN77__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h50f9861beec27740E
                      (&local_40,lVar1,lVar2,param_2 + 0x38);
            if (local_40 == 0x10) {
              _ZN74__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeSeq_GT_3end17h0eb7c262ed081a0eE
                        (param_1);
              return;
            }
          }
        }
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