double _ZN5uu_od12inputdecoder13MemoryDecoder10read_float17hb631d528abcb6236E
                 (long *param_1,long param_2,long param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  undefined auVar6 [16];
  long local_50;
  long *local_48;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_50 = param_3;
  if (param_3 == 2) {
    cVar1 = *(char *)(param_1 + 3);
    auVar6 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h805a03118b26e41eE
                       (param_2,param_2 + 2,*(undefined8 *)(*param_1 + 8),
                        *(undefined8 *)(*param_1 + 0x10),&DAT_002435d8);
    if ((cVar1 == '\0') || (cVar1 != '\x01')) {
      uVar2 = _ZN64__LT_byteorder__LittleEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u1617hab4b8969433a088dE
                        (auVar6._0_8_,auVar6._8_8_);
    }
    else {
      uVar2 = _ZN61__LT_byteorder__BigEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u1617h083cd14a218276beE
                        (auVar6._0_8_,auVar6._8_8_);
    }
    cVar1 = _ZN10std_detect6detect5cache4test17h15354216764ae092E();
    if (cVar1 == '\0') {
      dVar5 = (double)_ZN4half8binary164arch19f16_to_f64_fallback17h99c57f7b07aa0fd1E(uVar2);
      return dVar5;
    }
    fVar4 = (float)_ZN4half8binary164arch3x8619f16_to_f32_x86_f16c17hae4e4afa5bc8fbe3E();
  }
  else {
    if (param_3 != 4) {
      if (param_3 == 8) {
        uVar2 = *(undefined4 *)(param_1 + 3);
        uVar3 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h805a03118b26e41eE
                          (param_2,param_2 + 8,*(undefined8 *)(*param_1 + 8),
                           *(undefined8 *)(*param_1 + 0x10),&DAT_00243608);
        dVar5 = (double)_ZN5uu_od12byteorder_io9ByteOrder8read_f6417hf4139851335640abE(uVar2,uVar3);
        return dVar5;
      }
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
      _ZN4core9panicking9panic_fmt17he12d0d7468628bb4E(&local_38,&DAT_00243620);
    }
    uVar2 = *(undefined4 *)(param_1 + 3);
    uVar3 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h805a03118b26e41eE
                      (param_2,param_2 + 4,*(undefined8 *)(*param_1 + 8),
                       *(undefined8 *)(*param_1 + 0x10),&DAT_002435f0);
    fVar4 = (float)_ZN5uu_od12byteorder_io9ByteOrder8read_f3217hdad6667c13a77c60E(uVar2,uVar3);
  }
  return (double)fVar4;
}