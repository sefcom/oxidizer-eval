undefined4 * __rustcall
uu_od::parse_inputs::parse_inputs(undefined4 *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined local_60 [8];
  undefined8 *local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  (**(code **)(param_3 + 0x18))(local_60);
  pcVar1 = *(code **)(param_3 + 0x20);
                    /* try { // try from 001d2c40 to 001d2cf3 has its CatchHandler @ 001d2ddf */
  cVar4 = (*pcVar1)(param_2,&PTR_s_traditional_00241e48,1);
  if (cVar4 != '\0') {
    parse_inputs_traditional(param_1,local_58,local_50);
    goto LAB_001d2d0d;
  }
  if ((local_50 - 1U < 2) &&
     (cVar4 = (*pcVar1)(param_2,&PTR_s_address_radixread_bytesskip_byte_00241e58,6), cVar4 == '\0'))
  {
    lVar6 = local_50 + -1;
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(lVar6,0,&PTR_s_src_uu_od_src_parse_inputs_rs_00241eb8);
    }
    parse_offset_operand(&local_30,local_58[lVar6 * 2],local_58[lVar6 * 2 + 1]);
    if (local_30 == 0) {
      if (local_50 == 1) {
        uVar2 = *local_58;
        uVar3 = local_58[1];
        local_48 = 0;
        uVar5 = core::char::methods::encode_utf8_raw(0x2b,&local_48);
                    /* try { // try from 001d2d54 to 001d2dde has its CatchHandler @ 001d2ddf */
        cVar4 = core::slice::_<impl[T]>::starts_with(uVar2,uVar3,uVar5,1);
        if (cVar4 == '\0') goto LAB_001d2d88;
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_48,"-",1);
      }
      else {
LAB_001d2d88:
        if (local_50 != 2) goto LAB_001d2cca;
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_48,*local_58,local_58[1]);
      }
      *(undefined8 *)(param_1 + 4) = local_38;
      *param_1 = local_48;
      param_1[1] = uStack_44;
      param_1[2] = uStack_40;
      param_1[3] = uStack_3c;
      *(undefined8 *)(param_1 + 6) = local_28;
      *(undefined8 *)(param_1 + 8) = 0;
      goto LAB_001d2d0d;
    }
  }
LAB_001d2cca:
  if (local_50 == 0) {
    ::alloc::vec::Vec<T,A>::push(local_60);
  }
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_48,local_58,local_58 + local_50 * 2);
  *(undefined8 *)(param_1 + 4) = local_38;
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = uStack_3c;
  *(undefined8 *)(param_1 + 8) = 2;
LAB_001d2d0d:
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(local_60);
  return param_1;
}