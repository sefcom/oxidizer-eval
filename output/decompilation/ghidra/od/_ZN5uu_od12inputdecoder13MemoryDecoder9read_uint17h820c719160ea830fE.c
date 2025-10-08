ulong _ZN5uu_od12inputdecoder13MemoryDecoder9read_uint17h820c719160ea830fE
                (long param_1,char param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong extraout_RDX;
  undefined auVar5 [16];
  undefined8 local_50;
  undefined8 *local_48;
  undefined *local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_50 = param_4;
  switch(param_4) {
  case 1:
    if (param_3 < *(ulong *)(param_1 + 0x10)) {
      return (ulong)*(byte *)(*(long *)(param_1 + 8) + param_3);
    }
    break;
  case 2:
    auVar5 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h3318d31b00465fccE
                       (param_3,param_3 + 2,*(undefined8 *)(param_1 + 8),
                        *(undefined8 *)(param_1 + 0x10),
                        &PTR_s_src_uu_od_src_inputdecoder_rs_00202308);
    if ((param_2 != '\0') && (param_2 == '\x01')) {
      uVar2 = _ZN61__LT_byteorder__BigEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u1617h6f160655192c4847E
                        ();
      return (ulong)uVar2;
    }
    uVar2 = _ZN64__LT_byteorder__LittleEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u1617h373d52a990770211E
                      (auVar5._0_8_,auVar5._8_8_);
    return (ulong)uVar2;
  default:
    local_48 = &local_50;
    local_40 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0020ac70
    ;
    local_38 = &PTR_s_Invalid_byte_size__002022e0;
    local_30 = 1;
    local_18 = 0;
    local_28 = &local_48;
    local_20 = 1;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_0020a9b0)
              (&local_38,&PTR_s_src_uu_od_src_inputdecoder_rs_00202350);
    param_3 = extraout_RDX;
    break;
  case 4:
    auVar5 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h3318d31b00465fccE
                       (param_3,param_3 + 4,*(undefined8 *)(param_1 + 8),
                        *(undefined8 *)(param_1 + 0x10),
                        &PTR_s_src_uu_od_src_inputdecoder_rs_00202320);
    if ((param_2 != '\0') && (param_2 == '\x01')) {
      uVar3 = _ZN61__LT_byteorder__BigEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u3217heb7f0e5942a13c7eE
                        ();
      return (ulong)uVar3;
    }
    uVar3 = _ZN64__LT_byteorder__LittleEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u3217ha761c22cf500ee99E
                      (auVar5._0_8_,auVar5._8_8_);
    return (ulong)uVar3;
  case 8:
    auVar5 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h3318d31b00465fccE
                       (param_3,param_3 + 8,*(undefined8 *)(param_1 + 8),
                        *(undefined8 *)(param_1 + 0x10),
                        &PTR_s_src_uu_od_src_inputdecoder_rs_00202338);
    if ((param_2 != '\0') && (param_2 == '\x01')) {
      uVar4 = _ZN61__LT_byteorder__BigEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u6417h4e06a29913649185E
                        ();
      return uVar4;
    }
    uVar4 = _ZN64__LT_byteorder__LittleEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u6417hcc551e0560558125E
                      (auVar5._0_8_,auVar5._8_8_);
    return uVar4;
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0020a9f0)(param_3);
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}