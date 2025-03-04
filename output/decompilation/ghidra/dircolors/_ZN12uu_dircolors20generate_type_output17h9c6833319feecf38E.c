undefined4 *
_ZN12uu_dircolors20generate_type_output17h9c6833319feecf38E(undefined4 *param_1,char *param_2)

{
  undefined auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  if (*param_2 == '\x02') {
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h36327dbd81d24b1dE
              (auStack_38,anon_84df56382e2e566cd8a063a5d0153d3b_97_llvm_4004663911042702431,
               anon_84df56382e2e566cd8a063a5d0153d3b_231_llvm_4004663911042702431);
                    /* try { // try from 001bbc3d to 001bbc53 has its CatchHandler @ 001bbcbc */
    _ZN5alloc3str17join_generic_copy17hc84b2afb154a6337E
              (&local_20,local_30,local_28,&DAT_0012333b,1);
  }
  else {
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h64863869581a35ccE
              (auStack_38,anon_84df56382e2e566cd8a063a5d0153d3b_97_llvm_4004663911042702431,
               anon_84df56382e2e566cd8a063a5d0153d3b_231_llvm_4004663911042702431);
                    /* try { // try from 001bbc76 to 001bbc8c has its CatchHandler @ 001bbcaf */
    _ZN5alloc3str17join_generic_copy17hc84b2afb154a6337E
              (&local_20,local_30,local_28,&DAT_0012333c,1);
  }
  *(undefined8 *)(param_1 + 4) = local_10;
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  param_1[3] = uStack_14;
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h344034719bce8318E
            (auStack_38);
  return param_1;
}