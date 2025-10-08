void _ZN3bat7vscreen4join17h55e6457a6c5afd34E
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined local_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  uStack_30 = &DAT_007ced18;
  local_38 = param_3;
  local_28 = param_2;
  _ZN4core4iter6traits8iterator8Iterator7collect17h12a8e2223d4ec978E(local_20,&local_38);
                    /* try { // try from 005454b4 to 005454c2 has its CatchHandler @ 005454e3 */
  _ZN5alloc3str17join_generic_copy17he2689895b12556fdE(&local_38,local_18,local_10,&DAT_002a2fea);
  *(undefined8 *)(param_1 + 4) = local_28;
  *param_1 = (undefined4)local_38;
  param_1[1] = local_38._4_4_;
  param_1[2] = (undefined4)uStack_30;
  param_1[3] = uStack_30._4_4_;
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h2f78fa9eb600a3a5E
            (local_20);
  return;
}