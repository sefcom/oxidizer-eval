void __rustcall uu_expr::syntax_tree::Parser::next(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  if (uVar4 < uVar2) {
    param_2[2] = uVar4 + 1;
    puVar1 = (undefined8 *)(*param_2 + uVar4 * 0x10);
    uVar3 = puVar1[1];
    param_1[1] = *puVar1;
    param_1[2] = uVar3;
    uVar3 = 7;
  }
  else {
    uVar4 = uVar4 - 1;
    if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar4,uVar2,&PTR_s_src_uu_expr_src_syntax_tree_rs_002a3030);
    }
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec
              (param_1 + 1,*(undefined8 *)(*param_2 + uVar4 * 0x10),
               *(undefined8 *)(*param_2 + 8 + uVar4 * 0x10));
    uVar3 = 1;
  }
  *param_1 = uVar3;
  return;
}