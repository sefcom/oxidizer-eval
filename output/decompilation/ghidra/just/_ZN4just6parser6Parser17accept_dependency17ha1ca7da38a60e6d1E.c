void _ZN4just6parser6Parser17accept_dependency17ha1ca7da38a60e6d1E(undefined8 *param_1)

{
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  char local_218;
  undefined4 uStack_217;
  undefined3 uStack_213;
  undefined8 local_158;
  undefined8 uStack_150;
  
  _ZN4just6parser6Parser15accept_namepath17h8de08bec8d574b76E(&local_260);
  if (local_218 == '%') {
    local_158 = CONCAT44(uStack_25c,local_260);
    uStack_150 = CONCAT44(uStack_254,uStack_258);
    param_1[5] = local_250;
    param_1[3] = local_158;
    param_1[4] = uStack_150;
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    *(undefined *)(param_1 + 9) = 0x25;
  }
  else {
    *(uint *)((long)param_1 + 0x4c) = CONCAT31(uStack_213,uStack_217._3_1_);
    *(undefined4 *)((long)param_1 + 0x49) = uStack_217;
    param_1[8] = uStack_220;
    param_1[6] = uStack_230;
    param_1[7] = local_228;
    param_1[4] = uStack_240;
    param_1[5] = uStack_238;
    param_1[2] = local_250;
    param_1[3] = uStack_248;
    *param_1 = CONCAT44(uStack_25c,local_260);
    param_1[1] = CONCAT44(uStack_254,uStack_258);
    *(char *)(param_1 + 9) = local_218;
  }
  return;
}