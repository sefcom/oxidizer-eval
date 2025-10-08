void _ZN21ruff_python_formatter8comments7visitor16collect_comments17h2ba573daa01cb1e8E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined **local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = (undefined *)&local_88;
  local_88 = 0;
  uStack_80 = 8;
  local_78 = 0;
  local_58 = param_5 + param_6 * 8;
  local_20 = &
             PTR__ZN4core3ptr81drop_in_place_LT_ruff_python_formatter__comments__visitor__CommentsVecBuilder_GT_17hd749d9160cff19bfE_0067d438
  ;
  local_40 = 0;
  local_38 = 8;
  local_30 = 0;
  local_50 = 0x5e;
  local_70[0] = 0;
                    /* try { // try from 00404a6c to 00404a78 has its CatchHandler @ 00404a92 */
  local_60 = param_5;
  local_18 = param_3;
  local_10 = param_4;
  _ZN21ruff_python_formatter8comments7visitor15CommentsVisitor5visit17h0f17c00820667551E
            (local_70,0,param_2);
  param_1[2] = local_78;
  *param_1 = local_88;
  param_1[1] = uStack_80;
  return;
}