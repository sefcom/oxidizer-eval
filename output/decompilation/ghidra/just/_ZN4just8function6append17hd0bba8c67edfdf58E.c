undefined8 *
_ZN4just8function6append17hd0bba8c67edfdf58E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined local_40 [40];
  undefined2 local_18;
  
  local_68 = param_3;
  local_60 = param_4;
  _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h46590bb9cc81fd74E
            (local_40,param_5,param_6);
  uStack_50 = 0;
  local_18 = 1;
  local_58 = &local_68;
  local_48 = param_6;
  _ZN4core4iter6traits8iterator8Iterator7collect17h9594c850819077c3E(local_80,&local_58);
                    /* try { // try from 003696df to 003696f5 has its CatchHandler @ 00369724 */
  _ZN5alloc3str17join_generic_copy17haa9e8db24d47c2b5E(&local_58,local_78,local_70,&DAT_0016e4f0,1);
  param_1[3] = local_48;
  *(undefined4 *)(param_1 + 1) = (undefined4)local_58;
  *(undefined4 *)((long)param_1 + 0xc) = local_58._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)uStack_50;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_50._4_4_;
  *param_1 = 0;
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h766f1f48926327acE
            (local_80);
  return param_1;
}