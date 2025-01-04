/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __rustcall
uu_seq::numberparse::is_minus_zero_float(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char local_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  uVar3 = core::char::methods::encode_utf8_raw(0x2d,local_48);
  cVar1 = core::slice::_<impl[T]>::starts_with(param_1,param_2,uVar3,1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    local_38 = _DAT_0011b888;
    uStack_30 = _UNK_0011b890;
    local_48[0] = s__0011b878[0];
    local_48[1] = s__0011b878[1];
    local_48[2] = s__0011b878[2];
    local_48[3] = s__0011b878[3];
    uStack_44 = _UNK_0011b87c;
    uStack_40 = _UNK_0011b880;
    uStack_3c = _UNK_0011b884;
    local_28 = 0;
                    /* try { // try from 001cda5d to 001cda68 has its CatchHandler @ 001cda83 */
    uVar2 = bigdecimal::impl_cmp::_<impl_core::cmp::PartialEq_for_bigdecimal::BigDecimal>::eq
                      (param_3,local_48);
    core::ptr::drop_in_place<bigdecimal::BigDecimal>(local_48);
  }
  return uVar2;
}