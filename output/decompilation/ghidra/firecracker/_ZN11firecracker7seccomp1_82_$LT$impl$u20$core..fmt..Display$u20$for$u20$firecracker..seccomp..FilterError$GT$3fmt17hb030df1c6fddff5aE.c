void _ZN11firecracker7seccomp1_82__LT_impl_u20_core__fmt__Display_u20_for_u20_firecracker__seccomp__FilterError_GT_3fmt17hb030df1c6fddff5aE
               (byte *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if ((byte)(*param_1 - 0x12) < 3) {
    lVar1 = (ulong)*param_1 - 0x11;
  }
                    /* WARNING: Could not emulate address calculation at 0x0025d12c */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00132c1c + *(int *)(&DAT_00132c1c + lVar1 * 4)))
            (param_2,&DAT_00132c1c + *(int *)(&DAT_00132c1c + lVar1 * 4));
  return;
}