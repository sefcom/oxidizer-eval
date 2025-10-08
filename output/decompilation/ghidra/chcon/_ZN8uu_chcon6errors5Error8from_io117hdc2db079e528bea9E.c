void _ZN8uu_chcon6errors5Error8from_io117hdc2db079e528bea9E(undefined4 *param_1)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
                    /* try { // try from 0015cea9 to 0015ceb2 has its CatchHandler @ 0015ceea */
  _ZN50__LT_T_u20_as_u20_core__convert__Into_LT_U_GT__GT_4into17hed2fe8e10411cd2aE(&local_28);
  *(char **)(param_1 + 8) =
       "Getting security context.Invalid security context Error flushing stdout: ";
  *(undefined8 *)(param_1 + 10) = 0x18;
  *(undefined8 *)(param_1 + 2) = local_28;
  *(undefined8 *)(param_1 + 4) = uStack_20;
  *(undefined8 *)(param_1 + 6) = local_18;
  *(undefined8 *)(param_1 + 0xc) = 0x3d00000002;
  *param_1 = 0x11;
  return;
}