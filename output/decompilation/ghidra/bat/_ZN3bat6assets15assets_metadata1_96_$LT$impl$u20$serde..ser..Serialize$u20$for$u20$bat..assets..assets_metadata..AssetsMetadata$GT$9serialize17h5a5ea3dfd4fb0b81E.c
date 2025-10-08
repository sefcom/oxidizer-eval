long _ZN3bat6assets15assets_metadata1_96__LT_impl_u20_serde__ser__Serialize_u20_for_u20_bat__assets__assets_metadata__AssetsMetadata_GT_9serialize17h5a5ea3dfd4fb0b81E
               (long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined auVar3 [16];
  
  auVar3 = _ZN91__LT__RF_mut_u20_serde_yaml__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17he65fefe286d2c803E
                     (param_2);
  lVar2 = auVar3._8_8_;
  lVar1 = lVar2;
  if ((((auVar3 & (undefined  [16])0x1) == (undefined  [16])0x0) &&
      (lVar1 = _ZN96__LT__RF_mut_u20_serde_yaml__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h789c4823de5549baE
                         (lVar2,param_1), lVar1 == 0)) &&
     (lVar1 = _ZN96__LT__RF_mut_u20_serde_yaml__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h123efdf68ec3fa5eE
                        (lVar2,param_1 + 0x18), lVar1 == 0)) {
    lVar1 = _ZN96__LT__RF_mut_u20_serde_yaml__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h9f8751701cdd81abE
                      (lVar2);
    return lVar1;
  }
  return lVar1;
}