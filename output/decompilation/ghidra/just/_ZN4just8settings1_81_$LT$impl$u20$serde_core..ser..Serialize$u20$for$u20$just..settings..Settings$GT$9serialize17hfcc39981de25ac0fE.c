void _ZN4just8settings1_81__LT_impl_u20_serde_core__ser__Serialize_u20_for_u20_just__settings__Settings_GT_9serialize17hfcc39981de25ac0fE
               (long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  _ZN100__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde_core__ser__Serializer_GT_16serialize_struct17hfdad5c5179e3ff91E
            (&local_18,param_2,0x13);
  if ((char)local_10 != '\x03') {
    lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                      (&local_18,"allow_duplicate_recipes",0x17,*(undefined4 *)(param_1 + 0x138));
    if (lVar1 == 0) {
      lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                        (&local_18,"allow_duplicate_variables",0x19,*(undefined *)(param_1 + 0x139))
      ;
      if (lVar1 == 0) {
        lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h3677ce0dede2f030E
                          (&local_18,"dotenv_filename",0xf,param_1);
        if (lVar1 == 0) {
          lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                            (&local_18,"dotenv_load",0xb,*(undefined *)(param_1 + 0x13a));
          if (lVar1 == 0) {
            lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                              (&local_18,"dotenv_override",0xf,*(undefined *)(param_1 + 0x13b));
            if (lVar1 == 0) {
              lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h998cd99b8bf45d08E
                                (&local_18,"dotenv_path",0xb,param_1 + 0x18);
              if (lVar1 == 0) {
                lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                                  (&local_18,"dotenv_required",0xf,*(undefined4 *)(param_1 + 0x13c))
                ;
                if (lVar1 == 0) {
                  lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                                    (&local_18,"export",6,*(undefined *)(param_1 + 0x13d));
                  if (lVar1 == 0) {
                    lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                                      (&local_18,"fallback",8,*(undefined *)(param_1 + 0x13e));
                    if (lVar1 == 0) {
                      lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                                        (&local_18,"ignore_comments",0xf,
                                         *(undefined *)(param_1 + 0x13f));
                      if (lVar1 == 0) {
                        lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                                          (&local_18,"no_exit_message",0xf,
                                           *(undefined4 *)(param_1 + 0x140));
                        if (lVar1 == 0) {
                          lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                                            (&local_18,"positional_arguments",0x14,
                                             *(undefined *)(param_1 + 0x141));
                          if (lVar1 == 0) {
                            lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                                              (&local_18,&DAT_0016f543,5,
                                               *(undefined *)(param_1 + 0x142));
                            if (lVar1 == 0) {
                              lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h0156f87e08a37982E
                                                (&local_18,&DAT_0016f5c8,5,param_1 + 0x78);
                              if (lVar1 == 0) {
                                lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h3677ce0dede2f030E
                                                  (&local_18,&DAT_0016f699,7,param_1 + 0xc0);
                                if (lVar1 == 0) {
                                  lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                                                    (&local_18,&DAT_00169510,8,
                                                     *(undefined *)(param_1 + 0x143));
                                  if (lVar1 == 0) {
                                    lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                                                      (&local_18,"windows_powershell",0x12,
                                                       *(undefined4 *)(param_1 + 0x144));
                                    if (lVar1 == 0) {
                                      lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h0156f87e08a37982E
                                                        (&local_18,"windows_shell",0xd,
                                                         param_1 + 0xd8);
                                      if (lVar1 == 0) {
                                        lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h998cd99b8bf45d08E
                                                          (&local_18,
                                                                                                                      
                                                  "working_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways"
                                                  ,0x11,param_1 + 0x120);
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