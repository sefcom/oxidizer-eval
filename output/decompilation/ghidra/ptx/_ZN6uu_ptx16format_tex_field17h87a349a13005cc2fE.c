void _ZN6uu_ptx16format_tex_field17h87a349a13005cc2fE(undefined4 *param_1,long param_2,long param_3)

{
  undefined auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h1d04b985ed732453E
            (auStack_38,param_2,param_3 + param_2);
                    /* try { // try from 002b7e3d to 002b7e4e has its CatchHandler @ 002b7e6e */
  _ZN5alloc3str17join_generic_copy17hf1ec32616ec83f17E(&local_20,local_30,local_28,1,0);
  *(undefined8 *)(param_1 + 4) = local_10;
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  param_1[3] = uStack_14;
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h72e47b9241f0c53dE
            (auStack_38);
  return;
}