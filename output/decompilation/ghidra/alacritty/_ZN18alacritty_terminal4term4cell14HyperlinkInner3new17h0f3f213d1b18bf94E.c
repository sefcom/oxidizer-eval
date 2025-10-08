void _ZN18alacritty_terminal4term4cell14HyperlinkInner3new17h0f3f213d1b18bf94E
               (undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_58 = *(undefined8 *)(param_2 + 4);
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
                    /* try { // try from 006bdac2 to 006bdace has its CatchHandler @ 006bdb16 */
  _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h3e95ff4ae1fc43daE
            (&local_28,&local_68);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h451460d2d1836db3E
            (CONCAT44(uStack_64,local_68),CONCAT44(uStack_5c,uStack_60));
  param_1[2] = local_18;
  *param_1 = local_28;
  param_1[1] = uStack_20;
  uVar1 = param_3[1];
  param_1[3] = *param_3;
  param_1[4] = uVar1;
  param_1[5] = param_3[2];
  return;
}