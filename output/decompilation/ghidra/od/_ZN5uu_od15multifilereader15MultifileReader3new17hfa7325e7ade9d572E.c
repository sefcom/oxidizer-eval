void _ZN5uu_od15multifilereader15MultifileReader3new17hfa7325e7ade9d572E
               (undefined8 *param_1,undefined4 *param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined uStack_10;
  undefined7 uStack_f;
  
  local_28 = *(undefined8 *)(param_2 + 4);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  uStack_20 = 0;
  uStack_10 = 0;
                    /* try { // try from 00168ce6 to 00168ced has its CatchHandler @ 00168d0d */
  _ZN5uu_od15multifilereader15MultifileReader9next_file17h88105f385025e3a3E(&local_38);
  param_1[4] = local_18;
  param_1[5] = CONCAT71(uStack_f,uStack_10);
  param_1[2] = local_28;
  param_1[3] = uStack_20;
  *param_1 = CONCAT44(uStack_34,local_38);
  param_1[1] = CONCAT44(uStack_2c,uStack_30);
  return;
}