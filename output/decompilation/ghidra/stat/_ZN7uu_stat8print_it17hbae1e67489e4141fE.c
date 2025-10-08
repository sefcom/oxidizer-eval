void _ZN7uu_stat8print_it17hbae1e67489e4141fE(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*param_1 < -0x7ffffffffffffffa) {
    lVar1 = *param_1 + -0x7fffffffffffffff;
  }
                    /* WARNING: Could not emulate address calculation at 0x00173aef */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0011beec + *(int *)(&DAT_0011beec + lVar1 * 4)))();
  return;
}