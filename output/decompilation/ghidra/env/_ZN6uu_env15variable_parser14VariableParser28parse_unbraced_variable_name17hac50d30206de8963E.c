void _ZN6uu_env15variable_parser14VariableParser28parse_unbraced_variable_name17hac50d30206de8963E
               (long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined auVar3 [16];
  long local_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  long local_28;
  
  lVar1 = *(long *)(param_2 + 0x20);
  _ZN6uu_env15variable_parser14VariableParser25check_variable_name_start17hd163d333f3df61ddE
            (&local_48);
  if ((int)local_48 == 0xc) {
    uVar2 = _ZN6uu_env15variable_parser14VariableParser16get_current_char17h2461897ac15abcf2E
                      (param_2);
    while ((uVar2 != 0x110000 &&
           (((uVar2 == 0x5f || (uVar2 - 0x30 < 10)) || ((uVar2 & 0x1fffdf) - 0x41 < 0x1a))))) {
      _ZN6uu_env15variable_parser14VariableParser8skip_one17hc689cd00633feaf8E(&local_48,param_2);
      if ((int)local_48 != 0xc) goto LAB_00171e7f;
      uVar2 = _ZN6uu_env15variable_parser14VariableParser16get_current_char17h2461897ac15abcf2E
                        (param_2);
    }
    lStack_40 = *(long *)(param_2 + 0x20);
    if (lStack_40 == lVar1) {
      *(undefined4 *)param_1 = 5;
      param_1[1] = lVar1;
    }
    else {
      local_48 = lVar1;
      auVar3 = (*(code *)
                 PTR__ZN6uu_env13string_parser12StringParser9substring17h41e33e0b14cc6cb7E_00219378)
                         (param_2,&local_48);
      *(undefined (*) [16])(param_1 + 1) = auVar3;
      *(undefined4 *)param_1 = 0xc;
    }
  }
  else {
LAB_00171e7f:
    param_1[4] = local_28;
    param_1[2] = local_38;
    param_1[3] = lStack_30;
    *param_1 = local_48;
    param_1[1] = lStack_40;
  }
  return;
}