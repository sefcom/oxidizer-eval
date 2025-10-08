void _ZN12forc_publish11credentials1_90__LT_impl_u20_serde__ser__Serialize_u20_for_u20_forc_publish__credentials__Credentials_GT_9serialize17h723da991a39823e3E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined local_1d8 [200];
  undefined local_110 [8];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined local_f0 [200];
  
  (*(code *)
    PTR__ZN64__LT_toml__ser__Serializer_u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h0f3a016523604bf3E_01049978
  )(&local_1f8,param_4,"Credentials",0xb,1);
  uStack_fc = uStack_1e4;
  uStack_100 = uStack_1e8;
  uStack_104 = uStack_1ec;
  local_108 = uStack_1f0;
  if (CONCAT44(uStack_1f4,local_1f8) == -0x7fffffffffffffff) {
    param_1[2] = local_1e0;
    *param_1 = CONCAT44(uStack_1ec,uStack_1f0);
    param_1[1] = CONCAT44(uStack_1e4,uStack_1e8);
  }
  else {
    (*(code *)PTR_memcpy_01048fd8)(local_f0,local_1d8,200);
    local_f8 = local_1e0;
                    /* try { // try from 00766501 to 00766518 has its CatchHandler @ 0076657c */
    _ZN86__LT_toml__ser__map__SerializeDocumentTable_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hbeb869bae157c42eE
              (&local_1f8,local_110,param_2,param_3);
    if (CONCAT44(uStack_1f4,local_1f8) == -0x7ffffffffffffffb) {
      (*(code *)PTR_memcpy_01048fd8)(&local_1f8,local_110,0xe8);
      (*(code *)
        PTR__ZN86__LT_toml__ser__map__SerializeDocumentTable_u20_as_u20_serde__ser__SerializeStruct_GT_3end17hd7d034a96df64005E_01049980
      )(param_1,&local_1f8);
    }
    else {
      param_1[2] = CONCAT44(uStack_1e4,uStack_1e8);
      *(undefined4 *)param_1 = local_1f8;
      *(undefined4 *)((long)param_1 + 4) = uStack_1f4;
      *(undefined4 *)(param_1 + 1) = uStack_1f0;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_1ec;
      _ZN4core3ptr59drop_in_place_LT_toml__ser__map__SerializeDocumentTable_GT_17h98c462edb2dcd1d2E
                (local_110);
    }
  }
  return;
}