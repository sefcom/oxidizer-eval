ulong __rustcall uu_expr::syntax_tree::Parser::accept(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulong uVar3;
  
  uVar1 = param_1[2];
  uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),3);
  if (uVar1 < (ulong)param_1[1]) {
    uVar2 = parse_op::___closure__
                      (param_2,*(undefined8 *)(*param_1 + uVar1 * 0x10),
                       *(undefined8 *)(*param_1 + 8 + uVar1 * 0x10));
    if ((char)uVar2 != '\x03') {
      param_1[2] = uVar1 + 1;
      uVar3 = (ulong)uVar2;
    }
  }
  return uVar3 & 0xffffffff;
}