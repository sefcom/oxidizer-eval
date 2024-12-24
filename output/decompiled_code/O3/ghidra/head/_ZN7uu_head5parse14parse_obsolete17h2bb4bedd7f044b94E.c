undefined8 * __rustcall
uu_head::parse::parse_obsolete(undefined8 *param_1,long param_2,long param_3)

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
  _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next(&local_60);
  if (extraout_EDX == 0x2d) {
    auVar6 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                       (&local_60);
    local_40 = auVar6._0_8_;
    if (auVar6._8_4_ - 0x30U < 10) {
      auVar4 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                         (&local_60);
      if (auVar4._8_4_ == 0x110000) {
        uVar3 = 0;
      }
      else {
        uVar3 = auVar4._8_8_ & 0xffffffff;
        if (auVar4._8_4_ - 0x30U < 10) {
          auVar5 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                             (&local_60);
          iVar2 = auVar5._8_4_;
          local_40 = auVar4._0_8_;
          while (iVar2 != 0x110000) {
            uVar1 = auVar5._0_8_;
            uVar3 = auVar5._8_8_ & 0xffffffff;
            if (9 < auVar5._8_4_ - 0x30U) goto LAB_001be4eb;
            auVar5 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                               (&local_60);
            local_40 = uVar1;
            iVar2 = auVar5._8_4_;
          }
          uVar3 = 0;
        }
      }
LAB_001be4eb:
      local_48 = 1;
      local_38 = 0;
      auVar4 = core::str::traits::
               _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeInclusive<usize>>
               ::index(&local_48,param_2,param_3);
      process_num_block(param_1,auVar4._0_8_,auVar4._8_8_,uVar3,&local_60);
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}