void _ZN22linera_indexer_plugins10operations1_100__LT_impl_u20_serde__ser__Serialize_u20_for_u20_linera_indexer_plugins__operations__OperationKey_GT_9serialize17h52dd0c2d769115ddE
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  int local_40;
  undefined4 uStack_3c;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  _ZN72__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h170566e6a5431497E
            (&local_40,param_3,param_4,"OperationKey",0xc);
  lVar2 = local_30;
  lVar1 = lStack_38;
  if (CONCAT44(uStack_3c,local_40) == 0x10) {
    _ZN76__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeTuple_GT_17serialize_element17hc70e3dbb71d0cbbeE
              (&local_40,lStack_38,local_30,param_2);
    if (local_40 == 0x10) {
      _ZN76__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeTuple_GT_17serialize_element17h86378edb9cf7b095E
                (&local_40,lVar1,lVar2,*(undefined8 *)(param_2 + 0x20));
      if (local_40 == 0x10) {
        _ZN76__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeTuple_GT_17serialize_element17hd763592f24d0f3efE
                  (&local_40,lVar1,*(undefined8 *)(param_2 + 0x28));
        if (local_40 == 0x10) {
          _ZN74__LT_bcs__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeSeq_GT_3end17h0eb7c262ed081a0eE
                    (param_1);
          return;
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