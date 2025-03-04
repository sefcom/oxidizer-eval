undefined8 *
_ZN7uu_head5parse14parse_obsolete17ha14ffc23c3e4c861E(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  int extraout_EDX;
  int iVar2;
  ulong uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [12];
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38;
  
  local_58 = param_2 + param_3;
  local_50 = 0;
  local_60 = param_2;
  _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
            (&local_60);
  if (extraout_EDX == 0x2d) {
    auVar6 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
                       (&local_60);
    local_40 = auVar6._0_8_;
    if (auVar6._8_4_ - 0x30U < 10) {
      auVar4 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
                         (&local_60);
      if (auVar4._8_4_ == 0x110000) {
        uVar3 = 0;
      }
      else {
        uVar3 = auVar4._8_8_ & 0xffffffff;
        if (auVar4._8_4_ - 0x30U < 10) {
          auVar5 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
                             (&local_60);
          iVar2 = auVar5._8_4_;
          local_40 = auVar4._0_8_;
          while (iVar2 != 0x110000) {
            uVar1 = auVar5._0_8_;
            uVar3 = auVar5._8_8_ & 0xffffffff;
            if (9 < auVar5._8_4_ - 0x30U) goto LAB_001be35b;
            auVar5 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
                               (&local_60);
            local_40 = uVar1;
            iVar2 = auVar5._8_4_;
          }
          uVar3 = 0;
        }
      }
LAB_001be35b:
      local_48 = 1;
      local_38 = 0;
      auVar4 = _ZN4core3str6traits117__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeInclusive_LT_usize_GT__GT_5index17h3fe2ad0e36dabac9E
                         (&local_48,param_2,param_3);
      _ZN7uu_head5parse17process_num_block17h8e5bdc2257d4c6b6E
                (param_1,auVar4._0_8_,auVar4._8_8_,uVar3,&local_60);
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}