long * _ZN7flealib16commandprocessor1_89__LT_impl_u20_serde__ser__Serialize_u20_for_u20_flealib__commandprocessor__FleaConfig_GT_9serialize17hf9fca71c835d8707E
                 (long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long local_1d8;
  undefined local_1d0 [200];
  undefined local_108 [8];
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  long local_f0;
  undefined local_e8 [200];
  
  (*(code *)
    PTR__ZN64__LT_toml__ser__Serializer_u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h81bae49f1a623278E_00828300
  )(&local_1f0,param_3,&DAT_0016a45a,10,9);
  uStack_f4 = uStack_1dc;
  uStack_f8 = uStack_1e0;
  uStack_fc = uStack_1e4;
  local_100 = uStack_1e8;
  if (CONCAT44(uStack_1ec,local_1f0) == -0x7fffffffffffffff) {
    param_1[2] = local_1d8;
    *param_1 = CONCAT44(uStack_1e4,uStack_1e8);
    param_1[1] = CONCAT44(uStack_1dc,uStack_1e0);
    return param_1;
  }
  (*(code *)PTR_memcpy_008266e0)(local_e8,local_1d0,200);
  local_f0 = local_1d8;
                    /* try { // try from 00470900 to 00470a97 has its CatchHandler @ 00470b09 */
  _ZN86__LT_toml__ser__map__SerializeDocumentTable_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hd9d914e821d47e2aE
            (&local_1f0,local_108,&DAT_00151210,8,param_2);
  if ((((CONCAT44(uStack_1ec,local_1f0) == -0x7ffffffffffffffb) &&
       (_ZN86__LT_toml__ser__map__SerializeDocumentTable_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hd9d914e821d47e2aE
                  (&local_1f0,local_108,&DAT_001512c8,8,param_2 + 0x18),
       CONCAT44(uStack_1ec,local_1f0) == -0x7ffffffffffffffb)) &&
      (_ZN86__LT_toml__ser__map__SerializeDocumentTable_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hd9d914e821d47e2aE
                 (&local_1f0,local_108,&DAT_0016a464,0xb,param_2 + 0x30),
      CONCAT44(uStack_1ec,local_1f0) == -0x7ffffffffffffffb)) &&
     (((_ZN86__LT_toml__ser__map__SerializeDocumentTable_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hd9d914e821d47e2aE
                  (&local_1f0,local_108,&DAT_0016a46f,10,param_2 + 0x48),
       CONCAT44(uStack_1ec,local_1f0) == -0x7ffffffffffffffb &&
       (_ZN86__LT_toml__ser__map__SerializeDocumentTable_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hd9d914e821d47e2aE
                  (&local_1f0,local_108,&DAT_0016a479,0xe,param_2 + 0x60),
       CONCAT44(uStack_1ec,local_1f0) == -0x7ffffffffffffffb)) &&
      ((_ZN86__LT_toml__ser__map__SerializeDocumentTable_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hd9d914e821d47e2aE
                  (&local_1f0,local_108,&DAT_0016a487,9,param_2 + 0x78),
       CONCAT44(uStack_1ec,local_1f0) == -0x7ffffffffffffffb &&
       (_ZN86__LT_toml__ser__map__SerializeDocumentTable_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hd9d914e821d47e2aE
                  (&local_1f0,local_108,&DAT_0016a490,9,param_2 + 0x90),
       CONCAT44(uStack_1ec,local_1f0) == -0x7ffffffffffffffb)))))) {
    _ZN86__LT_toml__ser__map__SerializeDocumentTable_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hd9d914e821d47e2aE
              (&local_1f0,local_108,&DAT_0014f3e0,0x10,param_2 + 0xa8);
    lVar1 = CONCAT44(uStack_1ec,local_1f0);
    if (lVar1 == -0x7ffffffffffffffb) {
      _ZN86__LT_toml__ser__map__SerializeDocumentTable_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hd9d914e821d47e2aE
                (&local_1f0,local_108,&DAT_0016a499,0x12,param_2 + 0xc0);
      lVar1 = CONCAT44(uStack_1ec,local_1f0);
      if (lVar1 == -0x7ffffffffffffffb) {
        (*(code *)PTR_memcpy_008266e0)(&local_1f0,local_108,0xe8);
        (*(code *)
          PTR__ZN86__LT_toml__ser__map__SerializeDocumentTable_u20_as_u20_serde__ser__SerializeStruct_GT_3end17h72de680beeccb8eeE_00828308
        )(param_1,&local_1f0);
        return param_1;
      }
    }
    *(undefined4 *)(param_1 + 1) = uStack_1e8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_1e4;
    *(undefined4 *)(param_1 + 2) = uStack_1e0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_1dc;
    *param_1 = lVar1;
  }
  else {
    param_1[2] = CONCAT44(uStack_1dc,uStack_1e0);
    *(undefined4 *)param_1 = local_1f0;
    *(undefined4 *)((long)param_1 + 4) = uStack_1ec;
    *(undefined4 *)(param_1 + 1) = uStack_1e8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_1e4;
  }
  _ZN4core3ptr59drop_in_place_LT_toml__ser__map__SerializeDocumentTable_GT_17h1f9c798374f8eaaaE
            (local_108);
  return param_1;
}