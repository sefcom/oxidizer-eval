undefined  [16]
_ZN21ruff_python_formatter9statement11stmt_assign37format_interpolated_string_assignment17he86b8d2eeb7a9be6E
          (long param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  long local_28;
  long *local_20;
  
  if (param_1 == 3) {
    uVar2 = 1;
  }
  else {
    uVar3 = 2;
    if ((param_1 != 2) || (*param_2 < -0x7ffffffffffffffe)) goto LAB_0041c27a;
    uVar2 = 0;
  }
  local_28 = param_1;
  local_20 = param_2;
  cVar1 = _ZN21ruff_python_formatter5other19interpolated_string24InterpolatedStringLayout33from_interpolated_string_elements17h05f33683f43ba465E
                    (param_2[1],param_2[2],*param_3,param_3[1]);
  uVar3 = 2;
  if ((cVar1 != '\0') &&
     (cVar1 = (*(code *)
                PTR__ZN111__LT_ruff_python_ast__expression__StringLike_u20_as_u20_ruff_python_formatter__string__StringLikeExtensions_GT_12is_multiline17h5df9e50e5280e4acE_006bdd38
              )(&local_28,param_3), uVar3 = uVar2, cVar1 != '\0')) {
    uVar3 = 2;
  }
LAB_0041c27a:
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}