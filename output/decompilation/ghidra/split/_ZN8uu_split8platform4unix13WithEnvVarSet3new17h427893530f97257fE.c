void _ZN8uu_split8platform4unix13WithEnvVarSet3new17h427893530f97257fE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  _ZN3std3env3var17hb56eac25d1451addE(&local_50,&DAT_0011a744,4);
                    /* try { // try from 0016bc98 to 0016bcb8 has its CatchHandler @ 0016bce6 */
  _ZN3std3env7set_var17h54bee5c6406baad8E(param_2,param_3);
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hfadfb68a35ae07bfE
            (&local_30,&DAT_0011a744,4);
  param_1[6] = local_20;
  param_1[4] = local_30;
  param_1[5] = uStack_28;
  param_1[2] = local_40;
  param_1[3] = uStack_38;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}