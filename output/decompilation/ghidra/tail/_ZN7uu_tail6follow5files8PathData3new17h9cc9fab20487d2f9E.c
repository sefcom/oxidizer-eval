long _ZN7uu_tail6follow5files8PathData3new17h9cc9fab20487d2f9E
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
                    /* try { // try from 0020ee17 to 0020ee24 has its CatchHandler @ 0020ee6a */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h8732f121b58e7ba0E
            (&local_38,param_5,param_6);
  *(undefined8 *)(param_1 + 0xc0) = local_28;
  *(undefined4 *)(param_1 + 0xb0) = local_38;
  *(undefined4 *)(param_1 + 0xb4) = uStack_34;
  *(undefined4 *)(param_1 + 0xb8) = uStack_30;
  *(undefined4 *)(param_1 + 0xbc) = uStack_2c;
  *(undefined8 *)(param_1 + 200) = param_2;
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  (*(code *)PTR_memcpy_002c2760)(param_1,param_4,0xb0);
  return param_1;
}