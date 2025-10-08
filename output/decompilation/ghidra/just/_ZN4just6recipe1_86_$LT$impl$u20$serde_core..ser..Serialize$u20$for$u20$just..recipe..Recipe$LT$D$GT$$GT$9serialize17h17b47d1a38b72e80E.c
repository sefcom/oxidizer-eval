void _ZN4just6recipe1_86__LT_impl_u20_serde_core__ser__Serialize_u20_for_u20_just__recipe__Recipe_LT_D_GT__GT_9serialize17h17b47d1a38b72e80E
               (long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  _ZN100__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde_core__ser__Serializer_GT_16serialize_struct17hfdad5c5179e3ff91E
            (&local_18,param_2,0xb);
  if ((char)local_10 != '\x03') {
    lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h865793240a227b81E
                      (&local_18,param_1 + 0xd8);
    if (lVar1 == 0) {
      lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17hdb9d80680d23d8c9E
                        (&local_18,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
      if (lVar1 == 0) {
        lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h849704166dbf4570E
                          (&local_18,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28)
                          );
        if (lVar1 == 0) {
          lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h3677ce0dede2f030E
                            (&local_18,"doc",3,param_1 + 0x60);
          if (lVar1 == 0) {
            lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17hfa8b07ca5a303dcfE
                              (&local_18,param_1 + 0x90);
            if (lVar1 == 0) {
              lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h3677ce0dede2f030E
                                (&local_18,"namepathstride: xidstart( ",8,param_1 + 0x78);
              if (lVar1 == 0) {
                lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17hdf2286a8d64138feE
                                  (&local_18,*(undefined8 *)(param_1 + 0x50),
                                   *(undefined8 *)(param_1 + 0x58));
                if (lVar1 == 0) {
                  lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h1938ab3643db0b84E
                                    (&local_18,*(undefined8 *)(param_1 + 0xf0));
                  if (lVar1 == 0) {
                    lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                                      (&local_18,"private",7,*(undefined4 *)(param_1 + 0xfc));
                    if (lVar1 == 0) {
                      lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                                        (&local_18,&DAT_0016f543,5,*(undefined *)(param_1 + 0xfd));
                      if (lVar1 == 0) {
                        lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                                          (&local_18,"shebang",7,*(undefined *)(param_1 + 0xfe));
                        if (lVar1 == 0) {
                          _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hdc3b867c22c4b60fE
                                    (local_18,local_10);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}