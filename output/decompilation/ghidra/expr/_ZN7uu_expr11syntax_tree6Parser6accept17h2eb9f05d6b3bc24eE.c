ulong _ZN7uu_expr11syntax_tree6Parser6accept17h2eb9f05d6b3bc24eE(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulong uVar3;
  
  uVar1 = param_1[2];
  uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),3);
  if (uVar1 < (ulong)param_1[1]) {
    uVar2 = _ZN7uu_expr11syntax_tree6Parser8parse_op28__u7b__u7b_closure_u7d__u7d_17hae6674a434b8f783E
                      (param_2,*(undefined8 *)(*param_1 + uVar1 * 0x10),
                       *(undefined8 *)(*param_1 + 8 + uVar1 * 0x10));
    if ((char)uVar2 != '\x03') {
      param_1[2] = uVar1 + 1;
      uVar3 = (ulong)uVar2;
    }
  }
  return uVar3 & 0xffffffff;
}