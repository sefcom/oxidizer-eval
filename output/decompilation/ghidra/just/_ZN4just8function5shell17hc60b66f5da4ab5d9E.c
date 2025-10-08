undefined8 *
_ZN4just8function5shell17hc60b66f5da4ab5d9E
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          long param_5,long param_6)

{
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined local_50 [40];
  
  _ZN4core4iter6traits8iterator8Iterator5chain17hccda7ad47eb94d33E
            (local_50,param_3,param_4,param_5,param_5 + param_6 * 0x18);
  _ZN4core4iter6traits8iterator8Iterator7collect17h3b3c61c1de019a3bE(&local_98,local_50);
                    /* try { // try from 0036c222 to 0036c256 has its CatchHandler @ 0036c2a8 */
  _ZN4just9evaluator9Evaluator11run_command17h86d0b2f36f29e5c6E
            (&local_80,*param_2,param_3,param_4,local_90,local_88);
  param_1[3] = uStack_70;
  *(undefined4 *)(param_1 + 1) = local_80;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_7c;
  *(undefined4 *)(param_1 + 2) = uStack_78;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_74;
  *param_1 = 0;
  _ZN4core3ptr141drop_in_place_LT_alloc__vec__Vec_LT_similar__algorithms__utils__UniqueItem_LT_similar__algorithms__utils__OffsetLookup_LT_u32_GT__GT__GT__GT_17h4d36ad61a40c2c34E
            (local_98,local_90);
  return param_1;
}