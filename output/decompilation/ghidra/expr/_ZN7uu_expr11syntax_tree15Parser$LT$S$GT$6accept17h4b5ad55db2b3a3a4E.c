ulong _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_6accept17h4b5ad55db2b3a3a4E
                (long *param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  ulong uVar4;
  
  uVar1 = param_1[2];
  uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8),3);
  if (uVar1 < (ulong)param_1[1]) {
    uVar3 = _ZN73__LT_alloc__string__String_u20_as_u20_core__convert__AsRef_LT_str_GT__GT_6as_ref17h0a9eb36fc0b98c5fE
                      (*(undefined8 *)(*param_1 + 8 + uVar1 * 0x18),
                       *(undefined8 *)(*param_1 + 0x10 + uVar1 * 0x18));
    uVar2 = _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_8parse_op28__u7b__u7b_closure_u7d__u7d_17ha3cd1bd23513af25E
                      (param_2,uVar3);
    if ((char)uVar2 != '\x03') {
      param_1[2] = uVar1 + 1;
      uVar4 = (ulong)uVar2;
    }
  }
  return uVar4 & 0xffffffff;
}