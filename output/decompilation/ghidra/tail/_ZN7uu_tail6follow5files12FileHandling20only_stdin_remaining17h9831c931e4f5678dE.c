bool _ZN7uu_tail6follow5files12FileHandling20only_stdin_remaining17h9831c931e4f5678dE(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x30) == 1) {
    lVar1 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h27fac6d98989e1f4E
                      (param_1 + 0x18,"-cannot open \'\' for reading",1);
    return lVar1 != 0;
  }
  return false;
}