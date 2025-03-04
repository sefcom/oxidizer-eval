/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
_ZN6uu_seq11numberparse17is_minus_zero_int17h47d80c233c19cf6cE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar3 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2d,local_48);
  cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h9cb9db4a84f1050bE
                    (param_1,param_2,uVar3,1);
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
                    /* try { // try from 001cd9bd to 001cd9c8 has its CatchHandler @ 001cd9e3 */
    uVar2 = _ZN10bigdecimal8impl_cmp73__LT_impl_u20_core__cmp__PartialEq_u20_for_u20_bigdecimal__BigDecimal_GT_2eq17h0c7161c8c911041fE
                      (param_3,local_48);
    _ZN4core3ptr43drop_in_place_LT_bigdecimal__BigDecimal_GT_17h9ea64fcf6ce46304E(local_48);
  }
  return uVar2;
}