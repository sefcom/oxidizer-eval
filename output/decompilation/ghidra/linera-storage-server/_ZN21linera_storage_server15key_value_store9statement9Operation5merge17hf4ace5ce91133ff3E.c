long _ZN21linera_storage_server15key_value_store9statement9Operation5merge17hf4ace5ce91133ff3E
               (long *param_1,undefined4 param_2,undefined param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_10c;
  undefined **local_108;
  long lStack_100;
  undefined4 **local_f8;
  long *plStack_f0;
  long local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long *local_d8;
  long *local_d0;
  undefined **local_c0;
  long lStack_b8;
  long local_b0;
  undefined **local_a8;
  long lStack_a0;
  long local_98;
  undefined **local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  undefined8 uStack_68;
  undefined local_60;
  undefined7 uStack_5f;
  undefined **local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  undefined8 uStack_30;
  undefined4 *local_28;
  undefined *local_20;
  
  local_10c = param_2;
  plStack_f0 = param_1;
  switch(param_2) {
  case 1:
    if ((*param_1 != -0x7ffffffffffffffc) && (*param_1 == -0x8000000000000000)) {
LAB_0055fa01:
      lVar1 = _ZN5prost8encoding5bytes5merge17h40c664f4b5f9d636E(param_3,param_1 + 1,*param_4);
      return lVar1;
    }
    local_c0 = (undefined **)0x0;
    lStack_b8 = 1;
    local_b0 = 0;
                    /* try { // try from 0055f93f to 0055f94e has its CatchHandler @ 0055fd24 */
    lVar1 = _ZN5prost8encoding5bytes5merge17h40c664f4b5f9d636E(param_3,&local_c0,*param_4);
    local_108 = local_c0;
    lStack_100 = lStack_b8;
    local_f8 = (undefined4 **)local_b0;
    if (lVar1 == 0) {
      _ZN4core3ptr109drop_in_place_LT_core__option__Option_LT_linera_storage_server__key_value_store__statement__Operation_GT__GT_17h72d135400ed9b5c0E
                (param_1);
      *param_1 = -0x8000000000000000;
      param_1[1] = (long)local_c0;
      param_1[2] = lStack_b8;
      param_1[3] = local_b0;
      return 0;
    }
    break;
  case 2:
    if ((*param_1 != -0x7ffffffffffffffc) && (*param_1 == -0x7fffffffffffffff)) {
      lVar1 = _ZN5prost8encoding7message5merge17h06bf9b22795815f0E(param_3,param_1 + 1,param_4);
      return lVar1;
    }
    local_58 = (undefined **)0x0;
    lStack_50 = 1;
    local_48 = 0;
    lStack_40 = 0;
    local_38 = 1;
    uStack_30 = 0;
                    /* try { // try from 0055fbb4 to 0055fbc6 has its CatchHandler @ 0055fd0c */
    lVar1 = _ZN5prost8encoding7message5merge17h06bf9b22795815f0E(param_3,&local_58,param_4);
    local_108 = local_58;
    lStack_100 = lStack_50;
    local_f8 = (undefined4 **)local_48;
    plStack_f0 = (long *)lStack_40;
    local_e8 = local_38;
    uStack_e0 = (undefined4)uStack_30;
    uStack_dc = uStack_30._4_4_;
    local_d8 = param_1;
    if (lVar1 != 0) {
      _ZN4core3ptr180drop_in_place_LT_linera_storage_server__key_value_store__statement__Operation__merge_LT__RF_mut_u20__RF_mut_u20_tonic__codec__buffer__DecodeBuf_GT____u7b__u7b_closure_u7d__u7d__GT_17hd38420fa22a7a036E
                (&local_108);
      return lVar1;
    }
    _ZN4core3ptr109drop_in_place_LT_core__option__Option_LT_linera_storage_server__key_value_store__statement__Operation_GT__GT_17h72d135400ed9b5c0E
              (param_1);
    *param_1 = -0x7fffffffffffffff;
    param_1[1] = (long)local_58;
    param_1[2] = lStack_50;
    param_1[3] = local_48;
    param_1[4] = lStack_40;
    param_1[5] = local_38;
    param_1[6] = uStack_30;
    return 0;
  case 3:
    if ((*param_1 != -0x7ffffffffffffffc) && (-0x7ffffffffffffffd < *param_1)) {
      lVar1 = _ZN5prost8encoding7message5merge17h514578097d0e5b6dE(param_3,param_1,param_4);
      return lVar1;
    }
    local_90 = (undefined **)0x0;
    lStack_88 = 1;
    local_80 = 0;
    lStack_78 = 0;
    local_70 = 1;
    uStack_68 = 0;
    local_60 = 0;
                    /* try { // try from 0055faaa to 0055fabc has its CatchHandler @ 0055fd4e */
    lVar1 = _ZN5prost8encoding7message5merge17h514578097d0e5b6dE(param_3,&local_90,param_4);
    local_108 = local_90;
    lStack_100 = lStack_88;
    local_f8 = (undefined4 **)local_80;
    plStack_f0 = (long *)lStack_78;
    local_e8 = local_70;
    uStack_e0 = (undefined4)uStack_68;
    uStack_dc = uStack_68._4_4_;
    local_d8 = (long *)CONCAT71(uStack_5f,local_60);
    local_d0 = param_1;
    if (lVar1 != 0) {
      _ZN4core3ptr180drop_in_place_LT_linera_storage_server__key_value_store__statement__Operation__merge_LT__RF_mut_u20__RF_mut_u20_tonic__codec__buffer__DecodeBuf_GT____u7b__u7b_closure_u7d__u7d__GT_17h6efae002f73bbcbfE
                (&local_108);
      return lVar1;
    }
    _ZN4core3ptr109drop_in_place_LT_core__option__Option_LT_linera_storage_server__key_value_store__statement__Operation_GT__GT_17h72d135400ed9b5c0E
              (param_1);
    param_1[6] = CONCAT71(uStack_5f,local_60);
    param_1[4] = local_70;
    param_1[5] = uStack_68;
    param_1[2] = local_80;
    param_1[3] = lStack_78;
    *param_1 = (long)local_90;
    param_1[1] = lStack_88;
    return 0;
  case 4:
    if ((*param_1 != -0x7ffffffffffffffc) && (*param_1 == -0x7ffffffffffffffd)) goto LAB_0055fa01;
    local_a8 = (undefined **)0x0;
    lStack_a0 = 1;
    local_98 = 0;
                    /* try { // try from 0055fb32 to 0055fb41 has its CatchHandler @ 0055fd39 */
    lVar1 = _ZN5prost8encoding5bytes5merge17h40c664f4b5f9d636E(param_3,&local_a8,*param_4);
    local_108 = local_a8;
    lStack_100 = lStack_a0;
    local_f8 = (undefined4 **)local_98;
    if (lVar1 == 0) {
      _ZN4core3ptr109drop_in_place_LT_core__option__Option_LT_linera_storage_server__key_value_store__statement__Operation_GT__GT_17h72d135400ed9b5c0E
                (param_1);
      *param_1 = -0x7ffffffffffffffd;
      param_1[1] = (long)local_a8;
      param_1[2] = lStack_a0;
      param_1[3] = local_98;
      return 0;
    }
    break;
  default:
    local_28 = &local_10c;
    local_20 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_00b8ece0
    ;
    local_108 = &PTR_DAT_00b199e8;
    lStack_100 = 1;
    local_e8 = 0;
    local_f8 = &local_28;
    plStack_f0 = (long *)0x1;
    uVar2 = (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00b8e920)
                      (&local_108,&PTR_DAT_00b199f8);
                    /* catch() { ... } // from try @ 0055fbb4 with catch @ 0055fd0c */
    _ZN4core3ptr69drop_in_place_LT_linera_storage_server__key_value_store__KeyValue_GT_17heee40027093b97abE
              (&local_58);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar2);
  }
  _ZN4core3ptr180drop_in_place_LT_linera_storage_server__key_value_store__statement__Operation__merge_LT__RF_mut_u20__RF_mut_u20_tonic__codec__buffer__DecodeBuf_GT____u7b__u7b_closure_u7d__u7d__GT_17ha6351413b077b98eE
            (&local_108);
  return lVar1;
}