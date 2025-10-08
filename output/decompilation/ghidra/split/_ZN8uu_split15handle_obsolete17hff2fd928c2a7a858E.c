void _ZN8uu_split15handle_obsolete17hff2fd928c2a7a858E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined local_82;
  undefined local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined local_38 [40];
  
  local_80 = 0x8000000000000000;
  local_82 = 0;
  local_81 = 0;
  local_68 = &local_80;
  local_60 = &local_82;
  local_58 = &local_81;
  _ZN4core4iter6traits8iterator8Iterator10filter_map17hd1e9e24c004b15d2E
            (local_38,param_2,param_3,&local_68);
                    /* try { // try from 00160b53 to 00160b5f has its CatchHandler @ 00160b8b */
  _ZN4core4iter6traits8iterator8Iterator7collect17hf97293c3bdb54d6bE(&local_50,local_38);
  param_1[5] = local_70;
  param_1[3] = local_80;
  param_1[4] = uStack_78;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  param_1[2] = local_40;
  return;
}