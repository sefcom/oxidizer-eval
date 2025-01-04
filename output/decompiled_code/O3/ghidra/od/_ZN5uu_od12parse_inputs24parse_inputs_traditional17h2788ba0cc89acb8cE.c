void __rustcall
uu_od::parse_inputs::parse_inputs_traditional(undefined8 *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 *local_a8;
  code *pcStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  switch(param_3) {
  case 0:
    puVar2 = (undefined4 *)::alloc::alloc::Global::alloc_impl();
    if (puVar2 != (undefined4 *)0x0) {
                    /* try { // try from 001d2e3c to 001d2e54 has its CatchHandler @ 001d30ae */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_90,"-",1);
      local_98 = local_80;
      *(undefined **)(puVar2 + 4) = local_80;
      *puVar2 = (undefined4)local_90;
      puVar2[1] = local_90._4_4_;
      puVar2[2] = (undefined4)uStack_88;
      puVar2[3] = uStack_88._4_4_;
      ::alloc::slice::hack::into_vec(param_1,puVar2,1);
      param_1[4] = 2;
      return;
    }
                    /* WARNING: Subroutine does not return */
    ::alloc::alloc::handle_alloc_error(8,0x18);
  case 1:
    parse_offset_operand(&local_a8,*(undefined8 *)param_2,*(undefined8 *)((long)param_2 + 8));
    if (local_a8 == (undefined8 *)0x0) {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_90,"-",1);
      uVar3 = 0;
      param_2 = pcStack_a0;
    }
    else {
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_90,param_2,(undefined8 *)((long)param_2 + 0x10));
      uVar3 = 2;
    }
    param_1[2] = local_80;
    *param_1 = local_90;
    param_1[1] = uStack_88;
    param_1[3] = param_2;
    param_1[4] = uVar3;
    return;
  case 2:
    uVar3 = *(undefined8 *)param_2;
    uVar1 = *(undefined8 *)((long)param_2 + 8);
    parse_offset_operand(&local_50,uVar3,uVar1);
    parse_offset_operand
              (&local_60,*(undefined8 *)((long)param_2 + 0x10),*(undefined8 *)((long)param_2 + 0x18)
              );
    if (local_50 == 0 && local_60 == 0) {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1,"-",1);
      param_1[3] = local_48;
      param_1[4] = 1;
      param_1[5] = local_58;
      return;
    }
    if (local_60 == 0) {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1,uVar3,uVar1);
      param_1[3] = local_58;
      param_1[4] = 0;
      return;
    }
    break;
  case 3:
    parse_offset_operand
              (&local_40,*(undefined8 *)((long)param_2 + 0x10),*(undefined8 *)((long)param_2 + 0x18)
              );
    parse_offset_operand
              (&local_30,*(undefined8 *)((long)param_2 + 0x20),*(undefined8 *)((long)param_2 + 0x28)
              );
    if (local_40 == 0) {
      if (local_30 == 0) {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec
                  (param_1,*(undefined8 *)param_2,*(undefined8 *)((long)param_2 + 8));
        param_1[3] = local_38;
        param_1[4] = 1;
        param_1[5] = local_28;
        return;
      }
      local_a8 = (undefined8 *)((long)param_2 + 0x20);
      local_90 = &PTR_s_invalid_label__00241ee0;
      goto LAB_001d2fcb;
    }
    break;
  default:
    local_a8 = (undefined8 *)((long)param_2 + 0x30);
    local_90 = &PTR_s_too_many_inputs_after___traditio_00241ef0;
    goto LAB_001d2fcb;
  }
  local_a8 = (undefined8 *)((long)param_2 + 0x10);
  local_90 = &PTR_DAT_00241ed0;
LAB_001d2fcb:
  pcStack_a0 = _<&T_as_core::fmt::Display>::fmt;
  uStack_88 = 1;
  local_70 = 0;
  local_78 = 1;
  local_80 = (undefined *)&local_a8;
  core::option::Option<T>::map_or_else(param_1,&local_90);
  param_1[4] = 3;
  return;
}