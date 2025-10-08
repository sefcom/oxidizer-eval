undefined8
_ZN21ruff_python_formatter10expression13expr_f_string134__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__ExprFString_GT_17needs_parentheses17hacd5263d47a01197E
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 local_20;
  long *local_18;
  
  if (*param_1 < -0x7ffffffffffffffe) {
    return 0;
  }
  local_20 = 2;
  local_18 = param_1;
  cVar1 = (*(code *)
            PTR__ZN111__LT_ruff_python_ast__expression__StringLike_u20_as_u20_ruff_python_formatter__string__StringLikeExtensions_GT_12is_multiline17h5df9e50e5280e4acE_006bdd38
          )(&local_20,param_4);
  if (cVar1 == '\0') {
    cVar1 = _ZN21ruff_python_formatter5other19interpolated_string24InterpolatedStringLayout33from_interpolated_string_elements17h05f33683f43ba465E
                      (param_1[1],param_1[2],*param_4,param_4[1]);
    if (cVar1 == '\0') {
      return 2;
    }
  }
  return 3;
}