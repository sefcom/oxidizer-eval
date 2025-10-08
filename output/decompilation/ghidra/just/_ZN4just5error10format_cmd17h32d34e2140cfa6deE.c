void _ZN4just5error10format_cmd17h32d34e2140cfa6deE(undefined4 *param_1)

{
  undefined auStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  _ZN4core4iter6traits8iterator8Iterator5chain17he0dcf1b9d0f040aaE(&local_30);
  _ZN4core4iter6traits8iterator8Iterator7collect17h757b84d929920df5E(auStack_48,&local_30);
                    /* try { // try from 00364bec to 00364c02 has its CatchHandler @ 00364c24 */
  _ZN5alloc3str17join_generic_copy17haa9e8db24d47c2b5E(&local_30,local_40,local_38,&DAT_0016e4f0,1);
  *(undefined8 *)(param_1 + 4) = local_20;
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h766f1f48926327acE
            (auStack_48);
  return;
}