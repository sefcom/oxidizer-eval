void _ZN21ruff_python_formatter9statement6clause12ClauseHeader5visit17ha21c76b62b7c1677E
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = 
  PTR__ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1da68d87fdef299eE_006bd858
  ;
  switch(param_1) {
  case 3:
    if (*(long *)(param_2 + 0x60) != 0) {
      _ZN21ruff_python_formatter9statement6clause12ClauseHeader5range28__u7b__u7b_closure_u7d__u7d_17h457312b2172e5951E
                (param_3,0x58);
    }
    if (*(long *)(param_2 + 0x68) == 0) {
      return;
    }
    _ZN21ruff_python_formatter9statement6clause12ClauseHeader5range28__u7b__u7b_closure_u7d__u7d_17h457312b2172e5951E
              (param_3,0x4e);
    return;
  case 4:
    if (*(long *)(param_2 + 0x68) != 0) {
      _ZN21ruff_python_formatter9statement6clause12ClauseHeader5range28__u7b__u7b_closure_u7d__u7d_17h457312b2172e5951E
                (param_3,0x58);
    }
    _ZN21ruff_python_formatter9statement6clause12ClauseHeader5range28__u7b__u7b_closure_u7d__u7d_17h457312b2172e5951E
              (param_3,0x4f,*(undefined8 *)(param_2 + 0x58));
    param_2 = *(long *)(param_2 + 0x70);
    goto joined_r0x00418271;
  case 5:
  case 0xd:
    param_2 = *(long *)(param_2 + 0x30);
    break;
  case 6:
    if (*(int *)(param_2 + 0x18) == 0x21) {
      return;
    }
    param_2 = param_2 + 0x18;
    break;
  default:
    goto switchD_004180b7_caseD_7;
  case 8:
    param_2 = *(long *)(param_2 + 0x48);
    goto joined_r0x00418271;
  case 10:
    param_2 = *(long *)(param_2 + 0x18);
    break;
  case 0xb:
    switch(*(ulong *)(param_2 + 0x18) ^ 0x8000000000000000) {
    case 0:
      lVar3 = param_2 + 0x20;
      uVar2 = 0x3f;
      break;
    case 1:
      lVar3 = param_2 + 0x20;
      uVar2 = 0x40;
      break;
    case 2:
      lVar3 = param_2 + 0x20;
      uVar2 = 0x41;
      break;
    default:
      lVar3 = param_2 + 0x18;
      uVar2 = 0x42;
      break;
    case 4:
      lVar3 = param_2 + 0x20;
      uVar2 = 0x43;
      break;
    case 5:
      lVar3 = param_2 + 0x20;
      uVar2 = 0x44;
      break;
    case 6:
      lVar3 = param_2 + 0x20;
      uVar2 = 0x45;
      break;
    case 7:
      lVar3 = param_2 + 0x20;
      uVar2 = 0x46;
    }
    _ZN21ruff_python_formatter9statement6clause12ClauseHeader5range28__u7b__u7b_closure_u7d__u7d_17h457312b2172e5951E
              (param_3,uVar2,lVar3);
    param_2 = *(long *)(param_2 + 0x88);
joined_r0x00418271:
    if (param_2 == 0) {
switchD_004180b7_caseD_7:
      return;
    }
    break;
  case 0xc:
    uVar2 = (*(code *)
              PTR__ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1da68d87fdef299eE_006bd858
            )(*(undefined8 *)(param_2 + 0x30));
    _ZN21ruff_python_formatter9statement6clause12ClauseHeader5range28__u7b__u7b_closure_u7d__u7d_17h457312b2172e5951E
              (param_3,uVar2);
    uVar2 = (*(code *)puVar1)(*(undefined8 *)(param_2 + 0x38));
    goto LAB_00418279;
  case 0xe:
    if (*(long *)(param_2 + 0x10) != 0) {
      lVar4 = *(long *)(param_2 + 0x10) * 0x68;
      lVar3 = *(long *)(param_2 + 8);
      do {
        _ZN21ruff_python_formatter9statement6clause12ClauseHeader5range28__u7b__u7b_closure_u7d__u7d_17h457312b2172e5951E
                  (param_3,0x54,lVar3);
        lVar4 = lVar4 + -0x68;
        lVar3 = lVar3 + 0x68;
      } while (lVar4 != 0);
    }
    goto switchD_004180b7_caseD_7;
  }
  uVar2 = (*(code *)
            PTR__ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1da68d87fdef299eE_006bd858
          )(param_2);
LAB_00418279:
  _ZN21ruff_python_formatter9statement6clause12ClauseHeader5range28__u7b__u7b_closure_u7d__u7d_17h457312b2172e5951E
            (param_3,uVar2);
  return;
}