void _ZN6uu_env14split_iterator13SplitIterator19substitute_variable17hf281b653692e3534E
               (int *param_1,long param_2)

{
  int local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_48[0] = param_2 + 0x18;
  (*(code *)
    PTR__ZN6uu_env15variable_parser14VariableParser14parse_variable17h7989a880208e7e71E_00219320)
            (&local_70,local_48);
  if (local_70 == 0xc) {
    local_38 = local_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    local_48[1] = 0x8000000000000000;
    _ZN3std3env6var_os17h7920fba9b28ef82dE(&local_70,local_48 + 1);
    _ZN6uu_env15string_expander14StringExpander10put_string17he3009d358d45b1afE(param_2,&local_70);
    *param_1 = 0xc;
    _ZN4core3ptr70drop_in_place_LT_alloc__borrow__Cow_LT_std__ffi__os_str__OsStr_GT__GT_17hf18cf8a450edb385E
              (CONCAT44(iStack_6c,local_70),CONCAT44(uStack_64,local_68));
  }
  else {
    *param_1 = local_70;
    param_1[1] = iStack_6c;
    *(ulong *)(param_1 + 2) = CONCAT44(uStack_64,local_68);
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_5c,uStack_60);
    *(undefined8 *)(param_1 + 6) = local_58;
    *(undefined8 *)(param_1 + 8) = uStack_50;
  }
  return;
}