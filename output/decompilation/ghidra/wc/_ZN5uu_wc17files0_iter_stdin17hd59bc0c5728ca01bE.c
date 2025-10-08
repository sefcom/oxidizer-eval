void _ZN5uu_wc17files0_iter_stdin17hd59bc0c5728ca01bE(undefined8 param_1)

{
  undefined auVar1 [12];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  local_50 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001ffcc0)();
  auVar1 = (*(code *)PTR__ZN3std2io5stdio5Stdin4lock17h8b2bf765bae79e2fE_001ffce0)(&local_50);
                    /* try { // try from 00169506 to 0016951b has its CatchHandler @ 00169550 */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h805faec68bbcdbafE
            (&local_30,&DAT_0011a13e,1);
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  _ZN5uu_wc11files0_iter17h4a0f15fa04c8f31bE(param_1,auVar1._0_8_,auVar1._8_4_ & 1,&local_48);
  return;
}