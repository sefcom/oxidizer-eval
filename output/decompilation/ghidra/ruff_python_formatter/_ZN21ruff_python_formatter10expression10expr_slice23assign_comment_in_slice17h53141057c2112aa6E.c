char _ZN21ruff_python_formatter10expression10expr_slice23assign_comment_in_slice17h53141057c2112aa6E
               (uint param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  uint local_48 [3];
  uint local_3c;
  char local_34;
  undefined local_30 [32];
  
  _ZN21ruff_python_formatter10expression10expr_slice11find_colons17h3aedadfd05f6e796E
            (local_30,param_2,param_3,*param_4,param_4[1],*(undefined8 *)(param_4 + 2),
             *(undefined8 *)(param_4 + 4));
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hced0e0929e8b8fb2E(local_48,local_30);
  if (param_1 < local_48[0]) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
    if (local_34 != 'Z') {
      return '\x02' - (param_1 < local_3c);
    }
  }
  return cVar1;
}