void _ZN8uu_split8platform4unix13WithEnvVarSet3new17h0ec58cf89e23bdc9E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  _ZN3std3env3var17h9ad1bceb8fc4ff71E(&local_58,&DAT_00117ad4,4);
                    /* try { // try from 001d5a6b to 001d5a93 has its CatchHandler @ 001d5ac2 */
  _ZN3std3env7set_var17h1f8f4c2c764b6cfdE(&DAT_00117ad4,4,param_2,param_3);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha461c13160c52a35E
            (&local_38,&DAT_00117ad4,4);
  param_1[6] = local_28;
  param_1[4] = local_38;
  param_1[5] = uStack_30;
  param_1[2] = local_48;
  param_1[3] = uStack_40;
  *param_1 = local_58;
  param_1[1] = uStack_50;
  return;
}