ulong _ZN5uu_od12inputdecoder13MemoryDecoder9read_uint17h33796a139b376ce0E
                (long *param_1,ulong param_2,undefined8 param_3)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  undefined auVar5 [16];
  undefined8 local_50;
  undefined8 *local_48;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_50 = param_3;
  switch(param_3) {
  case 1:
    uVar4 = *(ulong *)(*param_1 + 0x10);
    if (uVar4 <= param_2) {
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(param_2,uVar4,&DAT_00243560);
    }
    uVar4 = (ulong)*(byte *)(*(long *)(*param_1 + 8) + param_2);
    break;
  case 2:
    cVar1 = *(char *)(param_1 + 3);
    auVar5 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h805a03118b26e41eE
                       (param_2,param_2 + 2,*(undefined8 *)(*param_1 + 8),
                        *(undefined8 *)(*param_1 + 0x10),&DAT_00243578);
    if ((cVar1 == '\0') || (cVar1 != '\x01')) {
      uVar2 = _ZN64__LT_byteorder__LittleEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u1617hab4b8969433a088dE
                        (auVar5._0_8_,auVar5._8_8_);
    }
    else {
      uVar2 = _ZN61__LT_byteorder__BigEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u1617h083cd14a218276beE
                        (auVar5._0_8_,auVar5._8_8_);
    }
    uVar4 = (ulong)uVar2;
    break;
  default:
    local_48 = &local_50;
    local_40 = 
    _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
    ;
    local_38 = &DAT_00243550;
    local_30 = 1;
    local_18 = 0;
    local_28 = &local_48;
    local_20 = 1;
                    /* WARNING: Subroutine does not return */
    _ZN4core9panicking9panic_fmt17he12d0d7468628bb4E(&local_38,&DAT_002435c0);
  case 4:
    cVar1 = *(char *)(param_1 + 3);
    auVar5 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h805a03118b26e41eE
                       (param_2,param_2 + 4,*(undefined8 *)(*param_1 + 8),
                        *(undefined8 *)(*param_1 + 0x10),&DAT_00243590);
    if ((cVar1 == '\0') || (cVar1 != '\x01')) {
      uVar3 = _ZN64__LT_byteorder__LittleEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u3217hc43338f212540fbcE
                        (auVar5._0_8_,auVar5._8_8_);
      uVar4 = (ulong)uVar3;
    }
    else {
      uVar3 = _ZN61__LT_byteorder__BigEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u3217habec7fb2f414f2e9E
                        (auVar5._0_8_,auVar5._8_8_);
      uVar4 = (ulong)uVar3;
    }
    break;
  case 8:
    cVar1 = *(char *)(param_1 + 3);
    auVar5 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h805a03118b26e41eE
                       (param_2,param_2 + 8,*(undefined8 *)(*param_1 + 8),
                        *(undefined8 *)(*param_1 + 0x10),&DAT_002435a8);
    if ((cVar1 != '\0') && (cVar1 == '\x01')) {
      uVar4 = _ZN61__LT_byteorder__BigEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u6417hd7b11af3bfea982fE
                        (auVar5._0_8_,auVar5._8_8_);
      return uVar4;
    }
    uVar4 = _ZN64__LT_byteorder__LittleEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u6417h313bb306d5e0a55eE
                      (auVar5._0_8_,auVar5._8_8_);
    return uVar4;
  }
  return uVar4;
}