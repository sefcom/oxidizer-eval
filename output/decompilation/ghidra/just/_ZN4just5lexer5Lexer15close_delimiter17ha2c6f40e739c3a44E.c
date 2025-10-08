void _ZN4just5lexer5Lexer15close_delimiter17ha2c6f40e739c3a44E
               (long param_1,long param_2,char param_3)

{
  long lVar1;
  undefined8 local_68;
  undefined8 local_60;
  char local_58;
  char local_57;
  
  if (*(long *)(param_2 + 0x40) == 0) {
    local_60 = CONCAT71(local_60._1_7_,param_3);
    local_68 = 0x8000000000000036;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x40) + -1;
    *(long *)(param_2 + 0x40) = lVar1;
    lVar1 = lVar1 * 0x10;
    local_57 = *(char *)(*(long *)(param_2 + 0x38) + lVar1);
    if (local_57 == param_3) {
      *(undefined *)(param_1 + 0x48) = 0x25;
      return;
    }
    local_60 = *(undefined8 *)(*(long *)(param_2 + 0x38) + lVar1 + 8);
    local_68 = 0x800000000000002b;
    local_58 = param_3;
  }
  _ZN4just5lexer5Lexer5error17h92eb8a4dd6b17c78E(param_1,param_2,&local_68);
  return;
}