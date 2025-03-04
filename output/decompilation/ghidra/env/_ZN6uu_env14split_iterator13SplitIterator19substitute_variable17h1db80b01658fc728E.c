/* WARNING: Type propagation algorithm not settling */

void _ZN6uu_env14split_iterator13SplitIterator19substitute_variable17h1db80b01658fc728E
               (int *param_1,long param_2)

{
  int local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  undefined8 uStack_50;
  long local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_48[0] = param_2 + 0x18;
  _ZN6uu_env15variable_parser14VariableParser14parse_variable17h1713cd6810b8ef74E
            (&local_70,local_48);
  if (local_70 == 8) {
    local_38 = local_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    local_48[1] = 0x8000000000000000;
    _ZN3std3env6var_os17h9e209a112117a791E(&local_70,local_48 + 1);
    if (CONCAT44(iStack_6c,local_70) == -0x8000000000000000) {
      if (local_58 != 0) {
                    /* try { // try from 001d9843 to 001d987d has its CatchHandler @ 001d989c */
        _ZN6uu_env15string_expander14StringExpander17put_native_string17h4ed77b672753a87eE
                  (param_2,local_58,uStack_50);
      }
    }
    else {
      _ZN6uu_env15string_expander14StringExpander10put_string17h88bd9b4cfb26db83E(param_2,&local_70)
      ;
    }
    *param_1 = 8;
    _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_std__ffi__os_str__OsString_GT__GT_17h424bf7a51d52b228E
              (&local_70);
  }
  else {
    *param_1 = local_70;
    param_1[1] = iStack_6c;
    *(ulong *)(param_1 + 2) = CONCAT44(uStack_64,local_68);
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_5c,uStack_60);
    *(long *)(param_1 + 6) = local_58;
    *(undefined8 *)(param_1 + 8) = uStack_50;
  }
  return;
}