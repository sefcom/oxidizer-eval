undefined8
_ZN3bat5input5Input10_with_name17h8d717bd44b3e43adE
          (undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if (param_3 == 0) {
    local_50 = 0x8000000000000000;
  }
  else {
                    /* try { // try from 00539a36 to 00539a4c has its CatchHandler @ 00539af7 */
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_008075f0)
              (&local_50,param_3,param_4);
                    /* try { // try from 00539a57 to 00539a60 has its CatchHandler @ 00539ae8 */
    _ZN55__LT__RF_str_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0eee6798dc8ee10dE
              (&local_38,CONCAT44(uStack_44,local_48),CONCAT44(uStack_3c,uStack_40));
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x38) = local_28;
    *(undefined4 *)(param_2 + 0x28) = local_38;
    *(undefined4 *)(param_2 + 0x2c) = uStack_34;
    *(undefined4 *)(param_2 + 0x30) = uStack_30;
    *(undefined4 *)(param_2 + 0x34) = uStack_2c;
    _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__path__StripPrefixError_GT__GT_17h7b85c5c873696979E
              (&local_50);
                    /* try { // try from 00539a86 to 00539a96 has its CatchHandler @ 00539af7 */
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00807948)
              (&local_50,param_3,param_4);
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
  }
  _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h0b23a5e9f361e5bfE
            (param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = local_50;
  *(undefined4 *)(param_2 + 0x18) = local_38;
  *(undefined4 *)(param_2 + 0x1c) = uStack_34;
  *(undefined4 *)(param_2 + 0x20) = uStack_30;
  *(undefined4 *)(param_2 + 0x24) = uStack_2c;
  (*(code *)PTR_memcpy_008074c0)(param_1,param_2,0xa0);
  return param_1;
}