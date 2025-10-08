ulong _ZN21ruff_python_formatter9statement5suite25contains_only_an_ellipsis17hc074c7c945b43356E
                (long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long extraout_RDX;
  undefined local_28 [16];
  
  if ((param_2 == 1) && (*param_1 == -0x7fffffffffffffed)) {
    if (*(int *)param_1[1] == 0x18) {
      local_28 = _ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Stmt_GT__GT_4from17h095e0f7c3429d85dE
                           ();
      _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_7leading17hb31877b14c47a989E
                (param_3 + 0x10,local_28);
      if (extraout_RDX == 0) {
        uVar1 = _ZN21ruff_python_formatter8comments8Comments21has_trailing_own_line17h12c05e0461212723E
                          (param_3,param_1);
        return uVar1 ^ 1;
      }
    }
    return 0;
  }
  return 0;
}