void _ZN7uu_expr11syntax_tree6Parser4next17he96b47f70d6fcb97E(undefined8 *param_1,long *param_2)

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
      _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                (uVar4,uVar2,&PTR_s_src_uu_expr_src_syntax_tree_rs_002a30d0);
    }
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hd7cff6a23e23a786E
              (param_1 + 1,*(undefined8 *)(*param_2 + uVar4 * 0x10),
               *(undefined8 *)(*param_2 + 8 + uVar4 * 0x10));
    uVar3 = 1;
  }
  *param_1 = uVar3;
  return;
}