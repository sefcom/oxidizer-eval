void _ZN21ruff_python_formatter8verbatim15suppressed_node17h0a9cb6e07e425e0bE(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*param_1 < -0x7fffffffffffffe8) {
    lVar1 = *param_1 + -0x7fffffffffffffff;
  }
                    /* WARNING: Could not emulate address calculation at 0x003d4bae */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00186974 + *(int *)(&DAT_00186974 + lVar1 * 4)))();
  return;
}