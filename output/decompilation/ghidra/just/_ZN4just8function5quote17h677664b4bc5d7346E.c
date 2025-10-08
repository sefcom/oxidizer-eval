undefined8 *
_ZN4just8function5quote17h677664b4bc5d7346E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 extraout_RDX;
  undefined *local_80;
  code *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_28 [24];
  
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17h92467f512a8e89bbE(local_28,param_3,param_4);
  local_78 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_58 = &PTR_s___0052ffc0;
  local_50 = 2;
  local_38 = 0;
  local_48 = &local_80;
  local_40 = 1;
                    /* try { // try from 0036b87f to 0036b88f has its CatchHandler @ 0036b8be */
  local_80 = local_28;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E
            (&local_70,0,extraout_RDX,&local_58);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(local_28);
  param_1[3] = local_60;
  param_1[1] = local_70;
  param_1[2] = uStack_68;
  *param_1 = 0;
  return param_1;
}