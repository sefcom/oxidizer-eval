void _ZN3bat6config17get_args_from_str17hc7831eb106996c7fE
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  undefined8 local_58;
  long local_50;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined2 local_18;
  
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (local_48,10,param_2,param_3);
  local_58 = 0;
  local_18 = 1;
  local_50 = param_3;
  _ZN4core4iter6traits8iterator8Iterator7collect17h4f2dc3a600ddf0acE(&local_90,&local_58);
  local_68 = local_80;
  local_78 = local_90;
  uStack_74 = uStack_8c;
  uStack_70 = uStack_88;
  uStack_6c = uStack_84;
  local_50 = CONCAT44(uStack_84,uStack_88) + local_80 * 0x18;
  local_48[0] = 0;
  local_38 = 0;
                    /* try { // try from 004ad1ca to 004ad1d8 has its CatchHandler @ 004ad1ff */
  _ZN4core4iter6traits8iterator8Iterator7collect17h5cb71a7ae966d8ffE(&local_90,&local_58);
  *(long *)(param_1 + 4) = local_80;
  *param_1 = local_90;
  param_1[1] = uStack_8c;
  param_1[2] = uStack_88;
  param_1[3] = uStack_84;
  _ZN4core3ptr88drop_in_place_LT_alloc__vec__Vec_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT__GT_17h209fbe59fdaf2615E
            (&local_78);
  return;
}