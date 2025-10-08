void _ZN6uu_ptx16format_tex_field17h94516d53c8f62932E(undefined4 *param_1,long param_2,long param_3)

{
  undefined auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  _ZN4core4iter6traits8iterator8Iterator7collect17he549b7570ef2f163E
            (auStack_38,param_2,param_3 + param_2);
                    /* try { // try from 0022ce5d to 0022ce66 has its CatchHandler @ 0022ce86 */
  _ZN5alloc3str17join_generic_copy17h12a02187e9812c5fE(&local_20,local_30,local_28);
  *(undefined8 *)(param_1 + 4) = local_10;
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  param_1[3] = uStack_14;
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hed04cf8fb699cb96E
            (auStack_38);
  return;
}