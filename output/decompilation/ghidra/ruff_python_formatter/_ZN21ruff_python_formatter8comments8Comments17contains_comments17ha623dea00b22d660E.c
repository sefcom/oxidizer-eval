ulong _ZN21ruff_python_formatter8comments8Comments17contains_comments17ha623dea00b22d660E
                (long *param_1,ulong param_2)

{
  long lVar1;
  long *local_20;
  ulong local_18;
  
  local_20 = (long *)0x3d;
  local_18 = param_2;
  lVar1 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hfe322db32d3ddec8E
                    (*param_1 + 0x40,&local_20);
  if (lVar1 != 0) {
    return 1;
  }
  local_18 = local_18 & 0xffffffffffffff00;
  local_20 = param_1;
  _ZN15ruff_python_ast9generated10AnyNodeRef18visit_source_order17h412f3303938f1097E
            (param_2,&local_20);
  return local_18 & 0xff;
}